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

#include <tencentcloud/adp/v20260520/model/CategoryPath.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

CategoryPath::CategoryPath() :
    m_categoryIdHasBeenSet(false),
    m_categoryIdPathHasBeenSet(false),
    m_categoryNamePathHasBeenSet(false)
{
}

CoreInternalOutcome CategoryPath::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CategoryPath.CategoryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = string(value["CategoryId"].GetString());
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("CategoryIdPath") && !value["CategoryIdPath"].IsNull())
    {
        if (!value["CategoryIdPath"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CategoryPath.CategoryIdPath` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryIdPath"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_categoryIdPath.push_back((*itr).GetString());
        }
        m_categoryIdPathHasBeenSet = true;
    }

    if (value.HasMember("CategoryNamePath") && !value["CategoryNamePath"].IsNull())
    {
        if (!value["CategoryNamePath"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CategoryPath.CategoryNamePath` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryNamePath"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_categoryNamePath.push_back((*itr).GetString());
        }
        m_categoryNamePathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CategoryPath::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryId.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryIdPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryIdPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_categoryIdPath.begin(); itr != m_categoryIdPath.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_categoryNamePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryNamePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_categoryNamePath.begin(); itr != m_categoryNamePath.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string CategoryPath::GetCategoryId() const
{
    return m_categoryId;
}

void CategoryPath::SetCategoryId(const string& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool CategoryPath::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

vector<string> CategoryPath::GetCategoryIdPath() const
{
    return m_categoryIdPath;
}

void CategoryPath::SetCategoryIdPath(const vector<string>& _categoryIdPath)
{
    m_categoryIdPath = _categoryIdPath;
    m_categoryIdPathHasBeenSet = true;
}

bool CategoryPath::CategoryIdPathHasBeenSet() const
{
    return m_categoryIdPathHasBeenSet;
}

vector<string> CategoryPath::GetCategoryNamePath() const
{
    return m_categoryNamePath;
}

void CategoryPath::SetCategoryNamePath(const vector<string>& _categoryNamePath)
{
    m_categoryNamePath = _categoryNamePath;
    m_categoryNamePathHasBeenSet = true;
}

bool CategoryPath::CategoryNamePathHasBeenSet() const
{
    return m_categoryNamePathHasBeenSet;
}

