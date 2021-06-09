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
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("AssetList") && !rsp["AssetList"].IsNull())
    {
        if (!rsp["AssetList"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AssetList` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `AggregationData` is not array type"));

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
            return CoreInternalOutcome(Error("response `NamespaceData` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NamespaceData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_namespaceData.push_back((*itr).GetString());
        }
        m_namespaceDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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


