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

#include <tencentcloud/trtc/v20190722/model/TrtcUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

TrtcUsage::TrtcUsage() :
    m_timeKeyHasBeenSet(false),
    m_timeStampKeyHasBeenSet(false),
    m_usageValueHasBeenSet(false)
{
}

CoreInternalOutcome TrtcUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeKey") && !value["TimeKey"].IsNull())
    {
        if (!value["TimeKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrtcUsage.TimeKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeKey = string(value["TimeKey"].GetString());
        m_timeKeyHasBeenSet = true;
    }

    if (value.HasMember("TimeStampKey") && !value["TimeStampKey"].IsNull())
    {
        if (!value["TimeStampKey"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrtcUsage.TimeStampKey` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeStampKey = value["TimeStampKey"].GetUint64();
        m_timeStampKeyHasBeenSet = true;
    }

    if (value.HasMember("UsageValue") && !value["UsageValue"].IsNull())
    {
        if (!value["UsageValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrtcUsage.UsageValue` is not array type"));

        const rapidjson::Value &tmpValue = value["UsageValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_usageValue.push_back((*itr).GetDouble());
        }
        m_usageValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrtcUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeKey.c_str(), allocator).Move(), allocator);
    }

    if (m_timeStampKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeStampKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeStampKey, allocator);
    }

    if (m_usageValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsageValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_usageValue.begin(); itr != m_usageValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

}


string TrtcUsage::GetTimeKey() const
{
    return m_timeKey;
}

void TrtcUsage::SetTimeKey(const string& _timeKey)
{
    m_timeKey = _timeKey;
    m_timeKeyHasBeenSet = true;
}

bool TrtcUsage::TimeKeyHasBeenSet() const
{
    return m_timeKeyHasBeenSet;
}

uint64_t TrtcUsage::GetTimeStampKey() const
{
    return m_timeStampKey;
}

void TrtcUsage::SetTimeStampKey(const uint64_t& _timeStampKey)
{
    m_timeStampKey = _timeStampKey;
    m_timeStampKeyHasBeenSet = true;
}

bool TrtcUsage::TimeStampKeyHasBeenSet() const
{
    return m_timeStampKeyHasBeenSet;
}

vector<double> TrtcUsage::GetUsageValue() const
{
    return m_usageValue;
}

void TrtcUsage::SetUsageValue(const vector<double>& _usageValue)
{
    m_usageValue = _usageValue;
    m_usageValueHasBeenSet = true;
}

bool TrtcUsage::UsageValueHasBeenSet() const
{
    return m_usageValueHasBeenSet;
}

