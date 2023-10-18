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

#include <tencentcloud/oceanus/v20190422/model/ResultData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

ResultData::ResultData() :
    m_kindHasBeenSet(false),
    m_fieldsHasBeenSet(false)
{
}

CoreInternalOutcome ResultData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultData.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("Fields") && !value["Fields"].IsNull())
    {
        if (!value["Fields"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResultData.Fields` is not array type"));

        const rapidjson::Value &tmpValue = value["Fields"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fields.push_back((*itr).GetString());
        }
        m_fieldsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResultData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fields.begin(); itr != m_fields.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ResultData::GetKind() const
{
    return m_kind;
}

void ResultData::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool ResultData::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

vector<string> ResultData::GetFields() const
{
    return m_fields;
}

void ResultData::SetFields(const vector<string>& _fields)
{
    m_fields = _fields;
    m_fieldsHasBeenSet = true;
}

bool ResultData::FieldsHasBeenSet() const
{
    return m_fieldsHasBeenSet;
}

