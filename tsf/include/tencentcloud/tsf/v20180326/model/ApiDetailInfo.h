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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_APIDETAILINFO_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_APIDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * API 明细
                */
                class ApiDetailInfo : public AbstractModel
                {
                public:
                    ApiDetailInfo();
                    ~ApiDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>API ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiId <p>API ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置<p>API ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiId <p>API ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiId(const std::string& _apiId);

                    /**
                     * 判断参数 ApiId 是否已赋值
                     * @return ApiId 是否已赋值
                     * 
                     */
                    bool ApiIdHasBeenSet() const;

                    /**
                     * 获取<p>命名空间ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceId <p>命名空间ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置<p>命名空间ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaceId <p>命名空间ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取<p>命名空间名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceName <p>命名空间名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置<p>命名空间名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaceName <p>命名空间名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取<p>服务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MicroserviceId <p>服务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMicroserviceId() const;

                    /**
                     * 设置<p>服务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _microserviceId <p>服务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMicroserviceId(const std::string& _microserviceId);

                    /**
                     * 判断参数 MicroserviceId 是否已赋值
                     * @return MicroserviceId 是否已赋值
                     * 
                     */
                    bool MicroserviceIdHasBeenSet() const;

                    /**
                     * 获取<p>服务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MicroserviceName <p>服务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMicroserviceName() const;

                    /**
                     * 设置<p>服务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _microserviceName <p>服务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMicroserviceName(const std::string& _microserviceName);

                    /**
                     * 判断参数 MicroserviceName 是否已赋值
                     * @return MicroserviceName 是否已赋值
                     * 
                     */
                    bool MicroserviceNameHasBeenSet() const;

                    /**
                     * 获取<p>API 请求路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path <p>API 请求路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>API 请求路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _path <p>API 请求路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>Api 映射路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PathMapping <p>Api 映射路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPathMapping() const;

                    /**
                     * 设置<p>Api 映射路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pathMapping <p>Api 映射路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPathMapping(const std::string& _pathMapping);

                    /**
                     * 判断参数 PathMapping 是否已赋值
                     * @return PathMapping 是否已赋值
                     * 
                     */
                    bool PathMappingHasBeenSet() const;

                    /**
                     * 获取<p>请求方法</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Method <p>请求方法</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置<p>请求方法</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _method <p>请求方法</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取<p>所属分组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId <p>所属分组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>所属分组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupId <p>所属分组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>是否禁用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsableStatus <p>是否禁用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUsableStatus() const;

                    /**
                     * 设置<p>是否禁用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usableStatus <p>是否禁用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsableStatus(const std::string& _usableStatus);

                    /**
                     * 判断参数 UsableStatus 是否已赋值
                     * @return UsableStatus 是否已赋值
                     * 
                     */
                    bool UsableStatusHasBeenSet() const;

                    /**
                     * 获取<p>发布状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReleaseStatus <p>发布状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReleaseStatus() const;

                    /**
                     * 设置<p>发布状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _releaseStatus <p>发布状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReleaseStatus(const std::string& _releaseStatus);

                    /**
                     * 判断参数 ReleaseStatus 是否已赋值
                     * @return ReleaseStatus 是否已赋值
                     * 
                     */
                    bool ReleaseStatusHasBeenSet() const;

                    /**
                     * 获取<p>开启限流</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RateLimitStatus <p>开启限流</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRateLimitStatus() const;

                    /**
                     * 设置<p>开启限流</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rateLimitStatus <p>开启限流</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRateLimitStatus(const std::string& _rateLimitStatus);

                    /**
                     * 判断参数 RateLimitStatus 是否已赋值
                     * @return RateLimitStatus 是否已赋值
                     * 
                     */
                    bool RateLimitStatusHasBeenSet() const;

                    /**
                     * 获取<p>是否开启mock</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MockStatus <p>是否开启mock</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMockStatus() const;

                    /**
                     * 设置<p>是否开启mock</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mockStatus <p>是否开启mock</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMockStatus(const std::string& _mockStatus);

                    /**
                     * 判断参数 MockStatus 是否已赋值
                     * @return MockStatus 是否已赋值
                     * 
                     */
                    bool MockStatusHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedTime <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedTime <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>发布时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReleasedTime <p>发布时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReleasedTime() const;

                    /**
                     * 设置<p>发布时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _releasedTime <p>发布时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReleasedTime(const std::string& _releasedTime);

                    /**
                     * 判断参数 ReleasedTime 是否已赋值
                     * @return ReleasedTime 是否已赋值
                     * 
                     */
                    bool ReleasedTimeHasBeenSet() const;

                    /**
                     * 获取<p>所属分组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName <p>所属分组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>所属分组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupName <p>所属分组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取<p>API 超时，单位毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timeout <p>API 超时，单位毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置<p>API 超时，单位毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeout <p>API 超时，单位毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>Api所在服务host</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Host <p>Api所在服务host</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>Api所在服务host</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _host <p>Api所在服务host</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取<p>API类型。 ms ： 微服务API； external :外部服务Api</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiType <p>API类型。 ms ： 微服务API； external :外部服务Api</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiType() const;

                    /**
                     * 设置<p>API类型。 ms ： 微服务API； external :外部服务Api</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiType <p>API类型。 ms ： 微服务API； external :外部服务Api</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiType(const std::string& _apiType);

                    /**
                     * 判断参数 ApiType 是否已赋值
                     * @return ApiType 是否已赋值
                     * 
                     */
                    bool ApiTypeHasBeenSet() const;

                    /**
                     * 获取<p>Api描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>Api描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Api描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>Api描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>API路径匹配类型。normal：普通API；wildcard：通配API。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiMatchType <p>API路径匹配类型。normal：普通API；wildcard：通配API。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiMatchType() const;

                    /**
                     * 设置<p>API路径匹配类型。normal：普通API；wildcard：通配API。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiMatchType <p>API路径匹配类型。normal：普通API；wildcard：通配API。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiMatchType(const std::string& _apiMatchType);

                    /**
                     * 判断参数 ApiMatchType 是否已赋值
                     * @return ApiMatchType 是否已赋值
                     * 
                     */
                    bool ApiMatchTypeHasBeenSet() const;

                    /**
                     * 获取<p>RPC 额外信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RpcExt <p>RPC 额外信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRpcExt() const;

                    /**
                     * 设置<p>RPC 额外信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rpcExt <p>RPC 额外信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRpcExt(const std::string& _rpcExt);

                    /**
                     * 判断参数 RpcExt 是否已赋值
                     * @return RpcExt 是否已赋值
                     * 
                     */
                    bool RpcExtHasBeenSet() const;

                    /**
                     * 获取<p>部署组id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GatewayDeployGroupId <p>部署组id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGatewayDeployGroupId() const;

                    /**
                     * 设置<p>部署组id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gatewayDeployGroupId <p>部署组id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGatewayDeployGroupId(const std::string& _gatewayDeployGroupId);

                    /**
                     * 判断参数 GatewayDeployGroupId 是否已赋值
                     * @return GatewayDeployGroupId 是否已赋值
                     * 
                     */
                    bool GatewayDeployGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>md5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Md5 <p>md5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置<p>md5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _md5 <p>md5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取<p>RPC 类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RpcType <p>RPC 类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRpcType() const;

                    /**
                     * 设置<p>RPC 类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rpcType <p>RPC 类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRpcType(const std::string& _rpcType);

                    /**
                     * 判断参数 RpcType 是否已赋值
                     * @return RpcType 是否已赋值
                     * 
                     */
                    bool RpcTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否禁用短路径访问开关</p>
                     * @return PathMappingUnsupported <p>是否禁用短路径访问开关</p>
                     * 
                     */
                    bool GetPathMappingUnsupported() const;

                    /**
                     * 设置<p>是否禁用短路径访问开关</p>
                     * @param _pathMappingUnsupported <p>是否禁用短路径访问开关</p>
                     * 
                     */
                    void SetPathMappingUnsupported(const bool& _pathMappingUnsupported);

                    /**
                     * 判断参数 PathMappingUnsupported 是否已赋值
                     * @return PathMappingUnsupported 是否已赋值
                     * 
                     */
                    bool PathMappingUnsupportedHasBeenSet() const;

                    /**
                     * 获取<p>禁用短路径访问开关原因</p>
                     * @return PathMappingUnsupportedMsg <p>禁用短路径访问开关原因</p>
                     * 
                     */
                    std::string GetPathMappingUnsupportedMsg() const;

                    /**
                     * 设置<p>禁用短路径访问开关原因</p>
                     * @param _pathMappingUnsupportedMsg <p>禁用短路径访问开关原因</p>
                     * 
                     */
                    void SetPathMappingUnsupportedMsg(const std::string& _pathMappingUnsupportedMsg);

                    /**
                     * 判断参数 PathMappingUnsupportedMsg 是否已赋值
                     * @return PathMappingUnsupportedMsg 是否已赋值
                     * 
                     */
                    bool PathMappingUnsupportedMsgHasBeenSet() const;

                private:

                    /**
                     * <p>API ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * <p>命名空间ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * <p>命名空间名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * <p>服务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_microserviceId;
                    bool m_microserviceIdHasBeenSet;

                    /**
                     * <p>服务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_microserviceName;
                    bool m_microserviceNameHasBeenSet;

                    /**
                     * <p>API 请求路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>Api 映射路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pathMapping;
                    bool m_pathMappingHasBeenSet;

                    /**
                     * <p>请求方法</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>所属分组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>是否禁用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_usableStatus;
                    bool m_usableStatusHasBeenSet;

                    /**
                     * <p>发布状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_releaseStatus;
                    bool m_releaseStatusHasBeenSet;

                    /**
                     * <p>开启限流</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rateLimitStatus;
                    bool m_rateLimitStatusHasBeenSet;

                    /**
                     * <p>是否开启mock</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mockStatus;
                    bool m_mockStatusHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * <p>发布时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_releasedTime;
                    bool m_releasedTimeHasBeenSet;

                    /**
                     * <p>所属分组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>API 超时，单位毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>Api所在服务host</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>API类型。 ms ： 微服务API； external :外部服务Api</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiType;
                    bool m_apiTypeHasBeenSet;

                    /**
                     * <p>Api描述信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>API路径匹配类型。normal：普通API；wildcard：通配API。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiMatchType;
                    bool m_apiMatchTypeHasBeenSet;

                    /**
                     * <p>RPC 额外信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rpcExt;
                    bool m_rpcExtHasBeenSet;

                    /**
                     * <p>部署组id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gatewayDeployGroupId;
                    bool m_gatewayDeployGroupIdHasBeenSet;

                    /**
                     * <p>md5</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * <p>RPC 类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rpcType;
                    bool m_rpcTypeHasBeenSet;

                    /**
                     * <p>是否禁用短路径访问开关</p>
                     */
                    bool m_pathMappingUnsupported;
                    bool m_pathMappingUnsupportedHasBeenSet;

                    /**
                     * <p>禁用短路径访问开关原因</p>
                     */
                    std::string m_pathMappingUnsupportedMsg;
                    bool m_pathMappingUnsupportedMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_APIDETAILINFO_H_
