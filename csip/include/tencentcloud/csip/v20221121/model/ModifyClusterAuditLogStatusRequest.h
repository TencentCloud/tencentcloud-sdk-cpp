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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCLUSTERAUDITLOGSTATUSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCLUSTERAUDITLOGSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyClusterAuditLogStatus请求参数结构体
                */
                class ModifyClusterAuditLogStatusRequest : public AbstractModel
                {
                public:
                    ModifyClusterAuditLogStatusRequest();
                    ~ModifyClusterAuditLogStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>审计日志开关，审计日志目标状态：true-开启，false-关闭。开启要求集群已开启防护，关闭不要求。</p>
                     * @return AuditLogSwitch <p>审计日志开关，审计日志目标状态：true-开启，false-关闭。开启要求集群已开启防护，关闭不要求。</p>
                     * 
                     */
                    bool GetAuditLogSwitch() const;

                    /**
                     * 设置<p>审计日志开关，审计日志目标状态：true-开启，false-关闭。开启要求集群已开启防护，关闭不要求。</p>
                     * @param _auditLogSwitch <p>审计日志开关，审计日志目标状态：true-开启，false-关闭。开启要求集群已开启防护，关闭不要求。</p>
                     * 
                     */
                    void SetAuditLogSwitch(const bool& _auditLogSwitch);

                    /**
                     * 判断参数 AuditLogSwitch 是否已赋值
                     * @return AuditLogSwitch 是否已赋值
                     * 
                     */
                    bool AuditLogSwitchHasBeenSet() const;

                    /**
                     * 获取<p>集群资产 id（已废弃）</p>
                     * @return ClusterAssetId <p>集群资产 id（已废弃）</p>
                     * 
                     */
                    std::string GetClusterAssetId() const;

                    /**
                     * 设置<p>集群资产 id（已废弃）</p>
                     * @param _clusterAssetId <p>集群资产 id（已废弃）</p>
                     * 
                     */
                    void SetClusterAssetId(const std::string& _clusterAssetId);

                    /**
                     * 判断参数 ClusterAssetId 是否已赋值
                     * @return ClusterAssetId 是否已赋值
                     * 
                     */
                    bool ClusterAssetIdHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取被调用的集团账号的成员id
                     * @return OperatedMemberId 被调用的集团账号的成员id
                     * 
                     */
                    std::vector<std::string> GetOperatedMemberId() const;

                    /**
                     * 设置被调用的集团账号的成员id
                     * @param _operatedMemberId 被调用的集团账号的成员id
                     * 
                     */
                    void SetOperatedMemberId(const std::vector<std::string>& _operatedMemberId);

                    /**
                     * 判断参数 OperatedMemberId 是否已赋值
                     * @return OperatedMemberId 是否已赋值
                     * 
                     */
                    bool OperatedMemberIdHasBeenSet() const;

                    /**
                     * 获取<p>集群 CA 证书 MD5 列表，集群的唯一标识，支持单个或批量修改</p>
                     * @return ClusterCaMD5List <p>集群 CA 证书 MD5 列表，集群的唯一标识，支持单个或批量修改</p>
                     * 
                     */
                    std::vector<std::string> GetClusterCaMD5List() const;

                    /**
                     * 设置<p>集群 CA 证书 MD5 列表，集群的唯一标识，支持单个或批量修改</p>
                     * @param _clusterCaMD5List <p>集群 CA 证书 MD5 列表，集群的唯一标识，支持单个或批量修改</p>
                     * 
                     */
                    void SetClusterCaMD5List(const std::vector<std::string>& _clusterCaMD5List);

                    /**
                     * 判断参数 ClusterCaMD5List 是否已赋值
                     * @return ClusterCaMD5List 是否已赋值
                     * 
                     */
                    bool ClusterCaMD5ListHasBeenSet() const;

                private:

                    /**
                     * <p>审计日志开关，审计日志目标状态：true-开启，false-关闭。开启要求集群已开启防护，关闭不要求。</p>
                     */
                    bool m_auditLogSwitch;
                    bool m_auditLogSwitchHasBeenSet;

                    /**
                     * <p>集群资产 id（已废弃）</p>
                     */
                    std::string m_clusterAssetId;
                    bool m_clusterAssetIdHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 被调用的集团账号的成员id
                     */
                    std::vector<std::string> m_operatedMemberId;
                    bool m_operatedMemberIdHasBeenSet;

                    /**
                     * <p>集群 CA 证书 MD5 列表，集群的唯一标识，支持单个或批量修改</p>
                     */
                    std::vector<std::string> m_clusterCaMD5List;
                    bool m_clusterCaMD5ListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCLUSTERAUDITLOGSTATUSREQUEST_H_
