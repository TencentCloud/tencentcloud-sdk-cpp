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

#include <tencentcloud/tcb/v20180608/model/HTTPServiceRoute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

HTTPServiceRoute::HTTPServiceRoute() :
    m_pathHasBeenSet(false),
    m_pathRewriteHasBeenSet(false),
    m_upstreamResourceTypeHasBeenSet(false),
    m_upstreamResourceNameHasBeenSet(false),
    m_enableSafeDomainHasBeenSet(false),
    m_enableAuthHasBeenSet(false),
    m_enablePathTransmissionHasBeenSet(false),
    m_qPSPolicyHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome HTTPServiceRoute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceRoute.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("PathRewrite") && !value["PathRewrite"].IsNull())
    {
        if (!value["PathRewrite"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceRoute.PathRewrite` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pathRewrite.Deserialize(value["PathRewrite"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pathRewriteHasBeenSet = true;
    }

    if (value.HasMember("UpstreamResourceType") && !value["UpstreamResourceType"].IsNull())
    {
        if (!value["UpstreamResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceRoute.UpstreamResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamResourceType = string(value["UpstreamResourceType"].GetString());
        m_upstreamResourceTypeHasBeenSet = true;
    }

    if (value.HasMember("UpstreamResourceName") && !value["UpstreamResourceName"].IsNull())
    {
        if (!value["UpstreamResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceRoute.UpstreamResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamResourceName = string(value["UpstreamResourceName"].GetString());
        m_upstreamResourceNameHasBeenSet = true;
    }

    if (value.HasMember("EnableSafeDomain") && !value["EnableSafeDomain"].IsNull())
    {
        if (!value["EnableSafeDomain"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceRoute.EnableSafeDomain` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableSafeDomain = value["EnableSafeDomain"].GetBool();
        m_enableSafeDomainHasBeenSet = true;
    }

    if (value.HasMember("EnableAuth") && !value["EnableAuth"].IsNull())
    {
        if (!value["EnableAuth"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceRoute.EnableAuth` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableAuth = value["EnableAuth"].GetBool();
        m_enableAuthHasBeenSet = true;
    }

    if (value.HasMember("EnablePathTransmission") && !value["EnablePathTransmission"].IsNull())
    {
        if (!value["EnablePathTransmission"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceRoute.EnablePathTransmission` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enablePathTransmission = value["EnablePathTransmission"].GetBool();
        m_enablePathTransmissionHasBeenSet = true;
    }

    if (value.HasMember("QPSPolicy") && !value["QPSPolicy"].IsNull())
    {
        if (!value["QPSPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceRoute.QPSPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_qPSPolicy.Deserialize(value["QPSPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_qPSPolicyHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceRoute.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceRoute.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HTTPServiceRoute.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HTTPServiceRoute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_pathRewriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathRewrite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pathRewrite.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_upstreamResourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamResourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamResourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamResourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_enableSafeDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSafeDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableSafeDomain, allocator);
    }

    if (m_enableAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableAuth, allocator);
    }

    if (m_enablePathTransmissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnablePathTransmission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enablePathTransmission, allocator);
    }

    if (m_qPSPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QPSPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_qPSPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string HTTPServiceRoute::GetPath() const
{
    return m_path;
}

void HTTPServiceRoute::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool HTTPServiceRoute::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

HTTPServicePathRewrite HTTPServiceRoute::GetPathRewrite() const
{
    return m_pathRewrite;
}

void HTTPServiceRoute::SetPathRewrite(const HTTPServicePathRewrite& _pathRewrite)
{
    m_pathRewrite = _pathRewrite;
    m_pathRewriteHasBeenSet = true;
}

bool HTTPServiceRoute::PathRewriteHasBeenSet() const
{
    return m_pathRewriteHasBeenSet;
}

string HTTPServiceRoute::GetUpstreamResourceType() const
{
    return m_upstreamResourceType;
}

void HTTPServiceRoute::SetUpstreamResourceType(const string& _upstreamResourceType)
{
    m_upstreamResourceType = _upstreamResourceType;
    m_upstreamResourceTypeHasBeenSet = true;
}

bool HTTPServiceRoute::UpstreamResourceTypeHasBeenSet() const
{
    return m_upstreamResourceTypeHasBeenSet;
}

string HTTPServiceRoute::GetUpstreamResourceName() const
{
    return m_upstreamResourceName;
}

void HTTPServiceRoute::SetUpstreamResourceName(const string& _upstreamResourceName)
{
    m_upstreamResourceName = _upstreamResourceName;
    m_upstreamResourceNameHasBeenSet = true;
}

bool HTTPServiceRoute::UpstreamResourceNameHasBeenSet() const
{
    return m_upstreamResourceNameHasBeenSet;
}

bool HTTPServiceRoute::GetEnableSafeDomain() const
{
    return m_enableSafeDomain;
}

void HTTPServiceRoute::SetEnableSafeDomain(const bool& _enableSafeDomain)
{
    m_enableSafeDomain = _enableSafeDomain;
    m_enableSafeDomainHasBeenSet = true;
}

bool HTTPServiceRoute::EnableSafeDomainHasBeenSet() const
{
    return m_enableSafeDomainHasBeenSet;
}

bool HTTPServiceRoute::GetEnableAuth() const
{
    return m_enableAuth;
}

void HTTPServiceRoute::SetEnableAuth(const bool& _enableAuth)
{
    m_enableAuth = _enableAuth;
    m_enableAuthHasBeenSet = true;
}

bool HTTPServiceRoute::EnableAuthHasBeenSet() const
{
    return m_enableAuthHasBeenSet;
}

bool HTTPServiceRoute::GetEnablePathTransmission() const
{
    return m_enablePathTransmission;
}

void HTTPServiceRoute::SetEnablePathTransmission(const bool& _enablePathTransmission)
{
    m_enablePathTransmission = _enablePathTransmission;
    m_enablePathTransmissionHasBeenSet = true;
}

bool HTTPServiceRoute::EnablePathTransmissionHasBeenSet() const
{
    return m_enablePathTransmissionHasBeenSet;
}

HTTPServiceRouteQPSPolicy HTTPServiceRoute::GetQPSPolicy() const
{
    return m_qPSPolicy;
}

void HTTPServiceRoute::SetQPSPolicy(const HTTPServiceRouteQPSPolicy& _qPSPolicy)
{
    m_qPSPolicy = _qPSPolicy;
    m_qPSPolicyHasBeenSet = true;
}

bool HTTPServiceRoute::QPSPolicyHasBeenSet() const
{
    return m_qPSPolicyHasBeenSet;
}

bool HTTPServiceRoute::GetEnable() const
{
    return m_enable;
}

void HTTPServiceRoute::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool HTTPServiceRoute::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string HTTPServiceRoute::GetCreateTime() const
{
    return m_createTime;
}

void HTTPServiceRoute::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool HTTPServiceRoute::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string HTTPServiceRoute::GetUpdateTime() const
{
    return m_updateTime;
}

void HTTPServiceRoute::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool HTTPServiceRoute::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

