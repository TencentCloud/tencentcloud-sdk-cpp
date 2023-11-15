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

#include <tencentcloud/weilingwith/v20230427/model/ActionObj.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

ActionObj::ActionObj() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_descHasBeenSet(false),
    m_msgTypeHasBeenSet(false),
    m_msgContentHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_sinkConfigHasBeenSet(false),
    m_applyDeviceHasBeenSet(false)
{
}

CoreInternalOutcome ActionObj::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ActionObj.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionObj.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionObj.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionObj.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("MsgType") && !value["MsgType"].IsNull())
    {
        if (!value["MsgType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionObj.MsgType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgType = string(value["MsgType"].GetString());
        m_msgTypeHasBeenSet = true;
    }

    if (value.HasMember("MsgContent") && !value["MsgContent"].IsNull())
    {
        if (!value["MsgContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionObj.MsgContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgContent = string(value["MsgContent"].GetString());
        m_msgContentHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionObj.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("SinkConfig") && !value["SinkConfig"].IsNull())
    {
        if (!value["SinkConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionObj.SinkConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sinkConfig = string(value["SinkConfig"].GetString());
        m_sinkConfigHasBeenSet = true;
    }

    if (value.HasMember("ApplyDevice") && !value["ApplyDevice"].IsNull())
    {
        if (!value["ApplyDevice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionObj.ApplyDevice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyDevice = string(value["ApplyDevice"].GetString());
        m_applyDeviceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ActionObj::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_msgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgType.c_str(), allocator).Move(), allocator);
    }

    if (m_msgContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgContent.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sinkConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SinkConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sinkConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_applyDeviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyDevice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyDevice.c_str(), allocator).Move(), allocator);
    }

}


int64_t ActionObj::GetId() const
{
    return m_id;
}

void ActionObj::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ActionObj::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ActionObj::GetName() const
{
    return m_name;
}

void ActionObj::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ActionObj::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ActionObj::GetType() const
{
    return m_type;
}

void ActionObj::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ActionObj::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ActionObj::GetDesc() const
{
    return m_desc;
}

void ActionObj::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool ActionObj::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string ActionObj::GetMsgType() const
{
    return m_msgType;
}

void ActionObj::SetMsgType(const string& _msgType)
{
    m_msgType = _msgType;
    m_msgTypeHasBeenSet = true;
}

bool ActionObj::MsgTypeHasBeenSet() const
{
    return m_msgTypeHasBeenSet;
}

string ActionObj::GetMsgContent() const
{
    return m_msgContent;
}

void ActionObj::SetMsgContent(const string& _msgContent)
{
    m_msgContent = _msgContent;
    m_msgContentHasBeenSet = true;
}

bool ActionObj::MsgContentHasBeenSet() const
{
    return m_msgContentHasBeenSet;
}

string ActionObj::GetCreateTime() const
{
    return m_createTime;
}

void ActionObj::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ActionObj::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ActionObj::GetSinkConfig() const
{
    return m_sinkConfig;
}

void ActionObj::SetSinkConfig(const string& _sinkConfig)
{
    m_sinkConfig = _sinkConfig;
    m_sinkConfigHasBeenSet = true;
}

bool ActionObj::SinkConfigHasBeenSet() const
{
    return m_sinkConfigHasBeenSet;
}

string ActionObj::GetApplyDevice() const
{
    return m_applyDevice;
}

void ActionObj::SetApplyDevice(const string& _applyDevice)
{
    m_applyDevice = _applyDevice;
    m_applyDeviceHasBeenSet = true;
}

bool ActionObj::ApplyDeviceHasBeenSet() const
{
    return m_applyDeviceHasBeenSet;
}

