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

#include <tencentcloud/tiia/v20190529/model/DetectLabelItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiia::V20190529::Model;
using namespace std;

DetectLabelItem::DetectLabelItem() :
    m_nameHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_firstCategoryHasBeenSet(false),
    m_secondCategoryHasBeenSet(false)
{
}

CoreInternalOutcome DetectLabelItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectLabelItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DetectLabelItem.Confidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetInt64();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("FirstCategory") && !value["FirstCategory"].IsNull())
    {
        if (!value["FirstCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectLabelItem.FirstCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstCategory = string(value["FirstCategory"].GetString());
        m_firstCategoryHasBeenSet = true;
    }

    if (value.HasMember("SecondCategory") && !value["SecondCategory"].IsNull())
    {
        if (!value["SecondCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectLabelItem.SecondCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secondCategory = string(value["SecondCategory"].GetString());
        m_secondCategoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DetectLabelItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_firstCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_secondCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secondCategory.c_str(), allocator).Move(), allocator);
    }

}


string DetectLabelItem::GetName() const
{
    return m_name;
}

void DetectLabelItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DetectLabelItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DetectLabelItem::GetConfidence() const
{
    return m_confidence;
}

void DetectLabelItem::SetConfidence(const int64_t& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool DetectLabelItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

string DetectLabelItem::GetFirstCategory() const
{
    return m_firstCategory;
}

void DetectLabelItem::SetFirstCategory(const string& _firstCategory)
{
    m_firstCategory = _firstCategory;
    m_firstCategoryHasBeenSet = true;
}

bool DetectLabelItem::FirstCategoryHasBeenSet() const
{
    return m_firstCategoryHasBeenSet;
}

string DetectLabelItem::GetSecondCategory() const
{
    return m_secondCategory;
}

void DetectLabelItem::SetSecondCategory(const string& _secondCategory)
{
    m_secondCategory = _secondCategory;
    m_secondCategoryHasBeenSet = true;
}

bool DetectLabelItem::SecondCategoryHasBeenSet() const
{
    return m_secondCategoryHasBeenSet;
}

