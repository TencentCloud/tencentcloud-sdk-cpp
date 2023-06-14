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

#ifndef TENCENTCLOUD_SSLPOD_V20190605_MODEL_CERTINFO_H_
#define TENCENTCLOUD_SSLPOD_V20190605_MODEL_CERTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sslpod
    {
        namespace V20190605
        {
            namespace Model
            {
                /**
                * 证书信息
                */
                class CertInfo : public AbstractModel
                {
                public:
                    CertInfo();
                    ~CertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取证书sha1
                     * @return Hash 证书sha1
                     * 
                     */
                    std::string GetHash() const;

                    /**
                     * 设置证书sha1
                     * @param _hash 证书sha1
                     * 
                     */
                    void SetHash(const std::string& _hash);

                    /**
                     * 判断参数 Hash 是否已赋值
                     * @return Hash 是否已赋值
                     * 
                     */
                    bool HashHasBeenSet() const;

                    /**
                     * 获取证书通用名称
                     * @return CN 证书通用名称
                     * 
                     */
                    std::string GetCN() const;

                    /**
                     * 设置证书通用名称
                     * @param _cN 证书通用名称
                     * 
                     */
                    void SetCN(const std::string& _cN);

                    /**
                     * 判断参数 CN 是否已赋值
                     * @return CN 是否已赋值
                     * 
                     */
                    bool CNHasBeenSet() const;

                    /**
                     * 获取备用名称
                     * @return SANs 备用名称
                     * 
                     */
                    std::string GetSANs() const;

                    /**
                     * 设置备用名称
                     * @param _sANs 备用名称
                     * 
                     */
                    void SetSANs(const std::string& _sANs);

                    /**
                     * 判断参数 SANs 是否已赋值
                     * @return SANs 是否已赋值
                     * 
                     */
                    bool SANsHasBeenSet() const;

                    /**
                     * 获取公钥算法
                     * @return KeyAlgo 公钥算法
                     * 
                     */
                    std::string GetKeyAlgo() const;

                    /**
                     * 设置公钥算法
                     * @param _keyAlgo 公钥算法
                     * 
                     */
                    void SetKeyAlgo(const std::string& _keyAlgo);

                    /**
                     * 判断参数 KeyAlgo 是否已赋值
                     * @return KeyAlgo 是否已赋值
                     * 
                     */
                    bool KeyAlgoHasBeenSet() const;

                    /**
                     * 获取颁发者
                     * @return Issuer 颁发者
                     * 
                     */
                    std::string GetIssuer() const;

                    /**
                     * 设置颁发者
                     * @param _issuer 颁发者
                     * 
                     */
                    void SetIssuer(const std::string& _issuer);

                    /**
                     * 判断参数 Issuer 是否已赋值
                     * @return Issuer 是否已赋值
                     * 
                     */
                    bool IssuerHasBeenSet() const;

                    /**
                     * 获取有效期开始
                     * @return BeginTime 有效期开始
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置有效期开始
                     * @param _beginTime 有效期开始
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取有效期结束
                     * @return EndTime 有效期结束
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置有效期结束
                     * @param _endTime 有效期结束
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取剩余天数
                     * @return Days 剩余天数
                     * 
                     */
                    int64_t GetDays() const;

                    /**
                     * 设置剩余天数
                     * @param _days 剩余天数
                     * 
                     */
                    void SetDays(const int64_t& _days);

                    /**
                     * 判断参数 Days 是否已赋值
                     * @return Days 是否已赋值
                     * 
                     */
                    bool DaysHasBeenSet() const;

                    /**
                     * 获取品牌
                     * @return Brand 品牌
                     * 
                     */
                    std::string GetBrand() const;

                    /**
                     * 设置品牌
                     * @param _brand 品牌
                     * 
                     */
                    void SetBrand(const std::string& _brand);

                    /**
                     * 判断参数 Brand 是否已赋值
                     * @return Brand 是否已赋值
                     * 
                     */
                    bool BrandHasBeenSet() const;

                    /**
                     * 获取信任状态
                     * @return TrustStatus 信任状态
                     * 
                     */
                    std::string GetTrustStatus() const;

                    /**
                     * 设置信任状态
                     * @param _trustStatus 信任状态
                     * 
                     */
                    void SetTrustStatus(const std::string& _trustStatus);

                    /**
                     * 判断参数 TrustStatus 是否已赋值
                     * @return TrustStatus 是否已赋值
                     * 
                     */
                    bool TrustStatusHasBeenSet() const;

                    /**
                     * 获取证书类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertType 证书类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCertType() const;

                    /**
                     * 设置证书类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certType 证书类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCertType(const std::string& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                private:

                    /**
                     * 证书sha1
                     */
                    std::string m_hash;
                    bool m_hashHasBeenSet;

                    /**
                     * 证书通用名称
                     */
                    std::string m_cN;
                    bool m_cNHasBeenSet;

                    /**
                     * 备用名称
                     */
                    std::string m_sANs;
                    bool m_sANsHasBeenSet;

                    /**
                     * 公钥算法
                     */
                    std::string m_keyAlgo;
                    bool m_keyAlgoHasBeenSet;

                    /**
                     * 颁发者
                     */
                    std::string m_issuer;
                    bool m_issuerHasBeenSet;

                    /**
                     * 有效期开始
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 有效期结束
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 剩余天数
                     */
                    int64_t m_days;
                    bool m_daysHasBeenSet;

                    /**
                     * 品牌
                     */
                    std::string m_brand;
                    bool m_brandHasBeenSet;

                    /**
                     * 信任状态
                     */
                    std::string m_trustStatus;
                    bool m_trustStatusHasBeenSet;

                    /**
                     * 证书类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certType;
                    bool m_certTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSLPOD_V20190605_MODEL_CERTINFO_H_
