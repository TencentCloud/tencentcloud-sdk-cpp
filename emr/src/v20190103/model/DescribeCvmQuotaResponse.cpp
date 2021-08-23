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

#include <tencentcloud/emr/v20190103/model/DescribeCvmQuotaResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeCvmQuotaResponse::DescribeCvmQuotaResponse() :
    m_postPaidQuotaSetHasBeenSet(false),
    m_spotPaidQuotaSetHasBeenSet(false),
    m_eksQuotaSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCvmQuotaResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PostPaidQuotaSet") && !rsp["PostPaidQuotaSet"].IsNull())
    {
        if (!rsp["PostPaidQuotaSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PostPaidQuotaSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PostPaidQuotaSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QuotaEntity item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_postPaidQuotaSet.push_back(item);
        }
        m_postPaidQuotaSetHasBeenSet = true;
    }

    if (rsp.HasMember("SpotPaidQuotaSet") && !rsp["SpotPaidQuotaSet"].IsNull())
    {
        if (!rsp["SpotPaidQuotaSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SpotPaidQuotaSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SpotPaidQuotaSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QuotaEntity item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_spotPaidQuotaSet.push_back(item);
        }
        m_spotPaidQuotaSetHasBeenSet = true;
    }

    if (rsp.HasMember("EksQuotaSet") && !rsp["EksQuotaSet"].IsNull())
    {
        if (!rsp["EksQuotaSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EksQuotaSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["EksQuotaSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PodSaleSpec item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eksQuotaSet.push_back(item);
        }
        m_eksQuotaSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCvmQuotaResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_postPaidQuotaSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostPaidQuotaSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_postPaidQuotaSet.begin(); itr != m_postPaidQuotaSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_spotPaidQuotaSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpotPaidQuotaSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_spotPaidQuotaSet.begin(); itr != m_spotPaidQuotaSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_eksQuotaSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EksQuotaSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eksQuotaSet.begin(); itr != m_eksQuotaSet.end(); ++itr, ++i)
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


vector<QuotaEntity> DescribeCvmQuotaResponse::GetPostPaidQuotaSet() const
{
    return m_postPaidQuotaSet;
}

bool DescribeCvmQuotaResponse::PostPaidQuotaSetHasBeenSet() const
{
    return m_postPaidQuotaSetHasBeenSet;
}

vector<QuotaEntity> DescribeCvmQuotaResponse::GetSpotPaidQuotaSet() const
{
    return m_spotPaidQuotaSet;
}

bool DescribeCvmQuotaResponse::SpotPaidQuotaSetHasBeenSet() const
{
    return m_spotPaidQuotaSetHasBeenSet;
}

vector<PodSaleSpec> DescribeCvmQuotaResponse::GetEksQuotaSet() const
{
    return m_eksQuotaSet;
}

bool DescribeCvmQuotaResponse::EksQuotaSetHasBeenSet() const
{
    return m_eksQuotaSetHasBeenSet;
}


