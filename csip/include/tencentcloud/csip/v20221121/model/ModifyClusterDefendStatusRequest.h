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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCLUSTERDEFENDSTATUSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCLUSTERDEFENDSTATUSREQUEST_H_

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
                * ModifyClusterDefendStatus请求参数结构体
                */
                class ModifyClusterDefendStatusRequest : public AbstractModel
                {
                public:
                    ModifyClusterDefendStatusRequest();
                    ~ModifyClusterDefendStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>防护开关</p>
                     * @return DefendStatus <p>防护开关</p>
                     * 
                     */
                    bool GetDefendStatus() const;

                    /**
                     * 设置<p>防护开关</p>
                     * @param _defendStatus <p>防护开关</p>
                     * 
                     */
                    void SetDefendStatus(const bool& _defendStatus);

                    /**
                     * 判断参数 DefendStatus 是否已赋值
                     * @return DefendStatus 是否已赋值
                     * 
                     */
                    bool DefendStatusHasBeenSet() const;

                    /**
                     * 获取关闭防护时是否同步解绑集群下主机 License
枚举值：
true：同步解绑集群所有节点主机授权
false：仅停止容器计费，节点保留主机安全防护
默认值：false
补充说明：仅 DefendStatus=false（关闭防护）时生效
                     * @return UnbindHostLicense 关闭防护时是否同步解绑集群下主机 License
枚举值：
true：同步解绑集群所有节点主机授权
false：仅停止容器计费，节点保留主机安全防护
默认值：false
补充说明：仅 DefendStatus=false（关闭防护）时生效
                     * 
                     */
                    bool GetUnbindHostLicense() const;

                    /**
                     * 设置关闭防护时是否同步解绑集群下主机 License
枚举值：
true：同步解绑集群所有节点主机授权
false：仅停止容器计费，节点保留主机安全防护
默认值：false
补充说明：仅 DefendStatus=false（关闭防护）时生效
                     * @param _unbindHostLicense 关闭防护时是否同步解绑集群下主机 License
枚举值：
true：同步解绑集群所有节点主机授权
false：仅停止容器计费，节点保留主机安全防护
默认值：false
补充说明：仅 DefendStatus=false（关闭防护）时生效
                     * 
                     */
                    void SetUnbindHostLicense(const bool& _unbindHostLicense);

                    /**
                     * 判断参数 UnbindHostLicense 是否已赋值
                     * @return UnbindHostLicense 是否已赋值
                     * 
                     */
                    bool UnbindHostLicenseHasBeenSet() const;

                    /**
                     * 获取<p>集群id数组</p>
                     * @return ClusterAssetIds <p>集群id数组</p>
                     * @deprecated
                     */
                    std::vector<std::string> GetClusterAssetIds() const;

                    /**
                     * 设置<p>集群id数组</p>
                     * @param _clusterAssetIds <p>集群id数组</p>
                     * @deprecated
                     */
                    void SetClusterAssetIds(const std::vector<std::string>& _clusterAssetIds);

                    /**
                     * 判断参数 ClusterAssetIds 是否已赋值
                     * @return ClusterAssetIds 是否已赋值
                     * @deprecated
                     */
                    bool ClusterAssetIdsHasBeenSet() const;

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
                     * 获取<p>集群ca证书md5值，集群的唯一标识</p>
                     * @return ClusterCaMD5List <p>集群ca证书md5值，集群的唯一标识</p>
                     * 
                     */
                    std::vector<std::string> GetClusterCaMD5List() const;

                    /**
                     * 设置<p>集群ca证书md5值，集群的唯一标识</p>
                     * @param _clusterCaMD5List <p>集群ca证书md5值，集群的唯一标识</p>
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
                     * <p>防护开关</p>
                     */
                    bool m_defendStatus;
                    bool m_defendStatusHasBeenSet;

                    /**
                     * 关闭防护时是否同步解绑集群下主机 License
枚举值：
true：同步解绑集群所有节点主机授权
false：仅停止容器计费，节点保留主机安全防护
默认值：false
补充说明：仅 DefendStatus=false（关闭防护）时生效
                     */
                    bool m_unbindHostLicense;
                    bool m_unbindHostLicenseHasBeenSet;

                    /**
                     * <p>集群id数组</p>
                     */
                    std::vector<std::string> m_clusterAssetIds;
                    bool m_clusterAssetIdsHasBeenSet;

                    /**
                     * 被调用的集团账号的成员id
                     */
                    std::vector<std::string> m_operatedMemberId;
                    bool m_operatedMemberIdHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>集群ca证书md5值，集群的唯一标识</p>
                     */
                    std::vector<std::string> m_clusterCaMD5List;
                    bool m_clusterCaMD5ListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCLUSTERDEFENDSTATUSREQUEST_H_
