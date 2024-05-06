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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_SCALEINMASTER_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_SCALEINMASTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * master节点缩容参数
                */
                class ScaleInMaster : public AbstractModel
                {
                public:
                    ScaleInMaster();
                    ~ScaleInMaster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取缩容的实例角色：MASTER,ETCD,MASTER_ETCD
                     * @return NodeRole 缩容的实例角色：MASTER,ETCD,MASTER_ETCD
                     * 
                     */
                    std::string GetNodeRole() const;

                    /**
                     * 设置缩容的实例角色：MASTER,ETCD,MASTER_ETCD
                     * @param _nodeRole 缩容的实例角色：MASTER,ETCD,MASTER_ETCD
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
                     * 获取实例删除时的策略：terminate（销毁实例，仅支持按量计费云主机实例） retain （仅移除，保留实例）
                     * @return InstanceDeleteMode 实例删除时的策略：terminate（销毁实例，仅支持按量计费云主机实例） retain （仅移除，保留实例）
                     * 
                     */
                    std::string GetInstanceDeleteMode() const;

                    /**
                     * 设置实例删除时的策略：terminate（销毁实例，仅支持按量计费云主机实例） retain （仅移除，保留实例）
                     * @param _instanceDeleteMode 实例删除时的策略：terminate（销毁实例，仅支持按量计费云主机实例） retain （仅移除，保留实例）
                     * 
                     */
                    void SetInstanceDeleteMode(const std::string& _instanceDeleteMode);

                    /**
                     * 判断参数 InstanceDeleteMode 是否已赋值
                     * @return InstanceDeleteMode 是否已赋值
                     * 
                     */
                    bool InstanceDeleteModeHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 缩容的实例角色：MASTER,ETCD,MASTER_ETCD
                     */
                    std::string m_nodeRole;
                    bool m_nodeRoleHasBeenSet;

                    /**
                     * 实例删除时的策略：terminate（销毁实例，仅支持按量计费云主机实例） retain （仅移除，保留实例）
                     */
                    std::string m_instanceDeleteMode;
                    bool m_instanceDeleteModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_SCALEINMASTER_H_
