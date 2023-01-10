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

#include <tencentcloud/tsf/v20180326/model/DeliveryKafkaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

DeliveryKafkaInfo::DeliveryKafkaInfo() :
    m_topicHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_lineRuleHasBeenSet(false),
    m_customRuleHasBeenSet(false)
{
}

CoreInternalOutcome DeliveryKafkaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryKafkaInfo.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeliveryKafkaInfo.Path` is not array type"));

        const rapidjson::Value &tmpValue = value["Path"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_path.push_back((*itr).GetString());
        }
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("LineRule") && !value["LineRule"].IsNull())
    {
        if (!value["LineRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryKafkaInfo.LineRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineRule = string(value["LineRule"].GetString());
        m_lineRuleHasBeenSet = true;
    }

    if (value.HasMember("CustomRule") && !value["CustomRule"].IsNull())
    {
        if (!value["CustomRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliveryKafkaInfo.CustomRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customRule = string(value["CustomRule"].GetString());
        m_customRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeliveryKafkaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_path.begin(); itr != m_path.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_lineRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lineRule.c_str(), allocator).Move(), allocator);
    }

    if (m_customRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customRule.c_str(), allocator).Move(), allocator);
    }

}


string DeliveryKafkaInfo::GetTopic() const
{
    return m_topic;
}

void DeliveryKafkaInfo::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool DeliveryKafkaInfo::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

vector<string> DeliveryKafkaInfo::GetPath() const
{
    return m_path;
}

void DeliveryKafkaInfo::SetPath(const vector<string>& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool DeliveryKafkaInfo::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string DeliveryKafkaInfo::GetLineRule() const
{
    return m_lineRule;
}

void DeliveryKafkaInfo::SetLineRule(const string& _lineRule)
{
    m_lineRule = _lineRule;
    m_lineRuleHasBeenSet = true;
}

bool DeliveryKafkaInfo::LineRuleHasBeenSet() const
{
    return m_lineRuleHasBeenSet;
}

string DeliveryKafkaInfo::GetCustomRule() const
{
    return m_customRule;
}

void DeliveryKafkaInfo::SetCustomRule(const string& _customRule)
{
    m_customRule = _customRule;
    m_customRuleHasBeenSet = true;
}

bool DeliveryKafkaInfo::CustomRuleHasBeenSet() const
{
    return m_customRuleHasBeenSet;
}

