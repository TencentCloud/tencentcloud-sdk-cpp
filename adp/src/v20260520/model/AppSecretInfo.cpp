/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/adp/v20260520/model/AppSecretInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppSecretInfo::AppSecretInfo() :
    m_appKeyHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome AppSecretInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppKey") && !value["AppKey"].IsNull())
    {
        if (!value["AppKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppSecretInfo.AppKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appKey = string(value["AppKey"].GetString());
        m_appKeyHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppSecretInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppSecretInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appKey.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string AppSecretInfo::GetAppKey() const
{
    return m_appKey;
}

void AppSecretInfo::SetAppKey(const string& _appKey)
{
    m_appKey = _appKey;
    m_appKeyHasBeenSet = true;
}

bool AppSecretInfo::AppKeyHasBeenSet() const
{
    return m_appKeyHasBeenSet;
}

string AppSecretInfo::GetCreateTime() const
{
    return m_createTime;
}

void AppSecretInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AppSecretInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

