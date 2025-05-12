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
                     * 获取需要开通服务的资源ID
                     * @return ResourceId 需要开通服务的资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置需要开通服务的资源ID
                     * @param _resourceId 需要开通服务的资源ID
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
                     * 获取状态
                     * @return Status 状态
                     * @deprecated
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
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
                     * 获取实例版本
                     * @return ResourceEdition 实例版本
                     * 
                     */
                    std::string GetResourceEdition() const;

                    /**
                     * 设置实例版本
                     * @param _resourceEdition 实例版本
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
                     * 获取资源节点数
                     * @return ResourceNode 资源节点数
                     * 
                     */
                    int64_t GetResourceNode() const;

                    /**
                     * 设置资源节点数
                     * @param _resourceNode 资源节点数
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
                     * 获取自动续费
                     * @return AutoRenewFlag 自动续费
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费
                     * @param _autoRenewFlag 自动续费
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
                     * 获取带宽扩展包个数(4M)
                     * @return PackageBandwidth 带宽扩展包个数(4M)
                     * 
                     */
                    int64_t GetPackageBandwidth() const;

                    /**
                     * 设置带宽扩展包个数(4M)
                     * @param _packageBandwidth 带宽扩展包个数(4M)
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
                     * 获取授权点数扩展包个数(50点)
                     * @return PackageNode 授权点数扩展包个数(50点)
                     * 
                     */
                    int64_t GetPackageNode() const;

                    /**
                     * 设置授权点数扩展包个数(50点)
                     * @param _packageNode 授权点数扩展包个数(50点)
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
                     * 获取日志投递
                     * @return LogDelivery 日志投递
                     * 
                     */
                    int64_t GetLogDelivery() const;

                    /**
                     * 设置日志投递
                     * @param _logDelivery 日志投递
                     * 
                     */
                    void SetLogDelivery(const int64_t& _logDelivery);

                    /**
                     * 判断参数 LogDelivery 是否已赋值
                     * @return LogDelivery 是否已赋值
                     * 
                     */
                    bool LogDeliveryHasBeenSet() const;

                private:

                    /**
                     * 需要开通服务的资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例版本
                     */
                    std::string m_resourceEdition;
                    bool m_resourceEditionHasBeenSet;

                    /**
                     * 资源节点数
                     */
                    int64_t m_resourceNode;
                    bool m_resourceNodeHasBeenSet;

                    /**
                     * 自动续费
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 带宽扩展包个数(4M)
                     */
                    int64_t m_packageBandwidth;
                    bool m_packageBandwidthHasBeenSet;

                    /**
                     * 授权点数扩展包个数(50点)
                     */
                    int64_t m_packageNode;
                    bool m_packageNodeHasBeenSet;

                    /**
                     * 日志投递
                     */
                    int64_t m_logDelivery;
                    bool m_logDeliveryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_MODIFYRESOURCEREQUEST_H_
