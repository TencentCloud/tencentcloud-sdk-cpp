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

#include <tencentcloud/essbasic/v20210526/model/ExtentServiceAuthInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ExtentServiceAuthInfo::ExtentServiceAuthInfo() :
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_operatorOpenIdHasBeenSet(false),
    m_operateOnHasBeenSet(false)
{
}

CoreInternalOutcome ExtentServiceAuthInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtentServiceAuthInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtentServiceAuthInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtentServiceAuthInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("OperatorOpenId") && !value["OperatorOpenId"].IsNull())
    {
        if (!value["OperatorOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExtentServiceAuthInfo.OperatorOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorOpenId = string(value["OperatorOpenId"].GetString());
        m_operatorOpenIdHasBeenSet = true;
    }

    if (value.HasMember("OperateOn") && !value["OperateOn"].IsNull())
    {
        if (!value["OperateOn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExtentServiceAuthInfo.OperateOn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_operateOn = value["OperateOn"].GetInt64();
        m_operateOnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExtentServiceAuthInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_operateOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operateOn, allocator);
    }

}


string ExtentServiceAuthInfo::GetType() const
{
    return m_type;
}

void ExtentServiceAuthInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ExtentServiceAuthInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ExtentServiceAuthInfo::GetName() const
{
    return m_name;
}

void ExtentServiceAuthInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ExtentServiceAuthInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ExtentServiceAuthInfo::GetStatus() const
{
    return m_status;
}

void ExtentServiceAuthInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ExtentServiceAuthInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ExtentServiceAuthInfo::GetOperatorOpenId() const
{
    return m_operatorOpenId;
}

void ExtentServiceAuthInfo::SetOperatorOpenId(const string& _operatorOpenId)
{
    m_operatorOpenId = _operatorOpenId;
    m_operatorOpenIdHasBeenSet = true;
}

bool ExtentServiceAuthInfo::OperatorOpenIdHasBeenSet() const
{
    return m_operatorOpenIdHasBeenSet;
}

int64_t ExtentServiceAuthInfo::GetOperateOn() const
{
    return m_operateOn;
}

void ExtentServiceAuthInfo::SetOperateOn(const int64_t& _operateOn)
{
    m_operateOn = _operateOn;
    m_operateOnHasBeenSet = true;
}

bool ExtentServiceAuthInfo::OperateOnHasBeenSet() const
{
    return m_operateOnHasBeenSet;
}

