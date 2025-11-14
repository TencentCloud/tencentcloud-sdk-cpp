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

#include <tencentcloud/cls/v20201016/model/UserKafkaMeta.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

UserKafkaMeta::UserKafkaMeta() :
    m_kafkaVersionHasBeenSet(false)
{
}

CoreInternalOutcome UserKafkaMeta::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KafkaVersion") && !value["KafkaVersion"].IsNull())
    {
        if (!value["KafkaVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserKafkaMeta.KafkaVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaVersion = string(value["KafkaVersion"].GetString());
        m_kafkaVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserKafkaMeta::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_kafkaVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kafkaVersion.c_str(), allocator).Move(), allocator);
    }

}


string UserKafkaMeta::GetKafkaVersion() const
{
    return m_kafkaVersion;
}

void UserKafkaMeta::SetKafkaVersion(const string& _kafkaVersion)
{
    m_kafkaVersion = _kafkaVersion;
    m_kafkaVersionHasBeenSet = true;
}

bool UserKafkaMeta::KafkaVersionHasBeenSet() const
{
    return m_kafkaVersionHasBeenSet;
}

