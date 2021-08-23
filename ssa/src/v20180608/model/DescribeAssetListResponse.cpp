/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/ssa/v20180608/model/DescribeAssetListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

DescribeAssetListResponse::DescribeAssetListResponse() :
    m_assetListHasBeenSet(false),
    m_aggregationDataHasBeenSet(false),
    m_namespaceDataHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAssetListResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("AssetList") && !rsp["AssetList"].IsNull())
    {
        if (!rsp["AssetList"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssetList` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_assetList.Deserialize(rsp["AssetList"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_assetListHasBeenSet = true;
    }

    if (rsp.HasMember("AggregationData") && !rsp["AggregationData"].IsNull())
    {
        if (!rsp["AggregationData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AggregationData` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AggregationData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AggregationObj item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_aggregationData.push_back(item);
        }
        m_aggregationDataHasBeenSet = true;
    }

    if (rsp.HasMember("NamespaceData") && !rsp["NamespaceData"].IsNull())
    {
        if (!rsp["NamespaceData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NamespaceData` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NamespaceData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_namespaceData.push_back((*itr).GetString());
        }
        m_namespaceDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAssetListResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_assetListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_assetList.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aggregationDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AggregationData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aggregationData.begin(); itr != m_aggregationData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_namespaceDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_namespaceData.begin(); itr != m_namespaceData.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


AssetList DescribeAssetListResponse::GetAssetList() const
{
    return m_assetList;
}

bool DescribeAssetListResponse::AssetListHasBeenSet() const
{
    return m_assetListHasBeenSet;
}

vector<AggregationObj> DescribeAssetListResponse::GetAggregationData() const
{
    return m_aggregationData;
}

bool DescribeAssetListResponse::AggregationDataHasBeenSet() const
{
    return m_aggregationDataHasBeenSet;
}

vector<string> DescribeAssetListResponse::GetNamespaceData() const
{
    return m_namespaceData;
}

bool DescribeAssetListResponse::NamespaceDataHasBeenSet() const
{
    return m_namespaceDataHasBeenSet;
}


