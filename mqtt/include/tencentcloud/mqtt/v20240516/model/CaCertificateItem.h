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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_CACERTIFICATEITEM_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_CACERTIFICATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * CA证书信息
                */
                class CaCertificateItem : public AbstractModel
                {
                public:
                    CaCertificateItem();
                    ~CaCertificateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取证书的公用名(Common Name)
                     * @return CaCn 证书的公用名(Common Name)
                     * 
                     */
                    std::string GetCaCn() const;

                    /**
                     * 设置证书的公用名(Common Name)
                     * @param _caCn 证书的公用名(Common Name)
                     * 
                     */
                    void SetCaCn(const std::string& _caCn);

                    /**
                     * 判断参数 CaCn 是否已赋值
                     * @return CaCn 是否已赋值
                     * 
                     */
                    bool CaCnHasBeenSet() const;

                    /**
                     * 获取证书内容
                     * @return CaCertificate 证书内容
                     * 
                     */
                    std::string GetCaCertificate() const;

                    /**
                     * 设置证书内容
                     * @param _caCertificate 证书内容
                     * 
                     */
                    void SetCaCertificate(const std::string& _caCertificate);

                    /**
                     * 判断参数 CaCertificate 是否已赋值
                     * @return CaCertificate 是否已赋值
                     * 
                     */
                    bool CaCertificateHasBeenSet() const;

                    /**
                     * 获取证书序列号
                     * @return CaSn 证书序列号
                     * 
                     */
                    std::string GetCaSn() const;

                    /**
                     * 设置证书序列号
                     * @param _caSn 证书序列号
                     * 
                     */
                    void SetCaSn(const std::string& _caSn);

                    /**
                     * 判断参数 CaSn 是否已赋值
                     * @return CaSn 是否已赋值
                     * 
                     */
                    bool CaSnHasBeenSet() const;

                    /**
                     * 获取证书格式，当前仅支持 PEM 格式
                     * @return Format 证书格式，当前仅支持 PEM 格式
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置证书格式，当前仅支持 PEM 格式
                     * @param _format 证书格式，当前仅支持 PEM 格式
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取验证证书内容
                     * @return VerificationCertificate 验证证书内容
                     * 
                     */
                    std::string GetVerificationCertificate() const;

                    /**
                     * 设置验证证书内容
                     * @param _verificationCertificate 验证证书内容
                     * 
                     */
                    void SetVerificationCertificate(const std::string& _verificationCertificate);

                    /**
                     * 判断参数 VerificationCertificate 是否已赋值
                     * @return VerificationCertificate 是否已赋值
                     * 
                     */
                    bool VerificationCertificateHasBeenSet() const;

                    /**
                     * 获取CA证书的状态
    ACTIVE：激活
    INACTIVE：未激活
    REVOKED：吊销
    PENDING_ACTIVATION：注册待激活
                     * @return Status CA证书的状态
    ACTIVE：激活
    INACTIVE：未激活
    REVOKED：吊销
    PENDING_ACTIVATION：注册待激活
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置CA证书的状态
    ACTIVE：激活
    INACTIVE：未激活
    REVOKED：吊销
    PENDING_ACTIVATION：注册待激活
                     * @param _status CA证书的状态
    ACTIVE：激活
    INACTIVE：未激活
    REVOKED：吊销
    PENDING_ACTIVATION：注册待激活
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取上次激活时间，毫秒级时间戳 。
                     * @return LastActivationTime 上次激活时间，毫秒级时间戳 。
                     * 
                     */
                    int64_t GetLastActivationTime() const;

                    /**
                     * 设置上次激活时间，毫秒级时间戳 。
                     * @param _lastActivationTime 上次激活时间，毫秒级时间戳 。
                     * 
                     */
                    void SetLastActivationTime(const int64_t& _lastActivationTime);

                    /**
                     * 判断参数 LastActivationTime 是否已赋值
                     * @return LastActivationTime 是否已赋值
                     * 
                     */
                    bool LastActivationTimeHasBeenSet() const;

                    /**
                     * 获取创建时间，毫秒级时间戳 。
                     * @return CreatedTime 创建时间，毫秒级时间戳 。
                     * 
                     */
                    int64_t GetCreatedTime() const;

                    /**
                     * 设置创建时间，毫秒级时间戳 。
                     * @param _createdTime 创建时间，毫秒级时间戳 。
                     * 
                     */
                    void SetCreatedTime(const int64_t& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取更新时间，毫秒级时间戳 。
                     * @return UpdateTime 更新时间，毫秒级时间戳 。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间，毫秒级时间戳 。
                     * @param _updateTime 更新时间，毫秒级时间戳 。
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取上次去激活时间，毫秒级时间戳 。
                     * @return LastInactivationTime 上次去激活时间，毫秒级时间戳 。
                     * 
                     */
                    int64_t GetLastInactivationTime() const;

                    /**
                     * 设置上次去激活时间，毫秒级时间戳 。
                     * @param _lastInactivationTime 上次去激活时间，毫秒级时间戳 。
                     * 
                     */
                    void SetLastInactivationTime(const int64_t& _lastInactivationTime);

                    /**
                     * 判断参数 LastInactivationTime 是否已赋值
                     * @return LastInactivationTime 是否已赋值
                     * 
                     */
                    bool LastInactivationTimeHasBeenSet() const;

                    /**
                     * 获取Ca证书颁发者CN
                     * @return CaIssuerCn Ca证书颁发者CN
                     * 
                     */
                    std::string GetCaIssuerCn() const;

                    /**
                     * 设置Ca证书颁发者CN
                     * @param _caIssuerCn Ca证书颁发者CN
                     * 
                     */
                    void SetCaIssuerCn(const std::string& _caIssuerCn);

                    /**
                     * 判断参数 CaIssuerCn 是否已赋值
                     * @return CaIssuerCn 是否已赋值
                     * 
                     */
                    bool CaIssuerCnHasBeenSet() const;

                    /**
                     * 获取生效时间，毫秒级时间戳 。
                     * @return NotBeforeTime 生效时间，毫秒级时间戳 。
                     * 
                     */
                    int64_t GetNotBeforeTime() const;

                    /**
                     * 设置生效时间，毫秒级时间戳 。
                     * @param _notBeforeTime 生效时间，毫秒级时间戳 。
                     * 
                     */
                    void SetNotBeforeTime(const int64_t& _notBeforeTime);

                    /**
                     * 判断参数 NotBeforeTime 是否已赋值
                     * @return NotBeforeTime 是否已赋值
                     * 
                     */
                    bool NotBeforeTimeHasBeenSet() const;

                    /**
                     * 获取失效时间，毫秒级时间戳 。
                     * @return NotAfterTime 失效时间，毫秒级时间戳 。
                     * 
                     */
                    int64_t GetNotAfterTime() const;

                    /**
                     * 设置失效时间，毫秒级时间戳 。
                     * @param _notAfterTime 失效时间，毫秒级时间戳 。
                     * 
                     */
                    void SetNotAfterTime(const int64_t& _notAfterTime);

                    /**
                     * 判断参数 NotAfterTime 是否已赋值
                     * @return NotAfterTime 是否已赋值
                     * 
                     */
                    bool NotAfterTimeHasBeenSet() const;

                private:

                    /**
                     * 证书的公用名(Common Name)
                     */
                    std::string m_caCn;
                    bool m_caCnHasBeenSet;

                    /**
                     * 证书内容
                     */
                    std::string m_caCertificate;
                    bool m_caCertificateHasBeenSet;

                    /**
                     * 证书序列号
                     */
                    std::string m_caSn;
                    bool m_caSnHasBeenSet;

                    /**
                     * 证书格式，当前仅支持 PEM 格式
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 验证证书内容
                     */
                    std::string m_verificationCertificate;
                    bool m_verificationCertificateHasBeenSet;

                    /**
                     * CA证书的状态
    ACTIVE：激活
    INACTIVE：未激活
    REVOKED：吊销
    PENDING_ACTIVATION：注册待激活
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 上次激活时间，毫秒级时间戳 。
                     */
                    int64_t m_lastActivationTime;
                    bool m_lastActivationTimeHasBeenSet;

                    /**
                     * 创建时间，毫秒级时间戳 。
                     */
                    int64_t m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 更新时间，毫秒级时间戳 。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 上次去激活时间，毫秒级时间戳 。
                     */
                    int64_t m_lastInactivationTime;
                    bool m_lastInactivationTimeHasBeenSet;

                    /**
                     * Ca证书颁发者CN
                     */
                    std::string m_caIssuerCn;
                    bool m_caIssuerCnHasBeenSet;

                    /**
                     * 生效时间，毫秒级时间戳 。
                     */
                    int64_t m_notBeforeTime;
                    bool m_notBeforeTimeHasBeenSet;

                    /**
                     * 失效时间，毫秒级时间戳 。
                     */
                    int64_t m_notAfterTime;
                    bool m_notAfterTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_CACERTIFICATEITEM_H_
