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

#include <tencentcloud/vcube/v20220410/model/Package.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vcube::V20220410::Model;
using namespace std;

Package::Package() :
    m_idHasBeenSet(false),
    m_bizResourceIdHasBeenSet(false),
    m_siteHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_refundTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome Package::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Package.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("BizResourceId") && !value["BizResourceId"].IsNull())
    {
        if (!value["BizResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Package.BizResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizResourceId = string(value["BizResourceId"].GetString());
        m_bizResourceIdHasBeenSet = true;
    }

    if (value.HasMember("Site") && !value["Site"].IsNull())
    {
        if (!value["Site"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Package.Site` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_site = string(value["Site"].GetString());
        m_siteHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Package.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Package.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("RefundTime") && !value["RefundTime"].IsNull())
    {
        if (!value["RefundTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Package.RefundTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refundTime = string(value["RefundTime"].GetString());
        m_refundTimeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Package.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Package.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Package::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_bizResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_siteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Site";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_site.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_refundTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refundTime.c_str(), allocator).Move(), allocator);
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

}


int64_t Package::GetId() const
{
    return m_id;
}

void Package::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Package::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Package::GetBizResourceId() const
{
    return m_bizResourceId;
}

void Package::SetBizResourceId(const string& _bizResourceId)
{
    m_bizResourceId = _bizResourceId;
    m_bizResourceIdHasBeenSet = true;
}

bool Package::BizResourceIdHasBeenSet() const
{
    return m_bizResourceIdHasBeenSet;
}

string Package::GetSite() const
{
    return m_site;
}

void Package::SetSite(const string& _site)
{
    m_site = _site;
    m_siteHasBeenSet = true;
}

bool Package::SiteHasBeenSet() const
{
    return m_siteHasBeenSet;
}

string Package::GetStartTime() const
{
    return m_startTime;
}

void Package::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool Package::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string Package::GetEndTime() const
{
    return m_endTime;
}

void Package::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool Package::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string Package::GetRefundTime() const
{
    return m_refundTime;
}

void Package::SetRefundTime(const string& _refundTime)
{
    m_refundTime = _refundTime;
    m_refundTimeHasBeenSet = true;
}

bool Package::RefundTimeHasBeenSet() const
{
    return m_refundTimeHasBeenSet;
}

string Package::GetName() const
{
    return m_name;
}

void Package::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Package::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Package::GetType() const
{
    return m_type;
}

void Package::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Package::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

