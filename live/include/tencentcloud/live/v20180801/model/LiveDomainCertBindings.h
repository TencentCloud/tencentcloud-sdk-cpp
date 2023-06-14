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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_LIVEDOMAINCERTBINDINGS_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_LIVEDOMAINCERTBINDINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveDomainCertBindings, DescribeLiveDomainCertBindingsGray接口返回的域名证书信息
                */
                class LiveDomainCertBindings : public AbstractModel
                {
                public:
                    LiveDomainCertBindings();
                    ~LiveDomainCertBindings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名。
                     * @return DomainName 域名。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置域名。
                     * @param _domainName 域名。
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取证书备注。与CertName同义。
                     * @return CertificateAlias 证书备注。与CertName同义。
                     * 
                     */
                    std::string GetCertificateAlias() const;

                    /**
                     * 设置证书备注。与CertName同义。
                     * @param _certificateAlias 证书备注。与CertName同义。
                     * 
                     */
                    void SetCertificateAlias(const std::string& _certificateAlias);

                    /**
                     * 判断参数 CertificateAlias 是否已赋值
                     * @return CertificateAlias 是否已赋值
                     * 
                     */
                    bool CertificateAliasHasBeenSet() const;

                    /**
                     * 获取证书类型。
0：自有证书
1：腾讯云ssl托管证书
                     * @return CertType 证书类型。
0：自有证书
1：腾讯云ssl托管证书
                     * 
                     */
                    int64_t GetCertType() const;

                    /**
                     * 设置证书类型。
0：自有证书
1：腾讯云ssl托管证书
                     * @param _certType 证书类型。
0：自有证书
1：腾讯云ssl托管证书
                     * 
                     */
                    void SetCertType(const int64_t& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取https状态。
1：已开启。
0：已关闭。
                     * @return Status https状态。
1：已开启。
0：已关闭。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置https状态。
1：已开启。
0：已关闭。
                     * @param _status https状态。
1：已开启。
0：已关闭。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取证书过期时间。
注：此字段为北京时间（UTC+8时区）。
                     * @return CertExpireTime 证书过期时间。
注：此字段为北京时间（UTC+8时区）。
                     * 
                     */
                    std::string GetCertExpireTime() const;

                    /**
                     * 设置证书过期时间。
注：此字段为北京时间（UTC+8时区）。
                     * @param _certExpireTime 证书过期时间。
注：此字段为北京时间（UTC+8时区）。
                     * 
                     */
                    void SetCertExpireTime(const std::string& _certExpireTime);

                    /**
                     * 判断参数 CertExpireTime 是否已赋值
                     * @return CertExpireTime 是否已赋值
                     * 
                     */
                    bool CertExpireTimeHasBeenSet() const;

                    /**
                     * 获取证书Id。
                     * @return CertId 证书Id。
                     * 
                     */
                    int64_t GetCertId() const;

                    /**
                     * 设置证书Id。
                     * @param _certId 证书Id。
                     * 
                     */
                    void SetCertId(const int64_t& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取腾讯云ssl的证书Id。
                     * @return CloudCertId 腾讯云ssl的证书Id。
                     * 
                     */
                    std::string GetCloudCertId() const;

                    /**
                     * 设置腾讯云ssl的证书Id。
                     * @param _cloudCertId 腾讯云ssl的证书Id。
                     * 
                     */
                    void SetCloudCertId(const std::string& _cloudCertId);

                    /**
                     * 判断参数 CloudCertId 是否已赋值
                     * @return CloudCertId 是否已赋值
                     * 
                     */
                    bool CloudCertIdHasBeenSet() const;

                    /**
                     * 获取规则最后更新时间。
注：此字段为北京时间（UTC+8时区）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 规则最后更新时间。
注：此字段为北京时间（UTC+8时区）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置规则最后更新时间。
注：此字段为北京时间（UTC+8时区）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 规则最后更新时间。
注：此字段为北京时间（UTC+8时区）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 证书备注。与CertName同义。
                     */
                    std::string m_certificateAlias;
                    bool m_certificateAliasHasBeenSet;

                    /**
                     * 证书类型。
0：自有证书
1：腾讯云ssl托管证书
                     */
                    int64_t m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * https状态。
1：已开启。
0：已关闭。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 证书过期时间。
注：此字段为北京时间（UTC+8时区）。
                     */
                    std::string m_certExpireTime;
                    bool m_certExpireTimeHasBeenSet;

                    /**
                     * 证书Id。
                     */
                    int64_t m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 腾讯云ssl的证书Id。
                     */
                    std::string m_cloudCertId;
                    bool m_cloudCertIdHasBeenSet;

                    /**
                     * 规则最后更新时间。
注：此字段为北京时间（UTC+8时区）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_LIVEDOMAINCERTBINDINGS_H_
