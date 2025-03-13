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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDOMAINDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDOMAINDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                class DescribeDomainData : public AbstractModel
                {
                public:
                    DescribeDomainData();
                    ~DescribeDomainData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名ID
                     * @return Id 域名ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置域名ID
                     * @param _id 域名ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取播放域名
                     * @return PlayDomain 播放域名
                     * 
                     */
                    std::string GetPlayDomain() const;

                    /**
                     * 设置播放域名
                     * @param _playDomain 播放域名
                     * 
                     */
                    void SetPlayDomain(const std::string& _playDomain);

                    /**
                     * 判断参数 PlayDomain 是否已赋值
                     * @return PlayDomain 是否已赋值
                     * 
                     */
                    bool PlayDomainHasBeenSet() const;

                    /**
                     * 获取CNAME 记录值
                     * @return InternalDomain CNAME 记录值
                     * 
                     */
                    std::string GetInternalDomain() const;

                    /**
                     * 设置CNAME 记录值
                     * @param _internalDomain CNAME 记录值
                     * 
                     */
                    void SetInternalDomain(const std::string& _internalDomain);

                    /**
                     * 判断参数 InternalDomain 是否已赋值
                     * @return InternalDomain 是否已赋值
                     * 
                     */
                    bool InternalDomainHasBeenSet() const;

                    /**
                     * 获取是否上传证书（0：否，1：是）
                     * @return HaveCert 是否上传证书（0：否，1：是）
                     * 
                     */
                    int64_t GetHaveCert() const;

                    /**
                     * 设置是否上传证书（0：否，1：是）
                     * @param _haveCert 是否上传证书（0：否，1：是）
                     * 
                     */
                    void SetHaveCert(const int64_t& _haveCert);

                    /**
                     * 判断参数 HaveCert 是否已赋值
                     * @return HaveCert 是否已赋值
                     * 
                     */
                    bool HaveCertHasBeenSet() const;

                    /**
                     * 获取服务节点 ID
                     * @return ClusterId 服务节点 ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置服务节点 ID
                     * @param _clusterId 服务节点 ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取服务节点名称
                     * @return ClusterName 服务节点名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置服务节点名称
                     * @param _clusterName 服务节点名称
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取用户ID
                     * @return AppId 用户ID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户ID
                     * @param _appId 用户ID
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取证书ID
                     * @return CertId 证书ID
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置证书ID
                     * @param _certId 证书ID
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取域名类型 0:拉流域名 1:推流域名
                     * @return DomainType 域名类型 0:拉流域名 1:推流域名
                     * 
                     */
                    int64_t GetDomainType() const;

                    /**
                     * 设置域名类型 0:拉流域名 1:推流域名
                     * @param _domainType 域名类型 0:拉流域名 1:推流域名
                     * 
                     */
                    void SetDomainType(const int64_t& _domainType);

                    /**
                     * 判断参数 DomainType 是否已赋值
                     * @return DomainType 是否已赋值
                     * 
                     */
                    bool DomainTypeHasBeenSet() const;

                private:

                    /**
                     * 域名ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 播放域名
                     */
                    std::string m_playDomain;
                    bool m_playDomainHasBeenSet;

                    /**
                     * CNAME 记录值
                     */
                    std::string m_internalDomain;
                    bool m_internalDomainHasBeenSet;

                    /**
                     * 是否上传证书（0：否，1：是）
                     */
                    int64_t m_haveCert;
                    bool m_haveCertHasBeenSet;

                    /**
                     * 服务节点 ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 服务节点名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 用户ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 证书ID
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 域名类型 0:拉流域名 1:推流域名
                     */
                    int64_t m_domainType;
                    bool m_domainTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDOMAINDATA_H_
