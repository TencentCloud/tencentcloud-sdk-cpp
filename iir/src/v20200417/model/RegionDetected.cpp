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

#include <tencentcloud/iir/v20200417/model/RegionDetected.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iir::V20200417::Model;
using namespace std;

RegionDetected::RegionDetected() :
    m_categoryHasBeenSet(false),
    m_categoryScoreHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

CoreInternalOutcome RegionDetected::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionDetected.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("CategoryScore") && !value["CategoryScore"].IsNull())
    {
        if (!value["CategoryScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RegionDetected.CategoryScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_categoryScore = value["CategoryScore"].GetDouble();
        m_categoryScoreHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RegionDetected.Location` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_location.Deserialize(value["Location"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_locationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RegionDetected::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_categoryScore, allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_location.ToJsonObject(value[key.c_str()], allocator);
    }

}


string RegionDetected::GetCategory() const
{
    return m_category;
}

void RegionDetected::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool RegionDetected::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

double RegionDetected::GetCategoryScore() const
{
    return m_categoryScore;
}

void RegionDetected::SetCategoryScore(const double& _categoryScore)
{
    m_categoryScore = _categoryScore;
    m_categoryScoreHasBeenSet = true;
}

bool RegionDetected::CategoryScoreHasBeenSet() const
{
    return m_categoryScoreHasBeenSet;
}

Location RegionDetected::GetLocation() const
{
    return m_location;
}

void RegionDetected::SetLocation(const Location& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool RegionDetected::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

