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

#include <tencentcloud/tione/v20211111/model/UserBriefInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

UserBriefInfo::UserBriefInfo() :
    m_subUinHasBeenSet(false),
    m_subUinNameHasBeenSet(false)
{
}

CoreInternalOutcome UserBriefInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubUin") && !value["SubUin"].IsNull())
    {
        if (!value["SubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserBriefInfo.SubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUin = string(value["SubUin"].GetString());
        m_subUinHasBeenSet = true;
    }

    if (value.HasMember("SubUinName") && !value["SubUinName"].IsNull())
    {
        if (!value["SubUinName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserBriefInfo.SubUinName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUinName = string(value["SubUinName"].GetString());
        m_subUinNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserBriefInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subUin.c_str(), allocator).Move(), allocator);
    }

    if (m_subUinNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUinName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subUinName.c_str(), allocator).Move(), allocator);
    }

}


string UserBriefInfo::GetSubUin() const
{
    return m_subUin;
}

void UserBriefInfo::SetSubUin(const string& _subUin)
{
    m_subUin = _subUin;
    m_subUinHasBeenSet = true;
}

bool UserBriefInfo::SubUinHasBeenSet() const
{
    return m_subUinHasBeenSet;
}

string UserBriefInfo::GetSubUinName() const
{
    return m_subUinName;
}

void UserBriefInfo::SetSubUinName(const string& _subUinName)
{
    m_subUinName = _subUinName;
    m_subUinNameHasBeenSet = true;
}

bool UserBriefInfo::SubUinNameHasBeenSet() const
{
    return m_subUinNameHasBeenSet;
}

