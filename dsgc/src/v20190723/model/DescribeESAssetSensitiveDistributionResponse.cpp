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

#include <tencentcloud/dsgc/v20190723/model/DescribeESAssetSensitiveDistributionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DescribeESAssetSensitiveDistributionResponse::DescribeESAssetSensitiveDistributionResponse() :
    m_eSAssetHasBeenSet(false),
    m_topAssetHasBeenSet(false),
    m_eSDetailHasBeenSet(false)
{
}

CoreInternalOutcome DescribeESAssetSensitiveDistributionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ESAsset") && !rsp["ESAsset"].IsNull())
    {
        if (!rsp["ESAsset"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ESAsset` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eSAsset.Deserialize(rsp["ESAsset"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eSAssetHasBeenSet = true;
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

    if (rsp.HasMember("ESDetail") && !rsp["ESDetail"].IsNull())
    {
        if (!rsp["ESDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ESDetail` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ESDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ESAssetDBDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eSDetail.push_back(item);
        }
        m_eSDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeESAssetSensitiveDistributionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_eSAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ESAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eSAsset.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_eSDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ESDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eSDetail.begin(); itr != m_eSDetail.end(); ++itr, ++i)
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


ESAsset DescribeESAssetSensitiveDistributionResponse::GetESAsset() const
{
    return m_eSAsset;
}

bool DescribeESAssetSensitiveDistributionResponse::ESAssetHasBeenSet() const
{
    return m_eSAssetHasBeenSet;
}

vector<TopAsset> DescribeESAssetSensitiveDistributionResponse::GetTopAsset() const
{
    return m_topAsset;
}

bool DescribeESAssetSensitiveDistributionResponse::TopAssetHasBeenSet() const
{
    return m_topAssetHasBeenSet;
}

vector<ESAssetDBDetail> DescribeESAssetSensitiveDistributionResponse::GetESDetail() const
{
    return m_eSDetail;
}

bool DescribeESAssetSensitiveDistributionResponse::ESDetailHasBeenSet() const
{
    return m_eSDetailHasBeenSet;
}


