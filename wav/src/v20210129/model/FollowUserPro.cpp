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

#include <tencentcloud/wav/v20210129/model/FollowUserPro.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

FollowUserPro::FollowUserPro() :
    m_userIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_addWayHasBeenSet(false),
    m_operUserIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_salesNameHasBeenSet(false),
    m_departmentIdListHasBeenSet(false)
{
}

CoreInternalOutcome FollowUserPro::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FollowUserPro.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FollowUserPro.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FollowUserPro.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FollowUserPro.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("AddWay") && !value["AddWay"].IsNull())
    {
        if (!value["AddWay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FollowUserPro.AddWay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_addWay = value["AddWay"].GetInt64();
        m_addWayHasBeenSet = true;
    }

    if (value.HasMember("OperUserId") && !value["OperUserId"].IsNull())
    {
        if (!value["OperUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FollowUserPro.OperUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operUserId = string(value["OperUserId"].GetString());
        m_operUserIdHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FollowUserPro.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExternalContactTag item;
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

    if (value.HasMember("SalesName") && !value["SalesName"].IsNull())
    {
        if (!value["SalesName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FollowUserPro.SalesName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_salesName = string(value["SalesName"].GetString());
        m_salesNameHasBeenSet = true;
    }

    if (value.HasMember("DepartmentIdList") && !value["DepartmentIdList"].IsNull())
    {
        if (!value["DepartmentIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FollowUserPro.DepartmentIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["DepartmentIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_departmentIdList.push_back((*itr).GetInt64());
        }
        m_departmentIdListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FollowUserPro::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_addWayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddWay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_addWay, allocator);
    }

    if (m_operUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operUserId.c_str(), allocator).Move(), allocator);
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

    if (m_salesNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SalesName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_salesName.c_str(), allocator).Move(), allocator);
    }

    if (m_departmentIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartmentIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_departmentIdList.begin(); itr != m_departmentIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string FollowUserPro::GetUserId() const
{
    return m_userId;
}

void FollowUserPro::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool FollowUserPro::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string FollowUserPro::GetRemark() const
{
    return m_remark;
}

void FollowUserPro::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool FollowUserPro::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string FollowUserPro::GetDescription() const
{
    return m_description;
}

void FollowUserPro::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool FollowUserPro::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t FollowUserPro::GetCreateTime() const
{
    return m_createTime;
}

void FollowUserPro::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool FollowUserPro::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t FollowUserPro::GetAddWay() const
{
    return m_addWay;
}

void FollowUserPro::SetAddWay(const int64_t& _addWay)
{
    m_addWay = _addWay;
    m_addWayHasBeenSet = true;
}

bool FollowUserPro::AddWayHasBeenSet() const
{
    return m_addWayHasBeenSet;
}

string FollowUserPro::GetOperUserId() const
{
    return m_operUserId;
}

void FollowUserPro::SetOperUserId(const string& _operUserId)
{
    m_operUserId = _operUserId;
    m_operUserIdHasBeenSet = true;
}

bool FollowUserPro::OperUserIdHasBeenSet() const
{
    return m_operUserIdHasBeenSet;
}

vector<ExternalContactTag> FollowUserPro::GetTags() const
{
    return m_tags;
}

void FollowUserPro::SetTags(const vector<ExternalContactTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool FollowUserPro::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string FollowUserPro::GetSalesName() const
{
    return m_salesName;
}

void FollowUserPro::SetSalesName(const string& _salesName)
{
    m_salesName = _salesName;
    m_salesNameHasBeenSet = true;
}

bool FollowUserPro::SalesNameHasBeenSet() const
{
    return m_salesNameHasBeenSet;
}

vector<int64_t> FollowUserPro::GetDepartmentIdList() const
{
    return m_departmentIdList;
}

void FollowUserPro::SetDepartmentIdList(const vector<int64_t>& _departmentIdList)
{
    m_departmentIdList = _departmentIdList;
    m_departmentIdListHasBeenSet = true;
}

bool FollowUserPro::DepartmentIdListHasBeenSet() const
{
    return m_departmentIdListHasBeenSet;
}

