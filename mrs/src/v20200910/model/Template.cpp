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

#include <tencentcloud/mrs/v20200910/model/Template.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Template::Template() :
    m_patientInfoHasBeenSet(false),
    m_reportInfoHasBeenSet(false),
    m_checkHasBeenSet(false),
    m_pathologyHasBeenSet(false),
    m_medDocHasBeenSet(false),
    m_diagCertHasBeenSet(false),
    m_firstPageHasBeenSet(false),
    m_indicatorHasBeenSet(false),
    m_reportTypeHasBeenSet(false)
{
}

CoreInternalOutcome Template::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PatientInfo") && !value["PatientInfo"].IsNull())
    {
        if (!value["PatientInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Template.PatientInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_patientInfo.Deserialize(value["PatientInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_patientInfoHasBeenSet = true;
    }

    if (value.HasMember("ReportInfo") && !value["ReportInfo"].IsNull())
    {
        if (!value["ReportInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Template.ReportInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_reportInfo.Deserialize(value["ReportInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_reportInfoHasBeenSet = true;
    }

    if (value.HasMember("Check") && !value["Check"].IsNull())
    {
        if (!value["Check"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Template.Check` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_check.Deserialize(value["Check"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_checkHasBeenSet = true;
    }

    if (value.HasMember("Pathology") && !value["Pathology"].IsNull())
    {
        if (!value["Pathology"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Template.Pathology` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pathology.Deserialize(value["Pathology"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pathologyHasBeenSet = true;
    }

    if (value.HasMember("MedDoc") && !value["MedDoc"].IsNull())
    {
        if (!value["MedDoc"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Template.MedDoc` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_medDoc.Deserialize(value["MedDoc"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_medDocHasBeenSet = true;
    }

    if (value.HasMember("DiagCert") && !value["DiagCert"].IsNull())
    {
        if (!value["DiagCert"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Template.DiagCert` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_diagCert.Deserialize(value["DiagCert"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_diagCertHasBeenSet = true;
    }

    if (value.HasMember("FirstPage") && !value["FirstPage"].IsNull())
    {
        if (!value["FirstPage"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Template.FirstPage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_firstPage.Deserialize(value["FirstPage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_firstPageHasBeenSet = true;
    }

    if (value.HasMember("Indicator") && !value["Indicator"].IsNull())
    {
        if (!value["Indicator"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Template.Indicator` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_indicator.Deserialize(value["Indicator"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_indicatorHasBeenSet = true;
    }

    if (value.HasMember("ReportType") && !value["ReportType"].IsNull())
    {
        if (!value["ReportType"].IsString())
        {
            return CoreInternalOutcome(Error("response `Template.ReportType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportType = string(value["ReportType"].GetString());
        m_reportTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Template::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_patientInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PatientInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_patientInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_reportInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_reportInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_checkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Check";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_check.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pathologyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pathology";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pathology.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_medDocHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MedDoc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_medDoc.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_diagCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiagCert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_diagCert.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_firstPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstPage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_firstPage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_indicatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Indicator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_indicator.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_reportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportType.c_str(), allocator).Move(), allocator);
    }

}


PatientInfo Template::GetPatientInfo() const
{
    return m_patientInfo;
}

void Template::SetPatientInfo(const PatientInfo& _patientInfo)
{
    m_patientInfo = _patientInfo;
    m_patientInfoHasBeenSet = true;
}

bool Template::PatientInfoHasBeenSet() const
{
    return m_patientInfoHasBeenSet;
}

ReportInfo Template::GetReportInfo() const
{
    return m_reportInfo;
}

void Template::SetReportInfo(const ReportInfo& _reportInfo)
{
    m_reportInfo = _reportInfo;
    m_reportInfoHasBeenSet = true;
}

bool Template::ReportInfoHasBeenSet() const
{
    return m_reportInfoHasBeenSet;
}

Check Template::GetCheck() const
{
    return m_check;
}

void Template::SetCheck(const Check& _check)
{
    m_check = _check;
    m_checkHasBeenSet = true;
}

bool Template::CheckHasBeenSet() const
{
    return m_checkHasBeenSet;
}

PathologyReport Template::GetPathology() const
{
    return m_pathology;
}

void Template::SetPathology(const PathologyReport& _pathology)
{
    m_pathology = _pathology;
    m_pathologyHasBeenSet = true;
}

bool Template::PathologyHasBeenSet() const
{
    return m_pathologyHasBeenSet;
}

MedDoc Template::GetMedDoc() const
{
    return m_medDoc;
}

void Template::SetMedDoc(const MedDoc& _medDoc)
{
    m_medDoc = _medDoc;
    m_medDocHasBeenSet = true;
}

bool Template::MedDocHasBeenSet() const
{
    return m_medDocHasBeenSet;
}

DiagCert Template::GetDiagCert() const
{
    return m_diagCert;
}

void Template::SetDiagCert(const DiagCert& _diagCert)
{
    m_diagCert = _diagCert;
    m_diagCertHasBeenSet = true;
}

bool Template::DiagCertHasBeenSet() const
{
    return m_diagCertHasBeenSet;
}

FirstPage Template::GetFirstPage() const
{
    return m_firstPage;
}

void Template::SetFirstPage(const FirstPage& _firstPage)
{
    m_firstPage = _firstPage;
    m_firstPageHasBeenSet = true;
}

bool Template::FirstPageHasBeenSet() const
{
    return m_firstPageHasBeenSet;
}

Indicator Template::GetIndicator() const
{
    return m_indicator;
}

void Template::SetIndicator(const Indicator& _indicator)
{
    m_indicator = _indicator;
    m_indicatorHasBeenSet = true;
}

bool Template::IndicatorHasBeenSet() const
{
    return m_indicatorHasBeenSet;
}

string Template::GetReportType() const
{
    return m_reportType;
}

void Template::SetReportType(const string& _reportType)
{
    m_reportType = _reportType;
    m_reportTypeHasBeenSet = true;
}

bool Template::ReportTypeHasBeenSet() const
{
    return m_reportTypeHasBeenSet;
}

