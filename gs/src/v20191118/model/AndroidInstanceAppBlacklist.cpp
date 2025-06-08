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

#include <tencentcloud/gs/v20191118/model/AndroidInstanceAppBlacklist.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

AndroidInstanceAppBlacklist::AndroidInstanceAppBlacklist() :
    m_androidInstanceIdHasBeenSet(false),
    m_appBlacklistHasBeenSet(false)
{
}

CoreInternalOutcome AndroidInstanceAppBlacklist::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AndroidInstanceId") && !value["AndroidInstanceId"].IsNull())
    {
        if (!value["AndroidInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceAppBlacklist.AndroidInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidInstanceId = string(value["AndroidInstanceId"].GetString());
        m_androidInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("AppBlacklist") && !value["AppBlacklist"].IsNull())
    {
        if (!value["AppBlacklist"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AndroidInstanceAppBlacklist.AppBlacklist` is not array type"));

        const rapidjson::Value &tmpValue = value["AppBlacklist"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_appBlacklist.push_back((*itr).GetString());
        }
        m_appBlacklistHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AndroidInstanceAppBlacklist::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_androidInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_appBlacklistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppBlacklist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_appBlacklist.begin(); itr != m_appBlacklist.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AndroidInstanceAppBlacklist::GetAndroidInstanceId() const
{
    return m_androidInstanceId;
}

void AndroidInstanceAppBlacklist::SetAndroidInstanceId(const string& _androidInstanceId)
{
    m_androidInstanceId = _androidInstanceId;
    m_androidInstanceIdHasBeenSet = true;
}

bool AndroidInstanceAppBlacklist::AndroidInstanceIdHasBeenSet() const
{
    return m_androidInstanceIdHasBeenSet;
}

vector<string> AndroidInstanceAppBlacklist::GetAppBlacklist() const
{
    return m_appBlacklist;
}

void AndroidInstanceAppBlacklist::SetAppBlacklist(const vector<string>& _appBlacklist)
{
    m_appBlacklist = _appBlacklist;
    m_appBlacklistHasBeenSet = true;
}

bool AndroidInstanceAppBlacklist::AppBlacklistHasBeenSet() const
{
    return m_appBlacklistHasBeenSet;
}

