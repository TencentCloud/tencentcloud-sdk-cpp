/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tokenhub/v20260322/model/ModelSiteRegion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

ModelSiteRegion::ModelSiteRegion() :
    m_siteHasBeenSet(false),
    m_regionsHasBeenSet(false)
{
}

CoreInternalOutcome ModelSiteRegion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Site") && !value["Site"].IsNull())
    {
        if (!value["Site"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelSiteRegion.Site` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_site = string(value["Site"].GetString());
        m_siteHasBeenSet = true;
    }

    if (value.HasMember("Regions") && !value["Regions"].IsNull())
    {
        if (!value["Regions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelSiteRegion.Regions` is not array type"));

        const rapidjson::Value &tmpValue = value["Regions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_regions.push_back((*itr).GetString());
        }
        m_regionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelSiteRegion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_siteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Site";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_site.c_str(), allocator).Move(), allocator);
    }

    if (m_regionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_regions.begin(); itr != m_regions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ModelSiteRegion::GetSite() const
{
    return m_site;
}

void ModelSiteRegion::SetSite(const string& _site)
{
    m_site = _site;
    m_siteHasBeenSet = true;
}

bool ModelSiteRegion::SiteHasBeenSet() const
{
    return m_siteHasBeenSet;
}

vector<string> ModelSiteRegion::GetRegions() const
{
    return m_regions;
}

void ModelSiteRegion::SetRegions(const vector<string>& _regions)
{
    m_regions = _regions;
    m_regionsHasBeenSet = true;
}

bool ModelSiteRegion::RegionsHasBeenSet() const
{
    return m_regionsHasBeenSet;
}

