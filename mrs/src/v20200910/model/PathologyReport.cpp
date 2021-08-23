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

#include <tencentcloud/mrs/v20200910/model/PathologyReport.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

PathologyReport::PathologyReport() :
    m_cancerPartHasBeenSet(false),
    m_cancerSizeHasBeenSet(false),
    m_descTextHasBeenSet(false),
    m_histologyLevelHasBeenSet(false),
    m_histologyTypeHasBeenSet(false),
    m_iHCHasBeenSet(false),
    m_infiltrationDepthHasBeenSet(false),
    m_invasiveHasBeenSet(false),
    m_lymphNodesHasBeenSet(false),
    m_pTNMHasBeenSet(false),
    m_pathologicalReportTypeHasBeenSet(false),
    m_reportTextHasBeenSet(false),
    m_sampleTypeHasBeenSet(false),
    m_summaryTextHasBeenSet(false)
{
}

CoreInternalOutcome PathologyReport::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CancerPart") && !value["CancerPart"].IsNull())
    {
        if (!value["CancerPart"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PathologyReport.CancerPart` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cancerPart.Deserialize(value["CancerPart"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cancerPartHasBeenSet = true;
    }

    if (value.HasMember("CancerSize") && !value["CancerSize"].IsNull())
    {
        if (!value["CancerSize"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PathologyReport.CancerSize` is not array type"));

        const rapidjson::Value &tmpValue = value["CancerSize"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Size item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cancerSize.push_back(item);
        }
        m_cancerSizeHasBeenSet = true;
    }

    if (value.HasMember("DescText") && !value["DescText"].IsNull())
    {
        if (!value["DescText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathologyReport.DescText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_descText = string(value["DescText"].GetString());
        m_descTextHasBeenSet = true;
    }

    if (value.HasMember("HistologyLevel") && !value["HistologyLevel"].IsNull())
    {
        if (!value["HistologyLevel"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PathologyReport.HistologyLevel` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_histologyLevel.Deserialize(value["HistologyLevel"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_histologyLevelHasBeenSet = true;
    }

    if (value.HasMember("HistologyType") && !value["HistologyType"].IsNull())
    {
        if (!value["HistologyType"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PathologyReport.HistologyType` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_histologyType.Deserialize(value["HistologyType"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_histologyTypeHasBeenSet = true;
    }

    if (value.HasMember("IHC") && !value["IHC"].IsNull())
    {
        if (!value["IHC"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PathologyReport.IHC` is not array type"));

        const rapidjson::Value &tmpValue = value["IHC"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IHCInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_iHC.push_back(item);
        }
        m_iHCHasBeenSet = true;
    }

    if (value.HasMember("InfiltrationDepth") && !value["InfiltrationDepth"].IsNull())
    {
        if (!value["InfiltrationDepth"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PathologyReport.InfiltrationDepth` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_infiltrationDepth.Deserialize(value["InfiltrationDepth"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_infiltrationDepthHasBeenSet = true;
    }

    if (value.HasMember("Invasive") && !value["Invasive"].IsNull())
    {
        if (!value["Invasive"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PathologyReport.Invasive` is not array type"));

        const rapidjson::Value &tmpValue = value["Invasive"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Invas item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_invasive.push_back(item);
        }
        m_invasiveHasBeenSet = true;
    }

    if (value.HasMember("LymphNodes") && !value["LymphNodes"].IsNull())
    {
        if (!value["LymphNodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PathologyReport.LymphNodes` is not array type"));

        const rapidjson::Value &tmpValue = value["LymphNodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Lymph item;
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

    if (value.HasMember("PTNM") && !value["PTNM"].IsNull())
    {
        if (!value["PTNM"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PathologyReport.PTNM` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pTNM.Deserialize(value["PTNM"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pTNMHasBeenSet = true;
    }

    if (value.HasMember("PathologicalReportType") && !value["PathologicalReportType"].IsNull())
    {
        if (!value["PathologicalReportType"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PathologyReport.PathologicalReportType` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pathologicalReportType.Deserialize(value["PathologicalReportType"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pathologicalReportTypeHasBeenSet = true;
    }

    if (value.HasMember("ReportText") && !value["ReportText"].IsNull())
    {
        if (!value["ReportText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathologyReport.ReportText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportText = string(value["ReportText"].GetString());
        m_reportTextHasBeenSet = true;
    }

    if (value.HasMember("SampleType") && !value["SampleType"].IsNull())
    {
        if (!value["SampleType"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PathologyReport.SampleType` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sampleType.Deserialize(value["SampleType"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sampleTypeHasBeenSet = true;
    }

    if (value.HasMember("SummaryText") && !value["SummaryText"].IsNull())
    {
        if (!value["SummaryText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PathologyReport.SummaryText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_summaryText = string(value["SummaryText"].GetString());
        m_summaryTextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PathologyReport::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cancerPartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CancerPart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cancerPart.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cancerSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CancerSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cancerSize.begin(); itr != m_cancerSize.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_descTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_descText.c_str(), allocator).Move(), allocator);
    }

    if (m_histologyLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HistologyLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_histologyLevel.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_histologyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HistologyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_histologyType.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_iHCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IHC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_iHC.begin(); itr != m_iHC.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_infiltrationDepthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InfiltrationDepth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_infiltrationDepth.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_invasiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Invasive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_invasive.begin(); itr != m_invasive.end(); ++itr, ++i)
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

    if (m_pTNMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PTNM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pTNM.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pathologicalReportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathologicalReportType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pathologicalReportType.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_reportTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportText.c_str(), allocator).Move(), allocator);
    }

    if (m_sampleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sampleType.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_summaryTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SummaryText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_summaryText.c_str(), allocator).Move(), allocator);
    }

}


Part PathologyReport::GetCancerPart() const
{
    return m_cancerPart;
}

void PathologyReport::SetCancerPart(const Part& _cancerPart)
{
    m_cancerPart = _cancerPart;
    m_cancerPartHasBeenSet = true;
}

bool PathologyReport::CancerPartHasBeenSet() const
{
    return m_cancerPartHasBeenSet;
}

vector<Size> PathologyReport::GetCancerSize() const
{
    return m_cancerSize;
}

void PathologyReport::SetCancerSize(const vector<Size>& _cancerSize)
{
    m_cancerSize = _cancerSize;
    m_cancerSizeHasBeenSet = true;
}

bool PathologyReport::CancerSizeHasBeenSet() const
{
    return m_cancerSizeHasBeenSet;
}

string PathologyReport::GetDescText() const
{
    return m_descText;
}

void PathologyReport::SetDescText(const string& _descText)
{
    m_descText = _descText;
    m_descTextHasBeenSet = true;
}

bool PathologyReport::DescTextHasBeenSet() const
{
    return m_descTextHasBeenSet;
}

HistologyLevel PathologyReport::GetHistologyLevel() const
{
    return m_histologyLevel;
}

void PathologyReport::SetHistologyLevel(const HistologyLevel& _histologyLevel)
{
    m_histologyLevel = _histologyLevel;
    m_histologyLevelHasBeenSet = true;
}

bool PathologyReport::HistologyLevelHasBeenSet() const
{
    return m_histologyLevelHasBeenSet;
}

HistologyType PathologyReport::GetHistologyType() const
{
    return m_histologyType;
}

void PathologyReport::SetHistologyType(const HistologyType& _histologyType)
{
    m_histologyType = _histologyType;
    m_histologyTypeHasBeenSet = true;
}

bool PathologyReport::HistologyTypeHasBeenSet() const
{
    return m_histologyTypeHasBeenSet;
}

vector<IHCInfo> PathologyReport::GetIHC() const
{
    return m_iHC;
}

void PathologyReport::SetIHC(const vector<IHCInfo>& _iHC)
{
    m_iHC = _iHC;
    m_iHCHasBeenSet = true;
}

bool PathologyReport::IHCHasBeenSet() const
{
    return m_iHCHasBeenSet;
}

BlockInfo PathologyReport::GetInfiltrationDepth() const
{
    return m_infiltrationDepth;
}

void PathologyReport::SetInfiltrationDepth(const BlockInfo& _infiltrationDepth)
{
    m_infiltrationDepth = _infiltrationDepth;
    m_infiltrationDepthHasBeenSet = true;
}

bool PathologyReport::InfiltrationDepthHasBeenSet() const
{
    return m_infiltrationDepthHasBeenSet;
}

vector<Invas> PathologyReport::GetInvasive() const
{
    return m_invasive;
}

void PathologyReport::SetInvasive(const vector<Invas>& _invasive)
{
    m_invasive = _invasive;
    m_invasiveHasBeenSet = true;
}

bool PathologyReport::InvasiveHasBeenSet() const
{
    return m_invasiveHasBeenSet;
}

vector<Lymph> PathologyReport::GetLymphNodes() const
{
    return m_lymphNodes;
}

void PathologyReport::SetLymphNodes(const vector<Lymph>& _lymphNodes)
{
    m_lymphNodes = _lymphNodes;
    m_lymphNodesHasBeenSet = true;
}

bool PathologyReport::LymphNodesHasBeenSet() const
{
    return m_lymphNodesHasBeenSet;
}

BlockInfo PathologyReport::GetPTNM() const
{
    return m_pTNM;
}

void PathologyReport::SetPTNM(const BlockInfo& _pTNM)
{
    m_pTNM = _pTNM;
    m_pTNMHasBeenSet = true;
}

bool PathologyReport::PTNMHasBeenSet() const
{
    return m_pTNMHasBeenSet;
}

BlockInfo PathologyReport::GetPathologicalReportType() const
{
    return m_pathologicalReportType;
}

void PathologyReport::SetPathologicalReportType(const BlockInfo& _pathologicalReportType)
{
    m_pathologicalReportType = _pathologicalReportType;
    m_pathologicalReportTypeHasBeenSet = true;
}

bool PathologyReport::PathologicalReportTypeHasBeenSet() const
{
    return m_pathologicalReportTypeHasBeenSet;
}

string PathologyReport::GetReportText() const
{
    return m_reportText;
}

void PathologyReport::SetReportText(const string& _reportText)
{
    m_reportText = _reportText;
    m_reportTextHasBeenSet = true;
}

bool PathologyReport::ReportTextHasBeenSet() const
{
    return m_reportTextHasBeenSet;
}

BlockInfo PathologyReport::GetSampleType() const
{
    return m_sampleType;
}

void PathologyReport::SetSampleType(const BlockInfo& _sampleType)
{
    m_sampleType = _sampleType;
    m_sampleTypeHasBeenSet = true;
}

bool PathologyReport::SampleTypeHasBeenSet() const
{
    return m_sampleTypeHasBeenSet;
}

string PathologyReport::GetSummaryText() const
{
    return m_summaryText;
}

void PathologyReport::SetSummaryText(const string& _summaryText)
{
    m_summaryText = _summaryText;
    m_summaryTextHasBeenSet = true;
}

bool PathologyReport::SummaryTextHasBeenSet() const
{
    return m_summaryTextHasBeenSet;
}

