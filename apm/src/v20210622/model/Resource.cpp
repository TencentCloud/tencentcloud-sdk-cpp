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

#include <tencentcloud/apm/v20210622/model/Resource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

Resource::Resource() :
    m_typeHasBeenSet(false),
    m_tKEMetaHasBeenSet(false),
    m_cVMMetaHasBeenSet(false)
{
}

CoreInternalOutcome Resource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Resource.Type` is not array type"));

        const rapidjson::Value &tmpValue = value["Type"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_type.push_back((*itr).GetString());
        }
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TKEMeta") && !value["TKEMeta"].IsNull())
    {
        if (!value["TKEMeta"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Resource.TKEMeta` is not array type"));

        const rapidjson::Value &tmpValue = value["TKEMeta"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TkeMeta item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tKEMeta.push_back(item);
        }
        m_tKEMetaHasBeenSet = true;
    }

    if (value.HasMember("CVMMeta") && !value["CVMMeta"].IsNull())
    {
        if (!value["CVMMeta"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Resource.CVMMeta` is not array type"));

        const rapidjson::Value &tmpValue = value["CVMMeta"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CVMMeta item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cVMMeta.push_back(item);
        }
        m_cVMMetaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Resource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_type.begin(); itr != m_type.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tKEMetaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TKEMeta";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tKEMeta.begin(); itr != m_tKEMeta.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cVMMetaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVMMeta";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cVMMeta.begin(); itr != m_cVMMeta.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<string> Resource::GetType() const
{
    return m_type;
}

void Resource::SetType(const vector<string>& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Resource::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<TkeMeta> Resource::GetTKEMeta() const
{
    return m_tKEMeta;
}

void Resource::SetTKEMeta(const vector<TkeMeta>& _tKEMeta)
{
    m_tKEMeta = _tKEMeta;
    m_tKEMetaHasBeenSet = true;
}

bool Resource::TKEMetaHasBeenSet() const
{
    return m_tKEMetaHasBeenSet;
}

vector<CVMMeta> Resource::GetCVMMeta() const
{
    return m_cVMMeta;
}

void Resource::SetCVMMeta(const vector<CVMMeta>& _cVMMeta)
{
    m_cVMMeta = _cVMMeta;
    m_cVMMetaHasBeenSet = true;
}

bool Resource::CVMMetaHasBeenSet() const
{
    return m_cVMMetaHasBeenSet;
}

