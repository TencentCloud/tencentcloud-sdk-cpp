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

#include <tencentcloud/cdb/v20170320/model/BinlogInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

BinlogInfo::BinlogInfo() :
    m_nameHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_intranetUrlHasBeenSet(false),
    m_internetUrlHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_binlogStartTimeHasBeenSet(false),
    m_binlogFinishTimeHasBeenSet(false)
{
}

CoreInternalOutcome BinlogInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BinlogInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BinlogInfo.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BinlogInfo.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("IntranetUrl") && !value["IntranetUrl"].IsNull())
    {
        if (!value["IntranetUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BinlogInfo.IntranetUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intranetUrl = string(value["IntranetUrl"].GetString());
        m_intranetUrlHasBeenSet = true;
    }

    if (value.HasMember("InternetUrl") && !value["InternetUrl"].IsNull())
    {
        if (!value["InternetUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BinlogInfo.InternetUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internetUrl = string(value["InternetUrl"].GetString());
        m_internetUrlHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BinlogInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("BinlogStartTime") && !value["BinlogStartTime"].IsNull())
    {
        if (!value["BinlogStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BinlogInfo.BinlogStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_binlogStartTime = string(value["BinlogStartTime"].GetString());
        m_binlogStartTimeHasBeenSet = true;
    }

    if (value.HasMember("BinlogFinishTime") && !value["BinlogFinishTime"].IsNull())
    {
        if (!value["BinlogFinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BinlogInfo.BinlogFinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_binlogFinishTime = string(value["BinlogFinishTime"].GetString());
        m_binlogFinishTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BinlogInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_intranetUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntranetUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intranetUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_internetUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internetUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_binlogStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_binlogStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_binlogFinishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogFinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_binlogFinishTime.c_str(), allocator).Move(), allocator);
    }

}


string BinlogInfo::GetName() const
{
    return m_name;
}

void BinlogInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BinlogInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t BinlogInfo::GetSize() const
{
    return m_size;
}

void BinlogInfo::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool BinlogInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string BinlogInfo::GetDate() const
{
    return m_date;
}

void BinlogInfo::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool BinlogInfo::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string BinlogInfo::GetIntranetUrl() const
{
    return m_intranetUrl;
}

void BinlogInfo::SetIntranetUrl(const string& _intranetUrl)
{
    m_intranetUrl = _intranetUrl;
    m_intranetUrlHasBeenSet = true;
}

bool BinlogInfo::IntranetUrlHasBeenSet() const
{
    return m_intranetUrlHasBeenSet;
}

string BinlogInfo::GetInternetUrl() const
{
    return m_internetUrl;
}

void BinlogInfo::SetInternetUrl(const string& _internetUrl)
{
    m_internetUrl = _internetUrl;
    m_internetUrlHasBeenSet = true;
}

bool BinlogInfo::InternetUrlHasBeenSet() const
{
    return m_internetUrlHasBeenSet;
}

string BinlogInfo::GetType() const
{
    return m_type;
}

void BinlogInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool BinlogInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string BinlogInfo::GetBinlogStartTime() const
{
    return m_binlogStartTime;
}

void BinlogInfo::SetBinlogStartTime(const string& _binlogStartTime)
{
    m_binlogStartTime = _binlogStartTime;
    m_binlogStartTimeHasBeenSet = true;
}

bool BinlogInfo::BinlogStartTimeHasBeenSet() const
{
    return m_binlogStartTimeHasBeenSet;
}

string BinlogInfo::GetBinlogFinishTime() const
{
    return m_binlogFinishTime;
}

void BinlogInfo::SetBinlogFinishTime(const string& _binlogFinishTime)
{
    m_binlogFinishTime = _binlogFinishTime;
    m_binlogFinishTimeHasBeenSet = true;
}

bool BinlogInfo::BinlogFinishTimeHasBeenSet() const
{
    return m_binlogFinishTimeHasBeenSet;
}

