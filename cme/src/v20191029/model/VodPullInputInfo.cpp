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

#include <tencentcloud/cme/v20191029/model/VodPullInputInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

VodPullInputInfo::VodPullInputInfo() :
    m_inputUrlsHasBeenSet(false),
    m_loopTimesHasBeenSet(false)
{
}

CoreInternalOutcome VodPullInputInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputUrls") && !value["InputUrls"].IsNull())
    {
        if (!value["InputUrls"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VodPullInputInfo.InputUrls` is not array type"));

        const rapidjson::Value &tmpValue = value["InputUrls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_inputUrls.push_back((*itr).GetString());
        }
        m_inputUrlsHasBeenSet = true;
    }

    if (value.HasMember("LoopTimes") && !value["LoopTimes"].IsNull())
    {
        if (!value["LoopTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VodPullInputInfo.LoopTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loopTimes = value["LoopTimes"].GetInt64();
        m_loopTimesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VodPullInputInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_loopTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoopTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loopTimes, allocator);
    }

}


vector<string> VodPullInputInfo::GetInputUrls() const
{
    return m_inputUrls;
}

void VodPullInputInfo::SetInputUrls(const vector<string>& _inputUrls)
{
    m_inputUrls = _inputUrls;
    m_inputUrlsHasBeenSet = true;
}

bool VodPullInputInfo::InputUrlsHasBeenSet() const
{
    return m_inputUrlsHasBeenSet;
}

int64_t VodPullInputInfo::GetLoopTimes() const
{
    return m_loopTimes;
}

void VodPullInputInfo::SetLoopTimes(const int64_t& _loopTimes)
{
    m_loopTimes = _loopTimes;
    m_loopTimesHasBeenSet = true;
}

bool VodPullInputInfo::LoopTimesHasBeenSet() const
{
    return m_loopTimesHasBeenSet;
}

