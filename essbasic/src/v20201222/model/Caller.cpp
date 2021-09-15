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

#include <tencentcloud/essbasic/v20201222/model/Caller.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

Caller::Caller() :
    m_applicationIdHasBeenSet(false),
    m_subOrganizationIdHasBeenSet(false),
    m_operatorIdHasBeenSet(false)
{
}

CoreInternalOutcome Caller::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Caller.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("SubOrganizationId") && !value["SubOrganizationId"].IsNull())
    {
        if (!value["SubOrganizationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Caller.SubOrganizationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subOrganizationId = string(value["SubOrganizationId"].GetString());
        m_subOrganizationIdHasBeenSet = true;
    }

    if (value.HasMember("OperatorId") && !value["OperatorId"].IsNull())
    {
        if (!value["OperatorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Caller.OperatorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorId = string(value["OperatorId"].GetString());
        m_operatorIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Caller::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_subOrganizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubOrganizationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subOrganizationId.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorId.c_str(), allocator).Move(), allocator);
    }

}


string Caller::GetApplicationId() const
{
    return m_applicationId;
}

void Caller::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool Caller::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string Caller::GetSubOrganizationId() const
{
    return m_subOrganizationId;
}

void Caller::SetSubOrganizationId(const string& _subOrganizationId)
{
    m_subOrganizationId = _subOrganizationId;
    m_subOrganizationIdHasBeenSet = true;
}

bool Caller::SubOrganizationIdHasBeenSet() const
{
    return m_subOrganizationIdHasBeenSet;
}

string Caller::GetOperatorId() const
{
    return m_operatorId;
}

void Caller::SetOperatorId(const string& _operatorId)
{
    m_operatorId = _operatorId;
    m_operatorIdHasBeenSet = true;
}

bool Caller::OperatorIdHasBeenSet() const
{
    return m_operatorIdHasBeenSet;
}

