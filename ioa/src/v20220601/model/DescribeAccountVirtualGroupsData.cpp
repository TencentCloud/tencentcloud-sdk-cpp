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

#include <tencentcloud/ioa/v20220601/model/DescribeAccountVirtualGroupsData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeAccountVirtualGroupsData::DescribeAccountVirtualGroupsData() :
    m_idHasBeenSet(false),
    m_accountGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_extraInfoHasBeenSet(false),
    m_userTotalHasBeenSet(false),
    m_itimeHasBeenSet(false),
    m_utimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAccountVirtualGroupsData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountVirtualGroupsData.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("AccountGroupId") && !value["AccountGroupId"].IsNull())
    {
        if (!value["AccountGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountVirtualGroupsData.AccountGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accountGroupId = value["AccountGroupId"].GetUint64();
        m_accountGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountVirtualGroupsData.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountVirtualGroupsData.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountVirtualGroupsData.SourceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = value["SourceType"].GetInt64();
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ExtraInfo") && !value["ExtraInfo"].IsNull())
    {
        if (!value["ExtraInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountVirtualGroupsData.ExtraInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraInfo = string(value["ExtraInfo"].GetString());
        m_extraInfoHasBeenSet = true;
    }

    if (value.HasMember("UserTotal") && !value["UserTotal"].IsNull())
    {
        if (!value["UserTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountVirtualGroupsData.UserTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userTotal = value["UserTotal"].GetInt64();
        m_userTotalHasBeenSet = true;
    }

    if (value.HasMember("Itime") && !value["Itime"].IsNull())
    {
        if (!value["Itime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountVirtualGroupsData.Itime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itime = string(value["Itime"].GetString());
        m_itimeHasBeenSet = true;
    }

    if (value.HasMember("Utime") && !value["Utime"].IsNull())
    {
        if (!value["Utime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccountVirtualGroupsData.Utime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_utime = string(value["Utime"].GetString());
        m_utimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeAccountVirtualGroupsData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_accountGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountGroupId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceType, allocator);
    }

    if (m_extraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_userTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userTotal, allocator);
    }

    if (m_itimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Itime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itime.c_str(), allocator).Move(), allocator);
    }

    if (m_utimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Utime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_utime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t DescribeAccountVirtualGroupsData::GetId() const
{
    return m_id;
}

void DescribeAccountVirtualGroupsData::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeAccountVirtualGroupsData::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t DescribeAccountVirtualGroupsData::GetAccountGroupId() const
{
    return m_accountGroupId;
}

void DescribeAccountVirtualGroupsData::SetAccountGroupId(const uint64_t& _accountGroupId)
{
    m_accountGroupId = _accountGroupId;
    m_accountGroupIdHasBeenSet = true;
}

bool DescribeAccountVirtualGroupsData::AccountGroupIdHasBeenSet() const
{
    return m_accountGroupIdHasBeenSet;
}

string DescribeAccountVirtualGroupsData::GetName() const
{
    return m_name;
}

void DescribeAccountVirtualGroupsData::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeAccountVirtualGroupsData::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeAccountVirtualGroupsData::GetDescription() const
{
    return m_description;
}

void DescribeAccountVirtualGroupsData::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DescribeAccountVirtualGroupsData::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t DescribeAccountVirtualGroupsData::GetSourceType() const
{
    return m_sourceType;
}

void DescribeAccountVirtualGroupsData::SetSourceType(const int64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool DescribeAccountVirtualGroupsData::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string DescribeAccountVirtualGroupsData::GetExtraInfo() const
{
    return m_extraInfo;
}

void DescribeAccountVirtualGroupsData::SetExtraInfo(const string& _extraInfo)
{
    m_extraInfo = _extraInfo;
    m_extraInfoHasBeenSet = true;
}

bool DescribeAccountVirtualGroupsData::ExtraInfoHasBeenSet() const
{
    return m_extraInfoHasBeenSet;
}

int64_t DescribeAccountVirtualGroupsData::GetUserTotal() const
{
    return m_userTotal;
}

void DescribeAccountVirtualGroupsData::SetUserTotal(const int64_t& _userTotal)
{
    m_userTotal = _userTotal;
    m_userTotalHasBeenSet = true;
}

bool DescribeAccountVirtualGroupsData::UserTotalHasBeenSet() const
{
    return m_userTotalHasBeenSet;
}

string DescribeAccountVirtualGroupsData::GetItime() const
{
    return m_itime;
}

void DescribeAccountVirtualGroupsData::SetItime(const string& _itime)
{
    m_itime = _itime;
    m_itimeHasBeenSet = true;
}

bool DescribeAccountVirtualGroupsData::ItimeHasBeenSet() const
{
    return m_itimeHasBeenSet;
}

string DescribeAccountVirtualGroupsData::GetUtime() const
{
    return m_utime;
}

void DescribeAccountVirtualGroupsData::SetUtime(const string& _utime)
{
    m_utime = _utime;
    m_utimeHasBeenSet = true;
}

bool DescribeAccountVirtualGroupsData::UtimeHasBeenSet() const
{
    return m_utimeHasBeenSet;
}

