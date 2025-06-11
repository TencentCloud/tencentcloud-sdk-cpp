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

#include <tencentcloud/lke/v20231130/model/AppBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AppBaseInfo::AppBaseInfo() :
    m_appBizIdHasBeenSet(false),
    m_appNameHasBeenSet(false)
{
}

CoreInternalOutcome AppBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppBizId") && !value["AppBizId"].IsNull())
    {
        if (!value["AppBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppBaseInfo.AppBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appBizId = string(value["AppBizId"].GetString());
        m_appBizIdHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppBaseInfo.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

}


string AppBaseInfo::GetAppBizId() const
{
    return m_appBizId;
}

void AppBaseInfo::SetAppBizId(const string& _appBizId)
{
    m_appBizId = _appBizId;
    m_appBizIdHasBeenSet = true;
}

bool AppBaseInfo::AppBizIdHasBeenSet() const
{
    return m_appBizIdHasBeenSet;
}

string AppBaseInfo::GetAppName() const
{
    return m_appName;
}

void AppBaseInfo::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool AppBaseInfo::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

