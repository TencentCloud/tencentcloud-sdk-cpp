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

#include <tencentcloud/mrs/v20200910/model/BasicInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

BasicInfo::BasicInfo() :
    m_hospitalNameHasBeenSet(false),
    m_departmentNameHasBeenSet(false),
    m_reportNameHasBeenSet(false),
    m_reportTimeHasBeenSet(false),
    m_outpatientNumHasBeenSet(false),
    m_inHospitalNumHasBeenSet(false),
    m_inspectionNumHasBeenSet(false),
    m_imageNumHasBeenSet(false),
    m_radiationNumHasBeenSet(false),
    m_pathologyNumHasBeenSet(false),
    m_bedNumHasBeenSet(false),
    m_inHospitalTimeHasBeenSet(false),
    m_outHospitalTimeHasBeenSet(false),
    m_cureDurationHasBeenSet(false),
    m_hospitalizationTimesHasBeenSet(false),
    m_inspectionTimeHasBeenSet(false)
{
}

CoreInternalOutcome BasicInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HospitalName") && !value["HospitalName"].IsNull())
    {
        if (!value["HospitalName"].IsString())
        {
            return CoreInternalOutcome(Error("response `BasicInfo.HospitalName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hospitalName = string(value["HospitalName"].GetString());
        m_hospitalNameHasBeenSet = true;
    }

    if (value.HasMember("DepartmentName") && !value["DepartmentName"].IsNull())
    {
        if (!value["DepartmentName"].IsString())
        {
            return CoreInternalOutcome(Error("response `BasicInfo.DepartmentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_departmentName = string(value["DepartmentName"].GetString());
        m_departmentNameHasBeenSet = true;
    }

    if (value.HasMember("ReportName") && !value["ReportName"].IsNull())
    {
        if (!value["ReportName"].IsString())
        {
            return CoreInternalOutcome(Error("response `BasicInfo.ReportName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportName = string(value["ReportName"].GetString());
        m_reportNameHasBeenSet = true;
    }

    if (value.HasMember("ReportTime") && !value["ReportTime"].IsNull())
    {
        if (!value["ReportTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `BasicInfo.ReportTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportTime = string(value["ReportTime"].GetString());
        m_reportTimeHasBeenSet = true;
    }

    if (value.HasMember("OutpatientNum") && !value["OutpatientNum"].IsNull())
    {
        if (!value["OutpatientNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `BasicInfo.OutpatientNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outpatientNum = string(value["OutpatientNum"].GetString());
        m_outpatientNumHasBeenSet = true;
    }

    if (value.HasMember("InHospitalNum") && !value["InHospitalNum"].IsNull())
    {
        if (!value["InHospitalNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `BasicInfo.InHospitalNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inHospitalNum = string(value["InHospitalNum"].GetString());
        m_inHospitalNumHasBeenSet = true;
    }

    if (value.HasMember("InspectionNum") && !value["InspectionNum"].IsNull())
    {
        if (!value["InspectionNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `BasicInfo.InspectionNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inspectionNum = string(value["InspectionNum"].GetString());
        m_inspectionNumHasBeenSet = true;
    }

    if (value.HasMember("ImageNum") && !value["ImageNum"].IsNull())
    {
        if (!value["ImageNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `BasicInfo.ImageNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageNum = string(value["ImageNum"].GetString());
        m_imageNumHasBeenSet = true;
    }

    if (value.HasMember("RadiationNum") && !value["RadiationNum"].IsNull())
    {
        if (!value["RadiationNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `BasicInfo.RadiationNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_radiationNum = string(value["RadiationNum"].GetString());
        m_radiationNumHasBeenSet = true;
    }

    if (value.HasMember("PathologyNum") && !value["PathologyNum"].IsNull())
    {
        if (!value["PathologyNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `BasicInfo.PathologyNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pathologyNum = string(value["PathologyNum"].GetString());
        m_pathologyNumHasBeenSet = true;
    }

    if (value.HasMember("BedNum") && !value["BedNum"].IsNull())
    {
        if (!value["BedNum"].IsString())
        {
            return CoreInternalOutcome(Error("response `BasicInfo.BedNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bedNum = string(value["BedNum"].GetString());
        m_bedNumHasBeenSet = true;
    }

    if (value.HasMember("InHospitalTime") && !value["InHospitalTime"].IsNull())
    {
        if (!value["InHospitalTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `BasicInfo.InHospitalTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inHospitalTime = string(value["InHospitalTime"].GetString());
        m_inHospitalTimeHasBeenSet = true;
    }

    if (value.HasMember("OutHospitalTime") && !value["OutHospitalTime"].IsNull())
    {
        if (!value["OutHospitalTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `BasicInfo.OutHospitalTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outHospitalTime = string(value["OutHospitalTime"].GetString());
        m_outHospitalTimeHasBeenSet = true;
    }

    if (value.HasMember("CureDuration") && !value["CureDuration"].IsNull())
    {
        if (!value["CureDuration"].IsString())
        {
            return CoreInternalOutcome(Error("response `BasicInfo.CureDuration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cureDuration = string(value["CureDuration"].GetString());
        m_cureDurationHasBeenSet = true;
    }

    if (value.HasMember("HospitalizationTimes") && !value["HospitalizationTimes"].IsNull())
    {
        if (!value["HospitalizationTimes"].IsString())
        {
            return CoreInternalOutcome(Error("response `BasicInfo.HospitalizationTimes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hospitalizationTimes = string(value["HospitalizationTimes"].GetString());
        m_hospitalizationTimesHasBeenSet = true;
    }

    if (value.HasMember("InspectionTime") && !value["InspectionTime"].IsNull())
    {
        if (!value["InspectionTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `BasicInfo.InspectionTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inspectionTime = string(value["InspectionTime"].GetString());
        m_inspectionTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BasicInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hospitalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HospitalName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hospitalName.c_str(), allocator).Move(), allocator);
    }

    if (m_departmentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartmentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_departmentName.c_str(), allocator).Move(), allocator);
    }

    if (m_reportNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportName.c_str(), allocator).Move(), allocator);
    }

    if (m_reportTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportTime.c_str(), allocator).Move(), allocator);
    }

    if (m_outpatientNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutpatientNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outpatientNum.c_str(), allocator).Move(), allocator);
    }

    if (m_inHospitalNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InHospitalNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inHospitalNum.c_str(), allocator).Move(), allocator);
    }

    if (m_inspectionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InspectionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inspectionNum.c_str(), allocator).Move(), allocator);
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

    if (m_pathologyNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathologyNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pathologyNum.c_str(), allocator).Move(), allocator);
    }

    if (m_bedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BedNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bedNum.c_str(), allocator).Move(), allocator);
    }

    if (m_inHospitalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InHospitalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inHospitalTime.c_str(), allocator).Move(), allocator);
    }

    if (m_outHospitalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutHospitalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outHospitalTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cureDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CureDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cureDuration.c_str(), allocator).Move(), allocator);
    }

    if (m_hospitalizationTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HospitalizationTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hospitalizationTimes.c_str(), allocator).Move(), allocator);
    }

    if (m_inspectionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InspectionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inspectionTime.c_str(), allocator).Move(), allocator);
    }

}


string BasicInfo::GetHospitalName() const
{
    return m_hospitalName;
}

void BasicInfo::SetHospitalName(const string& _hospitalName)
{
    m_hospitalName = _hospitalName;
    m_hospitalNameHasBeenSet = true;
}

bool BasicInfo::HospitalNameHasBeenSet() const
{
    return m_hospitalNameHasBeenSet;
}

string BasicInfo::GetDepartmentName() const
{
    return m_departmentName;
}

void BasicInfo::SetDepartmentName(const string& _departmentName)
{
    m_departmentName = _departmentName;
    m_departmentNameHasBeenSet = true;
}

bool BasicInfo::DepartmentNameHasBeenSet() const
{
    return m_departmentNameHasBeenSet;
}

string BasicInfo::GetReportName() const
{
    return m_reportName;
}

void BasicInfo::SetReportName(const string& _reportName)
{
    m_reportName = _reportName;
    m_reportNameHasBeenSet = true;
}

bool BasicInfo::ReportNameHasBeenSet() const
{
    return m_reportNameHasBeenSet;
}

string BasicInfo::GetReportTime() const
{
    return m_reportTime;
}

void BasicInfo::SetReportTime(const string& _reportTime)
{
    m_reportTime = _reportTime;
    m_reportTimeHasBeenSet = true;
}

bool BasicInfo::ReportTimeHasBeenSet() const
{
    return m_reportTimeHasBeenSet;
}

string BasicInfo::GetOutpatientNum() const
{
    return m_outpatientNum;
}

void BasicInfo::SetOutpatientNum(const string& _outpatientNum)
{
    m_outpatientNum = _outpatientNum;
    m_outpatientNumHasBeenSet = true;
}

bool BasicInfo::OutpatientNumHasBeenSet() const
{
    return m_outpatientNumHasBeenSet;
}

string BasicInfo::GetInHospitalNum() const
{
    return m_inHospitalNum;
}

void BasicInfo::SetInHospitalNum(const string& _inHospitalNum)
{
    m_inHospitalNum = _inHospitalNum;
    m_inHospitalNumHasBeenSet = true;
}

bool BasicInfo::InHospitalNumHasBeenSet() const
{
    return m_inHospitalNumHasBeenSet;
}

string BasicInfo::GetInspectionNum() const
{
    return m_inspectionNum;
}

void BasicInfo::SetInspectionNum(const string& _inspectionNum)
{
    m_inspectionNum = _inspectionNum;
    m_inspectionNumHasBeenSet = true;
}

bool BasicInfo::InspectionNumHasBeenSet() const
{
    return m_inspectionNumHasBeenSet;
}

string BasicInfo::GetImageNum() const
{
    return m_imageNum;
}

void BasicInfo::SetImageNum(const string& _imageNum)
{
    m_imageNum = _imageNum;
    m_imageNumHasBeenSet = true;
}

bool BasicInfo::ImageNumHasBeenSet() const
{
    return m_imageNumHasBeenSet;
}

string BasicInfo::GetRadiationNum() const
{
    return m_radiationNum;
}

void BasicInfo::SetRadiationNum(const string& _radiationNum)
{
    m_radiationNum = _radiationNum;
    m_radiationNumHasBeenSet = true;
}

bool BasicInfo::RadiationNumHasBeenSet() const
{
    return m_radiationNumHasBeenSet;
}

string BasicInfo::GetPathologyNum() const
{
    return m_pathologyNum;
}

void BasicInfo::SetPathologyNum(const string& _pathologyNum)
{
    m_pathologyNum = _pathologyNum;
    m_pathologyNumHasBeenSet = true;
}

bool BasicInfo::PathologyNumHasBeenSet() const
{
    return m_pathologyNumHasBeenSet;
}

string BasicInfo::GetBedNum() const
{
    return m_bedNum;
}

void BasicInfo::SetBedNum(const string& _bedNum)
{
    m_bedNum = _bedNum;
    m_bedNumHasBeenSet = true;
}

bool BasicInfo::BedNumHasBeenSet() const
{
    return m_bedNumHasBeenSet;
}

string BasicInfo::GetInHospitalTime() const
{
    return m_inHospitalTime;
}

void BasicInfo::SetInHospitalTime(const string& _inHospitalTime)
{
    m_inHospitalTime = _inHospitalTime;
    m_inHospitalTimeHasBeenSet = true;
}

bool BasicInfo::InHospitalTimeHasBeenSet() const
{
    return m_inHospitalTimeHasBeenSet;
}

string BasicInfo::GetOutHospitalTime() const
{
    return m_outHospitalTime;
}

void BasicInfo::SetOutHospitalTime(const string& _outHospitalTime)
{
    m_outHospitalTime = _outHospitalTime;
    m_outHospitalTimeHasBeenSet = true;
}

bool BasicInfo::OutHospitalTimeHasBeenSet() const
{
    return m_outHospitalTimeHasBeenSet;
}

string BasicInfo::GetCureDuration() const
{
    return m_cureDuration;
}

void BasicInfo::SetCureDuration(const string& _cureDuration)
{
    m_cureDuration = _cureDuration;
    m_cureDurationHasBeenSet = true;
}

bool BasicInfo::CureDurationHasBeenSet() const
{
    return m_cureDurationHasBeenSet;
}

string BasicInfo::GetHospitalizationTimes() const
{
    return m_hospitalizationTimes;
}

void BasicInfo::SetHospitalizationTimes(const string& _hospitalizationTimes)
{
    m_hospitalizationTimes = _hospitalizationTimes;
    m_hospitalizationTimesHasBeenSet = true;
}

bool BasicInfo::HospitalizationTimesHasBeenSet() const
{
    return m_hospitalizationTimesHasBeenSet;
}

string BasicInfo::GetInspectionTime() const
{
    return m_inspectionTime;
}

void BasicInfo::SetInspectionTime(const string& _inspectionTime)
{
    m_inspectionTime = _inspectionTime;
    m_inspectionTimeHasBeenSet = true;
}

bool BasicInfo::InspectionTimeHasBeenSet() const
{
    return m_inspectionTimeHasBeenSet;
}

