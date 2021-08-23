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

#include <tencentcloud/cme/v20191029/model/StreamInputInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

StreamInputInfo::StreamInputInfo() :
    m_inputTypeHasBeenSet(false),
    m_vodPullInputInfoHasBeenSet(false),
    m_livePullInputInfoHasBeenSet(false),
    m_rtmpPushInputInfoHasBeenSet(false)
{
}

CoreInternalOutcome StreamInputInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputType") && !value["InputType"].IsNull())
    {
        if (!value["InputType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamInputInfo.InputType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputType = string(value["InputType"].GetString());
        m_inputTypeHasBeenSet = true;
    }

    if (value.HasMember("VodPullInputInfo") && !value["VodPullInputInfo"].IsNull())
    {
        if (!value["VodPullInputInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StreamInputInfo.VodPullInputInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vodPullInputInfo.Deserialize(value["VodPullInputInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vodPullInputInfoHasBeenSet = true;
    }

    if (value.HasMember("LivePullInputInfo") && !value["LivePullInputInfo"].IsNull())
    {
        if (!value["LivePullInputInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StreamInputInfo.LivePullInputInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_livePullInputInfo.Deserialize(value["LivePullInputInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_livePullInputInfoHasBeenSet = true;
    }

    if (value.HasMember("RtmpPushInputInfo") && !value["RtmpPushInputInfo"].IsNull())
    {
        if (!value["RtmpPushInputInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StreamInputInfo.RtmpPushInputInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rtmpPushInputInfo.Deserialize(value["RtmpPushInputInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rtmpPushInputInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StreamInputInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputType.c_str(), allocator).Move(), allocator);
    }

    if (m_vodPullInputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VodPullInputInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vodPullInputInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_livePullInputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LivePullInputInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_livePullInputInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rtmpPushInputInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RtmpPushInputInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rtmpPushInputInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string StreamInputInfo::GetInputType() const
{
    return m_inputType;
}

void StreamInputInfo::SetInputType(const string& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool StreamInputInfo::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

VodPullInputInfo StreamInputInfo::GetVodPullInputInfo() const
{
    return m_vodPullInputInfo;
}

void StreamInputInfo::SetVodPullInputInfo(const VodPullInputInfo& _vodPullInputInfo)
{
    m_vodPullInputInfo = _vodPullInputInfo;
    m_vodPullInputInfoHasBeenSet = true;
}

bool StreamInputInfo::VodPullInputInfoHasBeenSet() const
{
    return m_vodPullInputInfoHasBeenSet;
}

LivePullInputInfo StreamInputInfo::GetLivePullInputInfo() const
{
    return m_livePullInputInfo;
}

void StreamInputInfo::SetLivePullInputInfo(const LivePullInputInfo& _livePullInputInfo)
{
    m_livePullInputInfo = _livePullInputInfo;
    m_livePullInputInfoHasBeenSet = true;
}

bool StreamInputInfo::LivePullInputInfoHasBeenSet() const
{
    return m_livePullInputInfoHasBeenSet;
}

RtmpPushInputInfo StreamInputInfo::GetRtmpPushInputInfo() const
{
    return m_rtmpPushInputInfo;
}

void StreamInputInfo::SetRtmpPushInputInfo(const RtmpPushInputInfo& _rtmpPushInputInfo)
{
    m_rtmpPushInputInfo = _rtmpPushInputInfo;
    m_rtmpPushInputInfoHasBeenSet = true;
}

bool StreamInputInfo::RtmpPushInputInfoHasBeenSet() const
{
    return m_rtmpPushInputInfoHasBeenSet;
}

