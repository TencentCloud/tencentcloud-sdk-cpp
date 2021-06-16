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

#include <tencentcloud/mrs/v20200910/model/ReportInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

ReportInfo::ReportInfo() :
    m_hospitalHasBeenSet(false),
    m_departmentNameHasBeenSet(false),
    m_billingTimeHasBeenSet(false),
    m_reportTimeHasBeenSet(false),
    m_inspectTimeHasBeenSet(false),
    m_checkNumHasBeenSet(false),
    m_imageNumHasBeenSet(false),
    m_radiationNumHasBeenSet(false),
    m_testNumHasBeenSet(false),
    m_outpatientNumHasBeenSet(false),
    m_pathologyNumHasBeenSet(false),
    m_inHospitalNumHasBeenSet(false),
    m_sampleNumHasBeenSet(false),
    m_sampleTypeHasBeenSet(false),
    m_medicalRecordNumHasBeenSet(false),
    m_reportNameHasBeenSet(false),
    m_ultraNumHasBeenSet(false),
    m_diagnoseHasBeenSet(false)
{
}

CoreInternalOutcome ReportInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Hospital") && !value["Hospital"].IsNull())
    {
        if (!value["Hospital"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReportInfo.Hospital` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hospital = string(value["Hospital"].GetString());
        m_hospitalHasBeenSet = true;
    }

    if (value.HasMember("DepartmentName") && !value["DepartmentName"].IsNull())
    {
        if (!value["DepartmentName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReportInfo.DepartmentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_departmentName = string(value["DepartmentName"].GetString());
        m_departmentNameHasBeenSet = true;
    }

    if (value.HasMember("BillingTime") && !value["BillingTime"].IsNull())
    {
        if (!value["BillingTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReportInfo.BillingTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingTime = string(value["BillingTime"].GetString());
        m_billingTimeHasBeenSet = true;
    }

    if (value.HasMember("ReportTime") && !value["ReportTime"].IsNull())
    {
        if (!value["ReportTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReportInfo.ReportTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportTime = string(value["ReportTime"].GetString());
        m_reportTimeHasBeenSet = true;
    }

    if (value.HasMember("InspectTime") && !value["InspectTime"].IsNull())
    {
        if (!value["InspectTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReportInfo.InspectTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inspectTime = string(value["InspectTime"].GetString());
        m_inspectTimeHasBeenSet = true;
    }

    if (value.HasMember("CheckNum") && !value["CheckNum"].IsNull())
    {
        if (!value["CheckNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReportInfo.CheckNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkNum = string(value["CheckNum"].GetString());
        m_checkNumHasBeenSet = true;
    }

    if (value.HasMember("ImageNum") && !value["ImageNum"].IsNull())
    {
        if (!value["ImageNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReportInfo.ImageNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageNum = string(value["ImageNum"].GetString());
        m_imageNumHasBeenSet = true;
    }

    if (value.HasMember("RadiationNum") && !value["RadiationNum"].IsNull())
    {
        if (!value["RadiationNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReportInfo.RadiationNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_radiationNum = string(value["RadiationNum"].GetString());
        m_radiationNumHasBeenSet = true;
    }

    if (value.HasMember("TestNum") && !value["TestNum"].IsNull())
    {
        if (!value["TestNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReportInfo.TestNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_testNum = string(value["TestNum"].GetString());
        m_testNumHasBeenSet = true;
    }

    if (value.HasMember("OutpatientNum") && !value["OutpatientNum"].IsNull())
    {
        if (!value["OutpatientNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReportInfo.OutpatientNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outpatientNum = string(value["OutpatientNum"].GetString());
        m_outpatientNumHasBeenSet = true;
    }

    if (value.HasMember("PathologyNum") && !value["PathologyNum"].IsNull())
    {
        if (!value["PathologyNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReportInfo.PathologyNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pathologyNum = string(value["PathologyNum"].GetString());
        m_pathologyNumHasBeenSet = true;
    }

    if (value.HasMember("InHospitalNum") && !value["InHospitalNum"].IsNull())
    {
        if (!value["InHospitalNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReportInfo.InHospitalNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inHospitalNum = string(value["InHospitalNum"].GetString());
        m_inHospitalNumHasBeenSet = true;
    }

    if (value.HasMember("SampleNum") && !value["SampleNum"].IsNull())
    {
        if (!value["SampleNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReportInfo.SampleNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sampleNum = string(value["SampleNum"].GetString());
        m_sampleNumHasBeenSet = true;
    }

    if (value.HasMember("SampleType") && !value["SampleType"].IsNull())
    {
        if (!value["SampleType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReportInfo.SampleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sampleType = string(value["SampleType"].GetString());
        m_sampleTypeHasBeenSet = true;
    }

    if (value.HasMember("MedicalRecordNum") && !value["MedicalRecordNum"].IsNull())
    {
        if (!value["MedicalRecordNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReportInfo.MedicalRecordNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_medicalRecordNum = string(value["MedicalRecordNum"].GetString());
        m_medicalRecordNumHasBeenSet = true;
    }

    if (value.HasMember("ReportName") && !value["ReportName"].IsNull())
    {
        if (!value["ReportName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReportInfo.ReportName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportName = string(value["ReportName"].GetString());
        m_reportNameHasBeenSet = true;
    }

    if (value.HasMember("UltraNum") && !value["UltraNum"].IsNull())
    {
        if (!value["UltraNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReportInfo.UltraNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ultraNum = string(value["UltraNum"].GetString());
        m_ultraNumHasBeenSet = true;
    }

    if (value.HasMember("Diagnose") && !value["Diagnose"].IsNull())
    {
        if (!value["Diagnose"].IsString())
        {
            return CoreInternalOutcome(Error("response `ReportInfo.Diagnose` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diagnose = string(value["Diagnose"].GetString());
        m_diagnoseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReportInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hospitalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hospital";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hospital.c_str(), allocator).Move(), allocator);
    }

    if (m_departmentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartmentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_departmentName.c_str(), allocator).Move(), allocator);
    }

    if (m_billingTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingTime.c_str(), allocator).Move(), allocator);
    }

    if (m_reportTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportTime.c_str(), allocator).Move(), allocator);
    }

    if (m_inspectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InspectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inspectTime.c_str(), allocator).Move(), allocator);
    }

    if (m_checkNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkNum.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageNum.c_str(), allocator).Move(), allocator);
    }

    if (m_radiationNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RadiationNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_radiationNum.c_str(), allocator).Move(), allocator);
    }

    if (m_testNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TestNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_testNum.c_str(), allocator).Move(), allocator);
    }

    if (m_outpatientNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutpatientNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outpatientNum.c_str(), allocator).Move(), allocator);
    }

    if (m_pathologyNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathologyNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pathologyNum.c_str(), allocator).Move(), allocator);
    }

    if (m_inHospitalNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InHospitalNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inHospitalNum.c_str(), allocator).Move(), allocator);
    }

    if (m_sampleNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sampleNum.c_str(), allocator).Move(), allocator);
    }

    if (m_sampleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sampleType.c_str(), allocator).Move(), allocator);
    }

    if (m_medicalRecordNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MedicalRecordNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_medicalRecordNum.c_str(), allocator).Move(), allocator);
    }

    if (m_reportNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportName.c_str(), allocator).Move(), allocator);
    }

    if (m_ultraNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UltraNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ultraNum.c_str(), allocator).Move(), allocator);
    }

    if (m_diagnoseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Diagnose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diagnose.c_str(), allocator).Move(), allocator);
    }

}


string ReportInfo::GetHospital() const
{
    return m_hospital;
}

void ReportInfo::SetHospital(const string& _hospital)
{
    m_hospital = _hospital;
    m_hospitalHasBeenSet = true;
}

bool ReportInfo::HospitalHasBeenSet() const
{
    return m_hospitalHasBeenSet;
}

string ReportInfo::GetDepartmentName() const
{
    return m_departmentName;
}

void ReportInfo::SetDepartmentName(const string& _departmentName)
{
    m_departmentName = _departmentName;
    m_departmentNameHasBeenSet = true;
}

bool ReportInfo::DepartmentNameHasBeenSet() const
{
    return m_departmentNameHasBeenSet;
}

string ReportInfo::GetBillingTime() const
{
    return m_billingTime;
}

void ReportInfo::SetBillingTime(const string& _billingTime)
{
    m_billingTime = _billingTime;
    m_billingTimeHasBeenSet = true;
}

bool ReportInfo::BillingTimeHasBeenSet() const
{
    return m_billingTimeHasBeenSet;
}

string ReportInfo::GetReportTime() const
{
    return m_reportTime;
}

void ReportInfo::SetReportTime(const string& _reportTime)
{
    m_reportTime = _reportTime;
    m_reportTimeHasBeenSet = true;
}

bool ReportInfo::ReportTimeHasBeenSet() const
{
    return m_reportTimeHasBeenSet;
}

string ReportInfo::GetInspectTime() const
{
    return m_inspectTime;
}

void ReportInfo::SetInspectTime(const string& _inspectTime)
{
    m_inspectTime = _inspectTime;
    m_inspectTimeHasBeenSet = true;
}

bool ReportInfo::InspectTimeHasBeenSet() const
{
    return m_inspectTimeHasBeenSet;
}

string ReportInfo::GetCheckNum() const
{
    return m_checkNum;
}

void ReportInfo::SetCheckNum(const string& _checkNum)
{
    m_checkNum = _checkNum;
    m_checkNumHasBeenSet = true;
}

bool ReportInfo::CheckNumHasBeenSet() const
{
    return m_checkNumHasBeenSet;
}

string ReportInfo::GetImageNum() const
{
    return m_imageNum;
}

void ReportInfo::SetImageNum(const string& _imageNum)
{
    m_imageNum = _imageNum;
    m_imageNumHasBeenSet = true;
}

bool ReportInfo::ImageNumHasBeenSet() const
{
    return m_imageNumHasBeenSet;
}

string ReportInfo::GetRadiationNum() const
{
    return m_radiationNum;
}

void ReportInfo::SetRadiationNum(const string& _radiationNum)
{
    m_radiationNum = _radiationNum;
    m_radiationNumHasBeenSet = true;
}

bool ReportInfo::RadiationNumHasBeenSet() const
{
    return m_radiationNumHasBeenSet;
}

string ReportInfo::GetTestNum() const
{
    return m_testNum;
}

void ReportInfo::SetTestNum(const string& _testNum)
{
    m_testNum = _testNum;
    m_testNumHasBeenSet = true;
}

bool ReportInfo::TestNumHasBeenSet() const
{
    return m_testNumHasBeenSet;
}

string ReportInfo::GetOutpatientNum() const
{
    return m_outpatientNum;
}

void ReportInfo::SetOutpatientNum(const string& _outpatientNum)
{
    m_outpatientNum = _outpatientNum;
    m_outpatientNumHasBeenSet = true;
}

bool ReportInfo::OutpatientNumHasBeenSet() const
{
    return m_outpatientNumHasBeenSet;
}

string ReportInfo::GetPathologyNum() const
{
    return m_pathologyNum;
}

void ReportInfo::SetPathologyNum(const string& _pathologyNum)
{
    m_pathologyNum = _pathologyNum;
    m_pathologyNumHasBeenSet = true;
}

bool ReportInfo::PathologyNumHasBeenSet() const
{
    return m_pathologyNumHasBeenSet;
}

string ReportInfo::GetInHospitalNum() const
{
    return m_inHospitalNum;
}

void ReportInfo::SetInHospitalNum(const string& _inHospitalNum)
{
    m_inHospitalNum = _inHospitalNum;
    m_inHospitalNumHasBeenSet = true;
}

bool ReportInfo::InHospitalNumHasBeenSet() const
{
    return m_inHospitalNumHasBeenSet;
}

string ReportInfo::GetSampleNum() const
{
    return m_sampleNum;
}

void ReportInfo::SetSampleNum(const string& _sampleNum)
{
    m_sampleNum = _sampleNum;
    m_sampleNumHasBeenSet = true;
}

bool ReportInfo::SampleNumHasBeenSet() const
{
    return m_sampleNumHasBeenSet;
}

string ReportInfo::GetSampleType() const
{
    return m_sampleType;
}

void ReportInfo::SetSampleType(const string& _sampleType)
{
    m_sampleType = _sampleType;
    m_sampleTypeHasBeenSet = true;
}

bool ReportInfo::SampleTypeHasBeenSet() const
{
    return m_sampleTypeHasBeenSet;
}

string ReportInfo::GetMedicalRecordNum() const
{
    return m_medicalRecordNum;
}

void ReportInfo::SetMedicalRecordNum(const string& _medicalRecordNum)
{
    m_medicalRecordNum = _medicalRecordNum;
    m_medicalRecordNumHasBeenSet = true;
}

bool ReportInfo::MedicalRecordNumHasBeenSet() const
{
    return m_medicalRecordNumHasBeenSet;
}

string ReportInfo::GetReportName() const
{
    return m_reportName;
}

void ReportInfo::SetReportName(const string& _reportName)
{
    m_reportName = _reportName;
    m_reportNameHasBeenSet = true;
}

bool ReportInfo::ReportNameHasBeenSet() const
{
    return m_reportNameHasBeenSet;
}

string ReportInfo::GetUltraNum() const
{
    return m_ultraNum;
}

void ReportInfo::SetUltraNum(const string& _ultraNum)
{
    m_ultraNum = _ultraNum;
    m_ultraNumHasBeenSet = true;
}

bool ReportInfo::UltraNumHasBeenSet() const
{
    return m_ultraNumHasBeenSet;
}

string ReportInfo::GetDiagnose() const
{
    return m_diagnose;
}

void ReportInfo::SetDiagnose(const string& _diagnose)
{
    m_diagnose = _diagnose;
    m_diagnoseHasBeenSet = true;
}

bool ReportInfo::DiagnoseHasBeenSet() const
{
    return m_diagnoseHasBeenSet;
}

