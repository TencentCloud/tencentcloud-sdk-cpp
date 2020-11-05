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

#include <tencentcloud/cdn/v20180606/model/ListClsTopicDomainsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

ListClsTopicDomainsResponse::ListClsTopicDomainsResponse() :
    m_appIdHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_domainAreaConfigsHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome ListClsTopicDomainsResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("AppId") && !rsp["AppId"].IsNull())
    {
        if (!rsp["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = rsp["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (rsp.HasMember("Channel") && !rsp["Channel"].IsNull())
    {
        if (!rsp["Channel"].IsString())
        {
            return CoreInternalOutcome(Error("response `Channel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channel = string(rsp["Channel"].GetString());
        m_channelHasBeenSet = true;
    }

    if (rsp.HasMember("LogsetId") && !rsp["LogsetId"].IsNull())
    {
        if (!rsp["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(rsp["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (rsp.HasMember("TopicId") && !rsp["TopicId"].IsNull())
    {
        if (!rsp["TopicId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(rsp["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (rsp.HasMember("DomainAreaConfigs") && !rsp["DomainAreaConfigs"].IsNull())
    {
        if (!rsp["DomainAreaConfigs"].IsArray())
            return CoreInternalOutcome(Error("response `DomainAreaConfigs` is not array type"));

        const Value &tmpValue = rsp["DomainAreaConfigs"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DomainAreaConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_domainAreaConfigs.push_back(item);
        }
        m_domainAreaConfigsHasBeenSet = true;
    }

    if (rsp.HasMember("TopicName") && !rsp["TopicName"].IsNull())
    {
        if (!rsp["TopicName"].IsString())
        {
            return CoreInternalOutcome(Error("response `TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(rsp["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t ListClsTopicDomainsResponse::GetAppId() const
{
    return m_appId;
}

bool ListClsTopicDomainsResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ListClsTopicDomainsResponse::GetChannel() const
{
    return m_channel;
}

bool ListClsTopicDomainsResponse::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

string ListClsTopicDomainsResponse::GetLogsetId() const
{
    return m_logsetId;
}

bool ListClsTopicDomainsResponse::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string ListClsTopicDomainsResponse::GetTopicId() const
{
    return m_topicId;
}

bool ListClsTopicDomainsResponse::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

vector<DomainAreaConfig> ListClsTopicDomainsResponse::GetDomainAreaConfigs() const
{
    return m_domainAreaConfigs;
}

bool ListClsTopicDomainsResponse::DomainAreaConfigsHasBeenSet() const
{
    return m_domainAreaConfigsHasBeenSet;
}

string ListClsTopicDomainsResponse::GetTopicName() const
{
    return m_topicName;
}

bool ListClsTopicDomainsResponse::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string ListClsTopicDomainsResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool ListClsTopicDomainsResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}


