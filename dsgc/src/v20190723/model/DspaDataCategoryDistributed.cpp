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

#include <tencentcloud/dsgc/v20190723/model/DspaDataCategoryDistributed.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DspaDataCategoryDistributed::DspaDataCategoryDistributed() :
    m_categoryIdHasBeenSet(false),
    m_categoryNameHasBeenSet(false),
    m_countHasBeenSet(false),
    m_categoryFullPathHasBeenSet(false)
{
}

CoreInternalOutcome DspaDataCategoryDistributed::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDataCategoryDistributed.CategoryId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = value["CategoryId"].GetInt64();
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("CategoryName") && !value["CategoryName"].IsNull())
    {
        if (!value["CategoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDataCategoryDistributed.CategoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryName = string(value["CategoryName"].GetString());
        m_categoryNameHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDataCategoryDistributed.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("CategoryFullPath") && !value["CategoryFullPath"].IsNull())
    {
        if (!value["CategoryFullPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDataCategoryDistributed.CategoryFullPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryFullPath = string(value["CategoryFullPath"].GetString());
        m_categoryFullPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspaDataCategoryDistributed::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_categoryId, allocator);
    }

    if (m_categoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_categoryFullPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryFullPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryFullPath.c_str(), allocator).Move(), allocator);
    }

}


int64_t DspaDataCategoryDistributed::GetCategoryId() const
{
    return m_categoryId;
}

void DspaDataCategoryDistributed::SetCategoryId(const int64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool DspaDataCategoryDistributed::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

string DspaDataCategoryDistributed::GetCategoryName() const
{
    return m_categoryName;
}

void DspaDataCategoryDistributed::SetCategoryName(const string& _categoryName)
{
    m_categoryName = _categoryName;
    m_categoryNameHasBeenSet = true;
}

bool DspaDataCategoryDistributed::CategoryNameHasBeenSet() const
{
    return m_categoryNameHasBeenSet;
}

uint64_t DspaDataCategoryDistributed::GetCount() const
{
    return m_count;
}

void DspaDataCategoryDistributed::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool DspaDataCategoryDistributed::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string DspaDataCategoryDistributed::GetCategoryFullPath() const
{
    return m_categoryFullPath;
}

void DspaDataCategoryDistributed::SetCategoryFullPath(const string& _categoryFullPath)
{
    m_categoryFullPath = _categoryFullPath;
    m_categoryFullPathHasBeenSet = true;
}

bool DspaDataCategoryDistributed::CategoryFullPathHasBeenSet() const
{
    return m_categoryFullPathHasBeenSet;
}

