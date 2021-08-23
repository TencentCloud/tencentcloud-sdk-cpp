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

#include <tencentcloud/cdb/v20170320/model/SlowLogInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

SlowLogInfo::SlowLogInfo() :
    m_nameHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_intranetUrlHasBeenSet(false),
    m_internetUrlHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome SlowLogInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogInfo.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogInfo.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("IntranetUrl") && !value["IntranetUrl"].IsNull())
    {
        if (!value["IntranetUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogInfo.IntranetUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intranetUrl = string(value["IntranetUrl"].GetString());
        m_intranetUrlHasBeenSet = true;
    }

    if (value.HasMember("InternetUrl") && !value["InternetUrl"].IsNull())
    {
        if (!value["InternetUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogInfo.InternetUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internetUrl = string(value["InternetUrl"].GetString());
        m_internetUrlHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlowLogInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string SlowLogInfo::GetName() const
{
    return m_name;
}

void SlowLogInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SlowLogInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t SlowLogInfo::GetSize() const
{
    return m_size;
}

void SlowLogInfo::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool SlowLogInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string SlowLogInfo::GetDate() const
{
    return m_date;
}

void SlowLogInfo::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool SlowLogInfo::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string SlowLogInfo::GetIntranetUrl() const
{
    return m_intranetUrl;
}

void SlowLogInfo::SetIntranetUrl(const string& _intranetUrl)
{
    m_intranetUrl = _intranetUrl;
    m_intranetUrlHasBeenSet = true;
}

bool SlowLogInfo::IntranetUrlHasBeenSet() const
{
    return m_intranetUrlHasBeenSet;
}

string SlowLogInfo::GetInternetUrl() const
{
    return m_internetUrl;
}

void SlowLogInfo::SetInternetUrl(const string& _internetUrl)
{
    m_internetUrl = _internetUrl;
    m_internetUrlHasBeenSet = true;
}

bool SlowLogInfo::InternetUrlHasBeenSet() const
{
    return m_internetUrlHasBeenSet;
}

string SlowLogInfo::GetType() const
{
    return m_type;
}

void SlowLogInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SlowLogInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

