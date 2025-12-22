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

#include <tencentcloud/cls/v20201016/model/MetricConfigLabel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

MetricConfigLabel::MetricConfigLabel() :
    m_metadataHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_customLabelsHasBeenSet(false)
{
}

CoreInternalOutcome MetricConfigLabel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Metadata") && !value["Metadata"].IsNull())
    {
        if (!value["Metadata"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricConfigLabel.Metadata` is not array type"));

        const rapidjson::Value &tmpValue = value["Metadata"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_metadata.push_back((*itr).GetString());
        }
        m_metadataHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MetricConfigLabel.Label` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_label.Deserialize(value["Label"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_labelHasBeenSet = true;
    }

    if (value.HasMember("CustomLabels") && !value["CustomLabels"].IsNull())
    {
        if (!value["CustomLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetricConfigLabel.CustomLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CustomLabel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customLabels.push_back(item);
        }
        m_customLabelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricConfigLabel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_metadata.begin(); itr != m_metadata.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_label.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_customLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customLabels.begin(); itr != m_customLabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<string> MetricConfigLabel::GetMetadata() const
{
    return m_metadata;
}

void MetricConfigLabel::SetMetadata(const vector<string>& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool MetricConfigLabel::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

AppointLabel MetricConfigLabel::GetLabel() const
{
    return m_label;
}

void MetricConfigLabel::SetLabel(const AppointLabel& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool MetricConfigLabel::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

vector<CustomLabel> MetricConfigLabel::GetCustomLabels() const
{
    return m_customLabels;
}

void MetricConfigLabel::SetCustomLabels(const vector<CustomLabel>& _customLabels)
{
    m_customLabels = _customLabels;
    m_customLabelsHasBeenSet = true;
}

bool MetricConfigLabel::CustomLabelsHasBeenSet() const
{
    return m_customLabelsHasBeenSet;
}

