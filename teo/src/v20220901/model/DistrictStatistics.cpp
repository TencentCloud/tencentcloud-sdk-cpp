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

#include <tencentcloud/teo/v20220901/model/DistrictStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DistrictStatistics::DistrictStatistics() :
    m_alpha2HasBeenSet(false),
    m_loadTimeHasBeenSet(false)
{
}

CoreInternalOutcome DistrictStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Alpha2") && !value["Alpha2"].IsNull())
    {
        if (!value["Alpha2"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistrictStatistics.Alpha2` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alpha2 = string(value["Alpha2"].GetString());
        m_alpha2HasBeenSet = true;
    }

    if (value.HasMember("LoadTime") && !value["LoadTime"].IsNull())
    {
        if (!value["LoadTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DistrictStatistics.LoadTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loadTime = value["LoadTime"].GetInt64();
        m_loadTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DistrictStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alpha2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alpha2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alpha2.c_str(), allocator).Move(), allocator);
    }

    if (m_loadTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loadTime, allocator);
    }

}


string DistrictStatistics::GetAlpha2() const
{
    return m_alpha2;
}

void DistrictStatistics::SetAlpha2(const string& _alpha2)
{
    m_alpha2 = _alpha2;
    m_alpha2HasBeenSet = true;
}

bool DistrictStatistics::Alpha2HasBeenSet() const
{
    return m_alpha2HasBeenSet;
}

int64_t DistrictStatistics::GetLoadTime() const
{
    return m_loadTime;
}

void DistrictStatistics::SetLoadTime(const int64_t& _loadTime)
{
    m_loadTime = _loadTime;
    m_loadTimeHasBeenSet = true;
}

bool DistrictStatistics::LoadTimeHasBeenSet() const
{
    return m_loadTimeHasBeenSet;
}

