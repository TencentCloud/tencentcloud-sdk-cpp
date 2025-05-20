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

#include <tencentcloud/mrs/v20200910/model/Block.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Block::Block() :
    m_checkHasBeenSet(false),
    m_pathologyHasBeenSet(false),
    m_medDocHasBeenSet(false),
    m_diagCertHasBeenSet(false),
    m_firstPageHasBeenSet(false),
    m_indicatorHasBeenSet(false),
    m_medicalRecordInfoHasBeenSet(false),
    m_hospitalizationHasBeenSet(false),
    m_surgeryHasBeenSet(false),
    m_prescriptionHasBeenSet(false),
    m_vaccineCertificateHasBeenSet(false),
    m_electrocardiogramHasBeenSet(false),
    m_pathologyV2HasBeenSet(false),
    m_endoscopyHasBeenSet(false),
    m_c14HasBeenSet(false),
    m_exameHasBeenSet(false),
    m_medDocV2HasBeenSet(false),
    m_indicatorV3HasBeenSet(false),
    m_maternityHasBeenSet(false),
    m_timelineHasBeenSet(false),
    m_covidHasBeenSet(false),
    m_eyeHasBeenSet(false),
    m_birthCertHasBeenSet(false),
    m_textTypeListBlocksHasBeenSet(false),
    m_physicalExaminationHasBeenSet(false),
    m_endoscopyV2HasBeenSet(false)
{
}

