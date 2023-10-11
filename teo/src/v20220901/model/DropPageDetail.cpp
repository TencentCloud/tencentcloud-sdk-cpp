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

#include <tencentcloud/teo/v20220901/model/DropPageDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DropPageDetail::DropPageDetail() :
    m_pageIdHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_customResponseIdHasBeenSet(false)
{
}

CoreInternalOutcome DropPageDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PageId") && !value["PageId"].IsNull())
    {
        if (!value["PageId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DropPageDetail.PageId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageId = value["PageId"].GetInt64();
        m_pageIdHasBeenSet = true;
    }

    if (value.HasMember("StatusCode") && !value["StatusCode"].IsNull())
    {
        if (!value["StatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DropPageDetail.StatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statusCode = value["StatusCode"].GetInt64();
        m_statusCodeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DropPageDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DropPageDetail.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CustomResponseId") && !value["CustomResponseId"].IsNull())
    {
        if (!value["CustomResponseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DropPageDetail.CustomResponseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customResponseId = string(value["CustomResponseId"].GetString());
        m_customResponseIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DropPageDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageId, allocator);
    }

    if (m_statusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statusCode, allocator);
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

    if (m_customResponseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomResponseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customResponseId.c_str(), allocator).Move(), allocator);
    }

}


int64_t DropPageDetail::GetPageId() const
{
    return m_pageId;
}

void DropPageDetail::SetPageId(const int64_t& _pageId)
{
    m_pageId = _pageId;
    m_pageIdHasBeenSet = true;
}

bool DropPageDetail::PageIdHasBeenSet() const
{
    return m_pageIdHasBeenSet;
}

int64_t DropPageDetail::GetStatusCode() const
{
    return m_statusCode;
}

void DropPageDetail::SetStatusCode(const int64_t& _statusCode)
{
    m_statusCode = _statusCode;
    m_statusCodeHasBeenSet = true;
}

bool DropPageDetail::StatusCodeHasBeenSet() const
{
    return m_statusCodeHasBeenSet;
}

string DropPageDetail::GetName() const
{
    return m_name;
}

void DropPageDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DropPageDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DropPageDetail::GetType() const
{
    return m_type;
}

void DropPageDetail::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DropPageDetail::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DropPageDetail::GetCustomResponseId() const
{
    return m_customResponseId;
}

void DropPageDetail::SetCustomResponseId(const string& _customResponseId)
{
    m_customResponseId = _customResponseId;
    m_customResponseIdHasBeenSet = true;
}

bool DropPageDetail::CustomResponseIdHasBeenSet() const
{
    return m_customResponseIdHasBeenSet;
}

