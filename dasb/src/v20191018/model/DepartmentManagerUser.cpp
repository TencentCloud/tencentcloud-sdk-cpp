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

#include <tencentcloud/dasb/v20191018/model/DepartmentManagerUser.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

DepartmentManagerUser::DepartmentManagerUser() :
    m_managerIdHasBeenSet(false),
    m_managerNameHasBeenSet(false)
{
}

CoreInternalOutcome DepartmentManagerUser::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ManagerId") && !value["ManagerId"].IsNull())
    {
        if (!value["ManagerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DepartmentManagerUser.ManagerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_managerId = string(value["ManagerId"].GetString());
        m_managerIdHasBeenSet = true;
    }

    if (value.HasMember("ManagerName") && !value["ManagerName"].IsNull())
    {
        if (!value["ManagerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DepartmentManagerUser.ManagerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_managerName = string(value["ManagerName"].GetString());
        m_managerNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DepartmentManagerUser::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_managerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_managerId.c_str(), allocator).Move(), allocator);
    }

    if (m_managerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_managerName.c_str(), allocator).Move(), allocator);
    }

}


string DepartmentManagerUser::GetManagerId() const
{
    return m_managerId;
}

void DepartmentManagerUser::SetManagerId(const string& _managerId)
{
    m_managerId = _managerId;
    m_managerIdHasBeenSet = true;
}

bool DepartmentManagerUser::ManagerIdHasBeenSet() const
{
    return m_managerIdHasBeenSet;
}

string DepartmentManagerUser::GetManagerName() const
{
    return m_managerName;
}

void DepartmentManagerUser::SetManagerName(const string& _managerName)
{
    m_managerName = _managerName;
    m_managerNameHasBeenSet = true;
}

bool DepartmentManagerUser::ManagerNameHasBeenSet() const
{
    return m_managerNameHasBeenSet;
}

