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

#include <tencentcloud/ccc/v20200210/model/ActiveCarrierPrivilegeNumber.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

ActiveCarrierPrivilegeNumber::ActiveCarrierPrivilegeNumber() :
    m_sdkAppIdHasBeenSet(false),
    m_callerHasBeenSet(false),
    m_calleeHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome ActiveCarrierPrivilegeNumber::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SdkAppId") && !value["SdkAppId"].IsNull())
    {
        if (!value["SdkAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ActiveCarrierPrivilegeNumber.SdkAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sdkAppId = value["SdkAppId"].GetUint64();
        m_sdkAppIdHasBeenSet = true;
    }

    if (value.HasMember("Caller") && !value["Caller"].IsNull())
    {
        if (!value["Caller"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActiveCarrierPrivilegeNumber.Caller` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_caller = string(value["Caller"].GetString());
        m_callerHasBeenSet = true;
    }

    if (value.HasMember("Callee") && !value["Callee"].IsNull())
    {
        if (!value["Callee"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActiveCarrierPrivilegeNumber.Callee` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callee = string(value["Callee"].GetString());
        m_calleeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActiveCarrierPrivilegeNumber.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ActiveCarrierPrivilegeNumber::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_callerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Caller";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_caller.c_str(), allocator).Move(), allocator);
    }

    if (m_calleeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callee.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

}


uint64_t ActiveCarrierPrivilegeNumber::GetSdkAppId() const
{
    return m_sdkAppId;
}

void ActiveCarrierPrivilegeNumber::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool ActiveCarrierPrivilegeNumber::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string ActiveCarrierPrivilegeNumber::GetCaller() const
{
    return m_caller;
}

void ActiveCarrierPrivilegeNumber::SetCaller(const string& _caller)
{
    m_caller = _caller;
    m_callerHasBeenSet = true;
}

bool ActiveCarrierPrivilegeNumber::CallerHasBeenSet() const
{
    return m_callerHasBeenSet;
}

string ActiveCarrierPrivilegeNumber::GetCallee() const
{
    return m_callee;
}

void ActiveCarrierPrivilegeNumber::SetCallee(const string& _callee)
{
    m_callee = _callee;
    m_calleeHasBeenSet = true;
}

bool ActiveCarrierPrivilegeNumber::CalleeHasBeenSet() const
{
    return m_calleeHasBeenSet;
}

int64_t ActiveCarrierPrivilegeNumber::GetCreateTime() const
{
    return m_createTime;
}

void ActiveCarrierPrivilegeNumber::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ActiveCarrierPrivilegeNumber::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

