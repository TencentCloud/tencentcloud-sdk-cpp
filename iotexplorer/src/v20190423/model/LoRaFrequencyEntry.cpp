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

#include <tencentcloud/iotexplorer/v20190423/model/LoRaFrequencyEntry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

LoRaFrequencyEntry::LoRaFrequencyEntry() :
    m_freqIdHasBeenSet(false),
    m_freqNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_channelsDataUpHasBeenSet(false),
    m_channelsDataRX1HasBeenSet(false),
    m_channelsDataRX2HasBeenSet(false),
    m_channelsJoinUpHasBeenSet(false),
    m_channelsJoinRX1HasBeenSet(false),
    m_channelsJoinRX2HasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome LoRaFrequencyEntry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FreqId") && !value["FreqId"].IsNull())
    {
        if (!value["FreqId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoRaFrequencyEntry.FreqId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_freqId = string(value["FreqId"].GetString());
        m_freqIdHasBeenSet = true;
    }

    if (value.HasMember("FreqName") && !value["FreqName"].IsNull())
    {
        if (!value["FreqName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoRaFrequencyEntry.FreqName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_freqName = string(value["FreqName"].GetString());
        m_freqNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoRaFrequencyEntry.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ChannelsDataUp") && !value["ChannelsDataUp"].IsNull())
    {
        if (!value["ChannelsDataUp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoRaFrequencyEntry.ChannelsDataUp` is not array type"));

        const rapidjson::Value &tmpValue = value["ChannelsDataUp"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_channelsDataUp.push_back((*itr).GetUint64());
        }
        m_channelsDataUpHasBeenSet = true;
    }

    if (value.HasMember("ChannelsDataRX1") && !value["ChannelsDataRX1"].IsNull())
    {
        if (!value["ChannelsDataRX1"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoRaFrequencyEntry.ChannelsDataRX1` is not array type"));

        const rapidjson::Value &tmpValue = value["ChannelsDataRX1"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_channelsDataRX1.push_back((*itr).GetUint64());
        }
        m_channelsDataRX1HasBeenSet = true;
    }

    if (value.HasMember("ChannelsDataRX2") && !value["ChannelsDataRX2"].IsNull())
    {
        if (!value["ChannelsDataRX2"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoRaFrequencyEntry.ChannelsDataRX2` is not array type"));

        const rapidjson::Value &tmpValue = value["ChannelsDataRX2"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_channelsDataRX2.push_back((*itr).GetUint64());
        }
        m_channelsDataRX2HasBeenSet = true;
    }

    if (value.HasMember("ChannelsJoinUp") && !value["ChannelsJoinUp"].IsNull())
    {
        if (!value["ChannelsJoinUp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoRaFrequencyEntry.ChannelsJoinUp` is not array type"));

        const rapidjson::Value &tmpValue = value["ChannelsJoinUp"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_channelsJoinUp.push_back((*itr).GetUint64());
        }
        m_channelsJoinUpHasBeenSet = true;
    }

    if (value.HasMember("ChannelsJoinRX1") && !value["ChannelsJoinRX1"].IsNull())
    {
        if (!value["ChannelsJoinRX1"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoRaFrequencyEntry.ChannelsJoinRX1` is not array type"));

        const rapidjson::Value &tmpValue = value["ChannelsJoinRX1"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_channelsJoinRX1.push_back((*itr).GetUint64());
        }
        m_channelsJoinRX1HasBeenSet = true;
    }

    if (value.HasMember("ChannelsJoinRX2") && !value["ChannelsJoinRX2"].IsNull())
    {
        if (!value["ChannelsJoinRX2"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoRaFrequencyEntry.ChannelsJoinRX2` is not array type"));

        const rapidjson::Value &tmpValue = value["ChannelsJoinRX2"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_channelsJoinRX2.push_back((*itr).GetUint64());
        }
        m_channelsJoinRX2HasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LoRaFrequencyEntry.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoRaFrequencyEntry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_freqIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreqId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_freqId.c_str(), allocator).Move(), allocator);
    }

    if (m_freqNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreqName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_freqName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_channelsDataUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelsDataUp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelsDataUp.begin(); itr != m_channelsDataUp.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_channelsDataRX1HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelsDataRX1";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelsDataRX1.begin(); itr != m_channelsDataRX1.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_channelsDataRX2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelsDataRX2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelsDataRX2.begin(); itr != m_channelsDataRX2.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_channelsJoinUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelsJoinUp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelsJoinUp.begin(); itr != m_channelsJoinUp.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_channelsJoinRX1HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelsJoinRX1";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelsJoinRX1.begin(); itr != m_channelsJoinRX1.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_channelsJoinRX2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelsJoinRX2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelsJoinRX2.begin(); itr != m_channelsJoinRX2.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

}


string LoRaFrequencyEntry::GetFreqId() const
{
    return m_freqId;
}

void LoRaFrequencyEntry::SetFreqId(const string& _freqId)
{
    m_freqId = _freqId;
    m_freqIdHasBeenSet = true;
}

bool LoRaFrequencyEntry::FreqIdHasBeenSet() const
{
    return m_freqIdHasBeenSet;
}

string LoRaFrequencyEntry::GetFreqName() const
{
    return m_freqName;
}

void LoRaFrequencyEntry::SetFreqName(const string& _freqName)
{
    m_freqName = _freqName;
    m_freqNameHasBeenSet = true;
}

bool LoRaFrequencyEntry::FreqNameHasBeenSet() const
{
    return m_freqNameHasBeenSet;
}

string LoRaFrequencyEntry::GetDescription() const
{
    return m_description;
}

void LoRaFrequencyEntry::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool LoRaFrequencyEntry::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<uint64_t> LoRaFrequencyEntry::GetChannelsDataUp() const
{
    return m_channelsDataUp;
}

void LoRaFrequencyEntry::SetChannelsDataUp(const vector<uint64_t>& _channelsDataUp)
{
    m_channelsDataUp = _channelsDataUp;
    m_channelsDataUpHasBeenSet = true;
}

bool LoRaFrequencyEntry::ChannelsDataUpHasBeenSet() const
{
    return m_channelsDataUpHasBeenSet;
}

vector<uint64_t> LoRaFrequencyEntry::GetChannelsDataRX1() const
{
    return m_channelsDataRX1;
}

void LoRaFrequencyEntry::SetChannelsDataRX1(const vector<uint64_t>& _channelsDataRX1)
{
    m_channelsDataRX1 = _channelsDataRX1;
    m_channelsDataRX1HasBeenSet = true;
}

bool LoRaFrequencyEntry::ChannelsDataRX1HasBeenSet() const
{
    return m_channelsDataRX1HasBeenSet;
}

vector<uint64_t> LoRaFrequencyEntry::GetChannelsDataRX2() const
{
    return m_channelsDataRX2;
}

void LoRaFrequencyEntry::SetChannelsDataRX2(const vector<uint64_t>& _channelsDataRX2)
{
    m_channelsDataRX2 = _channelsDataRX2;
    m_channelsDataRX2HasBeenSet = true;
}

bool LoRaFrequencyEntry::ChannelsDataRX2HasBeenSet() const
{
    return m_channelsDataRX2HasBeenSet;
}

vector<uint64_t> LoRaFrequencyEntry::GetChannelsJoinUp() const
{
    return m_channelsJoinUp;
}

void LoRaFrequencyEntry::SetChannelsJoinUp(const vector<uint64_t>& _channelsJoinUp)
{
    m_channelsJoinUp = _channelsJoinUp;
    m_channelsJoinUpHasBeenSet = true;
}

bool LoRaFrequencyEntry::ChannelsJoinUpHasBeenSet() const
{
    return m_channelsJoinUpHasBeenSet;
}

vector<uint64_t> LoRaFrequencyEntry::GetChannelsJoinRX1() const
{
    return m_channelsJoinRX1;
}

void LoRaFrequencyEntry::SetChannelsJoinRX1(const vector<uint64_t>& _channelsJoinRX1)
{
    m_channelsJoinRX1 = _channelsJoinRX1;
    m_channelsJoinRX1HasBeenSet = true;
}

bool LoRaFrequencyEntry::ChannelsJoinRX1HasBeenSet() const
{
    return m_channelsJoinRX1HasBeenSet;
}

vector<uint64_t> LoRaFrequencyEntry::GetChannelsJoinRX2() const
{
    return m_channelsJoinRX2;
}

void LoRaFrequencyEntry::SetChannelsJoinRX2(const vector<uint64_t>& _channelsJoinRX2)
{
    m_channelsJoinRX2 = _channelsJoinRX2;
    m_channelsJoinRX2HasBeenSet = true;
}

bool LoRaFrequencyEntry::ChannelsJoinRX2HasBeenSet() const
{
    return m_channelsJoinRX2HasBeenSet;
}

int64_t LoRaFrequencyEntry::GetCreateTime() const
{
    return m_createTime;
}

void LoRaFrequencyEntry::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LoRaFrequencyEntry::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

