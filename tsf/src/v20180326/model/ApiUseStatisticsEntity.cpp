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

#include <tencentcloud/tsf/v20180326/model/ApiUseStatisticsEntity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ApiUseStatisticsEntity::ApiUseStatisticsEntity() :
    m_nameHasBeenSet(false),
    m_countHasBeenSet(false),
    m_ratioHasBeenSet(false)
{
}

CoreInternalOutcome ApiUseStatisticsEntity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiUseStatisticsEntity.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiUseStatisticsEntity.Count` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_count = string(value["Count"].GetString());
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Ratio") && !value["Ratio"].IsNull())
    {
        if (!value["Ratio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiUseStatisticsEntity.Ratio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ratio = string(value["Ratio"].GetString());
        m_ratioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiUseStatisticsEntity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_count.c_str(), allocator).Move(), allocator);
    }

    if (m_ratioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ratio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ratio.c_str(), allocator).Move(), allocator);
    }

}


string ApiUseStatisticsEntity::GetName() const
{
    return m_name;
}

void ApiUseStatisticsEntity::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ApiUseStatisticsEntity::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ApiUseStatisticsEntity::GetCount() const
{
    return m_count;
}

void ApiUseStatisticsEntity::SetCount(const string& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool ApiUseStatisticsEntity::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string ApiUseStatisticsEntity::GetRatio() const
{
    return m_ratio;
}

void ApiUseStatisticsEntity::SetRatio(const string& _ratio)
{
    m_ratio = _ratio;
    m_ratioHasBeenSet = true;
}

bool ApiUseStatisticsEntity::RatioHasBeenSet() const
{
    return m_ratioHasBeenSet;
}

