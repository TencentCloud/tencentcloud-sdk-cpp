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

#include <tencentcloud/lke/v20231130/model/AttrLabel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AttrLabel::AttrLabel() :
    m_sourceHasBeenSet(false),
    m_attrBizIdHasBeenSet(false),
    m_attrKeyHasBeenSet(false),
    m_attrNameHasBeenSet(false),
    m_labelsHasBeenSet(false)
{
}

CoreInternalOutcome AttrLabel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AttrLabel.Source` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetUint64();
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("AttrBizId") && !value["AttrBizId"].IsNull())
    {
        if (!value["AttrBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttrLabel.AttrBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attrBizId = string(value["AttrBizId"].GetString());
        m_attrBizIdHasBeenSet = true;
    }

    if (value.HasMember("AttrKey") && !value["AttrKey"].IsNull())
    {
        if (!value["AttrKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttrLabel.AttrKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attrKey = string(value["AttrKey"].GetString());
        m_attrKeyHasBeenSet = true;
    }

    if (value.HasMember("AttrName") && !value["AttrName"].IsNull())
    {
        if (!value["AttrName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttrLabel.AttrName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attrName = string(value["AttrName"].GetString());
        m_attrNameHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AttrLabel.Labels` is not array type"));

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


    return CoreInternalOutcome(true);
}

void AttrLabel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

    if (m_attrBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttrBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attrBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_attrKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttrKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attrKey.c_str(), allocator).Move(), allocator);
    }

    if (m_attrNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttrName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attrName.c_str(), allocator).Move(), allocator);
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

}


uint64_t AttrLabel::GetSource() const
{
    return m_source;
}

void AttrLabel::SetSource(const uint64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool AttrLabel::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string AttrLabel::GetAttrBizId() const
{
    return m_attrBizId;
}

void AttrLabel::SetAttrBizId(const string& _attrBizId)
{
    m_attrBizId = _attrBizId;
    m_attrBizIdHasBeenSet = true;
}

bool AttrLabel::AttrBizIdHasBeenSet() const
{
    return m_attrBizIdHasBeenSet;
}

string AttrLabel::GetAttrKey() const
{
    return m_attrKey;
}

void AttrLabel::SetAttrKey(const string& _attrKey)
{
    m_attrKey = _attrKey;
    m_attrKeyHasBeenSet = true;
}

bool AttrLabel::AttrKeyHasBeenSet() const
{
    return m_attrKeyHasBeenSet;
}

string AttrLabel::GetAttrName() const
{
    return m_attrName;
}

void AttrLabel::SetAttrName(const string& _attrName)
{
    m_attrName = _attrName;
    m_attrNameHasBeenSet = true;
}

bool AttrLabel::AttrNameHasBeenSet() const
{
    return m_attrNameHasBeenSet;
}

vector<Label> AttrLabel::GetLabels() const
{
    return m_labels;
}

void AttrLabel::SetLabels(const vector<Label>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool AttrLabel::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

