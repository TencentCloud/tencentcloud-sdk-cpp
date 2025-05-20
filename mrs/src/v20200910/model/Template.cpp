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
    m_reportTypeHasBeenSet(false),
    m_medicalRecordInfoHasBeenSet(false),
    m_hospitalizationHasBeenSet(false),
    m_surgeryHasBeenSet(false),
    m_electrocardiogramHasBeenSet(false),
    m_endoscopyHasBeenSet(false),
    m_prescriptionHasBeenSet(false),
    m_vaccineCertificateHasBeenSet(false),
    m_ocrTextHasBeenSet(false),
    m_ocrResultHasBeenSet(false),
    m_reportTypeDescHasBeenSet(false),
    m_pathologyV2HasBeenSet(false),
    m_c14HasBeenSet(false),
    m_exameHasBeenSet(false),
    m_medDocV2HasBeenSet(false),
    m_indicatorV3HasBeenSet(false),
    m_covidHasBeenSet(false),
    m_maternityHasBeenSet(false),
    m_eyeHasBeenSet(false),
    m_birthCertHasBeenSet(false),
    m_timelineHasBeenSet(false),
    m_endoscopyV2HasBeenSet(false)
{
}

CoreInternalOutcome Template::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PatientInfo") && !value["PatientInfo"].IsNull())
    {
        if (!value["PatientInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Template.PatientInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `Template.ReportInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `Template.Check` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `Template.Pathology` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `Template.MedDoc` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `Template.DiagCert` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `Template.FirstPage` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `Template.Indicator` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `Template.ReportType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportType = string(value["ReportType"].GetString());
        m_reportTypeHasBeenSet = true;
    }

    if (value.HasMember("MedicalRecordInfo") && !value["MedicalRecordInfo"].IsNull())
    {
        if (!value["MedicalRecordInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Template.MedicalRecordInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_medicalRecordInfo.Deserialize(value["MedicalRecordInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_medicalRecordInfoHasBeenSet = true;
    }

    if (value.HasMember("Hospitalization") && !value["Hospitalization"].IsNull())
    {
        if (!value["Hospitalization"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Template.Hospitalization` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hospitalization.Deserialize(value["Hospitalization"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hospitalizationHasBeenSet = true;
    }

    if (value.HasMember("Surgery") && !value["Surgery"].IsNull())
    {
        if (!value["Surgery"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Template.Surgery` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_surgery.Deserialize(value["Surgery"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_surgeryHasBeenSet = true;
    }

    if (value.HasMember("Electrocardiogram") && !value["Electrocardiogram"].IsNull())
    {
        if (!value["Electrocardiogram"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Template.Electrocardiogram` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_electrocardiogram.Deserialize(value["Electrocardiogram"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_electrocardiogramHasBeenSet = true;
    }

    if (value.HasMember("Endoscopy") && !value["Endoscopy"].IsNull())
    {
        if (!value["Endoscopy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Template.Endoscopy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_endoscopy.Deserialize(value["Endoscopy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_endoscopyHasBeenSet = true;
    }

    if (value.HasMember("Prescription") && !value["Prescription"].IsNull())
    {
        if (!value["Prescription"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Template.Prescription` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_prescription.Deserialize(value["Prescription"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_prescriptionHasBeenSet = true;
    }

    if (value.HasMember("VaccineCertificate") && !value["VaccineCertificate"].IsNull())
    {
        if (!value["VaccineCertificate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Template.VaccineCertificate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vaccineCertificate.Deserialize(value["VaccineCertificate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vaccineCertificateHasBeenSet = true;
    }

    if (value.HasMember("OcrText") && !value["OcrText"].IsNull())
    {
        if (!value["OcrText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Template.OcrText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocrText = string(value["OcrText"].GetString());
        m_ocrTextHasBeenSet = true;
    }

    if (value.HasMember("OcrResult") && !value["OcrResult"].IsNull())
    {
        if (!value["OcrResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Template.OcrResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ocrResult = string(value["OcrResult"].GetString());
        m_ocrResultHasBeenSet = true;
    }

    if (value.HasMember("ReportTypeDesc") && !value["ReportTypeDesc"].IsNull())
    {
        if (!value["ReportTypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Template.ReportTypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportTypeDesc = string(value["ReportTypeDesc"].GetString());
        m_reportTypeDescHasBeenSet = true;
    }

    if (value.HasMember("PathologyV2") && !value["PathologyV2"].IsNull())
    {
        if (!value["PathologyV2"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Template.PathologyV2` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pathologyV2.Deserialize(value["PathologyV2"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pathologyV2HasBeenSet = true;
    }

    if (value.HasMember("C14") && !value["C14"].IsNull())
    {
        if (!value["C14"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Template.C14` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_c14.Deserialize(value["C14"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_c14HasBeenSet = true;
    }

    if (value.HasMember("Exame") && !value["Exame"].IsNull())
    {
        if (!value["Exame"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Template.Exame` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_exame.Deserialize(value["Exame"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_exameHasBeenSet = true;
    }

    if (value.HasMember("MedDocV2") && !value["MedDocV2"].IsNull())
    {
        if (!value["MedDocV2"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Template.MedDocV2` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_medDocV2.Deserialize(value["MedDocV2"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_medDocV2HasBeenSet = true;
    }

    if (value.HasMember("IndicatorV3") && !value["IndicatorV3"].IsNull())
    {
        if (!value["IndicatorV3"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Template.IndicatorV3` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_indicatorV3.Deserialize(value["IndicatorV3"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_indicatorV3HasBeenSet = true;
    }

    if (value.HasMember("Covid") && !value["Covid"].IsNull())
    {
        if (!value["Covid"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Template.Covid` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_covid.Deserialize(value["Covid"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_covidHasBeenSet = true;
    }

    if (value.HasMember("Maternity") && !value["Maternity"].IsNull())
    {
        if (!value["Maternity"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Template.Maternity` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_maternity.Deserialize(value["Maternity"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_maternityHasBeenSet = true;
    }

    if (value.HasMember("Eye") && !value["Eye"].IsNull())
    {
        if (!value["Eye"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Template.Eye` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eye.Deserialize(value["Eye"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eyeHasBeenSet = true;
    }

    if (value.HasMember("BirthCert") && !value["BirthCert"].IsNull())
    {
        if (!value["BirthCert"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Template.BirthCert` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_birthCert.Deserialize(value["BirthCert"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_birthCertHasBeenSet = true;
    }

    if (value.HasMember("Timeline") && !value["Timeline"].IsNull())
    {
        if (!value["Timeline"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Template.Timeline` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_timeline.Deserialize(value["Timeline"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_timelineHasBeenSet = true;
    }

    if (value.HasMember("EndoscopyV2") && !value["EndoscopyV2"].IsNull())
    {
        if (!value["EndoscopyV2"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Template.EndoscopyV2` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_endoscopyV2.Deserialize(value["EndoscopyV2"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_endoscopyV2HasBeenSet = true;
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

    if (m_medicalRecordInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MedicalRecordInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_medicalRecordInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hospitalizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hospitalization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hospitalization.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_surgeryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Surgery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_surgery.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_electrocardiogramHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Electrocardiogram";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_electrocardiogram.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_endoscopyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endoscopy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_endoscopy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_prescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_prescription.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vaccineCertificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaccineCertificate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vaccineCertificate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ocrTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ocrText.c_str(), allocator).Move(), allocator);
    }

    if (m_ocrResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ocrResult.c_str(), allocator).Move(), allocator);
    }

    if (m_reportTypeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportTypeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportTypeDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_pathologyV2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathologyV2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pathologyV2.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_c14HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "C14";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_c14.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_exameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exame";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_exame.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_medDocV2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MedDocV2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_medDocV2.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_indicatorV3HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndicatorV3";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_indicatorV3.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_covidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Covid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_covid.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_maternityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Maternity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_maternity.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eyeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Eye";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eye.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_birthCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BirthCert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_birthCert.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_timelineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timeline.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_endoscopyV2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndoscopyV2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_endoscopyV2.ToJsonObject(value[key.c_str()], allocator);
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

MedicalRecordInfo Template::GetMedicalRecordInfo() const
{
    return m_medicalRecordInfo;
}

void Template::SetMedicalRecordInfo(const MedicalRecordInfo& _medicalRecordInfo)
{
    m_medicalRecordInfo = _medicalRecordInfo;
    m_medicalRecordInfoHasBeenSet = true;
}

bool Template::MedicalRecordInfoHasBeenSet() const
{
    return m_medicalRecordInfoHasBeenSet;
}

Hospitalization Template::GetHospitalization() const
{
    return m_hospitalization;
}

void Template::SetHospitalization(const Hospitalization& _hospitalization)
{
    m_hospitalization = _hospitalization;
    m_hospitalizationHasBeenSet = true;
}

bool Template::HospitalizationHasBeenSet() const
{
    return m_hospitalizationHasBeenSet;
}

Surgery Template::GetSurgery() const
{
    return m_surgery;
}

void Template::SetSurgery(const Surgery& _surgery)
{
    m_surgery = _surgery;
    m_surgeryHasBeenSet = true;
}

bool Template::SurgeryHasBeenSet() const
{
    return m_surgeryHasBeenSet;
}

Electrocardiogram Template::GetElectrocardiogram() const
{
    return m_electrocardiogram;
}

void Template::SetElectrocardiogram(const Electrocardiogram& _electrocardiogram)
{
    m_electrocardiogram = _electrocardiogram;
    m_electrocardiogramHasBeenSet = true;
}

bool Template::ElectrocardiogramHasBeenSet() const
{
    return m_electrocardiogramHasBeenSet;
}

Endoscopy Template::GetEndoscopy() const
{
    return m_endoscopy;
}

void Template::SetEndoscopy(const Endoscopy& _endoscopy)
{
    m_endoscopy = _endoscopy;
    m_endoscopyHasBeenSet = true;
}

bool Template::EndoscopyHasBeenSet() const
{
    return m_endoscopyHasBeenSet;
}

Prescription Template::GetPrescription() const
{
    return m_prescription;
}

void Template::SetPrescription(const Prescription& _prescription)
{
    m_prescription = _prescription;
    m_prescriptionHasBeenSet = true;
}

bool Template::PrescriptionHasBeenSet() const
{
    return m_prescriptionHasBeenSet;
}

VaccineCertificate Template::GetVaccineCertificate() const
{
    return m_vaccineCertificate;
}

void Template::SetVaccineCertificate(const VaccineCertificate& _vaccineCertificate)
{
    m_vaccineCertificate = _vaccineCertificate;
    m_vaccineCertificateHasBeenSet = true;
}

bool Template::VaccineCertificateHasBeenSet() const
{
    return m_vaccineCertificateHasBeenSet;
}

string Template::GetOcrText() const
{
    return m_ocrText;
}

void Template::SetOcrText(const string& _ocrText)
{
    m_ocrText = _ocrText;
    m_ocrTextHasBeenSet = true;
}

bool Template::OcrTextHasBeenSet() const
{
    return m_ocrTextHasBeenSet;
}

string Template::GetOcrResult() const
{
    return m_ocrResult;
}

void Template::SetOcrResult(const string& _ocrResult)
{
    m_ocrResult = _ocrResult;
    m_ocrResultHasBeenSet = true;
}

bool Template::OcrResultHasBeenSet() const
{
    return m_ocrResultHasBeenSet;
}

string Template::GetReportTypeDesc() const
{
    return m_reportTypeDesc;
}

void Template::SetReportTypeDesc(const string& _reportTypeDesc)
{
    m_reportTypeDesc = _reportTypeDesc;
    m_reportTypeDescHasBeenSet = true;
}

bool Template::ReportTypeDescHasBeenSet() const
{
    return m_reportTypeDescHasBeenSet;
}

PathologyV2 Template::GetPathologyV2() const
{
    return m_pathologyV2;
}

void Template::SetPathologyV2(const PathologyV2& _pathologyV2)
{
    m_pathologyV2 = _pathologyV2;
    m_pathologyV2HasBeenSet = true;
}

bool Template::PathologyV2HasBeenSet() const
{
    return m_pathologyV2HasBeenSet;
}

Indicator Template::GetC14() const
{
    return m_c14;
}

void Template::SetC14(const Indicator& _c14)
{
    m_c14 = _c14;
    m_c14HasBeenSet = true;
}

bool Template::C14HasBeenSet() const
{
    return m_c14HasBeenSet;
}

Exame Template::GetExame() const
{
    return m_exame;
}

void Template::SetExame(const Exame& _exame)
{
    m_exame = _exame;
    m_exameHasBeenSet = true;
}

bool Template::ExameHasBeenSet() const
{
    return m_exameHasBeenSet;
}

DischargeInfoBlock Template::GetMedDocV2() const
{
    return m_medDocV2;
}

void Template::SetMedDocV2(const DischargeInfoBlock& _medDocV2)
{
    m_medDocV2 = _medDocV2;
    m_medDocV2HasBeenSet = true;
}

bool Template::MedDocV2HasBeenSet() const
{
    return m_medDocV2HasBeenSet;
}

IndicatorV3 Template::GetIndicatorV3() const
{
    return m_indicatorV3;
}

void Template::SetIndicatorV3(const IndicatorV3& _indicatorV3)
{
    m_indicatorV3 = _indicatorV3;
    m_indicatorV3HasBeenSet = true;
}

bool Template::IndicatorV3HasBeenSet() const
{
    return m_indicatorV3HasBeenSet;
}

CovidItemsInfo Template::GetCovid() const
{
    return m_covid;
}

void Template::SetCovid(const CovidItemsInfo& _covid)
{
    m_covid = _covid;
    m_covidHasBeenSet = true;
}

bool Template::CovidHasBeenSet() const
{
    return m_covidHasBeenSet;
}

Maternity Template::GetMaternity() const
{
    return m_maternity;
}

void Template::SetMaternity(const Maternity& _maternity)
{
    m_maternity = _maternity;
    m_maternityHasBeenSet = true;
}

bool Template::MaternityHasBeenSet() const
{
    return m_maternityHasBeenSet;
}

EyeItemsInfo Template::GetEye() const
{
    return m_eye;
}

void Template::SetEye(const EyeItemsInfo& _eye)
{
    m_eye = _eye;
    m_eyeHasBeenSet = true;
}

bool Template::EyeHasBeenSet() const
{
    return m_eyeHasBeenSet;
}

BirthCert Template::GetBirthCert() const
{
    return m_birthCert;
}

void Template::SetBirthCert(const BirthCert& _birthCert)
{
    m_birthCert = _birthCert;
    m_birthCertHasBeenSet = true;
}

bool Template::BirthCertHasBeenSet() const
{
    return m_birthCertHasBeenSet;
}

TimelineInformation Template::GetTimeline() const
{
    return m_timeline;
}

void Template::SetTimeline(const TimelineInformation& _timeline)
{
    m_timeline = _timeline;
    m_timelineHasBeenSet = true;
}

bool Template::TimelineHasBeenSet() const
{
    return m_timelineHasBeenSet;
}

Check Template::GetEndoscopyV2() const
{
    return m_endoscopyV2;
}

void Template::SetEndoscopyV2(const Check& _endoscopyV2)
{
    m_endoscopyV2 = _endoscopyV2;
    m_endoscopyV2HasBeenSet = true;
}

bool Template::EndoscopyV2HasBeenSet() const
{
    return m_endoscopyV2HasBeenSet;
}

