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

#include <tencentcloud/cdb/v20170320/model/DeployGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DeployGroupInfo::DeployGroupInfo() :
    m_deployGroupIdHasBeenSet(false),
    m_deployGroupNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_quotaHasBeenSet(false),
    m_affinityHasBeenSet(false),
    m_limitNumHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_devClassHasBeenSet(false)
{
}

CoreInternalOutcome DeployGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeployGroupId") && !value["DeployGroupId"].IsNull())
    {
        if (!value["DeployGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployGroupInfo.DeployGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployGroupId = string(value["DeployGroupId"].GetString());
        m_deployGroupIdHasBeenSet = true;
    }

    if (value.HasMember("DeployGroupName") && !value["DeployGroupName"].IsNull())
    {
        if (!value["DeployGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployGroupInfo.DeployGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployGroupName = string(value["DeployGroupName"].GetString());
        m_deployGroupNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployGroupInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Quota") && !value["Quota"].IsNull())
    {
        if (!value["Quota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeployGroupInfo.Quota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quota = value["Quota"].GetInt64();
        m_quotaHasBeenSet = true;
    }

    if (value.HasMember("Affinity") && !value["Affinity"].IsNull())
    {
        if (!value["Affinity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployGroupInfo.Affinity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_affinity = string(value["Affinity"].GetString());
        m_affinityHasBeenSet = true;
    }

    if (value.HasMember("LimitNum") && !value["LimitNum"].IsNull())
    {
        if (!value["LimitNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeployGroupInfo.LimitNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_limitNum = value["LimitNum"].GetInt64();
        m_limitNumHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployGroupInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("DevClass") && !value["DevClass"].IsNull())
    {
        if (!value["DevClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeployGroupInfo.DevClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devClass = string(value["DevClass"].GetString());
        m_devClassHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeployGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deployGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_deployGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quota, allocator);
    }

    if (m_affinityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Affinity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_affinity.c_str(), allocator).Move(), allocator);
    }

    if (m_limitNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limitNum, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_devClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devClass.c_str(), allocator).Move(), allocator);
    }

}


string DeployGroupInfo::GetDeployGroupId() const
{
    return m_deployGroupId;
}

void DeployGroupInfo::SetDeployGroupId(const string& _deployGroupId)
{
    m_deployGroupId = _deployGroupId;
    m_deployGroupIdHasBeenSet = true;
}

bool DeployGroupInfo::DeployGroupIdHasBeenSet() const
{
    return m_deployGroupIdHasBeenSet;
}

string DeployGroupInfo::GetDeployGroupName() const
{
    return m_deployGroupName;
}

void DeployGroupInfo::SetDeployGroupName(const string& _deployGroupName)
{
    m_deployGroupName = _deployGroupName;
    m_deployGroupNameHasBeenSet = true;
}

bool DeployGroupInfo::DeployGroupNameHasBeenSet() const
{
    return m_deployGroupNameHasBeenSet;
}

string DeployGroupInfo::GetCreateTime() const
{
    return m_createTime;
}

void DeployGroupInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DeployGroupInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DeployGroupInfo::GetQuota() const
{
    return m_quota;
}

void DeployGroupInfo::SetQuota(const int64_t& _quota)
{
    m_quota = _quota;
    m_quotaHasBeenSet = true;
}

bool DeployGroupInfo::QuotaHasBeenSet() const
{
    return m_quotaHasBeenSet;
}

string DeployGroupInfo::GetAffinity() const
{
    return m_affinity;
}

void DeployGroupInfo::SetAffinity(const string& _affinity)
{
    m_affinity = _affinity;
    m_affinityHasBeenSet = true;
}

bool DeployGroupInfo::AffinityHasBeenSet() const
{
    return m_affinityHasBeenSet;
}

int64_t DeployGroupInfo::GetLimitNum() const
{
    return m_limitNum;
}

void DeployGroupInfo::SetLimitNum(const int64_t& _limitNum)
{
    m_limitNum = _limitNum;
    m_limitNumHasBeenSet = true;
}

bool DeployGroupInfo::LimitNumHasBeenSet() const
{
    return m_limitNumHasBeenSet;
}

string DeployGroupInfo::GetDescription() const
{
    return m_description;
}

void DeployGroupInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DeployGroupInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DeployGroupInfo::GetDevClass() const
{
    return m_devClass;
}

void DeployGroupInfo::SetDevClass(const string& _devClass)
{
    m_devClass = _devClass;
    m_devClassHasBeenSet = true;
}

bool DeployGroupInfo::DevClassHasBeenSet() const
{
    return m_devClassHasBeenSet;
}

