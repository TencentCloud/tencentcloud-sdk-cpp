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

#include <tencentcloud/cpdp/v20190820/model/CloudExternalPromptGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CloudExternalPromptGroup::CloudExternalPromptGroup() :
    m_channelNameHasBeenSet(false),
    m_externalPromptInfoListHasBeenSet(false)
{
}

CoreInternalOutcome CloudExternalPromptGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelName") && !value["ChannelName"].IsNull())
    {
        if (!value["ChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudExternalPromptGroup.ChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelName = string(value["ChannelName"].GetString());
        m_channelNameHasBeenSet = true;
    }

    if (value.HasMember("ExternalPromptInfoList") && !value["ExternalPromptInfoList"].IsNull())
    {
        if (!value["ExternalPromptInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudExternalPromptGroup.ExternalPromptInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["ExternalPromptInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudExternalPromptInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_externalPromptInfoList.push_back(item);
        }
        m_externalPromptInfoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudExternalPromptGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_externalPromptInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalPromptInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_externalPromptInfoList.begin(); itr != m_externalPromptInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CloudExternalPromptGroup::GetChannelName() const
{
    return m_channelName;
}

void CloudExternalPromptGroup::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool CloudExternalPromptGroup::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

vector<CloudExternalPromptInfo> CloudExternalPromptGroup::GetExternalPromptInfoList() const
{
    return m_externalPromptInfoList;
}

void CloudExternalPromptGroup::SetExternalPromptInfoList(const vector<CloudExternalPromptInfo>& _externalPromptInfoList)
{
    m_externalPromptInfoList = _externalPromptInfoList;
    m_externalPromptInfoListHasBeenSet = true;
}

bool CloudExternalPromptGroup::ExternalPromptInfoListHasBeenSet() const
{
    return m_externalPromptInfoListHasBeenSet;
}

