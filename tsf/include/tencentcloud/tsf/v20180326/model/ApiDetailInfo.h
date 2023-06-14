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
                     * 获取API ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiId API ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置API ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiId API ID
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
                     * 获取命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceId 命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaceId 命名空间ID
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
                     * 获取命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceName 命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaceName 命名空间名称
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
                     * 获取服务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MicroserviceId 服务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMicroserviceId() const;

                    /**
                     * 设置服务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _microserviceId 服务ID
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
                     * 获取服务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MicroserviceName 服务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMicroserviceName() const;

                    /**
                     * 设置服务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _microserviceName 服务名称
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
                     * 获取API 请求路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path API 请求路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置API 请求路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _path API 请求路径
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
                     * 获取Api 映射路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PathMapping Api 映射路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPathMapping() const;

                    /**
                     * 设置Api 映射路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pathMapping Api 映射路径
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
                     * 获取请求方法
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Method 请求方法
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置请求方法
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _method 请求方法
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
                     * 获取所属分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId 所属分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置所属分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupId 所属分组ID
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
                     * 获取是否禁用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsableStatus 是否禁用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUsableStatus() const;

                    /**
                     * 设置是否禁用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usableStatus 是否禁用
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
                     * 获取发布状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReleaseStatus 发布状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReleaseStatus() const;

                    /**
                     * 设置发布状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _releaseStatus 发布状态
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
                     * 获取开启限流
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RateLimitStatus 开启限流
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRateLimitStatus() const;

                    /**
                     * 设置开启限流
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rateLimitStatus 开启限流
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
                     * 获取是否开启mock
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MockStatus 是否开启mock
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMockStatus() const;

                    /**
                     * 设置是否开启mock
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mockStatus 是否开启mock
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
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime 创建时间
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
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedTime 更新时间
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
                     * 获取发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReleasedTime 发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReleasedTime() const;

                    /**
                     * 设置发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _releasedTime 发布时间
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
                     * 获取所属分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName 所属分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置所属分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupName 所属分组名称
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
                     * 获取API 超时，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timeout API 超时，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置API 超时，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeout API 超时，单位毫秒
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
                     * 获取Api所在服务host
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Host Api所在服务host
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Api所在服务host
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _host Api所在服务host
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
                     * 获取API类型。 ms ： 微服务API； external :外部服务Api
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiType API类型。 ms ： 微服务API； external :外部服务Api
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiType() const;

                    /**
                     * 设置API类型。 ms ： 微服务API； external :外部服务Api
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiType API类型。 ms ： 微服务API； external :外部服务Api
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
                     * 获取Api描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description Api描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Api描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description Api描述信息
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
                     * 获取API路径匹配类型。normal：普通API；wildcard：通配API。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiMatchType API路径匹配类型。normal：普通API；wildcard：通配API。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiMatchType() const;

                    /**
                     * 设置API路径匹配类型。normal：普通API；wildcard：通配API。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiMatchType API路径匹配类型。normal：普通API；wildcard：通配API。
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
                     * 获取RPC 额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RpcExt RPC 额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRpcExt() const;

                    /**
                     * 设置RPC 额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rpcExt RPC 额外信息
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
                     * 获取部署组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GatewayDeployGroupId 部署组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGatewayDeployGroupId() const;

                    /**
                     * 设置部署组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gatewayDeployGroupId 部署组id
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
                     * 获取md5
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Md5 md5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置md5
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _md5 md5
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
                     * 获取RPC 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RpcType RPC 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRpcType() const;

                    /**
                     * 设置RPC 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rpcType RPC 类型
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

                private:

                    /**
                     * API ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * 命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 命名空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 服务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_microserviceId;
                    bool m_microserviceIdHasBeenSet;

                    /**
                     * 服务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_microserviceName;
                    bool m_microserviceNameHasBeenSet;

                    /**
                     * API 请求路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Api 映射路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pathMapping;
                    bool m_pathMappingHasBeenSet;

                    /**
                     * 请求方法
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 所属分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 是否禁用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_usableStatus;
                    bool m_usableStatusHasBeenSet;

                    /**
                     * 发布状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_releaseStatus;
                    bool m_releaseStatusHasBeenSet;

                    /**
                     * 开启限流
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rateLimitStatus;
                    bool m_rateLimitStatusHasBeenSet;

                    /**
                     * 是否开启mock
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mockStatus;
                    bool m_mockStatusHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * 发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_releasedTime;
                    bool m_releasedTimeHasBeenSet;

                    /**
                     * 所属分组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * API 超时，单位毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Api所在服务host
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * API类型。 ms ： 微服务API； external :外部服务Api
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiType;
                    bool m_apiTypeHasBeenSet;

                    /**
                     * Api描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * API路径匹配类型。normal：普通API；wildcard：通配API。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiMatchType;
                    bool m_apiMatchTypeHasBeenSet;

                    /**
                     * RPC 额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rpcExt;
                    bool m_rpcExtHasBeenSet;

                    /**
                     * 部署组id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gatewayDeployGroupId;
                    bool m_gatewayDeployGroupIdHasBeenSet;

                    /**
                     * md5
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * RPC 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rpcType;
                    bool m_rpcTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_APIDETAILINFO_H_
