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

#include <tencentcloud/cvm/v20170312/model/DisasterRecoverGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

DisasterRecoverGroup::DisasterRecoverGroup() :
    m_disasterRecoverGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_cvmQuotaTotalHasBeenSet(false),
    m_currentNumHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_affinityHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome DisasterRecoverGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DisasterRecoverGroupId") && !value["DisasterRecoverGroupId"].IsNull())
    {
        if (!value["DisasterRecoverGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoverGroup.DisasterRecoverGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_disasterRecoverGroupId = string(value["DisasterRecoverGroupId"].GetString());
        m_disasterRecoverGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoverGroup.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoverGroup.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CvmQuotaTotal") && !value["CvmQuotaTotal"].IsNull())
    {
        if (!value["CvmQuotaTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoverGroup.CvmQuotaTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cvmQuotaTotal = value["CvmQuotaTotal"].GetInt64();
        m_cvmQuotaTotalHasBeenSet = true;
    }

    if (value.HasMember("CurrentNum") && !value["CurrentNum"].IsNull())
    {
        if (!value["CurrentNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoverGroup.CurrentNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentNum = value["CurrentNum"].GetInt64();
        m_currentNumHasBeenSet = true;
    }

    if (value.HasMember("InstanceIds") && !value["InstanceIds"].IsNull())
    {
        if (!value["InstanceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DisasterRecoverGroup.InstanceIds` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceIds.push_back((*itr).GetString());
        }
        m_instanceIdsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoverGroup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Affinity") && !value["Affinity"].IsNull())
    {
        if (!value["Affinity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisasterRecoverGroup.Affinity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_affinity = value["Affinity"].GetInt64();
        m_affinityHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DisasterRecoverGroup.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisasterRecoverGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_disasterRecoverGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisasterRecoverGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_disasterRecoverGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_cvmQuotaTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmQuotaTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cvmQuotaTotal, allocator);
    }

    if (m_currentNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentNum, allocator);
    }

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_affinityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Affinity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affinity, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DisasterRecoverGroup::GetDisasterRecoverGroupId() const
{
    return m_disasterRecoverGroupId;
}

void DisasterRecoverGroup::SetDisasterRecoverGroupId(const string& _disasterRecoverGroupId)
{
    m_disasterRecoverGroupId = _disasterRecoverGroupId;
    m_disasterRecoverGroupIdHasBeenSet = true;
}

bool DisasterRecoverGroup::DisasterRecoverGroupIdHasBeenSet() const
{
    return m_disasterRecoverGroupIdHasBeenSet;
}

string DisasterRecoverGroup::GetName() const
{
    return m_name;
}

void DisasterRecoverGroup::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DisasterRecoverGroup::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DisasterRecoverGroup::GetType() const
{
    return m_type;
}

void DisasterRecoverGroup::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DisasterRecoverGroup::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t DisasterRecoverGroup::GetCvmQuotaTotal() const
{
    return m_cvmQuotaTotal;
}

void DisasterRecoverGroup::SetCvmQuotaTotal(const int64_t& _cvmQuotaTotal)
{
    m_cvmQuotaTotal = _cvmQuotaTotal;
    m_cvmQuotaTotalHasBeenSet = true;
}

bool DisasterRecoverGroup::CvmQuotaTotalHasBeenSet() const
{
    return m_cvmQuotaTotalHasBeenSet;
}

int64_t DisasterRecoverGroup::GetCurrentNum() const
{
    return m_currentNum;
}

void DisasterRecoverGroup::SetCurrentNum(const int64_t& _currentNum)
{
    m_currentNum = _currentNum;
    m_currentNumHasBeenSet = true;
}

bool DisasterRecoverGroup::CurrentNumHasBeenSet() const
{
    return m_currentNumHasBeenSet;
}

vector<string> DisasterRecoverGroup::GetInstanceIds() const
{
    return m_instanceIds;
}

void DisasterRecoverGroup::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool DisasterRecoverGroup::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

string DisasterRecoverGroup::GetCreateTime() const
{
    return m_createTime;
}

void DisasterRecoverGroup::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DisasterRecoverGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DisasterRecoverGroup::GetAffinity() const
{
    return m_affinity;
}

void DisasterRecoverGroup::SetAffinity(const int64_t& _affinity)
{
    m_affinity = _affinity;
    m_affinityHasBeenSet = true;
}

bool DisasterRecoverGroup::AffinityHasBeenSet() const
{
    return m_affinityHasBeenSet;
}

vector<Tag> DisasterRecoverGroup::GetTags() const
{
    return m_tags;
}

void DisasterRecoverGroup::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DisasterRecoverGroup::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

