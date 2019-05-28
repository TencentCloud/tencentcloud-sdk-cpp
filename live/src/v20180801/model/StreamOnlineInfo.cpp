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
using namespace rapidjson;
using namespace std;

StreamOnlineInfo::StreamOnlineInfo() :
    m_streamNameHasBeenSet(false),
    m_publishTimeListHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_domainNameHasBeenSet(false)
{
}

CoreInternalOutcome StreamOnlineInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("StreamName") && !value["StreamName"].IsNull())
    {
        if (!value["StreamName"].IsString())
        {
            return CoreInternalOutcome(Error("response `StreamOnlineInfo.StreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamName = string(value["StreamName"].GetString());
        m_streamNameHasBeenSet = true;
    }

    if (value.HasMember("PublishTimeList") && !value["PublishTimeList"].IsNull())
    {
        if (!value["PublishTimeList"].IsArray())
            return CoreInternalOutcome(Error("response `StreamOnlineInfo.PublishTimeList` is not array type"));

        const Value &tmpValue = value["PublishTimeList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `StreamOnlineInfo.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Error("response `StreamOnlineInfo.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StreamOnlineInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_streamNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_streamName.c_str(), allocator).Move(), allocator);
    }

    if (m_publishTimeListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PublishTimeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_publishTimeList.begin(); itr != m_publishTimeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_appNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_domainName.c_str(), allocator).Move(), allocator);
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

