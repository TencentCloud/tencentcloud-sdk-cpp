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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_RUNINSTANCESFORNODE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_RUNINSTANCESFORNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * 不同角色的节点配置参数
                */
                class RunInstancesForNode : public AbstractModel
                {
                public:
                    RunInstancesForNode();
                    ~RunInstancesForNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点角色，取值:MASTER_ETCD, WORKER。MASTER_ETCD只有在创建 INDEPENDENT_CLUSTER 独立集群时需要指定。MASTER_ETCD节点数量为3～7，建议为奇数。MASTER_ETCD节点最小配置为4C8G。
                     * @return NodeRole 节点角色，取值:MASTER_ETCD, WORKER。MASTER_ETCD只有在创建 INDEPENDENT_CLUSTER 独立集群时需要指定。MASTER_ETCD节点数量为3～7，建议为奇数。MASTER_ETCD节点最小配置为4C8G。
                     * 
                     */
                    std::string GetNodeRole() const;

                    /**
                     * 设置节点角色，取值:MASTER_ETCD, WORKER。MASTER_ETCD只有在创建 INDEPENDENT_CLUSTER 独立集群时需要指定。MASTER_ETCD节点数量为3～7，建议为奇数。MASTER_ETCD节点最小配置为4C8G。
                     * @param _nodeRole 节点角色，取值:MASTER_ETCD, WORKER。MASTER_ETCD只有在创建 INDEPENDENT_CLUSTER 独立集群时需要指定。MASTER_ETCD节点数量为3～7，建议为奇数。MASTER_ETCD节点最小配置为4C8G。
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
                     * 获取CVM创建透传参数，json化字符串格式，详见[CVM创建实例](https://cloud.tencent.com/document/product/213/15730)接口，传入公共参数外的其他参数即可，其中ImageId会替换为TKE集群OS对应的镜像。
                     * @return RunInstancesPara CVM创建透传参数，json化字符串格式，详见[CVM创建实例](https://cloud.tencent.com/document/product/213/15730)接口，传入公共参数外的其他参数即可，其中ImageId会替换为TKE集群OS对应的镜像。
                     * 
                     */
                    std::vector<std::string> GetRunInstancesPara() const;

                    /**
                     * 设置CVM创建透传参数，json化字符串格式，详见[CVM创建实例](https://cloud.tencent.com/document/product/213/15730)接口，传入公共参数外的其他参数即可，其中ImageId会替换为TKE集群OS对应的镜像。
                     * @param _runInstancesPara CVM创建透传参数，json化字符串格式，详见[CVM创建实例](https://cloud.tencent.com/document/product/213/15730)接口，传入公共参数外的其他参数即可，其中ImageId会替换为TKE集群OS对应的镜像。
                     * 
                     */
                    void SetRunInstancesPara(const std::vector<std::string>& _runInstancesPara);

                    /**
                     * 判断参数 RunInstancesPara 是否已赋值
                     * @return RunInstancesPara 是否已赋值
                     * 
                     */
                    bool RunInstancesParaHasBeenSet() const;

                    /**
                     * 获取节点高级设置，该参数会覆盖集群级别设置的InstanceAdvancedSettings，和上边的RunInstancesPara按照顺序一一对应（当前只对节点自定义参数ExtraArgs生效）。
                     * @return InstanceAdvancedSettingsOverrides 节点高级设置，该参数会覆盖集群级别设置的InstanceAdvancedSettings，和上边的RunInstancesPara按照顺序一一对应（当前只对节点自定义参数ExtraArgs生效）。
                     * 
                     */
                    std::vector<InstanceAdvancedSettings> GetInstanceAdvancedSettingsOverrides() const;

                    /**
                     * 设置节点高级设置，该参数会覆盖集群级别设置的InstanceAdvancedSettings，和上边的RunInstancesPara按照顺序一一对应（当前只对节点自定义参数ExtraArgs生效）。
                     * @param _instanceAdvancedSettingsOverrides 节点高级设置，该参数会覆盖集群级别设置的InstanceAdvancedSettings，和上边的RunInstancesPara按照顺序一一对应（当前只对节点自定义参数ExtraArgs生效）。
                     * 
                     */
                    void SetInstanceAdvancedSettingsOverrides(const std::vector<InstanceAdvancedSettings>& _instanceAdvancedSettingsOverrides);

                    /**
                     * 判断参数 InstanceAdvancedSettingsOverrides 是否已赋值
                     * @return InstanceAdvancedSettingsOverrides 是否已赋值
                     * 
                     */
                    bool InstanceAdvancedSettingsOverridesHasBeenSet() const;

                private:

                    /**
                     * 节点角色，取值:MASTER_ETCD, WORKER。MASTER_ETCD只有在创建 INDEPENDENT_CLUSTER 独立集群时需要指定。MASTER_ETCD节点数量为3～7，建议为奇数。MASTER_ETCD节点最小配置为4C8G。
                     */
                    std::string m_nodeRole;
                    bool m_nodeRoleHasBeenSet;

                    /**
                     * CVM创建透传参数，json化字符串格式，详见[CVM创建实例](https://cloud.tencent.com/document/product/213/15730)接口，传入公共参数外的其他参数即可，其中ImageId会替换为TKE集群OS对应的镜像。
                     */
                    std::vector<std::string> m_runInstancesPara;
                    bool m_runInstancesParaHasBeenSet;

                    /**
                     * 节点高级设置，该参数会覆盖集群级别设置的InstanceAdvancedSettings，和上边的RunInstancesPara按照顺序一一对应（当前只对节点自定义参数ExtraArgs生效）。
                     */
                    std::vector<InstanceAdvancedSettings> m_instanceAdvancedSettingsOverrides;
                    bool m_instanceAdvancedSettingsOverridesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_RUNINSTANCESFORNODE_H_
