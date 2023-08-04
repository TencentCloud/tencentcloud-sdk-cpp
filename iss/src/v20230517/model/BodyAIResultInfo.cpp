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

#include <tencentcloud/iss/v20230517/model/BodyAIResultInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

BodyAIResultInfo::BodyAIResultInfo() :
    m_timeHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_bodyInfoHasBeenSet(false)
{
}

CoreInternalOutcome BodyAIResultInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BodyAIResultInfo.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BodyAIResultInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("BodyInfo") && !value["BodyInfo"].IsNull())
    {
        if (!value["BodyInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BodyAIResultInfo.BodyInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["BodyInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BaseAIResultInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bodyInfo.push_back(item);
        }
        m_bodyInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BodyAIResultInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_bodyInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BodyInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bodyInfo.begin(); itr != m_bodyInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string BodyAIResultInfo::GetTime() const
{
    return m_time;
}

void BodyAIResultInfo::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool BodyAIResultInfo::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string BodyAIResultInfo::GetUrl() const
{
    return m_url;
}

void BodyAIResultInfo::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool BodyAIResultInfo::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

vector<BaseAIResultInfo> BodyAIResultInfo::GetBodyInfo() const
{
    return m_bodyInfo;
}

void BodyAIResultInfo::SetBodyInfo(const vector<BaseAIResultInfo>& _bodyInfo)
{
    m_bodyInfo = _bodyInfo;
    m_bodyInfoHasBeenSet = true;
}

bool BodyAIResultInfo::BodyInfoHasBeenSet() const
{
    return m_bodyInfoHasBeenSet;
}

