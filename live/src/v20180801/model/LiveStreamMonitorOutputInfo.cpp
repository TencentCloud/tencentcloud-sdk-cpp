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

#include <tencentcloud/live/v20180801/model/LiveStreamMonitorOutputInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

LiveStreamMonitorOutputInfo::LiveStreamMonitorOutputInfo() :
    m_outputStreamWidthHasBeenSet(false),
    m_outputStreamHeightHasBeenSet(false),
    m_outputStreamNameHasBeenSet(false),
    m_outputDomainHasBeenSet(false),
    m_outputAppHasBeenSet(false)
{
}

CoreInternalOutcome LiveStreamMonitorOutputInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutputStreamWidth") && !value["OutputStreamWidth"].IsNull())
    {
        if (!value["OutputStreamWidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorOutputInfo.OutputStreamWidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_outputStreamWidth = value["OutputStreamWidth"].GetUint64();
        m_outputStreamWidthHasBeenSet = true;
    }

    if (value.HasMember("OutputStreamHeight") && !value["OutputStreamHeight"].IsNull())
    {
        if (!value["OutputStreamHeight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorOutputInfo.OutputStreamHeight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_outputStreamHeight = value["OutputStreamHeight"].GetUint64();
        m_outputStreamHeightHasBeenSet = true;
    }

    if (value.HasMember("OutputStreamName") && !value["OutputStreamName"].IsNull())
    {
        if (!value["OutputStreamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorOutputInfo.OutputStreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputStreamName = string(value["OutputStreamName"].GetString());
        m_outputStreamNameHasBeenSet = true;
    }

    if (value.HasMember("OutputDomain") && !value["OutputDomain"].IsNull())
    {
        if (!value["OutputDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorOutputInfo.OutputDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputDomain = string(value["OutputDomain"].GetString());
        m_outputDomainHasBeenSet = true;
    }

    if (value.HasMember("OutputApp") && !value["OutputApp"].IsNull())
    {
        if (!value["OutputApp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamMonitorOutputInfo.OutputApp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputApp = string(value["OutputApp"].GetString());
        m_outputAppHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveStreamMonitorOutputInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outputStreamWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStreamWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputStreamWidth, allocator);
    }

    if (m_outputStreamHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStreamHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputStreamHeight, allocator);
    }

    if (m_outputStreamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStreamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputStreamName.c_str(), allocator).Move(), allocator);
    }

    if (m_outputDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_outputAppHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputApp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputApp.c_str(), allocator).Move(), allocator);
    }

}


uint64_t LiveStreamMonitorOutputInfo::GetOutputStreamWidth() const
{
    return m_outputStreamWidth;
}

void LiveStreamMonitorOutputInfo::SetOutputStreamWidth(const uint64_t& _outputStreamWidth)
{
    m_outputStreamWidth = _outputStreamWidth;
    m_outputStreamWidthHasBeenSet = true;
}

bool LiveStreamMonitorOutputInfo::OutputStreamWidthHasBeenSet() const
{
    return m_outputStreamWidthHasBeenSet;
}

uint64_t LiveStreamMonitorOutputInfo::GetOutputStreamHeight() const
{
    return m_outputStreamHeight;
}

void LiveStreamMonitorOutputInfo::SetOutputStreamHeight(const uint64_t& _outputStreamHeight)
{
    m_outputStreamHeight = _outputStreamHeight;
    m_outputStreamHeightHasBeenSet = true;
}

bool LiveStreamMonitorOutputInfo::OutputStreamHeightHasBeenSet() const
{
    return m_outputStreamHeightHasBeenSet;
}

string LiveStreamMonitorOutputInfo::GetOutputStreamName() const
{
    return m_outputStreamName;
}

void LiveStreamMonitorOutputInfo::SetOutputStreamName(const string& _outputStreamName)
{
    m_outputStreamName = _outputStreamName;
    m_outputStreamNameHasBeenSet = true;
}

bool LiveStreamMonitorOutputInfo::OutputStreamNameHasBeenSet() const
{
    return m_outputStreamNameHasBeenSet;
}

string LiveStreamMonitorOutputInfo::GetOutputDomain() const
{
    return m_outputDomain;
}

void LiveStreamMonitorOutputInfo::SetOutputDomain(const string& _outputDomain)
{
    m_outputDomain = _outputDomain;
    m_outputDomainHasBeenSet = true;
}

bool LiveStreamMonitorOutputInfo::OutputDomainHasBeenSet() const
{
    return m_outputDomainHasBeenSet;
}

string LiveStreamMonitorOutputInfo::GetOutputApp() const
{
    return m_outputApp;
}

void LiveStreamMonitorOutputInfo::SetOutputApp(const string& _outputApp)
{
    m_outputApp = _outputApp;
    m_outputAppHasBeenSet = true;
}

bool LiveStreamMonitorOutputInfo::OutputAppHasBeenSet() const
{
    return m_outputAppHasBeenSet;
}

