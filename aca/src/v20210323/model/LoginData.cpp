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

#include <tencentcloud/aca/v20210323/model/LoginData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

LoginData::LoginData() :
    m_doctorIdHasBeenSet(false),
    m_doctorNameHasBeenSet(false),
    m_doctorLevelHasBeenSet(false),
    m_doctorDepartmentHasBeenSet(false),
    m_departmentIdHasBeenSet(false)
{
}

CoreInternalOutcome LoginData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DoctorId") && !value["DoctorId"].IsNull())
    {
        if (!value["DoctorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginData.DoctorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_doctorId = string(value["DoctorId"].GetString());
        m_doctorIdHasBeenSet = true;
    }

    if (value.HasMember("DoctorName") && !value["DoctorName"].IsNull())
    {
        if (!value["DoctorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginData.DoctorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_doctorName = string(value["DoctorName"].GetString());
        m_doctorNameHasBeenSet = true;
    }

    if (value.HasMember("DoctorLevel") && !value["DoctorLevel"].IsNull())
    {
        if (!value["DoctorLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginData.DoctorLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_doctorLevel = string(value["DoctorLevel"].GetString());
        m_doctorLevelHasBeenSet = true;
    }

    if (value.HasMember("DoctorDepartment") && !value["DoctorDepartment"].IsNull())
    {
        if (!value["DoctorDepartment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginData.DoctorDepartment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_doctorDepartment = string(value["DoctorDepartment"].GetString());
        m_doctorDepartmentHasBeenSet = true;
    }

    if (value.HasMember("DepartmentId") && !value["DepartmentId"].IsNull())
    {
        if (!value["DepartmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginData.DepartmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_departmentId = string(value["DepartmentId"].GetString());
        m_departmentIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoginData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_doctorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DoctorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_doctorId.c_str(), allocator).Move(), allocator);
    }

    if (m_doctorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DoctorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_doctorName.c_str(), allocator).Move(), allocator);
    }

    if (m_doctorLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DoctorLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_doctorLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_doctorDepartmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DoctorDepartment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_doctorDepartment.c_str(), allocator).Move(), allocator);
    }

    if (m_departmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_departmentId.c_str(), allocator).Move(), allocator);
    }

}


string LoginData::GetDoctorId() const
{
    return m_doctorId;
}

void LoginData::SetDoctorId(const string& _doctorId)
{
    m_doctorId = _doctorId;
    m_doctorIdHasBeenSet = true;
}

bool LoginData::DoctorIdHasBeenSet() const
{
    return m_doctorIdHasBeenSet;
}

string LoginData::GetDoctorName() const
{
    return m_doctorName;
}

void LoginData::SetDoctorName(const string& _doctorName)
{
    m_doctorName = _doctorName;
    m_doctorNameHasBeenSet = true;
}

bool LoginData::DoctorNameHasBeenSet() const
{
    return m_doctorNameHasBeenSet;
}

string LoginData::GetDoctorLevel() const
{
    return m_doctorLevel;
}

void LoginData::SetDoctorLevel(const string& _doctorLevel)
{
    m_doctorLevel = _doctorLevel;
    m_doctorLevelHasBeenSet = true;
}

bool LoginData::DoctorLevelHasBeenSet() const
{
    return m_doctorLevelHasBeenSet;
}

string LoginData::GetDoctorDepartment() const
{
    return m_doctorDepartment;
}

void LoginData::SetDoctorDepartment(const string& _doctorDepartment)
{
    m_doctorDepartment = _doctorDepartment;
    m_doctorDepartmentHasBeenSet = true;
}

bool LoginData::DoctorDepartmentHasBeenSet() const
{
    return m_doctorDepartmentHasBeenSet;
}

string LoginData::GetDepartmentId() const
{
    return m_departmentId;
}

void LoginData::SetDepartmentId(const string& _departmentId)
{
    m_departmentId = _departmentId;
    m_departmentIdHasBeenSet = true;
}

bool LoginData::DepartmentIdHasBeenSet() const
{
    return m_departmentIdHasBeenSet;
}

