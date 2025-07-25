/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/dsgc/v20190723/model/DescribeRDBAssetSensitiveDistributionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DescribeRDBAssetSensitiveDistributionResponse::DescribeRDBAssetSensitiveDistributionResponse() :
    m_rDBAssetHasBeenSet(false),
    m_topAssetHasBeenSet(false),
    m_rDBDetailHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRDBAssetSensitiveDistributionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RDBAsset") && !rsp["RDBAsset"].IsNull())
    {
        if (!rsp["RDBAsset"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RDBAsset` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rDBAsset.Deserialize(rsp["RDBAsset"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rDBAssetHasBeenSet = true;
    }

    if (rsp.HasMember("TopAsset") && !rsp["TopAsset"].IsNull())
    {
        if (!rsp["TopAsset"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopAsset` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TopAsset"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TopAsset item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_topAsset.push_back(item);
        }
        m_topAssetHasBeenSet = true;
    }

    if (rsp.HasMember("RDBDetail") && !rsp["RDBDetail"].IsNull())
    {
        if (!rsp["RDBDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RDBDetail` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RDBDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetDBDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rDBDetail.push_back(item);
        }
        m_rDBDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRDBAssetSensitiveDistributionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_rDBAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RDBAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rDBAsset.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_topAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topAsset.begin(); itr != m_topAsset.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rDBDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RDBDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rDBDetail.begin(); itr != m_rDBDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
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


RDBAsset DescribeRDBAssetSensitiveDistributionResponse::GetRDBAsset() const
{
    return m_rDBAsset;
}

bool DescribeRDBAssetSensitiveDistributionResponse::RDBAssetHasBeenSet() const
{
    return m_rDBAssetHasBeenSet;
}

vector<TopAsset> DescribeRDBAssetSensitiveDistributionResponse::GetTopAsset() const
{
    return m_topAsset;
}

bool DescribeRDBAssetSensitiveDistributionResponse::TopAssetHasBeenSet() const
{
    return m_topAssetHasBeenSet;
}

vector<AssetDBDetail> DescribeRDBAssetSensitiveDistributionResponse::GetRDBDetail() const
{
    return m_rDBDetail;
}

bool DescribeRDBAssetSensitiveDistributionResponse::RDBDetailHasBeenSet() const
{
    return m_rDBDetailHasBeenSet;
}


