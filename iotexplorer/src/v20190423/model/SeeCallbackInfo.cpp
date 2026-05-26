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

#include <tencentcloud/iotexplorer/v20190423/model/SeeCallbackInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

SeeCallbackInfo::SeeCallbackInfo() :
    m_callbackIdHasBeenSet(false),
    m_callbackTokenHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome SeeCallbackInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CallbackId") && !value["CallbackId"].IsNull())
    {
        if (!value["CallbackId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeCallbackInfo.CallbackId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackId = string(value["CallbackId"].GetString());
        m_callbackIdHasBeenSet = true;
    }

    if (value.HasMember("CallbackToken") && !value["CallbackToken"].IsNull())
    {
        if (!value["CallbackToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeCallbackInfo.CallbackToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackToken = string(value["CallbackToken"].GetString());
        m_callbackTokenHasBeenSet = true;
    }

    if (value.HasMember("CallbackUrl") && !value["CallbackUrl"].IsNull())
    {
        if (!value["CallbackUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeCallbackInfo.CallbackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackUrl = string(value["CallbackUrl"].GetString());
        m_callbackUrlHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeCallbackInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeCallbackInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeCallbackInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SeeCallbackInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_callbackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackId.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackToken.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


string SeeCallbackInfo::GetCallbackId() const
{
    return m_callbackId;
}

void SeeCallbackInfo::SetCallbackId(const string& _callbackId)
{
    m_callbackId = _callbackId;
    m_callbackIdHasBeenSet = true;
}

bool SeeCallbackInfo::CallbackIdHasBeenSet() const
{
    return m_callbackIdHasBeenSet;
}

string SeeCallbackInfo::GetCallbackToken() const
{
    return m_callbackToken;
}

void SeeCallbackInfo::SetCallbackToken(const string& _callbackToken)
{
    m_callbackToken = _callbackToken;
    m_callbackTokenHasBeenSet = true;
}

bool SeeCallbackInfo::CallbackTokenHasBeenSet() const
{
    return m_callbackTokenHasBeenSet;
}

string SeeCallbackInfo::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void SeeCallbackInfo::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool SeeCallbackInfo::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

int64_t SeeCallbackInfo::GetCreateTime() const
{
    return m_createTime;
}

void SeeCallbackInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SeeCallbackInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SeeCallbackInfo::GetType() const
{
    return m_type;
}

void SeeCallbackInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SeeCallbackInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t SeeCallbackInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void SeeCallbackInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool SeeCallbackInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

