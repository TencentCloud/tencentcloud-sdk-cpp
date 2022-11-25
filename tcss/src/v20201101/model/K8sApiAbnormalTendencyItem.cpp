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

#include <tencentcloud/tcss/v20201101/model/K8sApiAbnormalTendencyItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

K8sApiAbnormalTendencyItem::K8sApiAbnormalTendencyItem() :
    m_dateHasBeenSet(false),
    m_exceptionUARequestCountHasBeenSet(false),
    m_anonymousUserRightCountHasBeenSet(false),
    m_credentialInformationObtainCountHasBeenSet(false),
    m_sensitiveDataMountCountHasBeenSet(false),
    m_cmdExecCountHasBeenSet(false),
    m_abnormalScheduledTaskCountHasBeenSet(false),
    m_staticsPodCreateCountHasBeenSet(false),
    m_doubtfulContainerCreateCountHasBeenSet(false),
    m_userDefinedRuleCountHasBeenSet(false),
    m_anonymousAccessCountHasBeenSet(false),
    m_privilegeContainerCountHasBeenSet(false)
{
}

CoreInternalOutcome K8sApiAbnormalTendencyItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalTendencyItem.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("ExceptionUARequestCount") && !value["ExceptionUARequestCount"].IsNull())
    {
        if (!value["ExceptionUARequestCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalTendencyItem.ExceptionUARequestCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_exceptionUARequestCount = value["ExceptionUARequestCount"].GetUint64();
        m_exceptionUARequestCountHasBeenSet = true;
    }

    if (value.HasMember("AnonymousUserRightCount") && !value["AnonymousUserRightCount"].IsNull())
    {
        if (!value["AnonymousUserRightCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalTendencyItem.AnonymousUserRightCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_anonymousUserRightCount = value["AnonymousUserRightCount"].GetUint64();
        m_anonymousUserRightCountHasBeenSet = true;
    }

    if (value.HasMember("CredentialInformationObtainCount") && !value["CredentialInformationObtainCount"].IsNull())
    {
        if (!value["CredentialInformationObtainCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalTendencyItem.CredentialInformationObtainCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_credentialInformationObtainCount = value["CredentialInformationObtainCount"].GetUint64();
        m_credentialInformationObtainCountHasBeenSet = true;
    }

    if (value.HasMember("SensitiveDataMountCount") && !value["SensitiveDataMountCount"].IsNull())
    {
        if (!value["SensitiveDataMountCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalTendencyItem.SensitiveDataMountCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveDataMountCount = value["SensitiveDataMountCount"].GetUint64();
        m_sensitiveDataMountCountHasBeenSet = true;
    }

    if (value.HasMember("CmdExecCount") && !value["CmdExecCount"].IsNull())
    {
        if (!value["CmdExecCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalTendencyItem.CmdExecCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cmdExecCount = value["CmdExecCount"].GetUint64();
        m_cmdExecCountHasBeenSet = true;
    }

    if (value.HasMember("AbnormalScheduledTaskCount") && !value["AbnormalScheduledTaskCount"].IsNull())
    {
        if (!value["AbnormalScheduledTaskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalTendencyItem.AbnormalScheduledTaskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_abnormalScheduledTaskCount = value["AbnormalScheduledTaskCount"].GetUint64();
        m_abnormalScheduledTaskCountHasBeenSet = true;
    }

    if (value.HasMember("StaticsPodCreateCount") && !value["StaticsPodCreateCount"].IsNull())
    {
        if (!value["StaticsPodCreateCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalTendencyItem.StaticsPodCreateCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_staticsPodCreateCount = value["StaticsPodCreateCount"].GetUint64();
        m_staticsPodCreateCountHasBeenSet = true;
    }

    if (value.HasMember("DoubtfulContainerCreateCount") && !value["DoubtfulContainerCreateCount"].IsNull())
    {
        if (!value["DoubtfulContainerCreateCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalTendencyItem.DoubtfulContainerCreateCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_doubtfulContainerCreateCount = value["DoubtfulContainerCreateCount"].GetUint64();
        m_doubtfulContainerCreateCountHasBeenSet = true;
    }

    if (value.HasMember("UserDefinedRuleCount") && !value["UserDefinedRuleCount"].IsNull())
    {
        if (!value["UserDefinedRuleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalTendencyItem.UserDefinedRuleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userDefinedRuleCount = value["UserDefinedRuleCount"].GetUint64();
        m_userDefinedRuleCountHasBeenSet = true;
    }

    if (value.HasMember("AnonymousAccessCount") && !value["AnonymousAccessCount"].IsNull())
    {
        if (!value["AnonymousAccessCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalTendencyItem.AnonymousAccessCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_anonymousAccessCount = value["AnonymousAccessCount"].GetUint64();
        m_anonymousAccessCountHasBeenSet = true;
    }

    if (value.HasMember("PrivilegeContainerCount") && !value["PrivilegeContainerCount"].IsNull())
    {
        if (!value["PrivilegeContainerCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `K8sApiAbnormalTendencyItem.PrivilegeContainerCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_privilegeContainerCount = value["PrivilegeContainerCount"].GetUint64();
        m_privilegeContainerCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void K8sApiAbnormalTendencyItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_exceptionUARequestCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceptionUARequestCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exceptionUARequestCount, allocator);
    }

    if (m_anonymousUserRightCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnonymousUserRightCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_anonymousUserRightCount, allocator);
    }

    if (m_credentialInformationObtainCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialInformationObtainCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_credentialInformationObtainCount, allocator);
    }

    if (m_sensitiveDataMountCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveDataMountCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveDataMountCount, allocator);
    }

    if (m_cmdExecCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdExecCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cmdExecCount, allocator);
    }

    if (m_abnormalScheduledTaskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbnormalScheduledTaskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_abnormalScheduledTaskCount, allocator);
    }

    if (m_staticsPodCreateCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaticsPodCreateCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_staticsPodCreateCount, allocator);
    }

    if (m_doubtfulContainerCreateCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DoubtfulContainerCreateCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_doubtfulContainerCreateCount, allocator);
    }

    if (m_userDefinedRuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDefinedRuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userDefinedRuleCount, allocator);
    }

    if (m_anonymousAccessCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnonymousAccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_anonymousAccessCount, allocator);
    }

    if (m_privilegeContainerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivilegeContainerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_privilegeContainerCount, allocator);
    }

}


string K8sApiAbnormalTendencyItem::GetDate() const
{
    return m_date;
}

void K8sApiAbnormalTendencyItem::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool K8sApiAbnormalTendencyItem::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

uint64_t K8sApiAbnormalTendencyItem::GetExceptionUARequestCount() const
{
    return m_exceptionUARequestCount;
}

void K8sApiAbnormalTendencyItem::SetExceptionUARequestCount(const uint64_t& _exceptionUARequestCount)
{
    m_exceptionUARequestCount = _exceptionUARequestCount;
    m_exceptionUARequestCountHasBeenSet = true;
}

bool K8sApiAbnormalTendencyItem::ExceptionUARequestCountHasBeenSet() const
{
    return m_exceptionUARequestCountHasBeenSet;
}

uint64_t K8sApiAbnormalTendencyItem::GetAnonymousUserRightCount() const
{
    return m_anonymousUserRightCount;
}

void K8sApiAbnormalTendencyItem::SetAnonymousUserRightCount(const uint64_t& _anonymousUserRightCount)
{
    m_anonymousUserRightCount = _anonymousUserRightCount;
    m_anonymousUserRightCountHasBeenSet = true;
}

bool K8sApiAbnormalTendencyItem::AnonymousUserRightCountHasBeenSet() const
{
    return m_anonymousUserRightCountHasBeenSet;
}

uint64_t K8sApiAbnormalTendencyItem::GetCredentialInformationObtainCount() const
{
    return m_credentialInformationObtainCount;
}

void K8sApiAbnormalTendencyItem::SetCredentialInformationObtainCount(const uint64_t& _credentialInformationObtainCount)
{
    m_credentialInformationObtainCount = _credentialInformationObtainCount;
    m_credentialInformationObtainCountHasBeenSet = true;
}

bool K8sApiAbnormalTendencyItem::CredentialInformationObtainCountHasBeenSet() const
{
    return m_credentialInformationObtainCountHasBeenSet;
}

uint64_t K8sApiAbnormalTendencyItem::GetSensitiveDataMountCount() const
{
    return m_sensitiveDataMountCount;
}

void K8sApiAbnormalTendencyItem::SetSensitiveDataMountCount(const uint64_t& _sensitiveDataMountCount)
{
    m_sensitiveDataMountCount = _sensitiveDataMountCount;
    m_sensitiveDataMountCountHasBeenSet = true;
}

bool K8sApiAbnormalTendencyItem::SensitiveDataMountCountHasBeenSet() const
{
    return m_sensitiveDataMountCountHasBeenSet;
}

uint64_t K8sApiAbnormalTendencyItem::GetCmdExecCount() const
{
    return m_cmdExecCount;
}

void K8sApiAbnormalTendencyItem::SetCmdExecCount(const uint64_t& _cmdExecCount)
{
    m_cmdExecCount = _cmdExecCount;
    m_cmdExecCountHasBeenSet = true;
}

bool K8sApiAbnormalTendencyItem::CmdExecCountHasBeenSet() const
{
    return m_cmdExecCountHasBeenSet;
}

uint64_t K8sApiAbnormalTendencyItem::GetAbnormalScheduledTaskCount() const
{
    return m_abnormalScheduledTaskCount;
}

void K8sApiAbnormalTendencyItem::SetAbnormalScheduledTaskCount(const uint64_t& _abnormalScheduledTaskCount)
{
    m_abnormalScheduledTaskCount = _abnormalScheduledTaskCount;
    m_abnormalScheduledTaskCountHasBeenSet = true;
}

bool K8sApiAbnormalTendencyItem::AbnormalScheduledTaskCountHasBeenSet() const
{
    return m_abnormalScheduledTaskCountHasBeenSet;
}

uint64_t K8sApiAbnormalTendencyItem::GetStaticsPodCreateCount() const
{
    return m_staticsPodCreateCount;
}

void K8sApiAbnormalTendencyItem::SetStaticsPodCreateCount(const uint64_t& _staticsPodCreateCount)
{
    m_staticsPodCreateCount = _staticsPodCreateCount;
    m_staticsPodCreateCountHasBeenSet = true;
}

bool K8sApiAbnormalTendencyItem::StaticsPodCreateCountHasBeenSet() const
{
    return m_staticsPodCreateCountHasBeenSet;
}

uint64_t K8sApiAbnormalTendencyItem::GetDoubtfulContainerCreateCount() const
{
    return m_doubtfulContainerCreateCount;
}

void K8sApiAbnormalTendencyItem::SetDoubtfulContainerCreateCount(const uint64_t& _doubtfulContainerCreateCount)
{
    m_doubtfulContainerCreateCount = _doubtfulContainerCreateCount;
    m_doubtfulContainerCreateCountHasBeenSet = true;
}

bool K8sApiAbnormalTendencyItem::DoubtfulContainerCreateCountHasBeenSet() const
{
    return m_doubtfulContainerCreateCountHasBeenSet;
}

uint64_t K8sApiAbnormalTendencyItem::GetUserDefinedRuleCount() const
{
    return m_userDefinedRuleCount;
}

void K8sApiAbnormalTendencyItem::SetUserDefinedRuleCount(const uint64_t& _userDefinedRuleCount)
{
    m_userDefinedRuleCount = _userDefinedRuleCount;
    m_userDefinedRuleCountHasBeenSet = true;
}

bool K8sApiAbnormalTendencyItem::UserDefinedRuleCountHasBeenSet() const
{
    return m_userDefinedRuleCountHasBeenSet;
}

uint64_t K8sApiAbnormalTendencyItem::GetAnonymousAccessCount() const
{
    return m_anonymousAccessCount;
}

void K8sApiAbnormalTendencyItem::SetAnonymousAccessCount(const uint64_t& _anonymousAccessCount)
{
    m_anonymousAccessCount = _anonymousAccessCount;
    m_anonymousAccessCountHasBeenSet = true;
}

bool K8sApiAbnormalTendencyItem::AnonymousAccessCountHasBeenSet() const
{
    return m_anonymousAccessCountHasBeenSet;
}

uint64_t K8sApiAbnormalTendencyItem::GetPrivilegeContainerCount() const
{
    return m_privilegeContainerCount;
}

void K8sApiAbnormalTendencyItem::SetPrivilegeContainerCount(const uint64_t& _privilegeContainerCount)
{
    m_privilegeContainerCount = _privilegeContainerCount;
    m_privilegeContainerCountHasBeenSet = true;
}

bool K8sApiAbnormalTendencyItem::PrivilegeContainerCountHasBeenSet() const
{
    return m_privilegeContainerCountHasBeenSet;
}

