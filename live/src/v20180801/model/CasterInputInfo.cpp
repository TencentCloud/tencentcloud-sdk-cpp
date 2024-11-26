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

#include <tencentcloud/live/v20180801/model/CasterInputInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CasterInputInfo::CasterInputInfo() :
    m_inputIndexHasBeenSet(false),
    m_inputTypeHasBeenSet(false),
    m_inputUrlHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_inputUrlsHasBeenSet(false),
    m_loopEnableHasBeenSet(false),
    m_loopNumberHasBeenSet(false),
    m_pullPushEnableHasBeenSet(false),
    m_volumeHasBeenSet(false)
{
}

CoreInternalOutcome CasterInputInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputIndex") && !value["InputIndex"].IsNull())
    {
        if (!value["InputIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterInputInfo.InputIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inputIndex = value["InputIndex"].GetInt64();
        m_inputIndexHasBeenSet = true;
    }

    if (value.HasMember("InputType") && !value["InputType"].IsNull())
    {
        if (!value["InputType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterInputInfo.InputType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inputType = value["InputType"].GetInt64();
        m_inputTypeHasBeenSet = true;
    }

    if (value.HasMember("InputUrl") && !value["InputUrl"].IsNull())
    {
        if (!value["InputUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CasterInputInfo.InputUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputUrl = string(value["InputUrl"].GetString());
        m_inputUrlHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CasterInputInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("InputUrls") && !value["InputUrls"].IsNull())
    {
        if (!value["InputUrls"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CasterInputInfo.InputUrls` is not array type"));

        const rapidjson::Value &tmpValue = value["InputUrls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_inputUrls.push_back((*itr).GetString());
        }
        m_inputUrlsHasBeenSet = true;
    }

    if (value.HasMember("LoopEnable") && !value["LoopEnable"].IsNull())
    {
        if (!value["LoopEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CasterInputInfo.LoopEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_loopEnable = value["LoopEnable"].GetBool();
        m_loopEnableHasBeenSet = true;
    }

    if (value.HasMember("LoopNumber") && !value["LoopNumber"].IsNull())
    {
        if (!value["LoopNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterInputInfo.LoopNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loopNumber = value["LoopNumber"].GetInt64();
        m_loopNumberHasBeenSet = true;
    }

    if (value.HasMember("PullPushEnable") && !value["PullPushEnable"].IsNull())
    {
        if (!value["PullPushEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CasterInputInfo.PullPushEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_pullPushEnable = value["PullPushEnable"].GetBool();
        m_pullPushEnableHasBeenSet = true;
    }

    if (value.HasMember("Volume") && !value["Volume"].IsNull())
    {
        if (!value["Volume"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterInputInfo.Volume` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_volume = value["Volume"].GetUint64();
        m_volumeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CasterInputInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputIndex, allocator);
    }

    if (m_inputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputType, allocator);
    }

    if (m_inputUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_inputUrlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputUrls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_inputUrls.begin(); itr != m_inputUrls.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_loopEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoopEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loopEnable, allocator);
    }

    if (m_loopNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoopNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loopNumber, allocator);
    }

    if (m_pullPushEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PullPushEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pullPushEnable, allocator);
    }

    if (m_volumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_volume, allocator);
    }

}


int64_t CasterInputInfo::GetInputIndex() const
{
    return m_inputIndex;
}

void CasterInputInfo::SetInputIndex(const int64_t& _inputIndex)
{
    m_inputIndex = _inputIndex;
    m_inputIndexHasBeenSet = true;
}

bool CasterInputInfo::InputIndexHasBeenSet() const
{
    return m_inputIndexHasBeenSet;
}

int64_t CasterInputInfo::GetInputType() const
{
    return m_inputType;
}

void CasterInputInfo::SetInputType(const int64_t& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool CasterInputInfo::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

string CasterInputInfo::GetInputUrl() const
{
    return m_inputUrl;
}

void CasterInputInfo::SetInputUrl(const string& _inputUrl)
{
    m_inputUrl = _inputUrl;
    m_inputUrlHasBeenSet = true;
}

bool CasterInputInfo::InputUrlHasBeenSet() const
{
    return m_inputUrlHasBeenSet;
}

string CasterInputInfo::GetDescription() const
{
    return m_description;
}

void CasterInputInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CasterInputInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> CasterInputInfo::GetInputUrls() const
{
    return m_inputUrls;
}

void CasterInputInfo::SetInputUrls(const vector<string>& _inputUrls)
{
    m_inputUrls = _inputUrls;
    m_inputUrlsHasBeenSet = true;
}

bool CasterInputInfo::InputUrlsHasBeenSet() const
{
    return m_inputUrlsHasBeenSet;
}

bool CasterInputInfo::GetLoopEnable() const
{
    return m_loopEnable;
}

void CasterInputInfo::SetLoopEnable(const bool& _loopEnable)
{
    m_loopEnable = _loopEnable;
    m_loopEnableHasBeenSet = true;
}

bool CasterInputInfo::LoopEnableHasBeenSet() const
{
    return m_loopEnableHasBeenSet;
}

int64_t CasterInputInfo::GetLoopNumber() const
{
    return m_loopNumber;
}

void CasterInputInfo::SetLoopNumber(const int64_t& _loopNumber)
{
    m_loopNumber = _loopNumber;
    m_loopNumberHasBeenSet = true;
}

bool CasterInputInfo::LoopNumberHasBeenSet() const
{
    return m_loopNumberHasBeenSet;
}

bool CasterInputInfo::GetPullPushEnable() const
{
    return m_pullPushEnable;
}

void CasterInputInfo::SetPullPushEnable(const bool& _pullPushEnable)
{
    m_pullPushEnable = _pullPushEnable;
    m_pullPushEnableHasBeenSet = true;
}

bool CasterInputInfo::PullPushEnableHasBeenSet() const
{
    return m_pullPushEnableHasBeenSet;
}

uint64_t CasterInputInfo::GetVolume() const
{
    return m_volume;
}

void CasterInputInfo::SetVolume(const uint64_t& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool CasterInputInfo::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

