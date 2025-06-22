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

#include <tencentcloud/live/v20180801/model/PadStreamInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

PadStreamInfo::PadStreamInfo() :
    m_streamNameHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_padStreamTypeHasBeenSet(false),
    m_publishTimeHasBeenSet(false)
{
}

CoreInternalOutcome PadStreamInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StreamName") && !value["StreamName"].IsNull())
    {
        if (!value["StreamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PadStreamInfo.StreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamName = string(value["StreamName"].GetString());
        m_streamNameHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PadStreamInfo.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PadStreamInfo.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("PadStreamType") && !value["PadStreamType"].IsNull())
    {
        if (!value["PadStreamType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PadStreamInfo.PadStreamType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_padStreamType = string(value["PadStreamType"].GetString());
        m_padStreamTypeHasBeenSet = true;
    }

    if (value.HasMember("PublishTime") && !value["PublishTime"].IsNull())
    {
        if (!value["PublishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PadStreamInfo.PublishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishTime = string(value["PublishTime"].GetString());
        m_publishTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PadStreamInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_streamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamName.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_padStreamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PadStreamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_padStreamType.c_str(), allocator).Move(), allocator);
    }

    if (m_publishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishTime.c_str(), allocator).Move(), allocator);
    }

}


string PadStreamInfo::GetStreamName() const
{
    return m_streamName;
}

void PadStreamInfo::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool PadStreamInfo::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

string PadStreamInfo::GetAppName() const
{
    return m_appName;
}

void PadStreamInfo::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool PadStreamInfo::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string PadStreamInfo::GetDomainName() const
{
    return m_domainName;
}

void PadStreamInfo::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool PadStreamInfo::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string PadStreamInfo::GetPadStreamType() const
{
    return m_padStreamType;
}

void PadStreamInfo::SetPadStreamType(const string& _padStreamType)
{
    m_padStreamType = _padStreamType;
    m_padStreamTypeHasBeenSet = true;
}

bool PadStreamInfo::PadStreamTypeHasBeenSet() const
{
    return m_padStreamTypeHasBeenSet;
}

string PadStreamInfo::GetPublishTime() const
{
    return m_publishTime;
}

void PadStreamInfo::SetPublishTime(const string& _publishTime)
{
    m_publishTime = _publishTime;
    m_publishTimeHasBeenSet = true;
}

bool PadStreamInfo::PublishTimeHasBeenSet() const
{
    return m_publishTimeHasBeenSet;
}

