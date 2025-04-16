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

#include <tencentcloud/trocket/v20230308/model/TopicStageChangeResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

TopicStageChangeResult::TopicStageChangeResult() :
    m_topicNameHasBeenSet(false),
    m_successHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

CoreInternalOutcome TopicStageChangeResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicStageChangeResult.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("Success") && !value["Success"].IsNull())
    {
        if (!value["Success"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TopicStageChangeResult.Success` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_success = value["Success"].GetBool();
        m_successHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicStageChangeResult.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopicStageChangeResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_successHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Success";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_success, allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

}


string TopicStageChangeResult::GetTopicName() const
{
    return m_topicName;
}

void TopicStageChangeResult::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool TopicStageChangeResult::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

bool TopicStageChangeResult::GetSuccess() const
{
    return m_success;
}

void TopicStageChangeResult::SetSuccess(const bool& _success)
{
    m_success = _success;
    m_successHasBeenSet = true;
}

bool TopicStageChangeResult::SuccessHasBeenSet() const
{
    return m_successHasBeenSet;
}

string TopicStageChangeResult::GetNamespace() const
{
    return m_namespace;
}

void TopicStageChangeResult::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool TopicStageChangeResult::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

