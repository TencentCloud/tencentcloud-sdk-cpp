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

#include <tencentcloud/cngw/v20230418/model/AIGWConsumerGroupBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWConsumerGroupBrief::AIGWConsumerGroupBrief() :
    m_nameHasBeenSet(false),
    m_consumerGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome AIGWConsumerGroupBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWConsumerGroupBrief.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ConsumerGroupId") && !value["ConsumerGroupId"].IsNull())
    {
        if (!value["ConsumerGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWConsumerGroupBrief.ConsumerGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerGroupId = string(value["ConsumerGroupId"].GetString());
        m_consumerGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWConsumerGroupBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerGroupId.c_str(), allocator).Move(), allocator);
    }

}


string AIGWConsumerGroupBrief::GetName() const
{
    return m_name;
}

void AIGWConsumerGroupBrief::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AIGWConsumerGroupBrief::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AIGWConsumerGroupBrief::GetConsumerGroupId() const
{
    return m_consumerGroupId;
}

void AIGWConsumerGroupBrief::SetConsumerGroupId(const string& _consumerGroupId)
{
    m_consumerGroupId = _consumerGroupId;
    m_consumerGroupIdHasBeenSet = true;
}

bool AIGWConsumerGroupBrief::ConsumerGroupIdHasBeenSet() const
{
    return m_consumerGroupIdHasBeenSet;
}

