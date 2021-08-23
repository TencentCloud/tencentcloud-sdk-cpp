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

#include <tencentcloud/cpdp/v20190820/model/SceneInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

SceneInfo::SceneInfo() :
    m_localeCodeHasBeenSet(false),
    m_regionCodeHasBeenSet(false),
    m_userClientIpHasBeenSet(false)
{
}

CoreInternalOutcome SceneInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LocaleCode") && !value["LocaleCode"].IsNull())
    {
        if (!value["LocaleCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneInfo.LocaleCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localeCode = string(value["LocaleCode"].GetString());
        m_localeCodeHasBeenSet = true;
    }

    if (value.HasMember("RegionCode") && !value["RegionCode"].IsNull())
    {
        if (!value["RegionCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneInfo.RegionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionCode = string(value["RegionCode"].GetString());
        m_regionCodeHasBeenSet = true;
    }

    if (value.HasMember("UserClientIp") && !value["UserClientIp"].IsNull())
    {
        if (!value["UserClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneInfo.UserClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userClientIp = string(value["UserClientIp"].GetString());
        m_userClientIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SceneInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_localeCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocaleCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localeCode.c_str(), allocator).Move(), allocator);
    }

    if (m_regionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_userClientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userClientIp.c_str(), allocator).Move(), allocator);
    }

}


string SceneInfo::GetLocaleCode() const
{
    return m_localeCode;
}

void SceneInfo::SetLocaleCode(const string& _localeCode)
{
    m_localeCode = _localeCode;
    m_localeCodeHasBeenSet = true;
}

bool SceneInfo::LocaleCodeHasBeenSet() const
{
    return m_localeCodeHasBeenSet;
}

string SceneInfo::GetRegionCode() const
{
    return m_regionCode;
}

void SceneInfo::SetRegionCode(const string& _regionCode)
{
    m_regionCode = _regionCode;
    m_regionCodeHasBeenSet = true;
}

bool SceneInfo::RegionCodeHasBeenSet() const
{
    return m_regionCodeHasBeenSet;
}

string SceneInfo::GetUserClientIp() const
{
    return m_userClientIp;
}

void SceneInfo::SetUserClientIp(const string& _userClientIp)
{
    m_userClientIp = _userClientIp;
    m_userClientIpHasBeenSet = true;
}

bool SceneInfo::UserClientIpHasBeenSet() const
{
    return m_userClientIpHasBeenSet;
}

