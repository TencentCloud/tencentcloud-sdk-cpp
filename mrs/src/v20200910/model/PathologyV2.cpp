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

#include <tencentcloud/mrs/v20200910/model/PathologyV2.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

PathologyV2::PathologyV2() :
    m_pathologicalReportTypeHasBeenSet(false),
    m_descHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_reportTextHasBeenSet(false),
    m_lymphTotalHasBeenSet(false),
    m_lymphNodesHasBeenSet(false),
    m_ihcHasBeenSet(false),
    m_clinicalHasBeenSet(false),
    m_precancerHasBeenSet(false),
    m_malignantHasBeenSet(false),
    m_benigntumorHasBeenSet(false),
    m_sampleTypeHasBeenSet(false),
    m_lymphSizeHasBeenSet(false),
    m_molecularHasBeenSet(false),
    m_pageHasBeenSet(false)
{
}

CoreInternalOutcome PathologyV2::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PathologicalReportType") && !value["PathologicalReportType"].IsNull())
    {
        if (!value["PathologicalReportType"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PathologyV2.PathologicalReportType` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pathologicalReportType.Deserialize(value["PathologicalReportType"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pathologicalReportTypeHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PathologyV2.Desc` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_desc.Deserialize(value["Desc"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_descHasBeenSet = true;
    }

    if (value.HasMember("Summary") && !value["Summary"].IsNull())
    {
        if (!value["Summary"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PathologyV2.Summary` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_summary.Deserialize(value["Summary"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_summaryHasBeenSet = true;
    }

    if (value.HasMember("ReportText") && !value["ReportText"].IsNull())
    {
        if (!value["ReportText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathologyV2.ReportText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportText = string(value["ReportText"].GetString());
        m_reportTextHasBeenSet = true;
    }

    if (value.HasMember("LymphTotal") && !value["LymphTotal"].IsNull())
    {
        if (!value["LymphTotal"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PathologyV2.LymphTotal` is not array type"));

        const rapidjson::Value &tmpValue = value["LymphTotal"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LymphTotal item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_lymphTotal.push_back(item);
        }
        m_lymphTotalHasBeenSet = true;
    }

    if (value.HasMember("LymphNodes") && !value["LymphNodes"].IsNull())
    {
        if (!value["LymphNodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PathologyV2.LymphNodes` is not array type"));

        const rapidjson::Value &tmpValue = value["LymphNodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LymphNode item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_lymphNodes.push_back(item);
        }
        m_lymphNodesHasBeenSet = true;
    }

    if (value.HasMember("Ihc") && !value["Ihc"].IsNull())
    {
        if (!value["Ihc"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PathologyV2.Ihc` is not array type"));

        const rapidjson::Value &tmpValue = value["Ihc"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IHCV2 item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ihc.push_back(item);
        }
        m_ihcHasBeenSet = true;
    }

    if (value.HasMember("Clinical") && !value["Clinical"].IsNull())
    {
        if (!value["Clinical"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PathologyV2.Clinical` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clinical.Deserialize(value["Clinical"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clinicalHasBeenSet = true;
    }

    if (value.HasMember("Precancer") && !value["Precancer"].IsNull())
    {
        if (!value["Precancer"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PathologyV2.Precancer` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_precancer.Deserialize(value["Precancer"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_precancerHasBeenSet = true;
    }

    if (value.HasMember("Malignant") && !value["Malignant"].IsNull())
    {
        if (!value["Malignant"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PathologyV2.Malignant` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_malignant.Deserialize(value["Malignant"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_malignantHasBeenSet = true;
    }

    if (value.HasMember("Benigntumor") && !value["Benigntumor"].IsNull())
    {
        if (!value["Benigntumor"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PathologyV2.Benigntumor` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_benigntumor.Deserialize(value["Benigntumor"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_benigntumorHasBeenSet = true;
    }

    if (value.HasMember("SampleType") && !value["SampleType"].IsNull())
    {
        if (!value["SampleType"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PathologyV2.SampleType` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sampleType.Deserialize(value["SampleType"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sampleTypeHasBeenSet = true;
    }

    if (value.HasMember("LymphSize") && !value["LymphSize"].IsNull())
    {
        if (!value["LymphSize"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PathologyV2.LymphSize` is not array type"));

        const rapidjson::Value &tmpValue = value["LymphSize"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Size item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_lymphSize.push_back(item);
        }
        m_lymphSizeHasBeenSet = true;
    }

    if (value.HasMember("Molecular") && !value["Molecular"].IsNull())
    {
        if (!value["Molecular"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PathologyV2.Molecular` is not array type"));

        const rapidjson::Value &tmpValue = value["Molecular"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Molecular item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_molecular.push_back(item);
        }
        m_molecularHasBeenSet = true;
    }

    if (value.HasMember("Page") && !value["Page"].IsNull())
    {
        if (!value["Page"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PathologyV2.Page` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_page = value["Page"].GetInt64();
        m_pageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PathologyV2::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pathologicalReportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathologicalReportType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pathologicalReportType.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_desc.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_summaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Summary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_summary.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_reportTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportText.c_str(), allocator).Move(), allocator);
    }

    if (m_lymphTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LymphTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_lymphTotal.begin(); itr != m_lymphTotal.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_lymphNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LymphNodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_lymphNodes.begin(); itr != m_lymphNodes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ihcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ihc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ihc.begin(); itr != m_ihc.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_clinicalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Clinical";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clinical.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_precancerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Precancer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_precancer.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_malignantHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Malignant";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_malignant.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_benigntumorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Benigntumor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_benigntumor.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sampleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sampleType.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lymphSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LymphSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_lymphSize.begin(); itr != m_lymphSize.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_molecularHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Molecular";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_molecular.begin(); itr != m_molecular.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_page, allocator);
    }

}


Report PathologyV2::GetPathologicalReportType() const
{
    return m_pathologicalReportType;
}

void PathologyV2::SetPathologicalReportType(const Report& _pathologicalReportType)
{
    m_pathologicalReportType = _pathologicalReportType;
    m_pathologicalReportTypeHasBeenSet = true;
}

bool PathologyV2::PathologicalReportTypeHasBeenSet() const
{
    return m_pathologicalReportTypeHasBeenSet;
}

DescInfo PathologyV2::GetDesc() const
{
    return m_desc;
}

void PathologyV2::SetDesc(const DescInfo& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool PathologyV2::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

SummaryInfo PathologyV2::GetSummary() const
{
    return m_summary;
}

void PathologyV2::SetSummary(const SummaryInfo& _summary)
{
    m_summary = _summary;
    m_summaryHasBeenSet = true;
}

bool PathologyV2::SummaryHasBeenSet() const
{
    return m_summaryHasBeenSet;
}

string PathologyV2::GetReportText() const
{
    return m_reportText;
}

void PathologyV2::SetReportText(const string& _reportText)
{
    m_reportText = _reportText;
    m_reportTextHasBeenSet = true;
}

bool PathologyV2::ReportTextHasBeenSet() const
{
    return m_reportTextHasBeenSet;
}

vector<LymphTotal> PathologyV2::GetLymphTotal() const
{
    return m_lymphTotal;
}

void PathologyV2::SetLymphTotal(const vector<LymphTotal>& _lymphTotal)
{
    m_lymphTotal = _lymphTotal;
    m_lymphTotalHasBeenSet = true;
}

bool PathologyV2::LymphTotalHasBeenSet() const
{
    return m_lymphTotalHasBeenSet;
}

vector<LymphNode> PathologyV2::GetLymphNodes() const
{
    return m_lymphNodes;
}

void PathologyV2::SetLymphNodes(const vector<LymphNode>& _lymphNodes)
{
    m_lymphNodes = _lymphNodes;
    m_lymphNodesHasBeenSet = true;
}

bool PathologyV2::LymphNodesHasBeenSet() const
{
    return m_lymphNodesHasBeenSet;
}

vector<IHCV2> PathologyV2::GetIhc() const
{
    return m_ihc;
}

void PathologyV2::SetIhc(const vector<IHCV2>& _ihc)
{
    m_ihc = _ihc;
    m_ihcHasBeenSet = true;
}

bool PathologyV2::IhcHasBeenSet() const
{
    return m_ihcHasBeenSet;
}

BaseInfo PathologyV2::GetClinical() const
{
    return m_clinical;
}

void PathologyV2::SetClinical(const BaseInfo& _clinical)
{
    m_clinical = _clinical;
    m_clinicalHasBeenSet = true;
}

bool PathologyV2::ClinicalHasBeenSet() const
{
    return m_clinicalHasBeenSet;
}

HistologyClass PathologyV2::GetPrecancer() const
{
    return m_precancer;
}

void PathologyV2::SetPrecancer(const HistologyClass& _precancer)
{
    m_precancer = _precancer;
    m_precancerHasBeenSet = true;
}

bool PathologyV2::PrecancerHasBeenSet() const
{
    return m_precancerHasBeenSet;
}

HistologyClass PathologyV2::GetMalignant() const
{
    return m_malignant;
}

void PathologyV2::SetMalignant(const HistologyClass& _malignant)
{
    m_malignant = _malignant;
    m_malignantHasBeenSet = true;
}

bool PathologyV2::MalignantHasBeenSet() const
{
    return m_malignantHasBeenSet;
}

HistologyClass PathologyV2::GetBenigntumor() const
{
    return m_benigntumor;
}

void PathologyV2::SetBenigntumor(const HistologyClass& _benigntumor)
{
    m_benigntumor = _benigntumor;
    m_benigntumorHasBeenSet = true;
}

bool PathologyV2::BenigntumorHasBeenSet() const
{
    return m_benigntumorHasBeenSet;
}

BaseInfo PathologyV2::GetSampleType() const
{
    return m_sampleType;
}

void PathologyV2::SetSampleType(const BaseInfo& _sampleType)
{
    m_sampleType = _sampleType;
    m_sampleTypeHasBeenSet = true;
}

bool PathologyV2::SampleTypeHasBeenSet() const
{
    return m_sampleTypeHasBeenSet;
}

vector<Size> PathologyV2::GetLymphSize() const
{
    return m_lymphSize;
}

void PathologyV2::SetLymphSize(const vector<Size>& _lymphSize)
{
    m_lymphSize = _lymphSize;
    m_lymphSizeHasBeenSet = true;
}

bool PathologyV2::LymphSizeHasBeenSet() const
{
    return m_lymphSizeHasBeenSet;
}

vector<Molecular> PathologyV2::GetMolecular() const
{
    return m_molecular;
}

void PathologyV2::SetMolecular(const vector<Molecular>& _molecular)
{
    m_molecular = _molecular;
    m_molecularHasBeenSet = true;
}

bool PathologyV2::MolecularHasBeenSet() const
{
    return m_molecularHasBeenSet;
}

int64_t PathologyV2::GetPage() const
{
    return m_page;
}

void PathologyV2::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool PathologyV2::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

