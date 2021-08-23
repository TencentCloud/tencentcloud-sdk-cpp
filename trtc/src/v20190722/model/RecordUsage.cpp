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

#include <tencentcloud/trtc/v20190722/model/RecordUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

RecordUsage::RecordUsage() :
    m_timeKeyHasBeenSet(false),
    m_class1VideoTimeHasBeenSet(false),
    m_class2VideoTimeHasBeenSet(false),
    m_class3VideoTimeHasBeenSet(false),
    m_audioTimeHasBeenSet(false)
{
}

CoreInternalOutcome RecordUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeKey") && !value["TimeKey"].IsNull())
    {
        if (!value["TimeKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordUsage.TimeKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeKey = string(value["TimeKey"].GetString());
        m_timeKeyHasBeenSet = true;
    }

    if (value.HasMember("Class1VideoTime") && !value["Class1VideoTime"].IsNull())
    {
        if (!value["Class1VideoTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordUsage.Class1VideoTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_class1VideoTime = value["Class1VideoTime"].GetUint64();
        m_class1VideoTimeHasBeenSet = true;
    }

    if (value.HasMember("Class2VideoTime") && !value["Class2VideoTime"].IsNull())
    {
        if (!value["Class2VideoTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordUsage.Class2VideoTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_class2VideoTime = value["Class2VideoTime"].GetUint64();
        m_class2VideoTimeHasBeenSet = true;
    }

    if (value.HasMember("Class3VideoTime") && !value["Class3VideoTime"].IsNull())
    {
        if (!value["Class3VideoTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordUsage.Class3VideoTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_class3VideoTime = value["Class3VideoTime"].GetUint64();
        m_class3VideoTimeHasBeenSet = true;
    }

    if (value.HasMember("AudioTime") && !value["AudioTime"].IsNull())
    {
        if (!value["AudioTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordUsage.AudioTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioTime = value["AudioTime"].GetUint64();
        m_audioTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeKey.c_str(), allocator).Move(), allocator);
    }

    if (m_class1VideoTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Class1VideoTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_class1VideoTime, allocator);
    }

    if (m_class2VideoTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Class2VideoTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_class2VideoTime, allocator);
    }

    if (m_class3VideoTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Class3VideoTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_class3VideoTime, allocator);
    }

    if (m_audioTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioTime, allocator);
    }

}


string RecordUsage::GetTimeKey() const
{
    return m_timeKey;
}

void RecordUsage::SetTimeKey(const string& _timeKey)
{
    m_timeKey = _timeKey;
    m_timeKeyHasBeenSet = true;
}

bool RecordUsage::TimeKeyHasBeenSet() const
{
    return m_timeKeyHasBeenSet;
}

uint64_t RecordUsage::GetClass1VideoTime() const
{
    return m_class1VideoTime;
}

void RecordUsage::SetClass1VideoTime(const uint64_t& _class1VideoTime)
{
    m_class1VideoTime = _class1VideoTime;
    m_class1VideoTimeHasBeenSet = true;
}

bool RecordUsage::Class1VideoTimeHasBeenSet() const
{
    return m_class1VideoTimeHasBeenSet;
}

uint64_t RecordUsage::GetClass2VideoTime() const
{
    return m_class2VideoTime;
}

void RecordUsage::SetClass2VideoTime(const uint64_t& _class2VideoTime)
{
    m_class2VideoTime = _class2VideoTime;
    m_class2VideoTimeHasBeenSet = true;
}

bool RecordUsage::Class2VideoTimeHasBeenSet() const
{
    return m_class2VideoTimeHasBeenSet;
}

uint64_t RecordUsage::GetClass3VideoTime() const
{
    return m_class3VideoTime;
}

void RecordUsage::SetClass3VideoTime(const uint64_t& _class3VideoTime)
{
    m_class3VideoTime = _class3VideoTime;
    m_class3VideoTimeHasBeenSet = true;
}

bool RecordUsage::Class3VideoTimeHasBeenSet() const
{
    return m_class3VideoTimeHasBeenSet;
}

uint64_t RecordUsage::GetAudioTime() const
{
    return m_audioTime;
}

void RecordUsage::SetAudioTime(const uint64_t& _audioTime)
{
    m_audioTime = _audioTime;
    m_audioTimeHasBeenSet = true;
}

bool RecordUsage::AudioTimeHasBeenSet() const
{
    return m_audioTimeHasBeenSet;
}

