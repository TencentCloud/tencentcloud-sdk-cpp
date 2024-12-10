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

#include <tencentcloud/tse/v20201207/model/NativeGatewayServiceSourceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

NativeGatewayServiceSourceItem::NativeGatewayServiceSourceItem() :
    m_gatewayIDHasBeenSet(false),
    m_sourceIDHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceInfoHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome NativeGatewayServiceSourceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GatewayID") && !value["GatewayID"].IsNull())
    {
        if (!value["GatewayID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeGatewayServiceSourceItem.GatewayID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayID = string(value["GatewayID"].GetString());
        m_gatewayIDHasBeenSet = true;
    }

    if (value.HasMember("SourceID") && !value["SourceID"].IsNull())
    {
        if (!value["SourceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeGatewayServiceSourceItem.SourceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceID = string(value["SourceID"].GetString());
        m_sourceIDHasBeenSet = true;
    }

    if (value.HasMember("SourceName") && !value["SourceName"].IsNull())
    {
        if (!value["SourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeGatewayServiceSourceItem.SourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceName = string(value["SourceName"].GetString());
        m_sourceNameHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeGatewayServiceSourceItem.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceInfo") && !value["SourceInfo"].IsNull())
    {
        if (!value["SourceInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NativeGatewayServiceSourceItem.SourceInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sourceInfo.Deserialize(value["SourceInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sourceInfoHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeGatewayServiceSourceItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NativeGatewayServiceSourceItem.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NativeGatewayServiceSourceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gatewayIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayID.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceID.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

}


string NativeGatewayServiceSourceItem::GetGatewayID() const
{
    return m_gatewayID;
}

void NativeGatewayServiceSourceItem::SetGatewayID(const string& _gatewayID)
{
    m_gatewayID = _gatewayID;
    m_gatewayIDHasBeenSet = true;
}

bool NativeGatewayServiceSourceItem::GatewayIDHasBeenSet() const
{
    return m_gatewayIDHasBeenSet;
}

string NativeGatewayServiceSourceItem::GetSourceID() const
{
    return m_sourceID;
}

void NativeGatewayServiceSourceItem::SetSourceID(const string& _sourceID)
{
    m_sourceID = _sourceID;
    m_sourceIDHasBeenSet = true;
}

bool NativeGatewayServiceSourceItem::SourceIDHasBeenSet() const
{
    return m_sourceIDHasBeenSet;
}

string NativeGatewayServiceSourceItem::GetSourceName() const
{
    return m_sourceName;
}

void NativeGatewayServiceSourceItem::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool NativeGatewayServiceSourceItem::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

string NativeGatewayServiceSourceItem::GetSourceType() const
{
    return m_sourceType;
}

void NativeGatewayServiceSourceItem::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool NativeGatewayServiceSourceItem::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

SourceInfo NativeGatewayServiceSourceItem::GetSourceInfo() const
{
    return m_sourceInfo;
}

void NativeGatewayServiceSourceItem::SetSourceInfo(const SourceInfo& _sourceInfo)
{
    m_sourceInfo = _sourceInfo;
    m_sourceInfoHasBeenSet = true;
}

bool NativeGatewayServiceSourceItem::SourceInfoHasBeenSet() const
{
    return m_sourceInfoHasBeenSet;
}

string NativeGatewayServiceSourceItem::GetCreateTime() const
{
    return m_createTime;
}

void NativeGatewayServiceSourceItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool NativeGatewayServiceSourceItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string NativeGatewayServiceSourceItem::GetModifyTime() const
{
    return m_modifyTime;
}

void NativeGatewayServiceSourceItem::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool NativeGatewayServiceSourceItem::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

