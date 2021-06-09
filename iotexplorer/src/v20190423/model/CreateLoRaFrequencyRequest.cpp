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

#include <tencentcloud/iotexplorer/v20190423/model/CreateLoRaFrequencyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

CreateLoRaFrequencyRequest::CreateLoRaFrequencyRequest() :
    m_freqNameHasBeenSet(false),
    m_channelsDataUpHasBeenSet(false),
    m_channelsDataRX1HasBeenSet(false),
    m_channelsDataRX2HasBeenSet(false),
    m_channelsJoinUpHasBeenSet(false),
    m_channelsJoinRX1HasBeenSet(false),
    m_channelsJoinRX2HasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateLoRaFrequencyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_freqNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreqName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_freqName.c_str(), allocator).Move(), allocator);
    }

    if (m_channelsDataUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelsDataUp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelsDataUp.begin(); itr != m_channelsDataUp.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_channelsDataRX1HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelsDataRX1";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelsDataRX1.begin(); itr != m_channelsDataRX1.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_channelsDataRX2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelsDataRX2";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelsDataRX2.begin(); itr != m_channelsDataRX2.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_channelsJoinUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelsJoinUp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelsJoinUp.begin(); itr != m_channelsJoinUp.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_channelsJoinRX1HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelsJoinRX1";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelsJoinRX1.begin(); itr != m_channelsJoinRX1.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_channelsJoinRX2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelsJoinRX2";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelsJoinRX2.begin(); itr != m_channelsJoinRX2.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLoRaFrequencyRequest::GetFreqName() const
{
    return m_freqName;
}

void CreateLoRaFrequencyRequest::SetFreqName(const string& _freqName)
{
    m_freqName = _freqName;
    m_freqNameHasBeenSet = true;
}

bool CreateLoRaFrequencyRequest::FreqNameHasBeenSet() const
{
    return m_freqNameHasBeenSet;
}

vector<uint64_t> CreateLoRaFrequencyRequest::GetChannelsDataUp() const
{
    return m_channelsDataUp;
}

void CreateLoRaFrequencyRequest::SetChannelsDataUp(const vector<uint64_t>& _channelsDataUp)
{
    m_channelsDataUp = _channelsDataUp;
    m_channelsDataUpHasBeenSet = true;
}

bool CreateLoRaFrequencyRequest::ChannelsDataUpHasBeenSet() const
{
    return m_channelsDataUpHasBeenSet;
}

vector<uint64_t> CreateLoRaFrequencyRequest::GetChannelsDataRX1() const
{
    return m_channelsDataRX1;
}

void CreateLoRaFrequencyRequest::SetChannelsDataRX1(const vector<uint64_t>& _channelsDataRX1)
{
    m_channelsDataRX1 = _channelsDataRX1;
    m_channelsDataRX1HasBeenSet = true;
}

bool CreateLoRaFrequencyRequest::ChannelsDataRX1HasBeenSet() const
{
    return m_channelsDataRX1HasBeenSet;
}

vector<uint64_t> CreateLoRaFrequencyRequest::GetChannelsDataRX2() const
{
    return m_channelsDataRX2;
}

void CreateLoRaFrequencyRequest::SetChannelsDataRX2(const vector<uint64_t>& _channelsDataRX2)
{
    m_channelsDataRX2 = _channelsDataRX2;
    m_channelsDataRX2HasBeenSet = true;
}

bool CreateLoRaFrequencyRequest::ChannelsDataRX2HasBeenSet() const
{
    return m_channelsDataRX2HasBeenSet;
}

vector<uint64_t> CreateLoRaFrequencyRequest::GetChannelsJoinUp() const
{
    return m_channelsJoinUp;
}

void CreateLoRaFrequencyRequest::SetChannelsJoinUp(const vector<uint64_t>& _channelsJoinUp)
{
    m_channelsJoinUp = _channelsJoinUp;
    m_channelsJoinUpHasBeenSet = true;
}

bool CreateLoRaFrequencyRequest::ChannelsJoinUpHasBeenSet() const
{
    return m_channelsJoinUpHasBeenSet;
}

vector<uint64_t> CreateLoRaFrequencyRequest::GetChannelsJoinRX1() const
{
    return m_channelsJoinRX1;
}

void CreateLoRaFrequencyRequest::SetChannelsJoinRX1(const vector<uint64_t>& _channelsJoinRX1)
{
    m_channelsJoinRX1 = _channelsJoinRX1;
    m_channelsJoinRX1HasBeenSet = true;
}

bool CreateLoRaFrequencyRequest::ChannelsJoinRX1HasBeenSet() const
{
    return m_channelsJoinRX1HasBeenSet;
}

vector<uint64_t> CreateLoRaFrequencyRequest::GetChannelsJoinRX2() const
{
    return m_channelsJoinRX2;
}

void CreateLoRaFrequencyRequest::SetChannelsJoinRX2(const vector<uint64_t>& _channelsJoinRX2)
{
    m_channelsJoinRX2 = _channelsJoinRX2;
    m_channelsJoinRX2HasBeenSet = true;
}

bool CreateLoRaFrequencyRequest::ChannelsJoinRX2HasBeenSet() const
{
    return m_channelsJoinRX2HasBeenSet;
}

string CreateLoRaFrequencyRequest::GetDescription() const
{
    return m_description;
}

void CreateLoRaFrequencyRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateLoRaFrequencyRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


