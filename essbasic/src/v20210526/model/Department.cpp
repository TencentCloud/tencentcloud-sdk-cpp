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

#include <tencentcloud/essbasic/v20210526/model/Department.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

Department::Department() :
    m_departmentIdHasBeenSet(false),
    m_departmentNameHasBeenSet(false)
{
}

CoreInternalOutcome Department::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DepartmentId") && !value["DepartmentId"].IsNull())
    {
        if (!value["DepartmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Department.DepartmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_departmentId = string(value["DepartmentId"].GetString());
        m_departmentIdHasBeenSet = true;
    }

    if (value.HasMember("DepartmentName") && !value["DepartmentName"].IsNull())
    {
        if (!value["DepartmentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Department.DepartmentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_departmentName = string(value["DepartmentName"].GetString());
        m_departmentNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Department::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_departmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_departmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_departmentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartmentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_departmentName.c_str(), allocator).Move(), allocator);
    }

}


string Department::GetDepartmentId() const
{
    return m_departmentId;
}

void Department::SetDepartmentId(const string& _departmentId)
{
    m_departmentId = _departmentId;
    m_departmentIdHasBeenSet = true;
}

bool Department::DepartmentIdHasBeenSet() const
{
    return m_departmentIdHasBeenSet;
}

string Department::GetDepartmentName() const
{
    return m_departmentName;
}

void Department::SetDepartmentName(const string& _departmentName)
{
    m_departmentName = _departmentName;
    m_departmentNameHasBeenSet = true;
}

bool Department::DepartmentNameHasBeenSet() const
{
    return m_departmentNameHasBeenSet;
}

