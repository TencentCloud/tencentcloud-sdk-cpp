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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBECACERTIFICATERESPONSE_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBECACERTIFICATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeCaCertificate返回参数结构体
                */
                class DescribeCaCertificateResponse : public AbstractModel
                {
                public:
                    DescribeCaCertificateResponse();
                    ~DescribeCaCertificateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取创建时间，毫秒级时间戳 。
                     * @return CreatedTime 创建时间，毫秒级时间戳 。
                     * 
                     */
                    int64_t GetCreatedTime() const;

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取上次更新时间，毫秒级时间戳 。
                     * @return UpdateTime 上次更新时间，毫秒级时间戳 。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取失效日期，毫秒级时间戳 。
                     * @return NotAfterTime 失效日期，毫秒级时间戳 。
                     * 
                     */
                    int64_t GetNotAfterTime() const;

                    /**
                     * 判断参数 NotAfterTime 是否已赋值
                     * @return NotAfterTime 是否已赋值
                     * 
                     */
                    bool NotAfterTimeHasBeenSet() const;

                    /**
                     * 获取上次激活时间，毫秒级时间戳 。
                     * @return LastActivationTime 上次激活时间，毫秒级时间戳 。
                     * 
                     */
                    int64_t GetLastActivationTime() const;

                    /**
                     * 判断参数 LastActivationTime 是否已赋值
                     * @return LastActivationTime 是否已赋值
                     * 
                     */
                    bool LastActivationTimeHasBeenSet() const;

                    /**
                     * 获取上次吊销时间，毫秒级时间戳 。
                     * @return LastInactivationTime 上次吊销时间，毫秒级时间戳 。
                     * 
                     */
                    int64_t GetLastInactivationTime() const;

                    /**
                     * 判断参数 LastInactivationTime 是否已赋值
                     * @return LastInactivationTime 是否已赋值
                     * 
                     */
                    bool LastInactivationTimeHasBeenSet() const;

                    /**
                     * 获取CA证书状态
 ACTIVE：激活
INACTIVE：未激活

                     * @return Status CA证书状态
 ACTIVE：激活
INACTIVE：未激活

                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取证书序列号
                     * @return CaSn 证书序列号
                     * 
                     */
                    std::string GetCaSn() const;

                    /**
                     * 判断参数 CaSn 是否已赋值
                     * @return CaSn 是否已赋值
                     * 
                     */
                    bool CaSnHasBeenSet() const;

                    /**
                     * 获取证书的CN（Common Name），证书中用于标识主体的名称，通常是域名或组织名称
                     * @return CaCn 证书的CN（Common Name），证书中用于标识主体的名称，通常是域名或组织名称
                     * 
                     */
                    std::string GetCaCn() const;

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
                     * 判断参数 CaCertificate 是否已赋值
                     * @return CaCertificate 是否已赋值
                     * 
                     */
                    bool CaCertificateHasBeenSet() const;

                    /**
                     * 获取证书格式，当仅支持PEM格式
                     * @return Format 证书格式，当仅支持PEM格式
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取Ca证书颁发者CN
                     * @return CaIssuerCn Ca证书颁发者CN
                     * 
                     */
                    std::string GetCaIssuerCn() const;

                    /**
                     * 判断参数 CaIssuerCn 是否已赋值
                     * @return CaIssuerCn 是否已赋值
                     * 
                     */
                    bool CaIssuerCnHasBeenSet() const;

                    /**
                     * 获取生效开始时间，毫秒级时间戳 。
                     * @return NotBeforeTime 生效开始时间，毫秒级时间戳 。
                     * 
                     */
                    int64_t GetNotBeforeTime() const;

                    /**
                     * 判断参数 NotBeforeTime 是否已赋值
                     * @return NotBeforeTime 是否已赋值
                     * 
                     */
                    bool NotBeforeTimeHasBeenSet() const;

                private:

                    /**
                     * 创建时间，毫秒级时间戳 。
                     */
                    int64_t m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 上次更新时间，毫秒级时间戳 。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 失效日期，毫秒级时间戳 。
                     */
                    int64_t m_notAfterTime;
                    bool m_notAfterTimeHasBeenSet;

                    /**
                     * 上次激活时间，毫秒级时间戳 。
                     */
                    int64_t m_lastActivationTime;
                    bool m_lastActivationTimeHasBeenSet;

                    /**
                     * 上次吊销时间，毫秒级时间戳 。
                     */
                    int64_t m_lastInactivationTime;
                    bool m_lastInactivationTimeHasBeenSet;

                    /**
                     * CA证书状态
 ACTIVE：激活
INACTIVE：未激活

                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 证书序列号
                     */
                    std::string m_caSn;
                    bool m_caSnHasBeenSet;

                    /**
                     * 证书的CN（Common Name），证书中用于标识主体的名称，通常是域名或组织名称
                     */
                    std::string m_caCn;
                    bool m_caCnHasBeenSet;

                    /**
                     * 证书内容
                     */
                    std::string m_caCertificate;
                    bool m_caCertificateHasBeenSet;

                    /**
                     * 证书格式，当仅支持PEM格式
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Ca证书颁发者CN
                     */
                    std::string m_caIssuerCn;
                    bool m_caIssuerCnHasBeenSet;

                    /**
                     * 生效开始时间，毫秒级时间戳 。
                     */
                    int64_t m_notBeforeTime;
                    bool m_notBeforeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBECACERTIFICATERESPONSE_H_
