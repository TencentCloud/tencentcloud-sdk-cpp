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

#include <tencentcloud/mrs/v20200910/model/Pathology.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Pathology::Pathology() :
    m_pathologicalTypeHasBeenSet(false),
    m_infiltrationDepthHasBeenSet(false),
    m_pTNMHasBeenSet(false),
    m_distanceMetastasisHasBeenSet(false),
    m_summaryTextHasBeenSet(false),
    m_descTextHasBeenSet(false),
    m_histologyTypeHasBeenSet(false),
    m_histologyLevelHasBeenSet(false),
    m_sampleTypeHasBeenSet(false),
    m_samplePartHasBeenSet(false),
    m_sampleSizeHasBeenSet(false),
    m_invasiveListHasBeenSet(false),
    m_metastasisListHasBeenSet(false),
    m_iHCListHasBeenSet(false)
{
}

CoreInternalOutcome Pathology::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PathologicalType") && !value["PathologicalType"].IsNull())
    {
        if (!value["PathologicalType"].IsString())
        {
            return CoreInternalOutcome(Error("response `Pathology.PathologicalType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pathologicalType = string(value["PathologicalType"].GetString());
        m_pathologicalTypeHasBeenSet = true;
    }

    if (value.HasMember("InfiltrationDepth") && !value["InfiltrationDepth"].IsNull())
    {
        if (!value["InfiltrationDepth"].IsString())
        {
            return CoreInternalOutcome(Error("response `Pathology.InfiltrationDepth` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_infiltrationDepth = string(value["InfiltrationDepth"].GetString());
        m_infiltrationDepthHasBeenSet = true;
    }

    if (value.HasMember("PTNM") && !value["PTNM"].IsNull())
    {
        if (!value["PTNM"].IsString())
        {
            return CoreInternalOutcome(Error("response `Pathology.PTNM` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pTNM = string(value["PTNM"].GetString());
        m_pTNMHasBeenSet = true;
    }

    if (value.HasMember("DistanceMetastasis") && !value["DistanceMetastasis"].IsNull())
    {
        if (!value["DistanceMetastasis"].IsString())
        {
            return CoreInternalOutcome(Error("response `Pathology.DistanceMetastasis` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_distanceMetastasis = string(value["DistanceMetastasis"].GetString());
        m_distanceMetastasisHasBeenSet = true;
    }

    if (value.HasMember("SummaryText") && !value["SummaryText"].IsNull())
    {
        if (!value["SummaryText"].IsString())
        {
            return CoreInternalOutcome(Error("response `Pathology.SummaryText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_summaryText = string(value["SummaryText"].GetString());
        m_summaryTextHasBeenSet = true;
    }

    if (value.HasMember("DescText") && !value["DescText"].IsNull())
    {
        if (!value["DescText"].IsString())
        {
            return CoreInternalOutcome(Error("response `Pathology.DescText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_descText = string(value["DescText"].GetString());
        m_descTextHasBeenSet = true;
    }

    if (value.HasMember("HistologyType") && !value["HistologyType"].IsNull())
    {
        if (!value["HistologyType"].IsString())
        {
            return CoreInternalOutcome(Error("response `Pathology.HistologyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_histologyType = string(value["HistologyType"].GetString());
        m_histologyTypeHasBeenSet = true;
    }

    if (value.HasMember("HistologyLevel") && !value["HistologyLevel"].IsNull())
    {
        if (!value["HistologyLevel"].IsString())
        {
            return CoreInternalOutcome(Error("response `Pathology.HistologyLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_histologyLevel = string(value["HistologyLevel"].GetString());
        m_histologyLevelHasBeenSet = true;
    }

    if (value.HasMember("SampleType") && !value["SampleType"].IsNull())
    {
        if (!value["SampleType"].IsString())
        {
            return CoreInternalOutcome(Error("response `Pathology.SampleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sampleType = string(value["SampleType"].GetString());
        m_sampleTypeHasBeenSet = true;
    }

    if (value.HasMember("SamplePart") && !value["SamplePart"].IsNull())
    {
        if (!value["SamplePart"].IsString())
        {
            return CoreInternalOutcome(Error("response `Pathology.SamplePart` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_samplePart = string(value["SamplePart"].GetString());
        m_samplePartHasBeenSet = true;
    }

    if (value.HasMember("SampleSize") && !value["SampleSize"].IsNull())
    {
        if (!value["SampleSize"].IsString())
        {
            return CoreInternalOutcome(Error("response `Pathology.SampleSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sampleSize = string(value["SampleSize"].GetString());
        m_sampleSizeHasBeenSet = true;
    }

    if (value.HasMember("InvasiveList") && !value["InvasiveList"].IsNull())
    {
        if (!value["InvasiveList"].IsArray())
            return CoreInternalOutcome(Error("response `Pathology.InvasiveList` is not array type"));

        const rapidjson::Value &tmpValue = value["InvasiveList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Invasive item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_invasiveList.push_back(item);
        }
        m_invasiveListHasBeenSet = true;
    }

    if (value.HasMember("MetastasisList") && !value["MetastasisList"].IsNull())
    {
        if (!value["MetastasisList"].IsArray())
            return CoreInternalOutcome(Error("response `Pathology.MetastasisList` is not array type"));

        const rapidjson::Value &tmpValue = value["MetastasisList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Metastasis item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metastasisList.push_back(item);
        }
        m_metastasisListHasBeenSet = true;
    }

    if (value.HasMember("IHCList") && !value["IHCList"].IsNull())
    {
        if (!value["IHCList"].IsArray())
            return CoreInternalOutcome(Error("response `Pathology.IHCList` is not array type"));

        const rapidjson::Value &tmpValue = value["IHCList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IHC item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_iHCList.push_back(item);
        }
        m_iHCListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Pathology::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pathologicalTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathologicalType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pathologicalType.c_str(), allocator).Move(), allocator);
    }

    if (m_infiltrationDepthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InfiltrationDepth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_infiltrationDepth.c_str(), allocator).Move(), allocator);
    }

    if (m_pTNMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PTNM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pTNM.c_str(), allocator).Move(), allocator);
    }

    if (m_distanceMetastasisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DistanceMetastasis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_distanceMetastasis.c_str(), allocator).Move(), allocator);
    }

    if (m_summaryTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SummaryText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_summaryText.c_str(), allocator).Move(), allocator);
    }

    if (m_descTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_descText.c_str(), allocator).Move(), allocator);
    }

    if (m_histologyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HistologyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_histologyType.c_str(), allocator).Move(), allocator);
    }

    if (m_histologyLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HistologyLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_histologyLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_sampleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sampleType.c_str(), allocator).Move(), allocator);
    }

    if (m_samplePartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SamplePart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_samplePart.c_str(), allocator).Move(), allocator);
    }

    if (m_sampleSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sampleSize.c_str(), allocator).Move(), allocator);
    }

    if (m_invasiveListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvasiveList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_invasiveList.begin(); itr != m_invasiveList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_metastasisListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetastasisList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metastasisList.begin(); itr != m_metastasisList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_iHCListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IHCList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_iHCList.begin(); itr != m_iHCList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Pathology::GetPathologicalType() const
{
    return m_pathologicalType;
}

void Pathology::SetPathologicalType(const string& _pathologicalType)
{
    m_pathologicalType = _pathologicalType;
    m_pathologicalTypeHasBeenSet = true;
}

bool Pathology::PathologicalTypeHasBeenSet() const
{
    return m_pathologicalTypeHasBeenSet;
}

string Pathology::GetInfiltrationDepth() const
{
    return m_infiltrationDepth;
}

void Pathology::SetInfiltrationDepth(const string& _infiltrationDepth)
{
    m_infiltrationDepth = _infiltrationDepth;
    m_infiltrationDepthHasBeenSet = true;
}

bool Pathology::InfiltrationDepthHasBeenSet() const
{
    return m_infiltrationDepthHasBeenSet;
}

string Pathology::GetPTNM() const
{
    return m_pTNM;
}

void Pathology::SetPTNM(const string& _pTNM)
{
    m_pTNM = _pTNM;
    m_pTNMHasBeenSet = true;
}

bool Pathology::PTNMHasBeenSet() const
{
    return m_pTNMHasBeenSet;
}

string Pathology::GetDistanceMetastasis() const
{
    return m_distanceMetastasis;
}

void Pathology::SetDistanceMetastasis(const string& _distanceMetastasis)
{
    m_distanceMetastasis = _distanceMetastasis;
    m_distanceMetastasisHasBeenSet = true;
}

bool Pathology::DistanceMetastasisHasBeenSet() const
{
    return m_distanceMetastasisHasBeenSet;
}

string Pathology::GetSummaryText() const
{
    return m_summaryText;
}

void Pathology::SetSummaryText(const string& _summaryText)
{
    m_summaryText = _summaryText;
    m_summaryTextHasBeenSet = true;
}

bool Pathology::SummaryTextHasBeenSet() const
{
    return m_summaryTextHasBeenSet;
}

string Pathology::GetDescText() const
{
    return m_descText;
}

void Pathology::SetDescText(const string& _descText)
{
    m_descText = _descText;
    m_descTextHasBeenSet = true;
}

bool Pathology::DescTextHasBeenSet() const
{
    return m_descTextHasBeenSet;
}

string Pathology::GetHistologyType() const
{
    return m_histologyType;
}

void Pathology::SetHistologyType(const string& _histologyType)
{
    m_histologyType = _histologyType;
    m_histologyTypeHasBeenSet = true;
}

bool Pathology::HistologyTypeHasBeenSet() const
{
    return m_histologyTypeHasBeenSet;
}

string Pathology::GetHistologyLevel() const
{
    return m_histologyLevel;
}

void Pathology::SetHistologyLevel(const string& _histologyLevel)
{
    m_histologyLevel = _histologyLevel;
    m_histologyLevelHasBeenSet = true;
}

bool Pathology::HistologyLevelHasBeenSet() const
{
    return m_histologyLevelHasBeenSet;
}

string Pathology::GetSampleType() const
{
    return m_sampleType;
}

void Pathology::SetSampleType(const string& _sampleType)
{
    m_sampleType = _sampleType;
    m_sampleTypeHasBeenSet = true;
}

bool Pathology::SampleTypeHasBeenSet() const
{
    return m_sampleTypeHasBeenSet;
}

string Pathology::GetSamplePart() const
{
    return m_samplePart;
}

void Pathology::SetSamplePart(const string& _samplePart)
{
    m_samplePart = _samplePart;
    m_samplePartHasBeenSet = true;
}

bool Pathology::SamplePartHasBeenSet() const
{
    return m_samplePartHasBeenSet;
}

string Pathology::GetSampleSize() const
{
    return m_sampleSize;
}

void Pathology::SetSampleSize(const string& _sampleSize)
{
    m_sampleSize = _sampleSize;
    m_sampleSizeHasBeenSet = true;
}

bool Pathology::SampleSizeHasBeenSet() const
{
    return m_sampleSizeHasBeenSet;
}

vector<Invasive> Pathology::GetInvasiveList() const
{
    return m_invasiveList;
}

void Pathology::SetInvasiveList(const vector<Invasive>& _invasiveList)
{
    m_invasiveList = _invasiveList;
    m_invasiveListHasBeenSet = true;
}

bool Pathology::InvasiveListHasBeenSet() const
{
    return m_invasiveListHasBeenSet;
}

vector<Metastasis> Pathology::GetMetastasisList() const
{
    return m_metastasisList;
}

void Pathology::SetMetastasisList(const vector<Metastasis>& _metastasisList)
{
    m_metastasisList = _metastasisList;
    m_metastasisListHasBeenSet = true;
}

bool Pathology::MetastasisListHasBeenSet() const
{
    return m_metastasisListHasBeenSet;
}

vector<IHC> Pathology::GetIHCList() const
{
    return m_iHCList;
}

void Pathology::SetIHCList(const vector<IHC>& _iHCList)
{
    m_iHCList = _iHCList;
    m_iHCListHasBeenSet = true;
}

bool Pathology::IHCListHasBeenSet() const
{
    return m_iHCListHasBeenSet;
}

