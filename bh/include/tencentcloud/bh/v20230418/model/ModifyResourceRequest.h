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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_MODIFYRESOURCEREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_MODIFYRESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ModifyResource请求参数结构体
                */
                class ModifyResourceRequest : public AbstractModel
                {
                public:
                    ModifyResourceRequest();
                    ~ModifyResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>需要开通服务的资源ID</p>
                     * @return ResourceId <p>需要开通服务的资源ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>需要开通服务的资源ID</p>
                     * @param _resourceId <p>需要开通服务的资源ID</p>
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
                     * 获取<p>状态</p>
                     * @return Status <p>状态</p>
                     * @deprecated
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态</p>
                     * @param _status <p>状态</p>
                     * @deprecated
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * @deprecated
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>实例版本</p>
                     * @return ResourceEdition <p>实例版本</p>
                     * 
                     */
                    std::string GetResourceEdition() const;

                    /**
                     * 设置<p>实例版本</p>
                     * @param _resourceEdition <p>实例版本</p>
                     * 
                     */
                    void SetResourceEdition(const std::string& _resourceEdition);

                    /**
                     * 判断参数 ResourceEdition 是否已赋值
                     * @return ResourceEdition 是否已赋值
                     * 
                     */
                    bool ResourceEditionHasBeenSet() const;

                    /**
                     * 获取<p>资源节点数</p>
                     * @return ResourceNode <p>资源节点数</p>
                     * 
                     */
                    int64_t GetResourceNode() const;

                    /**
                     * 设置<p>资源节点数</p>
                     * @param _resourceNode <p>资源节点数</p>
                     * 
                     */
                    void SetResourceNode(const int64_t& _resourceNode);

                    /**
                     * 判断参数 ResourceNode 是否已赋值
                     * @return ResourceNode 是否已赋值
                     * 
                     */
                    bool ResourceNodeHasBeenSet() const;

                    /**
                     * 获取<p>自动续费</p>
                     * @return AutoRenewFlag <p>自动续费</p>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>自动续费</p>
                     * @param _autoRenewFlag <p>自动续费</p>
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>带宽扩展包个数(4M)</p>
                     * @return PackageBandwidth <p>带宽扩展包个数(4M)</p>
                     * 
                     */
                    int64_t GetPackageBandwidth() const;

                    /**
                     * 设置<p>带宽扩展包个数(4M)</p>
                     * @param _packageBandwidth <p>带宽扩展包个数(4M)</p>
                     * 
                     */
                    void SetPackageBandwidth(const int64_t& _packageBandwidth);

                    /**
                     * 判断参数 PackageBandwidth 是否已赋值
                     * @return PackageBandwidth 是否已赋值
                     * 
                     */
                    bool PackageBandwidthHasBeenSet() const;

                    /**
                     * 获取<p>授权点数扩展包个数(50点)</p>
                     * @return PackageNode <p>授权点数扩展包个数(50点)</p>
                     * 
                     */
                    int64_t GetPackageNode() const;

                    /**
                     * 设置<p>授权点数扩展包个数(50点)</p>
                     * @param _packageNode <p>授权点数扩展包个数(50点)</p>
                     * 
                     */
                    void SetPackageNode(const int64_t& _packageNode);

                    /**
                     * 判断参数 PackageNode 是否已赋值
                     * @return PackageNode 是否已赋值
                     * 
                     */
                    bool PackageNodeHasBeenSet() const;

                    /**
                     * 获取<p>日志投递</p>
                     * @return LogDelivery <p>日志投递</p>
                     * 
                     */
                    int64_t GetLogDelivery() const;

                    /**
                     * 设置<p>日志投递</p>
                     * @param _logDelivery <p>日志投递</p>
                     * 
                     */
                    void SetLogDelivery(const int64_t& _logDelivery);

                    /**
                     * 判断参数 LogDelivery 是否已赋值
                     * @return LogDelivery 是否已赋值
                     * 
                     */
                    bool LogDeliveryHasBeenSet() const;

                    /**
                     * 获取<p>零信任堡垒机功能包</p><p>枚举值：</p><ul><li>0： 不开通</li><li>1： 付费版（含 20 用户 / 10Mbps 带宽）</li></ul><p>默认值：0</p>
                     * @return IOAResource <p>零信任堡垒机功能包</p><p>枚举值：</p><ul><li>0： 不开通</li><li>1： 付费版（含 20 用户 / 10Mbps 带宽）</li></ul><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetIOAResource() const;

                    /**
                     * 设置<p>零信任堡垒机功能包</p><p>枚举值：</p><ul><li>0： 不开通</li><li>1： 付费版（含 20 用户 / 10Mbps 带宽）</li></ul><p>默认值：0</p>
                     * @param _iOAResource <p>零信任堡垒机功能包</p><p>枚举值：</p><ul><li>0： 不开通</li><li>1： 付费版（含 20 用户 / 10Mbps 带宽）</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetIOAResource(const uint64_t& _iOAResource);

                    /**
                     * 判断参数 IOAResource 是否已赋值
                     * @return IOAResource 是否已赋值
                     * 
                     */
                    bool IOAResourceHasBeenSet() const;

                    /**
                     * 获取<p>零信任用户扩展包，1 个 = 20 用户</p><p>取值范围：[0, 999]</p>
                     * @return PackageIOAUserCount <p>零信任用户扩展包，1 个 = 20 用户</p><p>取值范围：[0, 999]</p>
                     * 
                     */
                    uint64_t GetPackageIOAUserCount() const;

                    /**
                     * 设置<p>零信任用户扩展包，1 个 = 20 用户</p><p>取值范围：[0, 999]</p>
                     * @param _packageIOAUserCount <p>零信任用户扩展包，1 个 = 20 用户</p><p>取值范围：[0, 999]</p>
                     * 
                     */
                    void SetPackageIOAUserCount(const uint64_t& _packageIOAUserCount);

                    /**
                     * 判断参数 PackageIOAUserCount 是否已赋值
                     * @return PackageIOAUserCount 是否已赋值
                     * 
                     */
                    bool PackageIOAUserCountHasBeenSet() const;

                    /**
                     * 获取<p>零信任带宽扩展包，1 个 = 4Mbps</p><p>取值范围：[0, 509]</p>
                     * @return PackageIOABandwidth <p>零信任带宽扩展包，1 个 = 4Mbps</p><p>取值范围：[0, 509]</p>
                     * 
                     */
                    uint64_t GetPackageIOABandwidth() const;

                    /**
                     * 设置<p>零信任带宽扩展包，1 个 = 4Mbps</p><p>取值范围：[0, 509]</p>
                     * @param _packageIOABandwidth <p>零信任带宽扩展包，1 个 = 4Mbps</p><p>取值范围：[0, 509]</p>
                     * 
                     */
                    void SetPackageIOABandwidth(const uint64_t& _packageIOABandwidth);

                    /**
                     * 判断参数 PackageIOABandwidth 是否已赋值
                     * @return PackageIOABandwidth 是否已赋值
                     * 
                     */
                    bool PackageIOABandwidthHasBeenSet() const;

                private:

                    /**
                     * <p>需要开通服务的资源ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>实例版本</p>
                     */
                    std::string m_resourceEdition;
                    bool m_resourceEditionHasBeenSet;

                    /**
                     * <p>资源节点数</p>
                     */
                    int64_t m_resourceNode;
                    bool m_resourceNodeHasBeenSet;

                    /**
                     * <p>自动续费</p>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>带宽扩展包个数(4M)</p>
                     */
                    int64_t m_packageBandwidth;
                    bool m_packageBandwidthHasBeenSet;

                    /**
                     * <p>授权点数扩展包个数(50点)</p>
                     */
                    int64_t m_packageNode;
                    bool m_packageNodeHasBeenSet;

                    /**
                     * <p>日志投递</p>
                     */
                    int64_t m_logDelivery;
                    bool m_logDeliveryHasBeenSet;

                    /**
                     * <p>零信任堡垒机功能包</p><p>枚举值：</p><ul><li>0： 不开通</li><li>1： 付费版（含 20 用户 / 10Mbps 带宽）</li></ul><p>默认值：0</p>
                     */
                    uint64_t m_iOAResource;
                    bool m_iOAResourceHasBeenSet;

                    /**
                     * <p>零信任用户扩展包，1 个 = 20 用户</p><p>取值范围：[0, 999]</p>
                     */
                    uint64_t m_packageIOAUserCount;
                    bool m_packageIOAUserCountHasBeenSet;

                    /**
                     * <p>零信任带宽扩展包，1 个 = 4Mbps</p><p>取值范围：[0, 509]</p>
                     */
                    uint64_t m_packageIOABandwidth;
                    bool m_packageIOABandwidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_MODIFYRESOURCEREQUEST_H_
