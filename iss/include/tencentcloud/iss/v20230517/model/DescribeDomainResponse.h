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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDOMAINRESPONSE_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDOMAINRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 查询域名详情数据
                */
                class DescribeDomainResponse : public AbstractModel
                {
                public:
                    DescribeDomainResponse();
                    ~DescribeDomainResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取域名ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 域名ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取播放域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlayDomain 播放域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPlayDomain() const;

                    /**
                     * 判断参数 PlayDomain 是否已赋值
                     * @return PlayDomain 是否已赋值
                     * 
                     */
                    bool PlayDomainHasBeenSet() const;

                    /**
                     * 获取CNAME 记录值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InternalDomain CNAME 记录值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInternalDomain() const;

                    /**
                     * 判断参数 InternalDomain 是否已赋值
                     * @return InternalDomain 是否已赋值
                     * 
                     */
                    bool InternalDomainHasBeenSet() const;

                    /**
                     * 获取是否上传证书（0：否，1：是）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HaveCert 是否上传证书（0：否，1：是）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHaveCert() const;

                    /**
                     * 判断参数 HaveCert 是否已赋值
                     * @return HaveCert 是否已赋值
                     * 
                     */
                    bool HaveCertHasBeenSet() const;

                    /**
                     * 获取服务节点 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 服务节点 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取服务节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName 服务节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * 域名ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 播放域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_playDomain;
                    bool m_playDomainHasBeenSet;

                    /**
                     * CNAME 记录值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_internalDomain;
                    bool m_internalDomainHasBeenSet;

                    /**
                     * 是否上传证书（0：否，1：是）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_haveCert;
                    bool m_haveCertHasBeenSet;

                    /**
                     * 服务节点 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 服务节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDOMAINRESPONSE_H_
