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

#include <tencentcloud/essbasic/v20210526/model/AuthorizedUser.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

AuthorizedUser::AuthorizedUser() :
    m_openIdHasBeenSet(false)
{
}

CoreInternalOutcome AuthorizedUser::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OpenId") && !value["OpenId"].IsNull())
    {
        if (!value["OpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizedUser.OpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openId = string(value["OpenId"].GetString());
        m_openIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuthorizedUser::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

}


string AuthorizedUser::GetOpenId() const
{
    return m_openId;
}

void AuthorizedUser::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool AuthorizedUser::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

