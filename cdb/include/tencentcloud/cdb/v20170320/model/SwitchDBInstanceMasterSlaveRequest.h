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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_SWITCHDBINSTANCEMASTERSLAVEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_SWITCHDBINSTANCEMASTERSLAVEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * SwitchDBInstanceMasterSlave请求参数结构体
                */
                class SwitchDBInstanceMasterSlaveRequest : public AbstractModel
                {
                public:
                    SwitchDBInstanceMasterSlaveRequest();
                    ~SwitchDBInstanceMasterSlaveRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID。
                     * @return InstanceId 实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。
                     * @param _instanceId 实例 ID。
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
                     * 获取目标从实例。可选值："first" - 第一备机；"second" - 第二备机。默认值为 "first"，仅多可用区实例支持设置为 "second"。
                     * @return DstSlave 目标从实例。可选值："first" - 第一备机；"second" - 第二备机。默认值为 "first"，仅多可用区实例支持设置为 "second"。
                     * 
                     */
                    std::string GetDstSlave() const;

                    /**
                     * 设置目标从实例。可选值："first" - 第一备机；"second" - 第二备机。默认值为 "first"，仅多可用区实例支持设置为 "second"。
                     * @param _dstSlave 目标从实例。可选值："first" - 第一备机；"second" - 第二备机。默认值为 "first"，仅多可用区实例支持设置为 "second"。
                     * 
                     */
                    void SetDstSlave(const std::string& _dstSlave);

                    /**
                     * 判断参数 DstSlave 是否已赋值
                     * @return DstSlave 是否已赋值
                     * 
                     */
                    bool DstSlaveHasBeenSet() const;

                    /**
                     * 获取是否强制切换。默认为 False。注意，若设置强制切换为 True，实例存在丢失数据的风险，请谨慎使用。
                     * @return ForceSwitch 是否强制切换。默认为 False。注意，若设置强制切换为 True，实例存在丢失数据的风险，请谨慎使用。
                     * 
                     */
                    bool GetForceSwitch() const;

                    /**
                     * 设置是否强制切换。默认为 False。注意，若设置强制切换为 True，实例存在丢失数据的风险，请谨慎使用。
                     * @param _forceSwitch 是否强制切换。默认为 False。注意，若设置强制切换为 True，实例存在丢失数据的风险，请谨慎使用。
                     * 
                     */
                    void SetForceSwitch(const bool& _forceSwitch);

                    /**
                     * 判断参数 ForceSwitch 是否已赋值
                     * @return ForceSwitch 是否已赋值
                     * 
                     */
                    bool ForceSwitchHasBeenSet() const;

                    /**
                     * 获取是否时间窗内切换。默认为 False，即不在时间窗内切换。注意，如果设置了 ForceSwitch 参数为 True，则该参数不生效。
                     * @return WaitSwitch 是否时间窗内切换。默认为 False，即不在时间窗内切换。注意，如果设置了 ForceSwitch 参数为 True，则该参数不生效。
                     * 
                     */
                    bool GetWaitSwitch() const;

                    /**
                     * 设置是否时间窗内切换。默认为 False，即不在时间窗内切换。注意，如果设置了 ForceSwitch 参数为 True，则该参数不生效。
                     * @param _waitSwitch 是否时间窗内切换。默认为 False，即不在时间窗内切换。注意，如果设置了 ForceSwitch 参数为 True，则该参数不生效。
                     * 
                     */
                    void SetWaitSwitch(const bool& _waitSwitch);

                    /**
                     * 判断参数 WaitSwitch 是否已赋值
                     * @return WaitSwitch 是否已赋值
                     * 
                     */
                    bool WaitSwitchHasBeenSet() const;

                    /**
                     * 获取集群版实例指定节点 ID 发起主从切换。
                     * @return DstNodeId 集群版实例指定节点 ID 发起主从切换。
                     * 
                     */
                    std::string GetDstNodeId() const;

                    /**
                     * 设置集群版实例指定节点 ID 发起主从切换。
                     * @param _dstNodeId 集群版实例指定节点 ID 发起主从切换。
                     * 
                     */
                    void SetDstNodeId(const std::string& _dstNodeId);

                    /**
                     * 判断参数 DstNodeId 是否已赋值
                     * @return DstNodeId 是否已赋值
                     * 
                     */
                    bool DstNodeIdHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 目标从实例。可选值："first" - 第一备机；"second" - 第二备机。默认值为 "first"，仅多可用区实例支持设置为 "second"。
                     */
                    std::string m_dstSlave;
                    bool m_dstSlaveHasBeenSet;

                    /**
                     * 是否强制切换。默认为 False。注意，若设置强制切换为 True，实例存在丢失数据的风险，请谨慎使用。
                     */
                    bool m_forceSwitch;
                    bool m_forceSwitchHasBeenSet;

                    /**
                     * 是否时间窗内切换。默认为 False，即不在时间窗内切换。注意，如果设置了 ForceSwitch 参数为 True，则该参数不生效。
                     */
                    bool m_waitSwitch;
                    bool m_waitSwitchHasBeenSet;

                    /**
                     * 集群版实例指定节点 ID 发起主从切换。
                     */
                    std::string m_dstNodeId;
                    bool m_dstNodeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_SWITCHDBINSTANCEMASTERSLAVEREQUEST_H_
