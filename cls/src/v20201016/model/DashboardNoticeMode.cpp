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

#include <tencentcloud/cls/v20201016/model/DashboardNoticeMode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DashboardNoticeMode::DashboardNoticeMode() :
    m_receiverTypeHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_receiverChannelsHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

CoreInternalOutcome DashboardNoticeMode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReceiverType") && !value["ReceiverType"].IsNull())
    {
        if (!value["ReceiverType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DashboardNoticeMode.ReceiverType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiverType = string(value["ReceiverType"].GetString());
        m_receiverTypeHasBeenSet = true;
    }

    if (value.HasMember("Values") && !value["Values"].IsNull())
    {
        if (!value["Values"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DashboardNoticeMode.Values` is not array type"));

        const rapidjson::Value &tmpValue = value["Values"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_values.push_back((*itr).GetString());
        }
        m_valuesHasBeenSet = true;
    }

    if (value.HasMember("ReceiverChannels") && !value["ReceiverChannels"].IsNull())
    {
        if (!value["ReceiverChannels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DashboardNoticeMode.ReceiverChannels` is not array type"));

        const rapidjson::Value &tmpValue = value["ReceiverChannels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_receiverChannels.push_back((*itr).GetString());
        }
        m_receiverChannelsHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DashboardNoticeMode.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DashboardNoticeMode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_receiverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiverType.c_str(), allocator).Move(), allocator);
    }

    if (m_valuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Values";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_values.begin(); itr != m_values.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_receiverChannelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverChannels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_receiverChannels.begin(); itr != m_receiverChannels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

}


string DashboardNoticeMode::GetReceiverType() const
{
    return m_receiverType;
}

void DashboardNoticeMode::SetReceiverType(const string& _receiverType)
{
    m_receiverType = _receiverType;
    m_receiverTypeHasBeenSet = true;
}

bool DashboardNoticeMode::ReceiverTypeHasBeenSet() const
{
    return m_receiverTypeHasBeenSet;
}

vector<string> DashboardNoticeMode::GetValues() const
{
    return m_values;
}

void DashboardNoticeMode::SetValues(const vector<string>& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool DashboardNoticeMode::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

vector<string> DashboardNoticeMode::GetReceiverChannels() const
{
    return m_receiverChannels;
}

void DashboardNoticeMode::SetReceiverChannels(const vector<string>& _receiverChannels)
{
    m_receiverChannels = _receiverChannels;
    m_receiverChannelsHasBeenSet = true;
}

bool DashboardNoticeMode::ReceiverChannelsHasBeenSet() const
{
    return m_receiverChannelsHasBeenSet;
}

string DashboardNoticeMode::GetUrl() const
{
    return m_url;
}

void DashboardNoticeMode::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool DashboardNoticeMode::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

