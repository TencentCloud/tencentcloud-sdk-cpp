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

#include <tencentcloud/tke/v20180525/model/KubeJarvisStateDiagnostic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

KubeJarvisStateDiagnostic::KubeJarvisStateDiagnostic() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_cataloguesHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descHasBeenSet(false),
    m_resultsHasBeenSet(false),
    m_statisticsHasBeenSet(false)
{
}

CoreInternalOutcome KubeJarvisStateDiagnostic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateDiagnostic.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateDiagnostic.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Catalogues") && !value["Catalogues"].IsNull())
    {
        if (!value["Catalogues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateDiagnostic.Catalogues` is not array type"));

        const rapidjson::Value &tmpValue = value["Catalogues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KubeJarvisStateCatalogue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_catalogues.push_back(item);
        }
        m_cataloguesHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateDiagnostic.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateDiagnostic.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateDiagnostic.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Results") && !value["Results"].IsNull())
    {
        if (!value["Results"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateDiagnostic.Results` is not array type"));

        const rapidjson::Value &tmpValue = value["Results"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KubeJarvisStateResultsItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_results.push_back(item);
        }
        m_resultsHasBeenSet = true;
    }

    if (value.HasMember("Statistics") && !value["Statistics"].IsNull())
    {
        if (!value["Statistics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateDiagnostic.Statistics` is not array type"));

        const rapidjson::Value &tmpValue = value["Statistics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KubeJarvisStateStatistic item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_statistics.push_back(item);
        }
        m_statisticsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KubeJarvisStateDiagnostic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cataloguesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalogues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_catalogues.begin(); itr != m_catalogues.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_resultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Results";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_results.begin(); itr != m_results.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statisticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Statistics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_statistics.begin(); itr != m_statistics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string KubeJarvisStateDiagnostic::GetStartTime() const
{
    return m_startTime;
}

void KubeJarvisStateDiagnostic::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool KubeJarvisStateDiagnostic::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string KubeJarvisStateDiagnostic::GetEndTime() const
{
    return m_endTime;
}

void KubeJarvisStateDiagnostic::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool KubeJarvisStateDiagnostic::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<KubeJarvisStateCatalogue> KubeJarvisStateDiagnostic::GetCatalogues() const
{
    return m_catalogues;
}

void KubeJarvisStateDiagnostic::SetCatalogues(const vector<KubeJarvisStateCatalogue>& _catalogues)
{
    m_catalogues = _catalogues;
    m_cataloguesHasBeenSet = true;
}

bool KubeJarvisStateDiagnostic::CataloguesHasBeenSet() const
{
    return m_cataloguesHasBeenSet;
}

string KubeJarvisStateDiagnostic::GetType() const
{
    return m_type;
}

void KubeJarvisStateDiagnostic::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool KubeJarvisStateDiagnostic::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string KubeJarvisStateDiagnostic::GetName() const
{
    return m_name;
}

void KubeJarvisStateDiagnostic::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool KubeJarvisStateDiagnostic::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string KubeJarvisStateDiagnostic::GetDesc() const
{
    return m_desc;
}

void KubeJarvisStateDiagnostic::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool KubeJarvisStateDiagnostic::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

vector<KubeJarvisStateResultsItem> KubeJarvisStateDiagnostic::GetResults() const
{
    return m_results;
}

void KubeJarvisStateDiagnostic::SetResults(const vector<KubeJarvisStateResultsItem>& _results)
{
    m_results = _results;
    m_resultsHasBeenSet = true;
}

bool KubeJarvisStateDiagnostic::ResultsHasBeenSet() const
{
    return m_resultsHasBeenSet;
}

vector<KubeJarvisStateStatistic> KubeJarvisStateDiagnostic::GetStatistics() const
{
    return m_statistics;
}

void KubeJarvisStateDiagnostic::SetStatistics(const vector<KubeJarvisStateStatistic>& _statistics)
{
    m_statistics = _statistics;
    m_statisticsHasBeenSet = true;
}

bool KubeJarvisStateDiagnostic::StatisticsHasBeenSet() const
{
    return m_statisticsHasBeenSet;
}

