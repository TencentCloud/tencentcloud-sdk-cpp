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

#include <tencentcloud/cat/v20180409/model/DetailedSingleDataDefine.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

DetailedSingleDataDefine::DetailedSingleDataDefine() :
    m_probeTimeHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_fieldsHasBeenSet(false)
{
}

CoreInternalOutcome DetailedSingleDataDefine::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProbeTime") && !value["ProbeTime"].IsNull())
    {
        if (!value["ProbeTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DetailedSingleDataDefine.ProbeTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_probeTime = value["ProbeTime"].GetUint64();
        m_probeTimeHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DetailedSingleDataDefine.Labels` is not array type"));

        const rapidjson::Value &tmpValue = value["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Label item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labels.push_back(item);
        }
        m_labelsHasBeenSet = true;
    }

    if (value.HasMember("Fields") && !value["Fields"].IsNull())
    {
        if (!value["Fields"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DetailedSingleDataDefine.Fields` is not array type"));

        const rapidjson::Value &tmpValue = value["Fields"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Field item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fields.push_back(item);
        }
        m_fieldsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DetailedSingleDataDefine::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_probeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProbeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_probeTime, allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_fieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fields.begin(); itr != m_fields.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t DetailedSingleDataDefine::GetProbeTime() const
{
    return m_probeTime;
}

void DetailedSingleDataDefine::SetProbeTime(const uint64_t& _probeTime)
{
    m_probeTime = _probeTime;
    m_probeTimeHasBeenSet = true;
}

bool DetailedSingleDataDefine::ProbeTimeHasBeenSet() const
{
    return m_probeTimeHasBeenSet;
}

vector<Label> DetailedSingleDataDefine::GetLabels() const
{
    return m_labels;
}

void DetailedSingleDataDefine::SetLabels(const vector<Label>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool DetailedSingleDataDefine::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<Field> DetailedSingleDataDefine::GetFields() const
{
    return m_fields;
}

void DetailedSingleDataDefine::SetFields(const vector<Field>& _fields)
{
    m_fields = _fields;
    m_fieldsHasBeenSet = true;
}

bool DetailedSingleDataDefine::FieldsHasBeenSet() const
{
    return m_fieldsHasBeenSet;
}

