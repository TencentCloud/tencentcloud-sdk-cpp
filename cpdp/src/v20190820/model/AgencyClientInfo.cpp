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

#include <tencentcloud/cpdp/v20190820/model/AgencyClientInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

AgencyClientInfo::AgencyClientInfo() :
    m_agencyClientNameHasBeenSet(false),
    m_agencyClientGlobalTypeHasBeenSet(false),
    m_agencyClientGlobalIdHasBeenSet(false),
    m_agencyClientMobileHasBeenSet(false)
{
}

CoreInternalOutcome AgencyClientInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AgencyClientName") && !value["AgencyClientName"].IsNull())
    {
        if (!value["AgencyClientName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgencyClientInfo.AgencyClientName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agencyClientName = string(value["AgencyClientName"].GetString());
        m_agencyClientNameHasBeenSet = true;
    }

    if (value.HasMember("AgencyClientGlobalType") && !value["AgencyClientGlobalType"].IsNull())
    {
        if (!value["AgencyClientGlobalType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgencyClientInfo.AgencyClientGlobalType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agencyClientGlobalType = string(value["AgencyClientGlobalType"].GetString());
        m_agencyClientGlobalTypeHasBeenSet = true;
    }

    if (value.HasMember("AgencyClientGlobalId") && !value["AgencyClientGlobalId"].IsNull())
    {
        if (!value["AgencyClientGlobalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgencyClientInfo.AgencyClientGlobalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agencyClientGlobalId = string(value["AgencyClientGlobalId"].GetString());
        m_agencyClientGlobalIdHasBeenSet = true;
    }

    if (value.HasMember("AgencyClientMobile") && !value["AgencyClientMobile"].IsNull())
    {
        if (!value["AgencyClientMobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgencyClientInfo.AgencyClientMobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agencyClientMobile = string(value["AgencyClientMobile"].GetString());
        m_agencyClientMobileHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgencyClientInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_agencyClientNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgencyClientName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agencyClientName.c_str(), allocator).Move(), allocator);
    }

    if (m_agencyClientGlobalTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgencyClientGlobalType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agencyClientGlobalType.c_str(), allocator).Move(), allocator);
    }

    if (m_agencyClientGlobalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgencyClientGlobalId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agencyClientGlobalId.c_str(), allocator).Move(), allocator);
    }

    if (m_agencyClientMobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgencyClientMobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agencyClientMobile.c_str(), allocator).Move(), allocator);
    }

}


string AgencyClientInfo::GetAgencyClientName() const
{
    return m_agencyClientName;
}

void AgencyClientInfo::SetAgencyClientName(const string& _agencyClientName)
{
    m_agencyClientName = _agencyClientName;
    m_agencyClientNameHasBeenSet = true;
}

bool AgencyClientInfo::AgencyClientNameHasBeenSet() const
{
    return m_agencyClientNameHasBeenSet;
}

string AgencyClientInfo::GetAgencyClientGlobalType() const
{
    return m_agencyClientGlobalType;
}

void AgencyClientInfo::SetAgencyClientGlobalType(const string& _agencyClientGlobalType)
{
    m_agencyClientGlobalType = _agencyClientGlobalType;
    m_agencyClientGlobalTypeHasBeenSet = true;
}

bool AgencyClientInfo::AgencyClientGlobalTypeHasBeenSet() const
{
    return m_agencyClientGlobalTypeHasBeenSet;
}

string AgencyClientInfo::GetAgencyClientGlobalId() const
{
    return m_agencyClientGlobalId;
}

void AgencyClientInfo::SetAgencyClientGlobalId(const string& _agencyClientGlobalId)
{
    m_agencyClientGlobalId = _agencyClientGlobalId;
    m_agencyClientGlobalIdHasBeenSet = true;
}

bool AgencyClientInfo::AgencyClientGlobalIdHasBeenSet() const
{
    return m_agencyClientGlobalIdHasBeenSet;
}

string AgencyClientInfo::GetAgencyClientMobile() const
{
    return m_agencyClientMobile;
}

void AgencyClientInfo::SetAgencyClientMobile(const string& _agencyClientMobile)
{
    m_agencyClientMobile = _agencyClientMobile;
    m_agencyClientMobileHasBeenSet = true;
}

bool AgencyClientInfo::AgencyClientMobileHasBeenSet() const
{
    return m_agencyClientMobileHasBeenSet;
}

