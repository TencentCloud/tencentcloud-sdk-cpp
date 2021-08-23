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

#include <tencentcloud/mrs/v20200910/model/HistologyType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

HistologyType::HistologyType() :
    m_infiltrationHasBeenSet(false),
    m_indexHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome HistologyType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Infiltration") && !value["Infiltration"].IsNull())
    {
        if (!value["Infiltration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HistologyType.Infiltration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_infiltration = string(value["Infiltration"].GetString());
        m_infiltrationHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HistologyType.Index` is not array type"));

        const rapidjson::Value &tmpValue = value["Index"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_index.push_back((*itr).GetInt64());
        }
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HistologyType.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HistologyType.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HistologyType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_infiltrationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Infiltration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_infiltration.c_str(), allocator).Move(), allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_index.begin(); itr != m_index.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_srcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Src";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_src.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


string HistologyType::GetInfiltration() const
{
    return m_infiltration;
}

void HistologyType::SetInfiltration(const string& _infiltration)
{
    m_infiltration = _infiltration;
    m_infiltrationHasBeenSet = true;
}

bool HistologyType::InfiltrationHasBeenSet() const
{
    return m_infiltrationHasBeenSet;
}

vector<int64_t> HistologyType::GetIndex() const
{
    return m_index;
}

void HistologyType::SetIndex(const vector<int64_t>& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool HistologyType::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string HistologyType::GetSrc() const
{
    return m_src;
}

void HistologyType::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool HistologyType::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

string HistologyType::GetType() const
{
    return m_type;
}

void HistologyType::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool HistologyType::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