CoreInternalOutcome Block::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Check") && !value["Check"].IsNull())
    {
        if (!value["Check"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Block.Check` is not array type"));

        const rapidjson::Value &tmpValue = value["Check"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Check item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_check.push_back(item);
        }
        m_checkHasBeenSet = true;
    }

    if (value.HasMember("Pathology") && !value["Pathology"].IsNull())
    {
        if (!value["Pathology"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Block.Pathology` is not array type"));

        const rapidjson::Value &tmpValue = value["Pathology"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PathologyReport item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pathology.push_back(item);
        }
        m_pathologyHasBeenSet = true;
    }

    if (value.HasMember("MedDoc") && !value["MedDoc"].IsNull())
    {
        if (!value["MedDoc"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Block.MedDoc` is not array type"));

        const rapidjson::Value &tmpValue = value["MedDoc"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MedDoc item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_medDoc.push_back(item);
        }
        m_medDocHasBeenSet = true;
    }

    if (value.HasMember("DiagCert") && !value["DiagCert"].IsNull())
    {
        if (!value["DiagCert"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Block.DiagCert` is not array type"));

        const rapidjson::Value &tmpValue = value["DiagCert"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DiagCert item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_diagCert.push_back(item);
        }
        m_diagCertHasBeenSet = true;
    }

    if (value.HasMember("FirstPage") && !value["FirstPage"].IsNull())
    {
        if (!value["FirstPage"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Block.FirstPage` is not array type"));

        const rapidjson::Value &tmpValue = value["FirstPage"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FirstPage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_firstPage.push_back(item);
        }
        m_firstPageHasBeenSet = true;
    }

    if (value.HasMember("Indicator") && !value["Indicator"].IsNull())
    {
        if (!value["Indicator"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Block.Indicator` is not array type"));

        const rapidjson::Value &tmpValue = value["Indicator"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Indicator item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_indicator.push_back(item);
        }
        m_indicatorHasBeenSet = true;
    }

    if (value.HasMember("MedicalRecordInfo") && !value["MedicalRecordInfo"].IsNull())
    {
        if (!value["MedicalRecordInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Block.MedicalRecordInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["MedicalRecordInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MedicalRecordInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_medicalRecordInfo.push_back(item);
        }
        m_medicalRecordInfoHasBeenSet = true;
    }

    if (value.HasMember("Hospitalization") && !value["Hospitalization"].IsNull())
    {
        if (!value["Hospitalization"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Block.Hospitalization` is not array type"));

        const rapidjson::Value &tmpValue = value["Hospitalization"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Hospitalization item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_hospitalization.push_back(item);
        }
        m_hospitalizationHasBeenSet = true;
    }

    if (value.HasMember("Surgery") && !value["Surgery"].IsNull())
    {
        if (!value["Surgery"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Block.Surgery` is not array type"));

        const rapidjson::Value &tmpValue = value["Surgery"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Surgery item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_surgery.push_back(item);
        }
        m_surgeryHasBeenSet = true;
    }

    if (value.HasMember("Prescription") && !value["Prescription"].IsNull())
    {
        if (!value["Prescription"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Block.Prescription` is not array type"));

        const rapidjson::Value &tmpValue = value["Prescription"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Prescription item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_prescription.push_back(item);
        }
        m_prescriptionHasBeenSet = true;
    }

    if (value.HasMember("VaccineCertificate") && !value["VaccineCertificate"].IsNull())
    {
        if (!value["VaccineCertificate"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Block.VaccineCertificate` is not array type"));

        const rapidjson::Value &tmpValue = value["VaccineCertificate"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VaccineCertificate item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vaccineCertificate.push_back(item);
        }
        m_vaccineCertificateHasBeenSet = true;
    }

    if (value.HasMember("Electrocardiogram") && !value["Electrocardiogram"].IsNull())
    {
        if (!value["Electrocardiogram"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Block.Electrocardiogram` is not array type"));

        const rapidjson::Value &tmpValue = value["Electrocardiogram"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Electrocardiogram item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_electrocardiogram.push_back(item);
        }
        m_electrocardiogramHasBeenSet = true;
    }

    if (value.HasMember("PathologyV2") && !value["PathologyV2"].IsNull())
    {
        if (!value["PathologyV2"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Block.PathologyV2` is not array type"));

        const rapidjson::Value &tmpValue = value["PathologyV2"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PathologyV2 item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pathologyV2.push_back(item);
        }
        m_pathologyV2HasBeenSet = true;
    }

    if (value.HasMember("Endoscopy") && !value["Endoscopy"].IsNull())
    {
        if (!value["Endoscopy"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Block.Endoscopy` is not array type"));

        const rapidjson::Value &tmpValue = value["Endoscopy"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Endoscopy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_endoscopy.push_back(item);
        }
        m_endoscopyHasBeenSet = true;
    }

    if (value.HasMember("C14") && !value["C14"].IsNull())
    {
        if (!value["C14"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Block.C14` is not array type"));

        const rapidjson::Value &tmpValue = value["C14"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Indicator item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_c14.push_back(item);
        }
        m_c14HasBeenSet = true;
    }

    if (value.HasMember("Exame") && !value["Exame"].IsNull())
    {
        if (!value["Exame"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Block.Exame` is not array type"));

        const rapidjson::Value &tmpValue = value["Exame"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Exame item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_exame.push_back(item);
        }
        m_exameHasBeenSet = true;
    }

    if (value.HasMember("MedDocV2") && !value["MedDocV2"].IsNull())
    {
        if (!value["MedDocV2"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Block.MedDocV2` is not array type"));

        const rapidjson::Value &tmpValue = value["MedDocV2"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DischargeInfoBlock item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_medDocV2.push_back(item);
        }
        m_medDocV2HasBeenSet = true;
    }

    if (value.HasMember("IndicatorV3") && !value["IndicatorV3"].IsNull())
    {
        if (!value["IndicatorV3"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Block.IndicatorV3` is not array type"));

        const rapidjson::Value &tmpValue = value["IndicatorV3"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IndicatorV3 item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_indicatorV3.push_back(item);
        }
        m_indicatorV3HasBeenSet = true;
    }

    if (value.HasMember("Maternity") && !value["Maternity"].IsNull())
    {
        if (!value["Maternity"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Block.Maternity` is not array type"));

        const rapidjson::Value &tmpValue = value["Maternity"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Maternity item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_maternity.push_back(item);
        }
        m_maternityHasBeenSet = true;
    }

    if (value.HasMember("Timeline") && !value["Timeline"].IsNull())
    {
        if (!value["Timeline"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Block.Timeline` is not array type"));

        const rapidjson::Value &tmpValue = value["Timeline"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TimelineInformation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_timeline.push_back(item);
        }
        m_timelineHasBeenSet = true;
    }

    if (value.HasMember("Covid") && !value["Covid"].IsNull())
    {
        if (!value["Covid"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Block.Covid` is not array type"));

        const rapidjson::Value &tmpValue = value["Covid"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CovidItemsInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_covid.push_back(item);
        }
        m_covidHasBeenSet = true;
    }

    if (value.HasMember("Eye") && !value["Eye"].IsNull())
    {
        if (!value["Eye"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Block.Eye` is not array type"));

        const rapidjson::Value &tmpValue = value["Eye"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EyeItemsInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eye.push_back(item);
        }
        m_eyeHasBeenSet = true;
    }

    if (value.HasMember("BirthCert") && !value["BirthCert"].IsNull())
    {
        if (!value["BirthCert"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Block.BirthCert` is not array type"));

        const rapidjson::Value &tmpValue = value["BirthCert"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BirthCert item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_birthCert.push_back(item);
        }
        m_birthCertHasBeenSet = true;
    }

    if (value.HasMember("TextTypeListBlocks") && !value["TextTypeListBlocks"].IsNull())
    {
        if (!value["TextTypeListBlocks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Block.TextTypeListBlocks` is not array type"));

        const rapidjson::Value &tmpValue = value["TextTypeListBlocks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TextTypeListBlock item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_textTypeListBlocks.push_back(item);
        }
        m_textTypeListBlocksHasBeenSet = true;
    }

    if (value.HasMember("PhysicalExamination") && !value["PhysicalExamination"].IsNull())
    {
        if (!value["PhysicalExamination"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Block.PhysicalExamination` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_physicalExamination.Deserialize(value["PhysicalExamination"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_physicalExaminationHasBeenSet = true;
    }

    if (value.HasMember("EndoscopyV2") && !value["EndoscopyV2"].IsNull())
    {
        if (!value["EndoscopyV2"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Block.EndoscopyV2` is not array type"));

        const rapidjson::Value &tmpValue = value["EndoscopyV2"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Check item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_endoscopyV2.push_back(item);
        }
        m_endoscopyV2HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Block::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_checkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Check";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_check.begin(); itr != m_check.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pathologyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pathology";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pathology.begin(); itr != m_pathology.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_medDocHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MedDoc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_medDoc.begin(); itr != m_medDoc.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_diagCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiagCert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_diagCert.begin(); itr != m_diagCert.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_firstPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstPage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_firstPage.begin(); itr != m_firstPage.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_indicatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Indicator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_indicator.begin(); itr != m_indicator.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_medicalRecordInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MedicalRecordInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_medicalRecordInfo.begin(); itr != m_medicalRecordInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_hospitalizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hospitalization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hospitalization.begin(); itr != m_hospitalization.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_surgeryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Surgery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_surgery.begin(); itr != m_surgery.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_prescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_prescription.begin(); itr != m_prescription.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vaccineCertificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaccineCertificate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vaccineCertificate.begin(); itr != m_vaccineCertificate.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_electrocardiogramHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Electrocardiogram";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_electrocardiogram.begin(); itr != m_electrocardiogram.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pathologyV2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathologyV2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pathologyV2.begin(); itr != m_pathologyV2.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_endoscopyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endoscopy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_endoscopy.begin(); itr != m_endoscopy.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_c14HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "C14";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_c14.begin(); itr != m_c14.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_exameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exame";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_exame.begin(); itr != m_exame.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_medDocV2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MedDocV2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_medDocV2.begin(); itr != m_medDocV2.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_indicatorV3HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndicatorV3";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_indicatorV3.begin(); itr != m_indicatorV3.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_maternityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Maternity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_maternity.begin(); itr != m_maternity.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_timelineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_timeline.begin(); itr != m_timeline.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_covidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Covid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_covid.begin(); itr != m_covid.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_eyeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Eye";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eye.begin(); itr != m_eye.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_birthCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BirthCert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_birthCert.begin(); itr != m_birthCert.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_textTypeListBlocksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextTypeListBlocks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_textTypeListBlocks.begin(); itr != m_textTypeListBlocks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_physicalExaminationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhysicalExamination";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_physicalExamination.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_endoscopyV2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndoscopyV2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_endoscopyV2.begin(); itr != m_endoscopyV2.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<Check> Block::GetCheck() const
{
    return m_check;
}

void Block::SetCheck(const vector<Check>& _check)
{
    m_check = _check;
    m_checkHasBeenSet = true;
}

bool Block::CheckHasBeenSet() const
{
    return m_checkHasBeenSet;
}

vector<PathologyReport> Block::GetPathology() const
{
    return m_pathology;
}

void Block::SetPathology(const vector<PathologyReport>& _pathology)
{
    m_pathology = _pathology;
    m_pathologyHasBeenSet = true;
}

bool Block::PathologyHasBeenSet() const
{
    return m_pathologyHasBeenSet;
}

vector<MedDoc> Block::GetMedDoc() const
{
    return m_medDoc;
}

void Block::SetMedDoc(const vector<MedDoc>& _medDoc)
{
    m_medDoc = _medDoc;
    m_medDocHasBeenSet = true;
}

bool Block::MedDocHasBeenSet() const
{
    return m_medDocHasBeenSet;
}

vector<DiagCert> Block::GetDiagCert() const
{
    return m_diagCert;
}

void Block::SetDiagCert(const vector<DiagCert>& _diagCert)
{
    m_diagCert = _diagCert;
    m_diagCertHasBeenSet = true;
}

bool Block::DiagCertHasBeenSet() const
{
    return m_diagCertHasBeenSet;
}

vector<FirstPage> Block::GetFirstPage() const
{
    return m_firstPage;
}

void Block::SetFirstPage(const vector<FirstPage>& _firstPage)
{
    m_firstPage = _firstPage;
    m_firstPageHasBeenSet = true;
}

bool Block::FirstPageHasBeenSet() const
{
    return m_firstPageHasBeenSet;
}

vector<Indicator> Block::GetIndicator() const
{
    return m_indicator;
}

void Block::SetIndicator(const vector<Indicator>& _indicator)
{
    m_indicator = _indicator;
    m_indicatorHasBeenSet = true;
}

bool Block::IndicatorHasBeenSet() const
{
    return m_indicatorHasBeenSet;
}

vector<MedicalRecordInfo> Block::GetMedicalRecordInfo() const
{
    return m_medicalRecordInfo;
}

void Block::SetMedicalRecordInfo(const vector<MedicalRecordInfo>& _medicalRecordInfo)
{
    m_medicalRecordInfo = _medicalRecordInfo;
    m_medicalRecordInfoHasBeenSet = true;
}

bool Block::MedicalRecordInfoHasBeenSet() const
{
    return m_medicalRecordInfoHasBeenSet;
}

vector<Hospitalization> Block::GetHospitalization() const
{
    return m_hospitalization;
}

void Block::SetHospitalization(const vector<Hospitalization>& _hospitalization)
{
    m_hospitalization = _hospitalization;
    m_hospitalizationHasBeenSet = true;
}

bool Block::HospitalizationHasBeenSet() const
{
    return m_hospitalizationHasBeenSet;
}

vector<Surgery> Block::GetSurgery() const
{
    return m_surgery;
}

void Block::SetSurgery(const vector<Surgery>& _surgery)
{
    m_surgery = _surgery;
    m_surgeryHasBeenSet = true;
}

bool Block::SurgeryHasBeenSet() const
{
    return m_surgeryHasBeenSet;
}

vector<Prescription> Block::GetPrescription() const
{
    return m_prescription;
}

void Block::SetPrescription(const vector<Prescription>& _prescription)
{
    m_prescription = _prescription;
    m_prescriptionHasBeenSet = true;
}

bool Block::PrescriptionHasBeenSet() const
{
    return m_prescriptionHasBeenSet;
}

vector<VaccineCertificate> Block::GetVaccineCertificate() const
{
    return m_vaccineCertificate;
}

void Block::SetVaccineCertificate(const vector<VaccineCertificate>& _vaccineCertificate)
{
    m_vaccineCertificate = _vaccineCertificate;
    m_vaccineCertificateHasBeenSet = true;
}

bool Block::VaccineCertificateHasBeenSet() const
{
    return m_vaccineCertificateHasBeenSet;
}

vector<Electrocardiogram> Block::GetElectrocardiogram() const
{
    return m_electrocardiogram;
}

void Block::SetElectrocardiogram(const vector<Electrocardiogram>& _electrocardiogram)
{
    m_electrocardiogram = _electrocardiogram;
    m_electrocardiogramHasBeenSet = true;
}

bool Block::ElectrocardiogramHasBeenSet() const
{
    return m_electrocardiogramHasBeenSet;
}

vector<PathologyV2> Block::GetPathologyV2() const
{
    return m_pathologyV2;
}

void Block::SetPathologyV2(const vector<PathologyV2>& _pathologyV2)
{
    m_pathologyV2 = _pathologyV2;
    m_pathologyV2HasBeenSet = true;
}

bool Block::PathologyV2HasBeenSet() const
{
    return m_pathologyV2HasBeenSet;
}

vector<Endoscopy> Block::GetEndoscopy() const
{
    return m_endoscopy;
}

void Block::SetEndoscopy(const vector<Endoscopy>& _endoscopy)
{
    m_endoscopy = _endoscopy;
    m_endoscopyHasBeenSet = true;
}

bool Block::EndoscopyHasBeenSet() const
{
    return m_endoscopyHasBeenSet;
}

vector<Indicator> Block::GetC14() const
{
    return m_c14;
}

void Block::SetC14(const vector<Indicator>& _c14)
{
    m_c14 = _c14;
    m_c14HasBeenSet = true;
}

bool Block::C14HasBeenSet() const
{
    return m_c14HasBeenSet;
}

vector<Exame> Block::GetExame() const
{
    return m_exame;
}

void Block::SetExame(const vector<Exame>& _exame)
{
    m_exame = _exame;
    m_exameHasBeenSet = true;
}

bool Block::ExameHasBeenSet() const
{
    return m_exameHasBeenSet;
}

vector<DischargeInfoBlock> Block::GetMedDocV2() const
{
    return m_medDocV2;
}

void Block::SetMedDocV2(const vector<DischargeInfoBlock>& _medDocV2)
{
    m_medDocV2 = _medDocV2;
    m_medDocV2HasBeenSet = true;
}

bool Block::MedDocV2HasBeenSet() const
{
    return m_medDocV2HasBeenSet;
}

vector<IndicatorV3> Block::GetIndicatorV3() const
{
    return m_indicatorV3;
}

void Block::SetIndicatorV3(const vector<IndicatorV3>& _indicatorV3)
{
    m_indicatorV3 = _indicatorV3;
    m_indicatorV3HasBeenSet = true;
}

bool Block::IndicatorV3HasBeenSet() const
{
    return m_indicatorV3HasBeenSet;
}

vector<Maternity> Block::GetMaternity() const
{
    return m_maternity;
}

void Block::SetMaternity(const vector<Maternity>& _maternity)
{
    m_maternity = _maternity;
    m_maternityHasBeenSet = true;
}

bool Block::MaternityHasBeenSet() const
{
    return m_maternityHasBeenSet;
}

vector<TimelineInformation> Block::GetTimeline() const
{
    return m_timeline;
}

void Block::SetTimeline(const vector<TimelineInformation>& _timeline)
{
    m_timeline = _timeline;
    m_timelineHasBeenSet = true;
}

bool Block::TimelineHasBeenSet() const
{
    return m_timelineHasBeenSet;
}

vector<CovidItemsInfo> Block::GetCovid() const
{
    return m_covid;
}

void Block::SetCovid(const vector<CovidItemsInfo>& _covid)
{
    m_covid = _covid;
    m_covidHasBeenSet = true;
}

bool Block::CovidHasBeenSet() const
{
    return m_covidHasBeenSet;
}

vector<EyeItemsInfo> Block::GetEye() const
{
    return m_eye;
}

void Block::SetEye(const vector<EyeItemsInfo>& _eye)
{
    m_eye = _eye;
    m_eyeHasBeenSet = true;
}

bool Block::EyeHasBeenSet() const
{
    return m_eyeHasBeenSet;
}

vector<BirthCert> Block::GetBirthCert() const
{
    return m_birthCert;
}

void Block::SetBirthCert(const vector<BirthCert>& _birthCert)
{
    m_birthCert = _birthCert;
    m_birthCertHasBeenSet = true;
}

bool Block::BirthCertHasBeenSet() const
{
    return m_birthCertHasBeenSet;
}

vector<TextTypeListBlock> Block::GetTextTypeListBlocks() const
{
    return m_textTypeListBlocks;
}

void Block::SetTextTypeListBlocks(const vector<TextTypeListBlock>& _textTypeListBlocks)
{
    m_textTypeListBlocks = _textTypeListBlocks;
    m_textTypeListBlocksHasBeenSet = true;
}

bool Block::TextTypeListBlocksHasBeenSet() const
{
    return m_textTypeListBlocksHasBeenSet;
}

PhysicalExaminationV1 Block::GetPhysicalExamination() const
{
    return m_physicalExamination;
}

void Block::SetPhysicalExamination(const PhysicalExaminationV1& _physicalExamination)
{
    m_physicalExamination = _physicalExamination;
    m_physicalExaminationHasBeenSet = true;
}

bool Block::PhysicalExaminationHasBeenSet() const
{
    return m_physicalExaminationHasBeenSet;
}

vector<Check> Block::GetEndoscopyV2() const
{
    return m_endoscopyV2;
}

void Block::SetEndoscopyV2(const vector<Check>& _endoscopyV2)
{
    m_endoscopyV2 = _endoscopyV2;
    m_endoscopyV2HasBeenSet = true;
}

bool Block::EndoscopyV2HasBeenSet() const
{
    return m_endoscopyV2HasBeenSet;
}

