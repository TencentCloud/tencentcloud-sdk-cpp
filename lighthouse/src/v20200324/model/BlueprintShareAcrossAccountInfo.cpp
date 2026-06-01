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

#include <tencentcloud/lighthouse/v20200324/model/BlueprintShareAcrossAccountInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

BlueprintShareAcrossAccountInfo::BlueprintShareAcrossAccountInfo() :
    m_blueprintIdHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

CoreInternalOutcome BlueprintShareAcrossAccountInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BlueprintId") && !value["BlueprintId"].IsNull())
    {
        if (!value["BlueprintId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlueprintShareAcrossAccountInfo.BlueprintId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blueprintId = string(value["BlueprintId"].GetString());
        m_blueprintIdHasBeenSet = true;
    }

    if (value.HasMember("AccountId") && !value["AccountId"].IsNull())
    {
        if (!value["AccountId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlueprintShareAcrossAccountInfo.AccountId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountId = string(value["AccountId"].GetString());
        m_accountIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BlueprintShareAcrossAccountInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BlueprintShareAcrossAccountInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_blueprintIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlueprintId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blueprintId.c_str(), allocator).Move(), allocator);
    }

    if (m_accountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

}


string BlueprintShareAcrossAccountInfo::GetBlueprintId() const
{
    return m_blueprintId;
}

void BlueprintShareAcrossAccountInfo::SetBlueprintId(const string& _blueprintId)
{
    m_blueprintId = _blueprintId;
    m_blueprintIdHasBeenSet = true;
}

bool BlueprintShareAcrossAccountInfo::BlueprintIdHasBeenSet() const
{
    return m_blueprintIdHasBeenSet;
}

string BlueprintShareAcrossAccountInfo::GetAccountId() const
{
    return m_accountId;
}

void BlueprintShareAcrossAccountInfo::SetAccountId(const string& _accountId)
{
    m_accountId = _accountId;
    m_accountIdHasBeenSet = true;
}

bool BlueprintShareAcrossAccountInfo::AccountIdHasBeenSet() const
{
    return m_accountIdHasBeenSet;
}

string BlueprintShareAcrossAccountInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void BlueprintShareAcrossAccountInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool BlueprintShareAcrossAccountInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

