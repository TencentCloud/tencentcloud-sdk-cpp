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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EXISTEDINSTANCESFORNODE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EXISTEDINSTANCESFORNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ExistedInstancesPara.h>
#include <tencentcloud/tke/v20180525/model/InstanceAdvancedSettings.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 不同角色的已存在节点配置参数
                */
                class ExistedInstancesForNode : public AbstractModel
                {
                public:
                    ExistedInstancesForNode();
                    ~ExistedInstancesForNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点角色，取值:MASTER_ETCD, WORKER。MASTER_ETCD只有在创建 INDEPENDENT_CLUSTER 独立集群时需要指定。MASTER_ETCD节点数量为3～7，建议为奇数。MASTER_ETCD最小配置为4C8G。
                     * @return NodeRole 节点角色，取值:MASTER_ETCD, WORKER。MASTER_ETCD只有在创建 INDEPENDENT_CLUSTER 独立集群时需要指定。MASTER_ETCD节点数量为3～7，建议为奇数。MASTER_ETCD最小配置为4C8G。
                     * 
                     */
                    std::string GetNodeRole() const;

                    /**
                     * 设置节点角色，取值:MASTER_ETCD, WORKER。MASTER_ETCD只有在创建 INDEPENDENT_CLUSTER 独立集群时需要指定。MASTER_ETCD节点数量为3～7，建议为奇数。MASTER_ETCD最小配置为4C8G。
                     * @param _nodeRole 节点角色，取值:MASTER_ETCD, WORKER。MASTER_ETCD只有在创建 INDEPENDENT_CLUSTER 独立集群时需要指定。MASTER_ETCD节点数量为3～7，建议为奇数。MASTER_ETCD最小配置为4C8G。
                     * 
                     */
                    void SetNodeRole(const std::string& _nodeRole);

                    /**
                     * 判断参数 NodeRole 是否已赋值
                     * @return NodeRole 是否已赋值
                     * 
                     */
                    bool NodeRoleHasBeenSet() const;

                    /**
                     * 获取已存在实例的重装参数
                     * @return ExistedInstancesPara 已存在实例的重装参数
                     * 
                     */
                    ExistedInstancesPara GetExistedInstancesPara() const;

                    /**
                     * 设置已存在实例的重装参数
                     * @param _existedInstancesPara 已存在实例的重装参数
                     * 
                     */
                    void SetExistedInstancesPara(const ExistedInstancesPara& _existedInstancesPara);

                    /**
                     * 判断参数 ExistedInstancesPara 是否已赋值
                     * @return ExistedInstancesPara 是否已赋值
                     * 
                     */
                    bool ExistedInstancesParaHasBeenSet() const;

                    /**
                     * 获取节点高级设置，会覆盖集群级别设置的InstanceAdvancedSettings（当前只对节点自定义参数ExtraArgs生效）
                     * @return InstanceAdvancedSettingsOverride 节点高级设置，会覆盖集群级别设置的InstanceAdvancedSettings（当前只对节点自定义参数ExtraArgs生效）
                     * 
                     */
                    InstanceAdvancedSettings GetInstanceAdvancedSettingsOverride() const;

                    /**
                     * 设置节点高级设置，会覆盖集群级别设置的InstanceAdvancedSettings（当前只对节点自定义参数ExtraArgs生效）
                     * @param _instanceAdvancedSettingsOverride 节点高级设置，会覆盖集群级别设置的InstanceAdvancedSettings（当前只对节点自定义参数ExtraArgs生效）
                     * 
                     */
                    void SetInstanceAdvancedSettingsOverride(const InstanceAdvancedSettings& _instanceAdvancedSettingsOverride);

                    /**
                     * 判断参数 InstanceAdvancedSettingsOverride 是否已赋值
                     * @return InstanceAdvancedSettingsOverride 是否已赋值
                     * 
                     */
                    bool InstanceAdvancedSettingsOverrideHasBeenSet() const;

                    /**
                     * 获取自定义模式集群，可指定每个节点的pod数量
                     * @return DesiredPodNumbers 自定义模式集群，可指定每个节点的pod数量
                     * 
                     */
                    std::vector<int64_t> GetDesiredPodNumbers() const;

                    /**
                     * 设置自定义模式集群，可指定每个节点的pod数量
                     * @param _desiredPodNumbers 自定义模式集群，可指定每个节点的pod数量
                     * 
                     */
                    void SetDesiredPodNumbers(const std::vector<int64_t>& _desiredPodNumbers);

                    /**
                     * 判断参数 DesiredPodNumbers 是否已赋值
                     * @return DesiredPodNumbers 是否已赋值
                     * 
                     */
                    bool DesiredPodNumbersHasBeenSet() const;

                private:

                    /**
                     * 节点角色，取值:MASTER_ETCD, WORKER。MASTER_ETCD只有在创建 INDEPENDENT_CLUSTER 独立集群时需要指定。MASTER_ETCD节点数量为3～7，建议为奇数。MASTER_ETCD最小配置为4C8G。
                     */
                    std::string m_nodeRole;
                    bool m_nodeRoleHasBeenSet;

                    /**
                     * 已存在实例的重装参数
                     */
                    ExistedInstancesPara m_existedInstancesPara;
                    bool m_existedInstancesParaHasBeenSet;

                    /**
                     * 节点高级设置，会覆盖集群级别设置的InstanceAdvancedSettings（当前只对节点自定义参数ExtraArgs生效）
                     */
                    InstanceAdvancedSettings m_instanceAdvancedSettingsOverride;
                    bool m_instanceAdvancedSettingsOverrideHasBeenSet;

                    /**
                     * 自定义模式集群，可指定每个节点的pod数量
                     */
                    std::vector<int64_t> m_desiredPodNumbers;
                    bool m_desiredPodNumbersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EXISTEDINSTANCESFORNODE_H_
