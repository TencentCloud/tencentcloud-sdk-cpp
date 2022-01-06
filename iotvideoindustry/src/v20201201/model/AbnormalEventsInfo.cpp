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

#include <tencentcloud/iotvideoindustry/v20201201/model/AbnormalEventsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

AbnormalEventsInfo::AbnormalEventsInfo() :
    m_keyHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome AbnormalEventsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalEventsInfo.Key` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_key = value["Key"].GetInt64();
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalEventsInfo.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AbnormalEventsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_key, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


int64_t AbnormalEventsInfo::GetKey() const
{
    return m_key;
}

void AbnormalEventsInfo::SetKey(const int64_t& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool AbnormalEventsInfo::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

int64_t AbnormalEventsInfo::GetCount() const
{
    return m_count;
}

void AbnormalEventsInfo::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool AbnormalEventsInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

