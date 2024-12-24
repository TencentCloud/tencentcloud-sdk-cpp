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

#include <tencentcloud/aca/v20210323/model/DoctorInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

DoctorInfo::DoctorInfo() :
    m_doctorIdHasBeenSet(false),
    m_doctorNameHasBeenSet(false),
    m_doctorPhoneHasBeenSet(false)
{
}

CoreInternalOutcome DoctorInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DoctorId") && !value["DoctorId"].IsNull())
    {
        if (!value["DoctorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DoctorInfo.DoctorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_doctorId = string(value["DoctorId"].GetString());
        m_doctorIdHasBeenSet = true;
    }

    if (value.HasMember("DoctorName") && !value["DoctorName"].IsNull())
    {
        if (!value["DoctorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DoctorInfo.DoctorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_doctorName = string(value["DoctorName"].GetString());
        m_doctorNameHasBeenSet = true;
    }

    if (value.HasMember("DoctorPhone") && !value["DoctorPhone"].IsNull())
    {
        if (!value["DoctorPhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DoctorInfo.DoctorPhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_doctorPhone = string(value["DoctorPhone"].GetString());
        m_doctorPhoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DoctorInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_doctorPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DoctorPhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_doctorPhone.c_str(), allocator).Move(), allocator);
    }

}


string DoctorInfo::GetDoctorId() const
{
    return m_doctorId;
}

void DoctorInfo::SetDoctorId(const string& _doctorId)
{
    m_doctorId = _doctorId;
    m_doctorIdHasBeenSet = true;
}

bool DoctorInfo::DoctorIdHasBeenSet() const
{
    return m_doctorIdHasBeenSet;
}

string DoctorInfo::GetDoctorName() const
{
    return m_doctorName;
}

void DoctorInfo::SetDoctorName(const string& _doctorName)
{
    m_doctorName = _doctorName;
    m_doctorNameHasBeenSet = true;
}

bool DoctorInfo::DoctorNameHasBeenSet() const
{
    return m_doctorNameHasBeenSet;
}

string DoctorInfo::GetDoctorPhone() const
{
    return m_doctorPhone;
}

void DoctorInfo::SetDoctorPhone(const string& _doctorPhone)
{
    m_doctorPhone = _doctorPhone;
    m_doctorPhoneHasBeenSet = true;
}

bool DoctorInfo::DoctorPhoneHasBeenSet() const
{
    return m_doctorPhoneHasBeenSet;
}

