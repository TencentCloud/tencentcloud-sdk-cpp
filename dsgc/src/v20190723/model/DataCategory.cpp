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

#include <tencentcloud/dsgc/v20190723/model/DataCategory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DataCategory::DataCategory() :
    m_categoryIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_relateComplianceCountHasBeenSet(false)
{
}

CoreInternalOutcome DataCategory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataCategory.CategoryId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = value["CategoryId"].GetInt64();
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataCategory.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataCategory.Source` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetInt64();
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("RelateComplianceCount") && !value["RelateComplianceCount"].IsNull())
    {
        if (!value["RelateComplianceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataCategory.RelateComplianceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_relateComplianceCount = value["RelateComplianceCount"].GetUint64();
        m_relateComplianceCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataCategory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_categoryId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

    if (m_relateComplianceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelateComplianceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relateComplianceCount, allocator);
    }

}


int64_t DataCategory::GetCategoryId() const
{
    return m_categoryId;
}

void DataCategory::SetCategoryId(const int64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool DataCategory::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

string DataCategory::GetName() const
{
    return m_name;
}

void DataCategory::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DataCategory::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DataCategory::GetSource() const
{
    return m_source;
}

void DataCategory::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool DataCategory::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

uint64_t DataCategory::GetRelateComplianceCount() const
{
    return m_relateComplianceCount;
}

void DataCategory::SetRelateComplianceCount(const uint64_t& _relateComplianceCount)
{
    m_relateComplianceCount = _relateComplianceCount;
    m_relateComplianceCountHasBeenSet = true;
}

bool DataCategory::RelateComplianceCountHasBeenSet() const
{
    return m_relateComplianceCountHasBeenSet;
}

