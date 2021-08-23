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

#include <tencentcloud/cpdp/v20190820/model/ExternalContractUserInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ExternalContractUserInfo::ExternalContractUserInfo() :
    m_externalUserTypeHasBeenSet(false),
    m_externalUserIdHasBeenSet(false)
{
}

CoreInternalOutcome ExternalContractUserInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExternalUserType") && !value["ExternalUserType"].IsNull())
    {
        if (!value["ExternalUserType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalContractUserInfo.ExternalUserType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalUserType = string(value["ExternalUserType"].GetString());
        m_externalUserTypeHasBeenSet = true;
    }

    if (value.HasMember("ExternalUserId") && !value["ExternalUserId"].IsNull())
    {
        if (!value["ExternalUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalContractUserInfo.ExternalUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalUserId = string(value["ExternalUserId"].GetString());
        m_externalUserIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExternalContractUserInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_externalUserTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalUserType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalUserType.c_str(), allocator).Move(), allocator);
    }

    if (m_externalUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalUserId.c_str(), allocator).Move(), allocator);
    }

}


string ExternalContractUserInfo::GetExternalUserType() const
{
    return m_externalUserType;
}

void ExternalContractUserInfo::SetExternalUserType(const string& _externalUserType)
{
    m_externalUserType = _externalUserType;
    m_externalUserTypeHasBeenSet = true;
}

bool ExternalContractUserInfo::ExternalUserTypeHasBeenSet() const
{
    return m_externalUserTypeHasBeenSet;
}

string ExternalContractUserInfo::GetExternalUserId() const
{
    return m_externalUserId;
}

void ExternalContractUserInfo::SetExternalUserId(const string& _externalUserId)
{
    m_externalUserId = _externalUserId;
    m_externalUserIdHasBeenSet = true;
}

bool ExternalContractUserInfo::ExternalUserIdHasBeenSet() const
{
    return m_externalUserIdHasBeenSet;
}

