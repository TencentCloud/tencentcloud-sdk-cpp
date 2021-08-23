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

#include <tencentcloud/ie/v20200304/model/TagItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

TagItem::TagItem() :
    m_idHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_categorysHasBeenSet(false),
    m_extHasBeenSet(false)
{
}

CoreInternalOutcome TagItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagItem.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TagItem.Confidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetInt64();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Categorys") && !value["Categorys"].IsNull())
    {
        if (!value["Categorys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TagItem.Categorys` is not array type"));

        const rapidjson::Value &tmpValue = value["Categorys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_categorys.push_back((*itr).GetString());
        }
        m_categorysHasBeenSet = true;
    }

    if (value.HasMember("Ext") && !value["Ext"].IsNull())
    {
        if (!value["Ext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagItem.Ext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ext = string(value["Ext"].GetString());
        m_extHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TagItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_categorysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Categorys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_categorys.begin(); itr != m_categorys.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_extHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ext.c_str(), allocator).Move(), allocator);
    }

}


string TagItem::GetId() const
{
    return m_id;
}

void TagItem::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool TagItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t TagItem::GetConfidence() const
{
    return m_confidence;
}

void TagItem::SetConfidence(const int64_t& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool TagItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

vector<string> TagItem::GetCategorys() const
{
    return m_categorys;
}

void TagItem::SetCategorys(const vector<string>& _categorys)
{
    m_categorys = _categorys;
    m_categorysHasBeenSet = true;
}

bool TagItem::CategorysHasBeenSet() const
{
    return m_categorysHasBeenSet;
}

string TagItem::GetExt() const
{
    return m_ext;
}

void TagItem::SetExt(const string& _ext)
{
    m_ext = _ext;
    m_extHasBeenSet = true;
}

bool TagItem::ExtHasBeenSet() const
{
    return m_extHasBeenSet;
}

