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

#include <tencentcloud/trocket/v20230308/model/DetailedRolePerm.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

DetailedRolePerm::DetailedRolePerm() :
    m_resourceHasBeenSet(false),
    m_permWriteHasBeenSet(false),
    m_permReadHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome DetailedRolePerm::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailedRolePerm.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("PermWrite") && !value["PermWrite"].IsNull())
    {
        if (!value["PermWrite"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DetailedRolePerm.PermWrite` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_permWrite = value["PermWrite"].GetBool();
        m_permWriteHasBeenSet = true;
    }

    if (value.HasMember("PermRead") && !value["PermRead"].IsNull())
    {
        if (!value["PermRead"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DetailedRolePerm.PermRead` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_permRead = value["PermRead"].GetBool();
        m_permReadHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailedRolePerm.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailedRolePerm.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DetailedRolePerm::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_permWriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermWrite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_permWrite, allocator);
    }

    if (m_permReadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermRead";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_permRead, allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


string DetailedRolePerm::GetResource() const
{
    return m_resource;
}

void DetailedRolePerm::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool DetailedRolePerm::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

bool DetailedRolePerm::GetPermWrite() const
{
    return m_permWrite;
}

void DetailedRolePerm::SetPermWrite(const bool& _permWrite)
{
    m_permWrite = _permWrite;
    m_permWriteHasBeenSet = true;
}

bool DetailedRolePerm::PermWriteHasBeenSet() const
{
    return m_permWriteHasBeenSet;
}

bool DetailedRolePerm::GetPermRead() const
{
    return m_permRead;
}

void DetailedRolePerm::SetPermRead(const bool& _permRead)
{
    m_permRead = _permRead;
    m_permReadHasBeenSet = true;
}

bool DetailedRolePerm::PermReadHasBeenSet() const
{
    return m_permReadHasBeenSet;
}

string DetailedRolePerm::GetResourceType() const
{
    return m_resourceType;
}

void DetailedRolePerm::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool DetailedRolePerm::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string DetailedRolePerm::GetRemark() const
{
    return m_remark;
}

void DetailedRolePerm::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DetailedRolePerm::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

