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

#include <tencentcloud/ccc/v20200210/model/CarrierPrivilegeNumberApplicant.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

CarrierPrivilegeNumberApplicant::CarrierPrivilegeNumberApplicant() :
    m_sdkAppIdHasBeenSet(false),
    m_applicantIdHasBeenSet(false),
    m_callersHasBeenSet(false),
    m_calleesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome CarrierPrivilegeNumberApplicant::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SdkAppId") && !value["SdkAppId"].IsNull())
    {
        if (!value["SdkAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CarrierPrivilegeNumberApplicant.SdkAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sdkAppId = value["SdkAppId"].GetUint64();
        m_sdkAppIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicantId") && !value["ApplicantId"].IsNull())
    {
        if (!value["ApplicantId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CarrierPrivilegeNumberApplicant.ApplicantId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_applicantId = value["ApplicantId"].GetUint64();
        m_applicantIdHasBeenSet = true;
    }

    if (value.HasMember("Callers") && !value["Callers"].IsNull())
    {
        if (!value["Callers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CarrierPrivilegeNumberApplicant.Callers` is not array type"));

        const rapidjson::Value &tmpValue = value["Callers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_callers.push_back((*itr).GetString());
        }
        m_callersHasBeenSet = true;
    }

    if (value.HasMember("Callees") && !value["Callees"].IsNull())
    {
        if (!value["Callees"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CarrierPrivilegeNumberApplicant.Callees` is not array type"));

        const rapidjson::Value &tmpValue = value["Callees"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_callees.push_back((*itr).GetString());
        }
        m_calleesHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CarrierPrivilegeNumberApplicant.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CarrierPrivilegeNumberApplicant.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CarrierPrivilegeNumberApplicant.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CarrierPrivilegeNumberApplicant.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CarrierPrivilegeNumberApplicant::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_applicantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applicantId, allocator);
    }

    if (m_callersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_callers.begin(); itr != m_callers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_calleesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callees";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_callees.begin(); itr != m_callees.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


uint64_t CarrierPrivilegeNumberApplicant::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CarrierPrivilegeNumberApplicant::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CarrierPrivilegeNumberApplicant::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

uint64_t CarrierPrivilegeNumberApplicant::GetApplicantId() const
{
    return m_applicantId;
}

void CarrierPrivilegeNumberApplicant::SetApplicantId(const uint64_t& _applicantId)
{
    m_applicantId = _applicantId;
    m_applicantIdHasBeenSet = true;
}

bool CarrierPrivilegeNumberApplicant::ApplicantIdHasBeenSet() const
{
    return m_applicantIdHasBeenSet;
}

vector<string> CarrierPrivilegeNumberApplicant::GetCallers() const
{
    return m_callers;
}

void CarrierPrivilegeNumberApplicant::SetCallers(const vector<string>& _callers)
{
    m_callers = _callers;
    m_callersHasBeenSet = true;
}

bool CarrierPrivilegeNumberApplicant::CallersHasBeenSet() const
{
    return m_callersHasBeenSet;
}

vector<string> CarrierPrivilegeNumberApplicant::GetCallees() const
{
    return m_callees;
}

void CarrierPrivilegeNumberApplicant::SetCallees(const vector<string>& _callees)
{
    m_callees = _callees;
    m_calleesHasBeenSet = true;
}

bool CarrierPrivilegeNumberApplicant::CalleesHasBeenSet() const
{
    return m_calleesHasBeenSet;
}

string CarrierPrivilegeNumberApplicant::GetDescription() const
{
    return m_description;
}

void CarrierPrivilegeNumberApplicant::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CarrierPrivilegeNumberApplicant::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t CarrierPrivilegeNumberApplicant::GetState() const
{
    return m_state;
}

void CarrierPrivilegeNumberApplicant::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool CarrierPrivilegeNumberApplicant::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

int64_t CarrierPrivilegeNumberApplicant::GetCreateTime() const
{
    return m_createTime;
}

void CarrierPrivilegeNumberApplicant::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CarrierPrivilegeNumberApplicant::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t CarrierPrivilegeNumberApplicant::GetUpdateTime() const
{
    return m_updateTime;
}

void CarrierPrivilegeNumberApplicant::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CarrierPrivilegeNumberApplicant::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

