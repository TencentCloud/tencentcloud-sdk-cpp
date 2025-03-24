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

#include <tencentcloud/chc/v20230418/model/CommonServiceBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

CommonServiceBaseInfo::CommonServiceBaseInfo() :
    m_idcNameHasBeenSet(false),
    m_contactNameHasBeenSet(false),
    m_contactPhoneHasBeenSet(false),
    m_instructionsHasBeenSet(false),
    m_serviceLevelHasBeenSet(false),
    m_preAuthorizationHasBeenSet(false)
{
}

CoreInternalOutcome CommonServiceBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IdcName") && !value["IdcName"].IsNull())
    {
        if (!value["IdcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonServiceBaseInfo.IdcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idcName = string(value["IdcName"].GetString());
        m_idcNameHasBeenSet = true;
    }

    if (value.HasMember("ContactName") && !value["ContactName"].IsNull())
    {
        if (!value["ContactName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonServiceBaseInfo.ContactName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contactName = string(value["ContactName"].GetString());
        m_contactNameHasBeenSet = true;
    }

    if (value.HasMember("ContactPhone") && !value["ContactPhone"].IsNull())
    {
        if (!value["ContactPhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonServiceBaseInfo.ContactPhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contactPhone = string(value["ContactPhone"].GetString());
        m_contactPhoneHasBeenSet = true;
    }

    if (value.HasMember("Instructions") && !value["Instructions"].IsNull())
    {
        if (!value["Instructions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonServiceBaseInfo.Instructions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instructions = string(value["Instructions"].GetString());
        m_instructionsHasBeenSet = true;
    }

    if (value.HasMember("ServiceLevel") && !value["ServiceLevel"].IsNull())
    {
        if (!value["ServiceLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CommonServiceBaseInfo.ServiceLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceLevel = value["ServiceLevel"].GetUint64();
        m_serviceLevelHasBeenSet = true;
    }

    if (value.HasMember("PreAuthorization") && !value["PreAuthorization"].IsNull())
    {
        if (!value["PreAuthorization"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CommonServiceBaseInfo.PreAuthorization` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_preAuthorization = value["PreAuthorization"].GetBool();
        m_preAuthorizationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommonServiceBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idcName.c_str(), allocator).Move(), allocator);
    }

    if (m_contactNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contactName.c_str(), allocator).Move(), allocator);
    }

    if (m_contactPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactPhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contactPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_instructionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instructions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instructions.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceLevel, allocator);
    }

    if (m_preAuthorizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreAuthorization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_preAuthorization, allocator);
    }

}


string CommonServiceBaseInfo::GetIdcName() const
{
    return m_idcName;
}

void CommonServiceBaseInfo::SetIdcName(const string& _idcName)
{
    m_idcName = _idcName;
    m_idcNameHasBeenSet = true;
}

bool CommonServiceBaseInfo::IdcNameHasBeenSet() const
{
    return m_idcNameHasBeenSet;
}

string CommonServiceBaseInfo::GetContactName() const
{
    return m_contactName;
}

void CommonServiceBaseInfo::SetContactName(const string& _contactName)
{
    m_contactName = _contactName;
    m_contactNameHasBeenSet = true;
}

bool CommonServiceBaseInfo::ContactNameHasBeenSet() const
{
    return m_contactNameHasBeenSet;
}

string CommonServiceBaseInfo::GetContactPhone() const
{
    return m_contactPhone;
}

void CommonServiceBaseInfo::SetContactPhone(const string& _contactPhone)
{
    m_contactPhone = _contactPhone;
    m_contactPhoneHasBeenSet = true;
}

bool CommonServiceBaseInfo::ContactPhoneHasBeenSet() const
{
    return m_contactPhoneHasBeenSet;
}

string CommonServiceBaseInfo::GetInstructions() const
{
    return m_instructions;
}

void CommonServiceBaseInfo::SetInstructions(const string& _instructions)
{
    m_instructions = _instructions;
    m_instructionsHasBeenSet = true;
}

bool CommonServiceBaseInfo::InstructionsHasBeenSet() const
{
    return m_instructionsHasBeenSet;
}

uint64_t CommonServiceBaseInfo::GetServiceLevel() const
{
    return m_serviceLevel;
}

void CommonServiceBaseInfo::SetServiceLevel(const uint64_t& _serviceLevel)
{
    m_serviceLevel = _serviceLevel;
    m_serviceLevelHasBeenSet = true;
}

bool CommonServiceBaseInfo::ServiceLevelHasBeenSet() const
{
    return m_serviceLevelHasBeenSet;
}

bool CommonServiceBaseInfo::GetPreAuthorization() const
{
    return m_preAuthorization;
}

void CommonServiceBaseInfo::SetPreAuthorization(const bool& _preAuthorization)
{
    m_preAuthorization = _preAuthorization;
    m_preAuthorizationHasBeenSet = true;
}

bool CommonServiceBaseInfo::PreAuthorizationHasBeenSet() const
{
    return m_preAuthorizationHasBeenSet;
}

