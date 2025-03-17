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

#include <tencentcloud/cvm/v20170312/model/Attribute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

Attribute::Attribute() :
    m_userDataHasBeenSet(false)
{
}

CoreInternalOutcome Attribute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserData") && !value["UserData"].IsNull())
    {
        if (!value["UserData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Attribute.UserData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userData = string(value["UserData"].GetString());
        m_userDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Attribute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userData.c_str(), allocator).Move(), allocator);
    }

}


string Attribute::GetUserData() const
{
    return m_userData;
}

void Attribute::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool Attribute::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}

