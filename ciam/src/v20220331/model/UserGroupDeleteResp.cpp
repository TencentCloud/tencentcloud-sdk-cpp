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

#include <tencentcloud/ciam/v20220331/model/UserGroupDeleteResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ciam::V20220331::Model;
using namespace std;

UserGroupDeleteResp::UserGroupDeleteResp() :
    m_errorMessageHasBeenSet(false),
    m_appAssociatedUserGroupIdsHasBeenSet(false)
{
}

CoreInternalOutcome UserGroupDeleteResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserGroupDeleteResp.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("AppAssociatedUserGroupIds") && !value["AppAssociatedUserGroupIds"].IsNull())
    {
        if (!value["AppAssociatedUserGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserGroupDeleteResp.AppAssociatedUserGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["AppAssociatedUserGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AppAssociatedUserGroupIds item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_appAssociatedUserGroupIds.push_back(item);
        }
        m_appAssociatedUserGroupIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserGroupDeleteResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_appAssociatedUserGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppAssociatedUserGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_appAssociatedUserGroupIds.begin(); itr != m_appAssociatedUserGroupIds.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string UserGroupDeleteResp::GetErrorMessage() const
{
    return m_errorMessage;
}

void UserGroupDeleteResp::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool UserGroupDeleteResp::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

vector<AppAssociatedUserGroupIds> UserGroupDeleteResp::GetAppAssociatedUserGroupIds() const
{
    return m_appAssociatedUserGroupIds;
}

void UserGroupDeleteResp::SetAppAssociatedUserGroupIds(const vector<AppAssociatedUserGroupIds>& _appAssociatedUserGroupIds)
{
    m_appAssociatedUserGroupIds = _appAssociatedUserGroupIds;
    m_appAssociatedUserGroupIdsHasBeenSet = true;
}

bool UserGroupDeleteResp::AppAssociatedUserGroupIdsHasBeenSet() const
{
    return m_appAssociatedUserGroupIdsHasBeenSet;
}

