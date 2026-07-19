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

#include <tencentcloud/mps/v20190612/model/EmbeddingData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

EmbeddingData::EmbeddingData() :
    m_typeHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

CoreInternalOutcome EmbeddingData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmbeddingData.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmbeddingData.Data` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_data = string(value["Data"].GetString());
        m_dataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EmbeddingData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_data.c_str(), allocator).Move(), allocator);
    }

}


string EmbeddingData::GetType() const
{
    return m_type;
}

void EmbeddingData::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool EmbeddingData::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string EmbeddingData::GetData() const
{
    return m_data;
}

void EmbeddingData::SetData(const string& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool EmbeddingData::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

