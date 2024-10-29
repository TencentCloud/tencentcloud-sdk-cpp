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

#include <tencentcloud/trtc/v20190722/model/McuRecordParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

McuRecordParams::McuRecordParams() :
    m_uniRecordHasBeenSet(false),
    m_recordKeyHasBeenSet(false),
    m_recordWaitTimeHasBeenSet(false),
    m_recordFormatHasBeenSet(false),
    m_maxMediaFileDurationHasBeenSet(false),
    m_streamTypeHasBeenSet(false),
    m_userDefineRecordPrefixHasBeenSet(false),
    m_mcuStorageParamsHasBeenSet(false)
{
}

CoreInternalOutcome McuRecordParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UniRecord") && !value["UniRecord"].IsNull())
    {
        if (!value["UniRecord"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuRecordParams.UniRecord` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uniRecord = value["UniRecord"].GetUint64();
        m_uniRecordHasBeenSet = true;
    }

    if (value.HasMember("RecordKey") && !value["RecordKey"].IsNull())
    {
        if (!value["RecordKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McuRecordParams.RecordKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordKey = string(value["RecordKey"].GetString());
        m_recordKeyHasBeenSet = true;
    }

    if (value.HasMember("RecordWaitTime") && !value["RecordWaitTime"].IsNull())
    {
        if (!value["RecordWaitTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuRecordParams.RecordWaitTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recordWaitTime = value["RecordWaitTime"].GetUint64();
        m_recordWaitTimeHasBeenSet = true;
    }

    if (value.HasMember("RecordFormat") && !value["RecordFormat"].IsNull())
    {
        if (!value["RecordFormat"].IsArray())
            return CoreInternalOutcome(Core::Error("response `McuRecordParams.RecordFormat` is not array type"));

        const rapidjson::Value &tmpValue = value["RecordFormat"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_recordFormat.push_back((*itr).GetString());
        }
        m_recordFormatHasBeenSet = true;
    }

    if (value.HasMember("MaxMediaFileDuration") && !value["MaxMediaFileDuration"].IsNull())
    {
        if (!value["MaxMediaFileDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuRecordParams.MaxMediaFileDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxMediaFileDuration = value["MaxMediaFileDuration"].GetUint64();
        m_maxMediaFileDurationHasBeenSet = true;
    }

    if (value.HasMember("StreamType") && !value["StreamType"].IsNull())
    {
        if (!value["StreamType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuRecordParams.StreamType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_streamType = value["StreamType"].GetUint64();
        m_streamTypeHasBeenSet = true;
    }

    if (value.HasMember("UserDefineRecordPrefix") && !value["UserDefineRecordPrefix"].IsNull())
    {
        if (!value["UserDefineRecordPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McuRecordParams.UserDefineRecordPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userDefineRecordPrefix = string(value["UserDefineRecordPrefix"].GetString());
        m_userDefineRecordPrefixHasBeenSet = true;
    }

    if (value.HasMember("McuStorageParams") && !value["McuStorageParams"].IsNull())
    {
        if (!value["McuStorageParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `McuRecordParams.McuStorageParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mcuStorageParams.Deserialize(value["McuStorageParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mcuStorageParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void McuRecordParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uniRecordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniRecord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uniRecord, allocator);
    }

    if (m_recordKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordKey.c_str(), allocator).Move(), allocator);
    }

    if (m_recordWaitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordWaitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordWaitTime, allocator);
    }

    if (m_recordFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_recordFormat.begin(); itr != m_recordFormat.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_maxMediaFileDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMediaFileDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxMediaFileDuration, allocator);
    }

    if (m_streamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_streamType, allocator);
    }

    if (m_userDefineRecordPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDefineRecordPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userDefineRecordPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_mcuStorageParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "McuStorageParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mcuStorageParams.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t McuRecordParams::GetUniRecord() const
{
    return m_uniRecord;
}

void McuRecordParams::SetUniRecord(const uint64_t& _uniRecord)
{
    m_uniRecord = _uniRecord;
    m_uniRecordHasBeenSet = true;
}

bool McuRecordParams::UniRecordHasBeenSet() const
{
    return m_uniRecordHasBeenSet;
}

string McuRecordParams::GetRecordKey() const
{
    return m_recordKey;
}

void McuRecordParams::SetRecordKey(const string& _recordKey)
{
    m_recordKey = _recordKey;
    m_recordKeyHasBeenSet = true;
}

bool McuRecordParams::RecordKeyHasBeenSet() const
{
    return m_recordKeyHasBeenSet;
}

uint64_t McuRecordParams::GetRecordWaitTime() const
{
    return m_recordWaitTime;
}

void McuRecordParams::SetRecordWaitTime(const uint64_t& _recordWaitTime)
{
    m_recordWaitTime = _recordWaitTime;
    m_recordWaitTimeHasBeenSet = true;
}

bool McuRecordParams::RecordWaitTimeHasBeenSet() const
{
    return m_recordWaitTimeHasBeenSet;
}

vector<string> McuRecordParams::GetRecordFormat() const
{
    return m_recordFormat;
}

void McuRecordParams::SetRecordFormat(const vector<string>& _recordFormat)
{
    m_recordFormat = _recordFormat;
    m_recordFormatHasBeenSet = true;
}

bool McuRecordParams::RecordFormatHasBeenSet() const
{
    return m_recordFormatHasBeenSet;
}

uint64_t McuRecordParams::GetMaxMediaFileDuration() const
{
    return m_maxMediaFileDuration;
}

void McuRecordParams::SetMaxMediaFileDuration(const uint64_t& _maxMediaFileDuration)
{
    m_maxMediaFileDuration = _maxMediaFileDuration;
    m_maxMediaFileDurationHasBeenSet = true;
}

bool McuRecordParams::MaxMediaFileDurationHasBeenSet() const
{
    return m_maxMediaFileDurationHasBeenSet;
}

uint64_t McuRecordParams::GetStreamType() const
{
    return m_streamType;
}

void McuRecordParams::SetStreamType(const uint64_t& _streamType)
{
    m_streamType = _streamType;
    m_streamTypeHasBeenSet = true;
}

bool McuRecordParams::StreamTypeHasBeenSet() const
{
    return m_streamTypeHasBeenSet;
}

string McuRecordParams::GetUserDefineRecordPrefix() const
{
    return m_userDefineRecordPrefix;
}

void McuRecordParams::SetUserDefineRecordPrefix(const string& _userDefineRecordPrefix)
{
    m_userDefineRecordPrefix = _userDefineRecordPrefix;
    m_userDefineRecordPrefixHasBeenSet = true;
}

bool McuRecordParams::UserDefineRecordPrefixHasBeenSet() const
{
    return m_userDefineRecordPrefixHasBeenSet;
}

McuStorageParams McuRecordParams::GetMcuStorageParams() const
{
    return m_mcuStorageParams;
}

void McuRecordParams::SetMcuStorageParams(const McuStorageParams& _mcuStorageParams)
{
    m_mcuStorageParams = _mcuStorageParams;
    m_mcuStorageParamsHasBeenSet = true;
}

bool McuRecordParams::McuStorageParamsHasBeenSet() const
{
    return m_mcuStorageParamsHasBeenSet;
}

