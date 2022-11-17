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

#include <tencentcloud/tdid/v20210519/model/Contract.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

Contract::Contract() :
    m_applyNameHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_hashHasBeenSet(false),
    m_hashShowHasBeenSet(false),
    m_weIdHasBeenSet(false),
    m_deployNameHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome Contract::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplyName") && !value["ApplyName"].IsNull())
    {
        if (!value["ApplyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Contract.ApplyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyName = string(value["ApplyName"].GetString());
        m_applyNameHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Contract.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("Hash") && !value["Hash"].IsNull())
    {
        if (!value["Hash"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Contract.Hash` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hash = string(value["Hash"].GetString());
        m_hashHasBeenSet = true;
    }

    if (value.HasMember("HashShow") && !value["HashShow"].IsNull())
    {
        if (!value["HashShow"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Contract.HashShow` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hashShow = string(value["HashShow"].GetString());
        m_hashShowHasBeenSet = true;
    }

    if (value.HasMember("WeId") && !value["WeId"].IsNull())
    {
        if (!value["WeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Contract.WeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_weId = string(value["WeId"].GetString());
        m_weIdHasBeenSet = true;
    }

    if (value.HasMember("DeployName") && !value["DeployName"].IsNull())
    {
        if (!value["DeployName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Contract.DeployName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployName = string(value["DeployName"].GetString());
        m_deployNameHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Contract.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Contract.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Contract::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyName.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_hashHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hash";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hash.c_str(), allocator).Move(), allocator);
    }

    if (m_hashShowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HashShow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hashShow.c_str(), allocator).Move(), allocator);
    }

    if (m_weIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_weId.c_str(), allocator).Move(), allocator);
    }

    if (m_deployNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string Contract::GetApplyName() const
{
    return m_applyName;
}

void Contract::SetApplyName(const string& _applyName)
{
    m_applyName = _applyName;
    m_applyNameHasBeenSet = true;
}

bool Contract::ApplyNameHasBeenSet() const
{
    return m_applyNameHasBeenSet;
}

bool Contract::GetEnable() const
{
    return m_enable;
}

void Contract::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool Contract::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string Contract::GetHash() const
{
    return m_hash;
}

void Contract::SetHash(const string& _hash)
{
    m_hash = _hash;
    m_hashHasBeenSet = true;
}

bool Contract::HashHasBeenSet() const
{
    return m_hashHasBeenSet;
}

string Contract::GetHashShow() const
{
    return m_hashShow;
}

void Contract::SetHashShow(const string& _hashShow)
{
    m_hashShow = _hashShow;
    m_hashShowHasBeenSet = true;
}

bool Contract::HashShowHasBeenSet() const
{
    return m_hashShowHasBeenSet;
}

string Contract::GetWeId() const
{
    return m_weId;
}

void Contract::SetWeId(const string& _weId)
{
    m_weId = _weId;
    m_weIdHasBeenSet = true;
}

bool Contract::WeIdHasBeenSet() const
{
    return m_weIdHasBeenSet;
}

string Contract::GetDeployName() const
{
    return m_deployName;
}

void Contract::SetDeployName(const string& _deployName)
{
    m_deployName = _deployName;
    m_deployNameHasBeenSet = true;
}

bool Contract::DeployNameHasBeenSet() const
{
    return m_deployNameHasBeenSet;
}

string Contract::GetGroupId() const
{
    return m_groupId;
}

void Contract::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool Contract::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string Contract::GetCreateTime() const
{
    return m_createTime;
}

void Contract::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Contract::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

