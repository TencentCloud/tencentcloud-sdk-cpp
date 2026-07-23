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

#include <tencentcloud/vod/v20180717/model/QualityInspectContainerDiagnoseResultItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

QualityInspectContainerDiagnoseResultItem::QualityInspectContainerDiagnoseResultItem() :
    m_categoryHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_severityLevelHasBeenSet(false),
    m_timestampSetHasBeenSet(false)
{
}

CoreInternalOutcome QualityInspectContainerDiagnoseResultItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectContainerDiagnoseResultItem.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectContainerDiagnoseResultItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SeverityLevel") && !value["SeverityLevel"].IsNull())
    {
        if (!value["SeverityLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityInspectContainerDiagnoseResultItem.SeverityLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_severityLevel = string(value["SeverityLevel"].GetString());
        m_severityLevelHasBeenSet = true;
    }

    if (value.HasMember("TimestampSet") && !value["TimestampSet"].IsNull())
    {
        if (!value["TimestampSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityInspectContainerDiagnoseResultItem.TimestampSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TimestampSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_timestampSet.push_back((*itr).GetDouble());
        }
        m_timestampSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityInspectContainerDiagnoseResultItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_severityLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeverityLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_severityLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimestampSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_timestampSet.begin(); itr != m_timestampSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

}


string QualityInspectContainerDiagnoseResultItem::GetCategory() const
{
    return m_category;
}

void QualityInspectContainerDiagnoseResultItem::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool QualityInspectContainerDiagnoseResultItem::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string QualityInspectContainerDiagnoseResultItem::GetType() const
{
    return m_type;
}

void QualityInspectContainerDiagnoseResultItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool QualityInspectContainerDiagnoseResultItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string QualityInspectContainerDiagnoseResultItem::GetSeverityLevel() const
{
    return m_severityLevel;
}

void QualityInspectContainerDiagnoseResultItem::SetSeverityLevel(const string& _severityLevel)
{
    m_severityLevel = _severityLevel;
    m_severityLevelHasBeenSet = true;
}

bool QualityInspectContainerDiagnoseResultItem::SeverityLevelHasBeenSet() const
{
    return m_severityLevelHasBeenSet;
}

vector<double> QualityInspectContainerDiagnoseResultItem::GetTimestampSet() const
{
    return m_timestampSet;
}

void QualityInspectContainerDiagnoseResultItem::SetTimestampSet(const vector<double>& _timestampSet)
{
    m_timestampSet = _timestampSet;
    m_timestampSetHasBeenSet = true;
}

bool QualityInspectContainerDiagnoseResultItem::TimestampSetHasBeenSet() const
{
    return m_timestampSetHasBeenSet;
}

