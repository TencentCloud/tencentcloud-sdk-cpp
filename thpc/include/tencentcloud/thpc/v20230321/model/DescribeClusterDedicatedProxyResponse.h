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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBECLUSTERDEDICATEDPROXYRESPONSE_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBECLUSTERDEDICATEDPROXYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * DescribeClusterDedicatedProxy返回参数结构体
                */
                class DescribeClusterDedicatedProxyResponse : public AbstractModel
                {
                public:
                    DescribeClusterDedicatedProxyResponse();
                    ~DescribeClusterDedicatedProxyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>代理是否已开通。true表示已开通，false表示从未开通。</p>
                     * @return Enabled <p>代理是否已开通。true表示已开通，false表示从未开通。</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>终端节点ID。未开通代理时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndPointId <p>终端节点ID。未开通代理时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndPointId() const;

                    /**
                     * 判断参数 EndPointId 是否已赋值
                     * @return EndPointId 是否已赋值
                     * 
                     */
                    bool EndPointIdHasBeenSet() const;

                    /**
                     * 获取<p>终端节点VIP地址。未开通代理时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndPointVip <p>终端节点VIP地址。未开通代理时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndPointVip() const;

                    /**
                     * 判断参数 EndPointVip 是否已赋值
                     * @return EndPointVip 是否已赋值
                     * 
                     */
                    bool EndPointVipHasBeenSet() const;

                    /**
                     * 获取<p>终端节点是否就绪。true表示已就绪可用，false表示未就绪或未开通。</p>
                     * @return EndPointReady <p>终端节点是否就绪。true表示已就绪可用，false表示未就绪或未开通。</p>
                     * 
                     */
                    bool GetEndPointReady() const;

                    /**
                     * 判断参数 EndPointReady 是否已赋值
                     * @return EndPointReady 是否已赋值
                     * 
                     */
                    bool EndPointReadyHasBeenSet() const;

                    /**
                     * 获取<p>终端节点状态。取值范围：<li>ACTIVE：已激活</li><li>BINDCHANGE：变更中</li><li>BINDINGCREATE：创建中</li><li>BINDINGDELETE：删除中</li><li>ABNORMAL：异常</li><li>UNKNOWN：未知</li><li>ASSUME_ROLE_FAILED：授权失败</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndPointStatus <p>终端节点状态。取值范围：<li>ACTIVE：已激活</li><li>BINDCHANGE：变更中</li><li>BINDINGCREATE：创建中</li><li>BINDINGDELETE：删除中</li><li>ABNORMAL：异常</li><li>UNKNOWN：未知</li><li>ASSUME_ROLE_FAILED：授权失败</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndPointStatus() const;

                    /**
                     * 判断参数 EndPointStatus 是否已赋值
                     * @return EndPointStatus 是否已赋值
                     * 
                     */
                    bool EndPointStatusHasBeenSet() const;

                    /**
                     * 获取<p>上次同步的终端节点状态（DB记录值）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastKnownStatus <p>上次同步的终端节点状态（DB记录值）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastKnownStatus() const;

                    /**
                     * 判断参数 LastKnownStatus 是否已赋值
                     * @return LastKnownStatus 是否已赋值
                     * 
                     */
                    bool LastKnownStatusHasBeenSet() const;

                    /**
                     * 获取<p>终端节点服务ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndPointServiceId <p>终端节点服务ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndPointServiceId() const;

                    /**
                     * 判断参数 EndPointServiceId 是否已赋值
                     * @return EndPointServiceId 是否已赋值
                     * 
                     */
                    bool EndPointServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>私有网络ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId <p>私有网络ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>子网ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId <p>子网ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>代理创建时间。未开通时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>代理创建时间。未开通时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>上次状态同步时间。cron未同步过时为null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastSyncTime <p>上次状态同步时间。cron未同步过时为null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastSyncTime() const;

                    /**
                     * 判断参数 LastSyncTime 是否已赋值
                     * @return LastSyncTime 是否已赋值
                     * 
                     */
                    bool LastSyncTimeHasBeenSet() const;

                    /**
                     * 获取<p>本次实时查询时间。未开通时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RealtimeQueryTime <p>本次实时查询时间。未开通时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRealtimeQueryTime() const;

                    /**
                     * 判断参数 RealtimeQueryTime 是否已赋值
                     * @return RealtimeQueryTime 是否已赋值
                     * 
                     */
                    bool RealtimeQueryTimeHasBeenSet() const;

                private:

                    /**
                     * <p>代理是否已开通。true表示已开通，false表示从未开通。</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>终端节点ID。未开通代理时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endPointId;
                    bool m_endPointIdHasBeenSet;

                    /**
                     * <p>终端节点VIP地址。未开通代理时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endPointVip;
                    bool m_endPointVipHasBeenSet;

                    /**
                     * <p>终端节点是否就绪。true表示已就绪可用，false表示未就绪或未开通。</p>
                     */
                    bool m_endPointReady;
                    bool m_endPointReadyHasBeenSet;

                    /**
                     * <p>终端节点状态。取值范围：<li>ACTIVE：已激活</li><li>BINDCHANGE：变更中</li><li>BINDINGCREATE：创建中</li><li>BINDINGDELETE：删除中</li><li>ABNORMAL：异常</li><li>UNKNOWN：未知</li><li>ASSUME_ROLE_FAILED：授权失败</li></p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endPointStatus;
                    bool m_endPointStatusHasBeenSet;

                    /**
                     * <p>上次同步的终端节点状态（DB记录值）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastKnownStatus;
                    bool m_lastKnownStatusHasBeenSet;

                    /**
                     * <p>终端节点服务ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endPointServiceId;
                    bool m_endPointServiceIdHasBeenSet;

                    /**
                     * <p>私有网络ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>代理创建时间。未开通时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>上次状态同步时间。cron未同步过时为null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastSyncTime;
                    bool m_lastSyncTimeHasBeenSet;

                    /**
                     * <p>本次实时查询时间。未开通时为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_realtimeQueryTime;
                    bool m_realtimeQueryTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBECLUSTERDEDICATEDPROXYRESPONSE_H_
