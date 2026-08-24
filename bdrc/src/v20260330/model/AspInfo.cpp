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

#include <tencentcloud/bdrc/v20260330/model/AspInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

AspInfo::AspInfo() :
    m_aspIdHasBeenSet(false),
    m_aspNameHasBeenSet(false),
    m_aspStateHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_isActivatedHasBeenSet(false),
    m_isPermanentHasBeenSet(false),
    m_retentionDaysHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome AspInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AspId") && !value["AspId"].IsNull())
    {
        if (!value["AspId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AspInfo.AspId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aspId = string(value["AspId"].GetString());
        m_aspIdHasBeenSet = true;
    }

    if (value.HasMember("AspName") && !value["AspName"].IsNull())
    {
        if (!value["AspName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AspInfo.AspName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aspName = string(value["AspName"].GetString());
        m_aspNameHasBeenSet = true;
    }

    if (value.HasMember("AspState") && !value["AspState"].IsNull())
    {
        if (!value["AspState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AspInfo.AspState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aspState = string(value["AspState"].GetString());
        m_aspStateHasBeenSet = true;
    }

    if (value.HasMember("Policy") && !value["Policy"].IsNull())
    {
        if (!value["Policy"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AspInfo.Policy` is not array type"));

        const rapidjson::Value &tmpValue = value["Policy"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Policy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_policy.push_back(item);
        }
        m_policyHasBeenSet = true;
    }

    if (value.HasMember("IsActivated") && !value["IsActivated"].IsNull())
    {
        if (!value["IsActivated"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AspInfo.IsActivated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isActivated = value["IsActivated"].GetBool();
        m_isActivatedHasBeenSet = true;
    }

    if (value.HasMember("IsPermanent") && !value["IsPermanent"].IsNull())
    {
        if (!value["IsPermanent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AspInfo.IsPermanent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPermanent = value["IsPermanent"].GetBool();
        m_isPermanentHasBeenSet = true;
    }

    if (value.HasMember("RetentionDays") && !value["RetentionDays"].IsNull())
    {
        if (!value["RetentionDays"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AspInfo.RetentionDays` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retentionDays = value["RetentionDays"].GetUint64();
        m_retentionDaysHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AspInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AspInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aspIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AspId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aspId.c_str(), allocator).Move(), allocator);
    }

    if (m_aspNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AspName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aspName.c_str(), allocator).Move(), allocator);
    }

    if (m_aspStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AspState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aspState.c_str(), allocator).Move(), allocator);
    }

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_policy.begin(); itr != m_policy.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isActivatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsActivated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isActivated, allocator);
    }

    if (m_isPermanentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPermanent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPermanent, allocator);
    }

    if (m_retentionDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retentionDays, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string AspInfo::GetAspId() const
{
    return m_aspId;
}

void AspInfo::SetAspId(const string& _aspId)
{
    m_aspId = _aspId;
    m_aspIdHasBeenSet = true;
}

bool AspInfo::AspIdHasBeenSet() const
{
    return m_aspIdHasBeenSet;
}

string AspInfo::GetAspName() const
{
    return m_aspName;
}

void AspInfo::SetAspName(const string& _aspName)
{
    m_aspName = _aspName;
    m_aspNameHasBeenSet = true;
}

bool AspInfo::AspNameHasBeenSet() const
{
    return m_aspNameHasBeenSet;
}

string AspInfo::GetAspState() const
{
    return m_aspState;
}

void AspInfo::SetAspState(const string& _aspState)
{
    m_aspState = _aspState;
    m_aspStateHasBeenSet = true;
}

bool AspInfo::AspStateHasBeenSet() const
{
    return m_aspStateHasBeenSet;
}

vector<Policy> AspInfo::GetPolicy() const
{
    return m_policy;
}

void AspInfo::SetPolicy(const vector<Policy>& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool AspInfo::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

bool AspInfo::GetIsActivated() const
{
    return m_isActivated;
}

void AspInfo::SetIsActivated(const bool& _isActivated)
{
    m_isActivated = _isActivated;
    m_isActivatedHasBeenSet = true;
}

bool AspInfo::IsActivatedHasBeenSet() const
{
    return m_isActivatedHasBeenSet;
}

bool AspInfo::GetIsPermanent() const
{
    return m_isPermanent;
}

void AspInfo::SetIsPermanent(const bool& _isPermanent)
{
    m_isPermanent = _isPermanent;
    m_isPermanentHasBeenSet = true;
}

bool AspInfo::IsPermanentHasBeenSet() const
{
    return m_isPermanentHasBeenSet;
}

uint64_t AspInfo::GetRetentionDays() const
{
    return m_retentionDays;
}

void AspInfo::SetRetentionDays(const uint64_t& _retentionDays)
{
    m_retentionDays = _retentionDays;
    m_retentionDaysHasBeenSet = true;
}

bool AspInfo::RetentionDaysHasBeenSet() const
{
    return m_retentionDaysHasBeenSet;
}

string AspInfo::GetCreateTime() const
{
    return m_createTime;
}

void AspInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AspInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

