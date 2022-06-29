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

#include <tencentcloud/iecp/v20210914/model/EdgeDracoNodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

EdgeDracoNodeInfo::EdgeDracoNodeInfo() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_isUsedHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_sNHasBeenSet(false)
{
}

CoreInternalOutcome EdgeDracoNodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeDracoNodeInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeDracoNodeInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IsUsed") && !value["IsUsed"].IsNull())
    {
        if (!value["IsUsed"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeDracoNodeInfo.IsUsed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isUsed = value["IsUsed"].GetBool();
        m_isUsedHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeDracoNodeInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeDracoNodeInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("SN") && !value["SN"].IsNull())
    {
        if (!value["SN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeDracoNodeInfo.SN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sN = string(value["SN"].GetString());
        m_sNHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdgeDracoNodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_isUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUsed, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_sNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sN.c_str(), allocator).Move(), allocator);
    }

}


uint64_t EdgeDracoNodeInfo::GetId() const
{
    return m_id;
}

void EdgeDracoNodeInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool EdgeDracoNodeInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string EdgeDracoNodeInfo::GetName() const
{
    return m_name;
}

void EdgeDracoNodeInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EdgeDracoNodeInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool EdgeDracoNodeInfo::GetIsUsed() const
{
    return m_isUsed;
}

void EdgeDracoNodeInfo::SetIsUsed(const bool& _isUsed)
{
    m_isUsed = _isUsed;
    m_isUsedHasBeenSet = true;
}

bool EdgeDracoNodeInfo::IsUsedHasBeenSet() const
{
    return m_isUsedHasBeenSet;
}

string EdgeDracoNodeInfo::GetCreateTime() const
{
    return m_createTime;
}

void EdgeDracoNodeInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool EdgeDracoNodeInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string EdgeDracoNodeInfo::GetRemark() const
{
    return m_remark;
}

void EdgeDracoNodeInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool EdgeDracoNodeInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string EdgeDracoNodeInfo::GetSN() const
{
    return m_sN;
}

void EdgeDracoNodeInfo::SetSN(const string& _sN)
{
    m_sN = _sN;
    m_sNHasBeenSet = true;
}

bool EdgeDracoNodeInfo::SNHasBeenSet() const
{
    return m_sNHasBeenSet;
}

