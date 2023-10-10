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

#include <tencentcloud/waf/v20180125/model/ReqUserRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ReqUserRule::ReqUserRule() :
    m_idHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CoreInternalOutcome ReqUserRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReqUserRule.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReqUserRule.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReqUserRule.Reason` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reason = value["Reason"].GetInt64();
        m_reasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReqUserRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reason, allocator);
    }

}


string ReqUserRule::GetId() const
{
    return m_id;
}

void ReqUserRule::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ReqUserRule::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t ReqUserRule::GetStatus() const
{
    return m_status;
}

void ReqUserRule::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ReqUserRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t ReqUserRule::GetReason() const
{
    return m_reason;
}

void ReqUserRule::SetReason(const int64_t& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool ReqUserRule::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

