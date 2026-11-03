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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILPOLICYBINDING_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILPOLICYBINDING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 自定义安全护栏到 Kong Route 的运行态投影
                */
                class CustomGuardrailPolicyBinding : public AbstractModel
                {
                public:
                    CustomGuardrailPolicyBinding();
                    ~CustomGuardrailPolicyBinding() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>业务资源类型</p>
                     * @return ResourceType <p>业务资源类型</p>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>业务资源类型</p>
                     * @param _resourceType <p>业务资源类型</p>
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>业务资源 ID</p>
                     * @return ResourceId <p>业务资源 ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>业务资源 ID</p>
                     * @param _resourceId <p>业务资源 ID</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>业务资源名称</p>
                     * @return ResourceName <p>业务资源名称</p>
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置<p>业务资源名称</p>
                     * @param _resourceName <p>业务资源名称</p>
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取<p>资源访问路径</p>
                     * @return Path <p>资源访问路径</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>资源访问路径</p>
                     * @param _path <p>资源访问路径</p>
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
                     * 获取<p>数据面解析协议</p>
                     * @return Protocol <p>数据面解析协议</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>数据面解析协议</p>
                     * @param _protocol <p>数据面解析协议</p>
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取<p>底层 Kong Route ID</p>
                     * @return RouteId <p>底层 Kong Route ID</p>
                     * 
                     */
                    std::string GetRouteId() const;

                    /**
                     * 设置<p>底层 Kong Route ID</p>
                     * @param _routeId <p>底层 Kong Route ID</p>
                     * 
                     */
                    void SetRouteId(const std::string& _routeId);

                    /**
                     * 判断参数 RouteId 是否已赋值
                     * @return RouteId 是否已赋值
                     * 
                     */
                    bool RouteIdHasBeenSet() const;

                    /**
                     * 获取<p>绑定 Route 上的 cngw-ai-custom-guardrail 插件实例 ID；未投影、禁用或同步失败时可能不存在。</p>
                     * @return PluginId <p>绑定 Route 上的 cngw-ai-custom-guardrail 插件实例 ID；未投影、禁用或同步失败时可能不存在。</p>
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置<p>绑定 Route 上的 cngw-ai-custom-guardrail 插件实例 ID；未投影、禁用或同步失败时可能不存在。</p>
                     * @param _pluginId <p>绑定 Route 上的 cngw-ai-custom-guardrail 插件实例 ID；未投影、禁用或同步失败时可能不存在。</p>
                     * 
                     */
                    void SetPluginId(const std::string& _pluginId);

                    /**
                     * 判断参数 PluginId 是否已赋值
                     * @return PluginId 是否已赋值
                     * 
                     */
                    bool PluginIdHasBeenSet() const;

                    /**
                     * 获取<p>同步状态：pending 待同步，synced 已完成本次配置同步，partial 部分失败，failed 失败。需结合 FailedResources/SyncError；synced 不等于已完成所有数据面实例的业务端到端验证。</p>
                     * @return SyncStatus <p>同步状态：pending 待同步，synced 已完成本次配置同步，partial 部分失败，failed 失败。需结合 FailedResources/SyncError；synced 不等于已完成所有数据面实例的业务端到端验证。</p>
                     * 
                     */
                    std::string GetSyncStatus() const;

                    /**
                     * 设置<p>同步状态：pending 待同步，synced 已完成本次配置同步，partial 部分失败，failed 失败。需结合 FailedResources/SyncError；synced 不等于已完成所有数据面实例的业务端到端验证。</p>
                     * @param _syncStatus <p>同步状态：pending 待同步，synced 已完成本次配置同步，partial 部分失败，failed 失败。需结合 FailedResources/SyncError；synced 不等于已完成所有数据面实例的业务端到端验证。</p>
                     * 
                     */
                    void SetSyncStatus(const std::string& _syncStatus);

                    /**
                     * 判断参数 SyncStatus 是否已赋值
                     * @return SyncStatus 是否已赋值
                     * 
                     */
                    bool SyncStatusHasBeenSet() const;

                    /**
                     * 获取<p>最近一次同步错误摘要</p>
                     * @return SyncError <p>最近一次同步错误摘要</p>
                     * 
                     */
                    std::string GetSyncError() const;

                    /**
                     * 设置<p>最近一次同步错误摘要</p>
                     * @param _syncError <p>最近一次同步错误摘要</p>
                     * 
                     */
                    void SetSyncError(const std::string& _syncError);

                    /**
                     * 判断参数 SyncError 是否已赋值
                     * @return SyncError 是否已赋值
                     * 
                     */
                    bool SyncErrorHasBeenSet() const;

                private:

                    /**
                     * <p>业务资源类型</p>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>业务资源 ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>业务资源名称</p>
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * <p>资源访问路径</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>数据面解析协议</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>底层 Kong Route ID</p>
                     */
                    std::string m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * <p>绑定 Route 上的 cngw-ai-custom-guardrail 插件实例 ID；未投影、禁用或同步失败时可能不存在。</p>
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * <p>同步状态：pending 待同步，synced 已完成本次配置同步，partial 部分失败，failed 失败。需结合 FailedResources/SyncError；synced 不等于已完成所有数据面实例的业务端到端验证。</p>
                     */
                    std::string m_syncStatus;
                    bool m_syncStatusHasBeenSet;

                    /**
                     * <p>最近一次同步错误摘要</p>
                     */
                    std::string m_syncError;
                    bool m_syncErrorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILPOLICYBINDING_H_
