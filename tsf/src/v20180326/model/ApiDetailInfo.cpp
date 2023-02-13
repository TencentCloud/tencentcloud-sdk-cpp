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

#include <tencentcloud/tsf/v20180326/model/ApiDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ApiDetailInfo::ApiDetailInfo() :
    m_apiIdHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_microserviceIdHasBeenSet(false),
    m_microserviceNameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_pathMappingHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_usableStatusHasBeenSet(false),
    m_releaseStatusHasBeenSet(false),
    m_rateLimitStatusHasBeenSet(false),
    m_mockStatusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_releasedTimeHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_apiTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_apiMatchTypeHasBeenSet(false),
    m_rpcExtHasBeenSet(false),
    m_gatewayDeployGroupIdHasBeenSet(false),
    m_md5HasBeenSet(false),
    m_rpcTypeHasBeenSet(false)
{
}

CoreInternalOutcome ApiDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApiId") && !value["ApiId"].IsNull())
    {
        if (!value["ApiId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailInfo.ApiId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiId = string(value["ApiId"].GetString());
        m_apiIdHasBeenSet = true;
    }

    if (value.HasMember("NamespaceId") && !value["NamespaceId"].IsNull())
    {
        if (!value["NamespaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailInfo.NamespaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceId = string(value["NamespaceId"].GetString());
        m_namespaceIdHasBeenSet = true;
    }

    if (value.HasMember("NamespaceName") && !value["NamespaceName"].IsNull())
    {
        if (!value["NamespaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailInfo.NamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceName = string(value["NamespaceName"].GetString());
        m_namespaceNameHasBeenSet = true;
    }

    if (value.HasMember("MicroserviceId") && !value["MicroserviceId"].IsNull())
    {
        if (!value["MicroserviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailInfo.MicroserviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_microserviceId = string(value["MicroserviceId"].GetString());
        m_microserviceIdHasBeenSet = true;
    }

    if (value.HasMember("MicroserviceName") && !value["MicroserviceName"].IsNull())
    {
        if (!value["MicroserviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailInfo.MicroserviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_microserviceName = string(value["MicroserviceName"].GetString());
        m_microserviceNameHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailInfo.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("PathMapping") && !value["PathMapping"].IsNull())
    {
        if (!value["PathMapping"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailInfo.PathMapping` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pathMapping = string(value["PathMapping"].GetString());
        m_pathMappingHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailInfo.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("UsableStatus") && !value["UsableStatus"].IsNull())
    {
        if (!value["UsableStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailInfo.UsableStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usableStatus = string(value["UsableStatus"].GetString());
        m_usableStatusHasBeenSet = true;
    }

    if (value.HasMember("ReleaseStatus") && !value["ReleaseStatus"].IsNull())
    {
        if (!value["ReleaseStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailInfo.ReleaseStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseStatus = string(value["ReleaseStatus"].GetString());
        m_releaseStatusHasBeenSet = true;
    }

    if (value.HasMember("RateLimitStatus") && !value["RateLimitStatus"].IsNull())
    {
        if (!value["RateLimitStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailInfo.RateLimitStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rateLimitStatus = string(value["RateLimitStatus"].GetString());
        m_rateLimitStatusHasBeenSet = true;
    }

    if (value.HasMember("MockStatus") && !value["MockStatus"].IsNull())
    {
        if (!value["MockStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailInfo.MockStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mockStatus = string(value["MockStatus"].GetString());
        m_mockStatusHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailInfo.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }

    if (value.HasMember("ReleasedTime") && !value["ReleasedTime"].IsNull())
    {
        if (!value["ReleasedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailInfo.ReleasedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releasedTime = string(value["ReleasedTime"].GetString());
        m_releasedTimeHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailInfo.Timeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetInt64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailInfo.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("ApiType") && !value["ApiType"].IsNull())
    {
        if (!value["ApiType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailInfo.ApiType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiType = string(value["ApiType"].GetString());
        m_apiTypeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ApiMatchType") && !value["ApiMatchType"].IsNull())
    {
        if (!value["ApiMatchType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailInfo.ApiMatchType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiMatchType = string(value["ApiMatchType"].GetString());
        m_apiMatchTypeHasBeenSet = true;
    }

    if (value.HasMember("RpcExt") && !value["RpcExt"].IsNull())
    {
        if (!value["RpcExt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailInfo.RpcExt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rpcExt = string(value["RpcExt"].GetString());
        m_rpcExtHasBeenSet = true;
    }

    if (value.HasMember("GatewayDeployGroupId") && !value["GatewayDeployGroupId"].IsNull())
    {
        if (!value["GatewayDeployGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailInfo.GatewayDeployGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayDeployGroupId = string(value["GatewayDeployGroupId"].GetString());
        m_gatewayDeployGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Md5") && !value["Md5"].IsNull())
    {
        if (!value["Md5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailInfo.Md5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_md5 = string(value["Md5"].GetString());
        m_md5HasBeenSet = true;
    }

    if (value.HasMember("RpcType") && !value["RpcType"].IsNull())
    {
        if (!value["RpcType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDetailInfo.RpcType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rpcType = string(value["RpcType"].GetString());
        m_rpcTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_apiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_microserviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MicroserviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_microserviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_microserviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MicroserviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_microserviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_pathMappingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathMapping";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pathMapping.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_usableStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsableStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usableStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_rateLimitStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateLimitStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rateLimitStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_mockStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MockStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mockStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_releasedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleasedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releasedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_apiTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiType.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_apiMatchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiMatchType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiMatchType.c_str(), allocator).Move(), allocator);
    }

    if (m_rpcExtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RpcExt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rpcExt.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayDeployGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayDeployGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayDeployGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_md5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_md5.c_str(), allocator).Move(), allocator);
    }

    if (m_rpcTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RpcType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rpcType.c_str(), allocator).Move(), allocator);
    }

}


string ApiDetailInfo::GetApiId() const
{
    return m_apiId;
}

void ApiDetailInfo::SetApiId(const string& _apiId)
{
    m_apiId = _apiId;
    m_apiIdHasBeenSet = true;
}

bool ApiDetailInfo::ApiIdHasBeenSet() const
{
    return m_apiIdHasBeenSet;
}

string ApiDetailInfo::GetNamespaceId() const
{
    return m_namespaceId;
}

void ApiDetailInfo::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool ApiDetailInfo::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string ApiDetailInfo::GetNamespaceName() const
{
    return m_namespaceName;
}

void ApiDetailInfo::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool ApiDetailInfo::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

string ApiDetailInfo::GetMicroserviceId() const
{
    return m_microserviceId;
}

void ApiDetailInfo::SetMicroserviceId(const string& _microserviceId)
{
    m_microserviceId = _microserviceId;
    m_microserviceIdHasBeenSet = true;
}

bool ApiDetailInfo::MicroserviceIdHasBeenSet() const
{
    return m_microserviceIdHasBeenSet;
}

string ApiDetailInfo::GetMicroserviceName() const
{
    return m_microserviceName;
}

void ApiDetailInfo::SetMicroserviceName(const string& _microserviceName)
{
    m_microserviceName = _microserviceName;
    m_microserviceNameHasBeenSet = true;
}

bool ApiDetailInfo::MicroserviceNameHasBeenSet() const
{
    return m_microserviceNameHasBeenSet;
}

string ApiDetailInfo::GetPath() const
{
    return m_path;
}

void ApiDetailInfo::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool ApiDetailInfo::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string ApiDetailInfo::GetPathMapping() const
{
    return m_pathMapping;
}

void ApiDetailInfo::SetPathMapping(const string& _pathMapping)
{
    m_pathMapping = _pathMapping;
    m_pathMappingHasBeenSet = true;
}

bool ApiDetailInfo::PathMappingHasBeenSet() const
{
    return m_pathMappingHasBeenSet;
}

string ApiDetailInfo::GetMethod() const
{
    return m_method;
}

void ApiDetailInfo::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool ApiDetailInfo::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string ApiDetailInfo::GetGroupId() const
{
    return m_groupId;
}

void ApiDetailInfo::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ApiDetailInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ApiDetailInfo::GetUsableStatus() const
{
    return m_usableStatus;
}

void ApiDetailInfo::SetUsableStatus(const string& _usableStatus)
{
    m_usableStatus = _usableStatus;
    m_usableStatusHasBeenSet = true;
}

bool ApiDetailInfo::UsableStatusHasBeenSet() const
{
    return m_usableStatusHasBeenSet;
}

string ApiDetailInfo::GetReleaseStatus() const
{
    return m_releaseStatus;
}

void ApiDetailInfo::SetReleaseStatus(const string& _releaseStatus)
{
    m_releaseStatus = _releaseStatus;
    m_releaseStatusHasBeenSet = true;
}

bool ApiDetailInfo::ReleaseStatusHasBeenSet() const
{
    return m_releaseStatusHasBeenSet;
}

string ApiDetailInfo::GetRateLimitStatus() const
{
    return m_rateLimitStatus;
}

void ApiDetailInfo::SetRateLimitStatus(const string& _rateLimitStatus)
{
    m_rateLimitStatus = _rateLimitStatus;
    m_rateLimitStatusHasBeenSet = true;
}

bool ApiDetailInfo::RateLimitStatusHasBeenSet() const
{
    return m_rateLimitStatusHasBeenSet;
}

string ApiDetailInfo::GetMockStatus() const
{
    return m_mockStatus;
}

void ApiDetailInfo::SetMockStatus(const string& _mockStatus)
{
    m_mockStatus = _mockStatus;
    m_mockStatusHasBeenSet = true;
}

bool ApiDetailInfo::MockStatusHasBeenSet() const
{
    return m_mockStatusHasBeenSet;
}

string ApiDetailInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void ApiDetailInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool ApiDetailInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string ApiDetailInfo::GetUpdatedTime() const
{
    return m_updatedTime;
}

void ApiDetailInfo::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool ApiDetailInfo::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

string ApiDetailInfo::GetReleasedTime() const
{
    return m_releasedTime;
}

void ApiDetailInfo::SetReleasedTime(const string& _releasedTime)
{
    m_releasedTime = _releasedTime;
    m_releasedTimeHasBeenSet = true;
}

bool ApiDetailInfo::ReleasedTimeHasBeenSet() const
{
    return m_releasedTimeHasBeenSet;
}

string ApiDetailInfo::GetGroupName() const
{
    return m_groupName;
}

void ApiDetailInfo::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool ApiDetailInfo::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

int64_t ApiDetailInfo::GetTimeout() const
{
    return m_timeout;
}

void ApiDetailInfo::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool ApiDetailInfo::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string ApiDetailInfo::GetHost() const
{
    return m_host;
}

void ApiDetailInfo::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool ApiDetailInfo::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string ApiDetailInfo::GetApiType() const
{
    return m_apiType;
}

void ApiDetailInfo::SetApiType(const string& _apiType)
{
    m_apiType = _apiType;
    m_apiTypeHasBeenSet = true;
}

bool ApiDetailInfo::ApiTypeHasBeenSet() const
{
    return m_apiTypeHasBeenSet;
}

string ApiDetailInfo::GetDescription() const
{
    return m_description;
}

void ApiDetailInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ApiDetailInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ApiDetailInfo::GetApiMatchType() const
{
    return m_apiMatchType;
}

void ApiDetailInfo::SetApiMatchType(const string& _apiMatchType)
{
    m_apiMatchType = _apiMatchType;
    m_apiMatchTypeHasBeenSet = true;
}

bool ApiDetailInfo::ApiMatchTypeHasBeenSet() const
{
    return m_apiMatchTypeHasBeenSet;
}

string ApiDetailInfo::GetRpcExt() const
{
    return m_rpcExt;
}

void ApiDetailInfo::SetRpcExt(const string& _rpcExt)
{
    m_rpcExt = _rpcExt;
    m_rpcExtHasBeenSet = true;
}

bool ApiDetailInfo::RpcExtHasBeenSet() const
{
    return m_rpcExtHasBeenSet;
}

string ApiDetailInfo::GetGatewayDeployGroupId() const
{
    return m_gatewayDeployGroupId;
}

void ApiDetailInfo::SetGatewayDeployGroupId(const string& _gatewayDeployGroupId)
{
    m_gatewayDeployGroupId = _gatewayDeployGroupId;
    m_gatewayDeployGroupIdHasBeenSet = true;
}

bool ApiDetailInfo::GatewayDeployGroupIdHasBeenSet() const
{
    return m_gatewayDeployGroupIdHasBeenSet;
}

string ApiDetailInfo::GetMd5() const
{
    return m_md5;
}

void ApiDetailInfo::SetMd5(const string& _md5)
{
    m_md5 = _md5;
    m_md5HasBeenSet = true;
}

bool ApiDetailInfo::Md5HasBeenSet() const
{
    return m_md5HasBeenSet;
}

string ApiDetailInfo::GetRpcType() const
{
    return m_rpcType;
}

void ApiDetailInfo::SetRpcType(const string& _rpcType)
{
    m_rpcType = _rpcType;
    m_rpcTypeHasBeenSet = true;
}

bool ApiDetailInfo::RpcTypeHasBeenSet() const
{
    return m_rpcTypeHasBeenSet;
}

