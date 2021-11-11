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

#include <tencentcloud/tcm/v20210413/model/Service.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

Service::Service() :
    m_typeHasBeenSet(false),
    m_cLBDirectAccessHasBeenSet(false),
    m_externalTrafficPolicyHasBeenSet(false)
{
}

CoreInternalOutcome Service::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CLBDirectAccess") && !value["CLBDirectAccess"].IsNull())
    {
        if (!value["CLBDirectAccess"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Service.CLBDirectAccess` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_cLBDirectAccess = value["CLBDirectAccess"].GetBool();
        m_cLBDirectAccessHasBeenSet = true;
    }

    if (value.HasMember("ExternalTrafficPolicy") && !value["ExternalTrafficPolicy"].IsNull())
    {
        if (!value["ExternalTrafficPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Service.ExternalTrafficPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalTrafficPolicy = string(value["ExternalTrafficPolicy"].GetString());
        m_externalTrafficPolicyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Service::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_cLBDirectAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLBDirectAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cLBDirectAccess, allocator);
    }

    if (m_externalTrafficPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalTrafficPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalTrafficPolicy.c_str(), allocator).Move(), allocator);
    }

}


string Service::GetType() const
{
    return m_type;
}

void Service::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Service::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool Service::GetCLBDirectAccess() const
{
    return m_cLBDirectAccess;
}

void Service::SetCLBDirectAccess(const bool& _cLBDirectAccess)
{
    m_cLBDirectAccess = _cLBDirectAccess;
    m_cLBDirectAccessHasBeenSet = true;
}

bool Service::CLBDirectAccessHasBeenSet() const
{
    return m_cLBDirectAccessHasBeenSet;
}

string Service::GetExternalTrafficPolicy() const
{
    return m_externalTrafficPolicy;
}

void Service::SetExternalTrafficPolicy(const string& _externalTrafficPolicy)
{
    m_externalTrafficPolicy = _externalTrafficPolicy;
    m_externalTrafficPolicyHasBeenSet = true;
}

bool Service::ExternalTrafficPolicyHasBeenSet() const
{
    return m_externalTrafficPolicyHasBeenSet;
}

