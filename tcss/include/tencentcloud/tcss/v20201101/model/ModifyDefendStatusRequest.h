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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYDEFENDSTATUSREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYDEFENDSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ModifyDefendStatus请求参数结构体
                */
                class ModifyDefendStatusRequest : public AbstractModel
                {
                public:
                    ModifyDefendStatusRequest();
                    ~ModifyDefendStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开关是否开启
                     * @return SwitchOn 开关是否开启
                     * 
                     */
                    bool GetSwitchOn() const;

                    /**
                     * 设置开关是否开启
                     * @param _switchOn 开关是否开启
                     * 
                     */
                    void SetSwitchOn(const bool& _switchOn);

                    /**
                     * 判断参数 SwitchOn 是否已赋值
                     * @return SwitchOn 是否已赋值
                     * 
                     */
                    bool SwitchOnHasBeenSet() const;

                    /**
                     * 获取实例类型 <li> Cluster: 集群</li> <li> Node: 节点</li>
                     * @return InstanceType 实例类型 <li> Cluster: 集群</li> <li> Node: 节点</li>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型 <li> Cluster: 集群</li> <li> Node: 节点</li>
                     * @param _instanceType 实例类型 <li> Cluster: 集群</li> <li> Node: 节点</li>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取是否是全部实例
                     * @return IsAll 是否是全部实例
                     * 
                     */
                    bool GetIsAll() const;

                    /**
                     * 设置是否是全部实例
                     * @param _isAll 是否是全部实例
                     * 
                     */
                    void SetIsAll(const bool& _isAll);

                    /**
                     * 判断参数 IsAll 是否已赋值
                     * @return IsAll 是否已赋值
                     * 
                     */
                    bool IsAllHasBeenSet() const;

                    /**
                     * 获取实例id列表
                     * @return InstanceIDs 实例id列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIDs() const;

                    /**
                     * 设置实例id列表
                     * @param _instanceIDs 实例id列表
                     * 
                     */
                    void SetInstanceIDs(const std::vector<std::string>& _instanceIDs);

                    /**
                     * 判断参数 InstanceIDs 是否已赋值
                     * @return InstanceIDs 是否已赋值
                     * 
                     */
                    bool InstanceIDsHasBeenSet() const;

                private:

                    /**
                     * 开关是否开启
                     */
                    bool m_switchOn;
                    bool m_switchOnHasBeenSet;

                    /**
                     * 实例类型 <li> Cluster: 集群</li> <li> Node: 节点</li>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 是否是全部实例
                     */
                    bool m_isAll;
                    bool m_isAllHasBeenSet;

                    /**
                     * 实例id列表
                     */
                    std::vector<std::string> m_instanceIDs;
                    bool m_instanceIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYDEFENDSTATUSREQUEST_H_
