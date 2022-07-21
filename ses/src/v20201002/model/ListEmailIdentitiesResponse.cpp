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

#include <tencentcloud/ses/v20201002/model/ListEmailIdentitiesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

ListEmailIdentitiesResponse::ListEmailIdentitiesResponse() :
    m_emailIdentitiesHasBeenSet(false),
    m_maxReputationLevelHasBeenSet(false),
    m_maxDailyQuotaHasBeenSet(false)
{
}

CoreInternalOutcome ListEmailIdentitiesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("EmailIdentities") && !rsp["EmailIdentities"].IsNull())
    {
        if (!rsp["EmailIdentities"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EmailIdentities` is not array type"));

        const rapidjson::Value &tmpValue = rsp["EmailIdentities"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EmailIdentity item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_emailIdentities.push_back(item);
        }
        m_emailIdentitiesHasBeenSet = true;
    }

    if (rsp.HasMember("MaxReputationLevel") && !rsp["MaxReputationLevel"].IsNull())
    {
        if (!rsp["MaxReputationLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxReputationLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxReputationLevel = rsp["MaxReputationLevel"].GetUint64();
        m_maxReputationLevelHasBeenSet = true;
    }

    if (rsp.HasMember("MaxDailyQuota") && !rsp["MaxDailyQuota"].IsNull())
    {
        if (!rsp["MaxDailyQuota"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxDailyQuota` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDailyQuota = rsp["MaxDailyQuota"].GetUint64();
        m_maxDailyQuotaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ListEmailIdentitiesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_emailIdentitiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmailIdentities";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_emailIdentities.begin(); itr != m_emailIdentities.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_maxReputationLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxReputationLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxReputationLevel, allocator);
    }

    if (m_maxDailyQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDailyQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDailyQuota, allocator);
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


vector<EmailIdentity> ListEmailIdentitiesResponse::GetEmailIdentities() const
{
    return m_emailIdentities;
}

bool ListEmailIdentitiesResponse::EmailIdentitiesHasBeenSet() const
{
    return m_emailIdentitiesHasBeenSet;
}

uint64_t ListEmailIdentitiesResponse::GetMaxReputationLevel() const
{
    return m_maxReputationLevel;
}

bool ListEmailIdentitiesResponse::MaxReputationLevelHasBeenSet() const
{
    return m_maxReputationLevelHasBeenSet;
}

uint64_t ListEmailIdentitiesResponse::GetMaxDailyQuota() const
{
    return m_maxDailyQuota;
}

bool ListEmailIdentitiesResponse::MaxDailyQuotaHasBeenSet() const
{
    return m_maxDailyQuotaHasBeenSet;
}


