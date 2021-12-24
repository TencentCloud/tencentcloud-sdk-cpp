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

#include <tencentcloud/iecp/v20210914/model/ApplicationDeployMode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

ApplicationDeployMode::ApplicationDeployMode() :
    m_typeHasBeenSet(false),
    m_resourceIDHasBeenSet(false),
    m_resourceNameHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationDeployMode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationDeployMode.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ResourceID") && !value["ResourceID"].IsNull())
    {
        if (!value["ResourceID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationDeployMode.ResourceID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceID = value["ResourceID"].GetUint64();
        m_resourceIDHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationDeployMode.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationDeployMode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_resourceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceID, allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ApplicationDeployMode::GetType() const
{
    return m_type;
}

void ApplicationDeployMode::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ApplicationDeployMode::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t ApplicationDeployMode::GetResourceID() const
{
    return m_resourceID;
}

void ApplicationDeployMode::SetResourceID(const uint64_t& _resourceID)
{
    m_resourceID = _resourceID;
    m_resourceIDHasBeenSet = true;
}

bool ApplicationDeployMode::ResourceIDHasBeenSet() const
{
    return m_resourceIDHasBeenSet;
}

string ApplicationDeployMode::GetResourceName() const
{
    return m_resourceName;
}

void ApplicationDeployMode::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool ApplicationDeployMode::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

