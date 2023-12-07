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

#include <tencentcloud/mrs/v20200910/model/ImageMaskFlags.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

ImageMaskFlags::ImageMaskFlags() :
    m_hospitalFlagHasBeenSet(false),
    m_doctorFlagHasBeenSet(false),
    m_patientFlagHasBeenSet(false),
    m_barFlagHasBeenSet(false)
{
}

CoreInternalOutcome ImageMaskFlags::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HospitalFlag") && !value["HospitalFlag"].IsNull())
    {
        if (!value["HospitalFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageMaskFlags.HospitalFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hospitalFlag = value["HospitalFlag"].GetBool();
        m_hospitalFlagHasBeenSet = true;
    }

    if (value.HasMember("DoctorFlag") && !value["DoctorFlag"].IsNull())
    {
        if (!value["DoctorFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageMaskFlags.DoctorFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_doctorFlag = value["DoctorFlag"].GetBool();
        m_doctorFlagHasBeenSet = true;
    }

    if (value.HasMember("PatientFlag") && !value["PatientFlag"].IsNull())
    {
        if (!value["PatientFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageMaskFlags.PatientFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_patientFlag = value["PatientFlag"].GetBool();
        m_patientFlagHasBeenSet = true;
    }

    if (value.HasMember("BarFlag") && !value["BarFlag"].IsNull())
    {
        if (!value["BarFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageMaskFlags.BarFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_barFlag = value["BarFlag"].GetBool();
        m_barFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageMaskFlags::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hospitalFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HospitalFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hospitalFlag, allocator);
    }

    if (m_doctorFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DoctorFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_doctorFlag, allocator);
    }

    if (m_patientFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PatientFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_patientFlag, allocator);
    }

    if (m_barFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BarFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_barFlag, allocator);
    }

}


bool ImageMaskFlags::GetHospitalFlag() const
{
    return m_hospitalFlag;
}

void ImageMaskFlags::SetHospitalFlag(const bool& _hospitalFlag)
{
    m_hospitalFlag = _hospitalFlag;
    m_hospitalFlagHasBeenSet = true;
}

bool ImageMaskFlags::HospitalFlagHasBeenSet() const
{
    return m_hospitalFlagHasBeenSet;
}

bool ImageMaskFlags::GetDoctorFlag() const
{
    return m_doctorFlag;
}

void ImageMaskFlags::SetDoctorFlag(const bool& _doctorFlag)
{
    m_doctorFlag = _doctorFlag;
    m_doctorFlagHasBeenSet = true;
}

bool ImageMaskFlags::DoctorFlagHasBeenSet() const
{
    return m_doctorFlagHasBeenSet;
}

bool ImageMaskFlags::GetPatientFlag() const
{
    return m_patientFlag;
}

void ImageMaskFlags::SetPatientFlag(const bool& _patientFlag)
{
    m_patientFlag = _patientFlag;
    m_patientFlagHasBeenSet = true;
}

bool ImageMaskFlags::PatientFlagHasBeenSet() const
{
    return m_patientFlagHasBeenSet;
}

bool ImageMaskFlags::GetBarFlag() const
{
    return m_barFlag;
}

void ImageMaskFlags::SetBarFlag(const bool& _barFlag)
{
    m_barFlag = _barFlag;
    m_barFlagHasBeenSet = true;
}

bool ImageMaskFlags::BarFlagHasBeenSet() const
{
    return m_barFlagHasBeenSet;
}

