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

#include <tencentcloud/dts/v20211206/model/KafkaOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

KafkaOption::KafkaOption() :
    m_dataTypeHasBeenSet(false),
    m_topicTypeHasBeenSet(false),
    m_dDLTopicNameHasBeenSet(false),
    m_topicRulesHasBeenSet(false)
{
}

CoreInternalOutcome KafkaOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataType") && !value["DataType"].IsNull())
    {
        if (!value["DataType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaOption.DataType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataType = string(value["DataType"].GetString());
        m_dataTypeHasBeenSet = true;
    }

    if (value.HasMember("TopicType") && !value["TopicType"].IsNull())
    {
        if (!value["TopicType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaOption.TopicType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicType = string(value["TopicType"].GetString());
        m_topicTypeHasBeenSet = true;
    }

    if (value.HasMember("DDLTopicName") && !value["DDLTopicName"].IsNull())
    {
        if (!value["DDLTopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaOption.DDLTopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dDLTopicName = string(value["DDLTopicName"].GetString());
        m_dDLTopicNameHasBeenSet = true;
    }

    if (value.HasMember("TopicRules") && !value["TopicRules"].IsNull())
    {
        if (!value["TopicRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KafkaOption.TopicRules` is not array type"));

        const rapidjson::Value &tmpValue = value["TopicRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TopicRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_topicRules.push_back(item);
        }
        m_topicRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KafkaOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataType.c_str(), allocator).Move(), allocator);
    }

    if (m_topicTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicType.c_str(), allocator).Move(), allocator);
    }

    if (m_dDLTopicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DDLTopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dDLTopicName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topicRules.begin(); itr != m_topicRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string KafkaOption::GetDataType() const
{
    return m_dataType;
}

void KafkaOption::SetDataType(const string& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool KafkaOption::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}

string KafkaOption::GetTopicType() const
{
    return m_topicType;
}

void KafkaOption::SetTopicType(const string& _topicType)
{
    m_topicType = _topicType;
    m_topicTypeHasBeenSet = true;
}

bool KafkaOption::TopicTypeHasBeenSet() const
{
    return m_topicTypeHasBeenSet;
}

string KafkaOption::GetDDLTopicName() const
{
    return m_dDLTopicName;
}

void KafkaOption::SetDDLTopicName(const string& _dDLTopicName)
{
    m_dDLTopicName = _dDLTopicName;
    m_dDLTopicNameHasBeenSet = true;
}

bool KafkaOption::DDLTopicNameHasBeenSet() const
{
    return m_dDLTopicNameHasBeenSet;
}

vector<TopicRule> KafkaOption::GetTopicRules() const
{
    return m_topicRules;
}

void KafkaOption::SetTopicRules(const vector<TopicRule>& _topicRules)
{
    m_topicRules = _topicRules;
    m_topicRulesHasBeenSet = true;
}

bool KafkaOption::TopicRulesHasBeenSet() const
{
    return m_topicRulesHasBeenSet;
}

