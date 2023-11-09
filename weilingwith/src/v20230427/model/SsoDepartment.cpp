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

#include <tencentcloud/weilingwith/v20230427/model/SsoDepartment.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

SsoDepartment::SsoDepartment() :
    m_departmentIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_parentDepartmentIdHasBeenSet(false)
{
}

CoreInternalOutcome SsoDepartment::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DepartmentId") && !value["DepartmentId"].IsNull())
    {
        if (!value["DepartmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SsoDepartment.DepartmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_departmentId = string(value["DepartmentId"].GetString());
        m_departmentIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SsoDepartment.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ParentDepartmentId") && !value["ParentDepartmentId"].IsNull())
    {
        if (!value["ParentDepartmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SsoDepartment.ParentDepartmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentDepartmentId = string(value["ParentDepartmentId"].GetString());
        m_parentDepartmentIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SsoDepartment::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_departmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_departmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_parentDepartmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentDepartmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentDepartmentId.c_str(), allocator).Move(), allocator);
    }

}


string SsoDepartment::GetDepartmentId() const
{
    return m_departmentId;
}

void SsoDepartment::SetDepartmentId(const string& _departmentId)
{
    m_departmentId = _departmentId;
    m_departmentIdHasBeenSet = true;
}

bool SsoDepartment::DepartmentIdHasBeenSet() const
{
    return m_departmentIdHasBeenSet;
}

string SsoDepartment::GetName() const
{
    return m_name;
}

void SsoDepartment::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SsoDepartment::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SsoDepartment::GetParentDepartmentId() const
{
    return m_parentDepartmentId;
}

void SsoDepartment::SetParentDepartmentId(const string& _parentDepartmentId)
{
    m_parentDepartmentId = _parentDepartmentId;
    m_parentDepartmentIdHasBeenSet = true;
}

bool SsoDepartment::ParentDepartmentIdHasBeenSet() const
{
    return m_parentDepartmentIdHasBeenSet;
}

