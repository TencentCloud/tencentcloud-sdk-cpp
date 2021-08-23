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

#include <tencentcloud/apigateway/v20180808/model/AvailableApiInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

AvailableApiInfo::AvailableApiInfo() :
    m_apiIdHasBeenSet(false),
    m_apiNameHasBeenSet(false),
    m_apiTypeHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_attachedOtherPluginHasBeenSet(false),
    m_isAttachedHasBeenSet(false)
{
}

CoreInternalOutcome AvailableApiInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApiId") && !value["ApiId"].IsNull())
    {
        if (!value["ApiId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableApiInfo.ApiId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiId = string(value["ApiId"].GetString());
        m_apiIdHasBeenSet = true;
    }

    if (value.HasMember("ApiName") && !value["ApiName"].IsNull())
    {
        if (!value["ApiName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableApiInfo.ApiName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiName = string(value["ApiName"].GetString());
        m_apiNameHasBeenSet = true;
    }

    if (value.HasMember("ApiType") && !value["ApiType"].IsNull())
    {
        if (!value["ApiType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableApiInfo.ApiType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiType = string(value["ApiType"].GetString());
        m_apiTypeHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableApiInfo.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableApiInfo.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("AttachedOtherPlugin") && !value["AttachedOtherPlugin"].IsNull())
    {
        if (!value["AttachedOtherPlugin"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableApiInfo.AttachedOtherPlugin` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_attachedOtherPlugin = value["AttachedOtherPlugin"].GetBool();
        m_attachedOtherPluginHasBeenSet = true;
    }

    if (value.HasMember("IsAttached") && !value["IsAttached"].IsNull())
    {
        if (!value["IsAttached"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableApiInfo.IsAttached` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAttached = value["IsAttached"].GetBool();
        m_isAttachedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AvailableApiInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_apiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiName.c_str(), allocator).Move(), allocator);
    }

    if (m_apiTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiType.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_attachedOtherPluginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachedOtherPlugin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attachedOtherPlugin, allocator);
    }

    if (m_isAttachedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAttached";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAttached, allocator);
    }

}


string AvailableApiInfo::GetApiId() const
{
    return m_apiId;
}

void AvailableApiInfo::SetApiId(const string& _apiId)
{
    m_apiId = _apiId;
    m_apiIdHasBeenSet = true;
}

bool AvailableApiInfo::ApiIdHasBeenSet() const
{
    return m_apiIdHasBeenSet;
}

string AvailableApiInfo::GetApiName() const
{
    return m_apiName;
}

void AvailableApiInfo::SetApiName(const string& _apiName)
{
    m_apiName = _apiName;
    m_apiNameHasBeenSet = true;
}

bool AvailableApiInfo::ApiNameHasBeenSet() const
{
    return m_apiNameHasBeenSet;
}

string AvailableApiInfo::GetApiType() const
{
    return m_apiType;
}

void AvailableApiInfo::SetApiType(const string& _apiType)
{
    m_apiType = _apiType;
    m_apiTypeHasBeenSet = true;
}

bool AvailableApiInfo::ApiTypeHasBeenSet() const
{
    return m_apiTypeHasBeenSet;
}

string AvailableApiInfo::GetPath() const
{
    return m_path;
}

void AvailableApiInfo::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool AvailableApiInfo::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string AvailableApiInfo::GetMethod() const
{
    return m_method;
}

void AvailableApiInfo::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool AvailableApiInfo::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

bool AvailableApiInfo::GetAttachedOtherPlugin() const
{
    return m_attachedOtherPlugin;
}

void AvailableApiInfo::SetAttachedOtherPlugin(const bool& _attachedOtherPlugin)
{
    m_attachedOtherPlugin = _attachedOtherPlugin;
    m_attachedOtherPluginHasBeenSet = true;
}

bool AvailableApiInfo::AttachedOtherPluginHasBeenSet() const
{
    return m_attachedOtherPluginHasBeenSet;
}

bool AvailableApiInfo::GetIsAttached() const
{
    return m_isAttached;
}

void AvailableApiInfo::SetIsAttached(const bool& _isAttached)
{
    m_isAttached = _isAttached;
    m_isAttachedHasBeenSet = true;
}

bool AvailableApiInfo::IsAttachedHasBeenSet() const
{
    return m_isAttachedHasBeenSet;
}

