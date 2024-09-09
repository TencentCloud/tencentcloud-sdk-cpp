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

#include <tencentcloud/ess/v20201111/model/AuthRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

AuthRecord::AuthRecord() :
    m_operatorNameHasBeenSet(false),
    m_operatorMobileHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_auditStatusHasBeenSet(false)
{
}

CoreInternalOutcome AuthRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OperatorName") && !value["OperatorName"].IsNull())
    {
        if (!value["OperatorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthRecord.OperatorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorName = string(value["OperatorName"].GetString());
        m_operatorNameHasBeenSet = true;
    }

    if (value.HasMember("OperatorMobile") && !value["OperatorMobile"].IsNull())
    {
        if (!value["OperatorMobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthRecord.OperatorMobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorMobile = string(value["OperatorMobile"].GetString());
        m_operatorMobileHasBeenSet = true;
    }

    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthRecord.AuthType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authType = value["AuthType"].GetInt64();
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("AuditStatus") && !value["AuditStatus"].IsNull())
    {
        if (!value["AuditStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthRecord.AuditStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_auditStatus = value["AuditStatus"].GetInt64();
        m_auditStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuthRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_operatorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorName.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorMobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorMobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorMobile.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authType, allocator);
    }

    if (m_auditStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditStatus, allocator);
    }

}


string AuthRecord::GetOperatorName() const
{
    return m_operatorName;
}

void AuthRecord::SetOperatorName(const string& _operatorName)
{
    m_operatorName = _operatorName;
    m_operatorNameHasBeenSet = true;
}

bool AuthRecord::OperatorNameHasBeenSet() const
{
    return m_operatorNameHasBeenSet;
}

string AuthRecord::GetOperatorMobile() const
{
    return m_operatorMobile;
}

void AuthRecord::SetOperatorMobile(const string& _operatorMobile)
{
    m_operatorMobile = _operatorMobile;
    m_operatorMobileHasBeenSet = true;
}

bool AuthRecord::OperatorMobileHasBeenSet() const
{
    return m_operatorMobileHasBeenSet;
}

int64_t AuthRecord::GetAuthType() const
{
    return m_authType;
}

void AuthRecord::SetAuthType(const int64_t& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool AuthRecord::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

int64_t AuthRecord::GetAuditStatus() const
{
    return m_auditStatus;
}

void AuthRecord::SetAuditStatus(const int64_t& _auditStatus)
{
    m_auditStatus = _auditStatus;
    m_auditStatusHasBeenSet = true;
}

bool AuthRecord::AuditStatusHasBeenSet() const
{
    return m_auditStatusHasBeenSet;
}

