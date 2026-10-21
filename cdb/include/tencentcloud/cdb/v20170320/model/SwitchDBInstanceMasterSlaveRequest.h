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
                     * 获取<p>实例 ID。</p>
                     * @return InstanceId <p>实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID。</p>
                     * @param _instanceId <p>实例 ID。</p>
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
                     * 获取<p>目标从实例。可选值：&quot;first&quot; - 第一备机；&quot;second&quot; - 第二备机；&quot;third&quot; - 第三备机。默认值为 &quot;first&quot;，仅多可用区实例支持设置为 &quot;second&quot;。</p>
                     * @return DstSlave <p>目标从实例。可选值：&quot;first&quot; - 第一备机；&quot;second&quot; - 第二备机；&quot;third&quot; - 第三备机。默认值为 &quot;first&quot;，仅多可用区实例支持设置为 &quot;second&quot;。</p>
                     * 
                     */
                    std::string GetDstSlave() const;

                    /**
                     * 设置<p>目标从实例。可选值：&quot;first&quot; - 第一备机；&quot;second&quot; - 第二备机；&quot;third&quot; - 第三备机。默认值为 &quot;first&quot;，仅多可用区实例支持设置为 &quot;second&quot;。</p>
                     * @param _dstSlave <p>目标从实例。可选值：&quot;first&quot; - 第一备机；&quot;second&quot; - 第二备机；&quot;third&quot; - 第三备机。默认值为 &quot;first&quot;，仅多可用区实例支持设置为 &quot;second&quot;。</p>
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
                     * 获取<p>是否强制切换。默认为 False。注意，若设置强制切换为 True，实例存在丢失数据的风险，请谨慎使用。</p>
                     * @return ForceSwitch <p>是否强制切换。默认为 False。注意，若设置强制切换为 True，实例存在丢失数据的风险，请谨慎使用。</p>
                     * @deprecated
                     */
                    bool GetForceSwitch() const;

                    /**
                     * 设置<p>是否强制切换。默认为 False。注意，若设置强制切换为 True，实例存在丢失数据的风险，请谨慎使用。</p>
                     * @param _forceSwitch <p>是否强制切换。默认为 False。注意，若设置强制切换为 True，实例存在丢失数据的风险，请谨慎使用。</p>
                     * @deprecated
                     */
                    void SetForceSwitch(const bool& _forceSwitch);

                    /**
                     * 判断参数 ForceSwitch 是否已赋值
                     * @return ForceSwitch 是否已赋值
                     * @deprecated
                     */
                    bool ForceSwitchHasBeenSet() const;

                    /**
                     * 获取<p>是否时间窗内切换。默认为 False，即不在时间窗内切换。注意，如果设置了 ForceSwitch 参数为 True，则该参数不生效。</p>
                     * @return WaitSwitch <p>是否时间窗内切换。默认为 False，即不在时间窗内切换。注意，如果设置了 ForceSwitch 参数为 True，则该参数不生效。</p>
                     * 
                     */
                    bool GetWaitSwitch() const;

                    /**
                     * 设置<p>是否时间窗内切换。默认为 False，即不在时间窗内切换。注意，如果设置了 ForceSwitch 参数为 True，则该参数不生效。</p>
                     * @param _waitSwitch <p>是否时间窗内切换。默认为 False，即不在时间窗内切换。注意，如果设置了 ForceSwitch 参数为 True，则该参数不生效。</p>
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
                     * 获取<p>集群版实例指定节点 ID 发起主从切换。</p>
                     * @return DstNodeId <p>集群版实例指定节点 ID 发起主从切换。</p>
                     * 
                     */
                    std::string GetDstNodeId() const;

                    /**
                     * 设置<p>集群版实例指定节点 ID 发起主从切换。</p>
                     * @param _dstNodeId <p>集群版实例指定节点 ID 发起主从切换。</p>
                     * 
                     */
                    void SetDstNodeId(const std::string& _dstNodeId);

                    /**
                     * 判断参数 DstNodeId 是否已赋值
                     * @return DstNodeId 是否已赋值
                     * 
                     */
                    bool DstNodeIdHasBeenSet() const;

                    /**
                     * 获取<p>等待主备位点差收敛到阈值以内的最长时间,范围：30s-3600s</p>
                     * @return SyncTimeout <p>等待主备位点差收敛到阈值以内的最长时间,范围：30s-3600s</p>
                     * 
                     */
                    int64_t GetSyncTimeout() const;

                    /**
                     * 设置<p>等待主备位点差收敛到阈值以内的最长时间,范围：30s-3600s</p>
                     * @param _syncTimeout <p>等待主备位点差收敛到阈值以内的最长时间,范围：30s-3600s</p>
                     * 
                     */
                    void SetSyncTimeout(const int64_t& _syncTimeout);

                    /**
                     * 判断参数 SyncTimeout 是否已赋值
                     * @return SyncTimeout 是否已赋值
                     * 
                     */
                    bool SyncTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>slave 执行位点和读到位点差值，在最长等待时间内，位点差需小于该值才启动切换</p>
                     * @return SyncDistance <p>slave 执行位点和读到位点差值，在最长等待时间内，位点差需小于该值才启动切换</p>
                     * 
                     */
                    std::string GetSyncDistance() const;

                    /**
                     * 设置<p>slave 执行位点和读到位点差值，在最长等待时间内，位点差需小于该值才启动切换</p>
                     * @param _syncDistance <p>slave 执行位点和读到位点差值，在最长等待时间内，位点差需小于该值才启动切换</p>
                     * 
                     */
                    void SetSyncDistance(const std::string& _syncDistance);

                    /**
                     * 判断参数 SyncDistance 是否已赋值
                     * @return SyncDistance 是否已赋值
                     * 
                     */
                    bool SyncDistanceHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>目标从实例。可选值：&quot;first&quot; - 第一备机；&quot;second&quot; - 第二备机；&quot;third&quot; - 第三备机。默认值为 &quot;first&quot;，仅多可用区实例支持设置为 &quot;second&quot;。</p>
                     */
                    std::string m_dstSlave;
                    bool m_dstSlaveHasBeenSet;

                    /**
                     * <p>是否强制切换。默认为 False。注意，若设置强制切换为 True，实例存在丢失数据的风险，请谨慎使用。</p>
                     */
                    bool m_forceSwitch;
                    bool m_forceSwitchHasBeenSet;

                    /**
                     * <p>是否时间窗内切换。默认为 False，即不在时间窗内切换。注意，如果设置了 ForceSwitch 参数为 True，则该参数不生效。</p>
                     */
                    bool m_waitSwitch;
                    bool m_waitSwitchHasBeenSet;

                    /**
                     * <p>集群版实例指定节点 ID 发起主从切换。</p>
                     */
                    std::string m_dstNodeId;
                    bool m_dstNodeIdHasBeenSet;

                    /**
                     * <p>等待主备位点差收敛到阈值以内的最长时间,范围：30s-3600s</p>
                     */
                    int64_t m_syncTimeout;
                    bool m_syncTimeoutHasBeenSet;

                    /**
                     * <p>slave 执行位点和读到位点差值，在最长等待时间内，位点差需小于该值才启动切换</p>
                     */
                    std::string m_syncDistance;
                    bool m_syncDistanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_SWITCHDBINSTANCEMASTERSLAVEREQUEST_H_
