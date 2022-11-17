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

#include <tencentcloud/tdid/v20210519/model/Identity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

Identity::Identity() :
    m_accountIdentifierHasBeenSet(false),
    m_chainIDHasBeenSet(false),
    m_didHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false)
{
}

CoreInternalOutcome Identity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountIdentifier") && !value["AccountIdentifier"].IsNull())
    {
        if (!value["AccountIdentifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.AccountIdentifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountIdentifier = string(value["AccountIdentifier"].GetString());
        m_accountIdentifierHasBeenSet = true;
    }

    if (value.HasMember("ChainID") && !value["ChainID"].IsNull())
    {
        if (!value["ChainID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.ChainID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chainID = string(value["ChainID"].GetString());
        m_chainIDHasBeenSet = true;
    }

    if (value.HasMember("Did") && !value["Did"].IsNull())
    {
        if (!value["Did"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.Did` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_did = string(value["Did"].GetString());
        m_didHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.GroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetUint64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Identity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountIdentifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountIdentifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountIdentifier.c_str(), allocator).Move(), allocator);
    }

    if (m_chainIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChainID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chainID.c_str(), allocator).Move(), allocator);
    }

    if (m_didHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Did";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_did.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupId, allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

}


string Identity::GetAccountIdentifier() const
{
    return m_accountIdentifier;
}

void Identity::SetAccountIdentifier(const string& _accountIdentifier)
{
    m_accountIdentifier = _accountIdentifier;
    m_accountIdentifierHasBeenSet = true;
}

bool Identity::AccountIdentifierHasBeenSet() const
{
    return m_accountIdentifierHasBeenSet;
}

string Identity::GetChainID() const
{
    return m_chainID;
}

void Identity::SetChainID(const string& _chainID)
{
    m_chainID = _chainID;
    m_chainIDHasBeenSet = true;
}

bool Identity::ChainIDHasBeenSet() const
{
    return m_chainIDHasBeenSet;
}

string Identity::GetDid() const
{
    return m_did;
}

void Identity::SetDid(const string& _did)
{
    m_did = _did;
    m_didHasBeenSet = true;
}

bool Identity::DidHasBeenSet() const
{
    return m_didHasBeenSet;
}

uint64_t Identity::GetGroupId() const
{
    return m_groupId;
}

void Identity::SetGroupId(const uint64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool Identity::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string Identity::GetGroupName() const
{
    return m_groupName;
}

void Identity::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool Identity::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

