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

#include <tencentcloud/live/v20180801/model/StreamOnlineInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

StreamOnlineInfo::StreamOnlineInfo() :
    m_streamNameHasBeenSet(false),
    m_publishTimeListHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_pushToDelayHasBeenSet(false)
{
}

CoreInternalOutcome StreamOnlineInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StreamName") && !value["StreamName"].IsNull())
    {
        if (!value["StreamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamOnlineInfo.StreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamName = string(value["StreamName"].GetString());
        m_streamNameHasBeenSet = true;
    }

    if (value.HasMember("PublishTimeList") && !value["PublishTimeList"].IsNull())
    {
        if (!value["PublishTimeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StreamOnlineInfo.PublishTimeList` is not array type"));

        const rapidjson::Value &tmpValue = value["PublishTimeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PublishTime item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_publishTimeList.push_back(item);
        }
        m_publishTimeListHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamOnlineInfo.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamOnlineInfo.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("PushToDelay") && !value["PushToDelay"].IsNull())
    {
        if (!value["PushToDelay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StreamOnlineInfo.PushToDelay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pushToDelay = value["PushToDelay"].GetInt64();
        m_pushToDelayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StreamOnlineInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_streamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamName.c_str(), allocator).Move(), allocator);
    }

    if (m_publishTimeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishTimeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_publishTimeList.begin(); itr != m_publishTimeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_pushToDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushToDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pushToDelay, allocator);
    }

}


string StreamOnlineInfo::GetStreamName() const
{
    return m_streamName;
}

void StreamOnlineInfo::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool StreamOnlineInfo::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

vector<PublishTime> StreamOnlineInfo::GetPublishTimeList() const
{
    return m_publishTimeList;
}

void StreamOnlineInfo::SetPublishTimeList(const vector<PublishTime>& _publishTimeList)
{
    m_publishTimeList = _publishTimeList;
    m_publishTimeListHasBeenSet = true;
}

bool StreamOnlineInfo::PublishTimeListHasBeenSet() const
{
    return m_publishTimeListHasBeenSet;
}

string StreamOnlineInfo::GetAppName() const
{
    return m_appName;
}

void StreamOnlineInfo::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool StreamOnlineInfo::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string StreamOnlineInfo::GetDomainName() const
{
    return m_domainName;
}

void StreamOnlineInfo::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool StreamOnlineInfo::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

int64_t StreamOnlineInfo::GetPushToDelay() const
{
    return m_pushToDelay;
}

void StreamOnlineInfo::SetPushToDelay(const int64_t& _pushToDelay)
{
    m_pushToDelay = _pushToDelay;
    m_pushToDelayHasBeenSet = true;
}

bool StreamOnlineInfo::PushToDelayHasBeenSet() const
{
    return m_pushToDelayHasBeenSet;
}

