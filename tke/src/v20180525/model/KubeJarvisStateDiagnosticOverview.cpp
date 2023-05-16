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

#include <tencentcloud/tke/v20180525/model/KubeJarvisStateDiagnosticOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

KubeJarvisStateDiagnosticOverview::KubeJarvisStateDiagnosticOverview() :
    m_cataloguesHasBeenSet(false),
    m_statisticsHasBeenSet(false)
{
}

CoreInternalOutcome KubeJarvisStateDiagnosticOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Catalogues") && !value["Catalogues"].IsNull())
    {
        if (!value["Catalogues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateDiagnosticOverview.Catalogues` is not array type"));

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

    if (value.HasMember("Statistics") && !value["Statistics"].IsNull())
    {
        if (!value["Statistics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateDiagnosticOverview.Statistics` is not array type"));

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

void KubeJarvisStateDiagnosticOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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


vector<KubeJarvisStateCatalogue> KubeJarvisStateDiagnosticOverview::GetCatalogues() const
{
    return m_catalogues;
}

void KubeJarvisStateDiagnosticOverview::SetCatalogues(const vector<KubeJarvisStateCatalogue>& _catalogues)
{
    m_catalogues = _catalogues;
    m_cataloguesHasBeenSet = true;
}

bool KubeJarvisStateDiagnosticOverview::CataloguesHasBeenSet() const
{
    return m_cataloguesHasBeenSet;
}

vector<KubeJarvisStateStatistic> KubeJarvisStateDiagnosticOverview::GetStatistics() const
{
    return m_statistics;
}

void KubeJarvisStateDiagnosticOverview::SetStatistics(const vector<KubeJarvisStateStatistic>& _statistics)
{
    m_statistics = _statistics;
    m_statisticsHasBeenSet = true;
}

bool KubeJarvisStateDiagnosticOverview::StatisticsHasBeenSet() const
{
    return m_statisticsHasBeenSet;
}

