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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEDEVICECERTIFICATERESPONSE_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEDEVICECERTIFICATERESPONSE_H_

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
                * DescribeDeviceCertificate返回参数结构体
                */
                class DescribeDeviceCertificateResponse : public AbstractModel
                {
                public:
                    DescribeDeviceCertificateResponse();
                    ~DescribeDeviceCertificateResponse() = default;
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
                     * 获取证书失效日期，毫秒级时间戳 。
                     * @return NotAfterTime 证书失效日期，毫秒级时间戳 。
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
                     * 获取上次取消激活时间，毫秒级时间戳 。
                     * @return LastInactivationTime 上次取消激活时间，毫秒级时间戳 。
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
                     * 获取设备证书的状态
    ACTIVE：激活 
    INACTIVE：未激活
    REVOKED：吊销
    PENDING_ACTIVATION：注册待激活
                     * @return Status 设备证书的状态
    ACTIVE：激活 
    INACTIVE：未激活
    REVOKED：吊销
    PENDING_ACTIVATION：注册待激活
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
                     * 获取Ca证书序列号
                     * @return CaSn Ca证书序列号
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
                     * 获取设备证书序列号
                     * @return DeviceCertificateSn 设备证书序列号
                     * 
                     */
                    std::string GetDeviceCertificateSn() const;

                    /**
                     * 判断参数 DeviceCertificateSn 是否已赋值
                     * @return DeviceCertificateSn 是否已赋值
                     * 
                     */
                    bool DeviceCertificateSnHasBeenSet() const;

                    /**
                     * 获取设备证书内容
                     * @return DeviceCertificate 设备证书内容
                     * 
                     */
                    std::string GetDeviceCertificate() const;

                    /**
                     * 判断参数 DeviceCertificate 是否已赋值
                     * @return DeviceCertificate 是否已赋值
                     * 
                     */
                    bool DeviceCertificateHasBeenSet() const;

                    /**
                     * 获取设备证书common name
                     * @return DeviceCertificateCn 设备证书common name
                     * 
                     */
                    std::string GetDeviceCertificateCn() const;

                    /**
                     * 判断参数 DeviceCertificateCn 是否已赋值
                     * @return DeviceCertificateCn 是否已赋值
                     * 
                     */
                    bool DeviceCertificateCnHasBeenSet() const;

                    /**
                     * 获取证书格式，当前仅支持PEM格式
                     * @return Format 证书格式，当前仅支持PEM格式
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
                     * 获取客户端id
                     * @return ClientId 客户端id
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取证书来源    
API：手动注册   
JITP：自动注册
                     * @return CertificateSource 证书来源    
API：手动注册   
JITP：自动注册
                     * 
                     */
                    std::string GetCertificateSource() const;

                    /**
                     * 判断参数 CertificateSource 是否已赋值
                     * @return CertificateSource 是否已赋值
                     * 
                     */
                    bool CertificateSourceHasBeenSet() const;

                    /**
                     * 获取证书生效开始时间，毫秒级时间戳 。
                     * @return NotBeforeTime 证书生效开始时间，毫秒级时间戳 。
                     * 
                     */
                    int64_t GetNotBeforeTime() const;

                    /**
                     * 判断参数 NotBeforeTime 是否已赋值
                     * @return NotBeforeTime 是否已赋值
                     * 
                     */
                    bool NotBeforeTimeHasBeenSet() const;

                    /**
                     * 获取组织单位
                     * @return OrganizationalUnit 组织单位
                     * 
                     */
                    std::string GetOrganizationalUnit() const;

                    /**
                     * 判断参数 OrganizationalUnit 是否已赋值
                     * @return OrganizationalUnit 是否已赋值
                     * 
                     */
                    bool OrganizationalUnitHasBeenSet() const;

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
                     * 证书失效日期，毫秒级时间戳 。
                     */
                    int64_t m_notAfterTime;
                    bool m_notAfterTimeHasBeenSet;

                    /**
                     * 上次激活时间，毫秒级时间戳 。
                     */
                    int64_t m_lastActivationTime;
                    bool m_lastActivationTimeHasBeenSet;

                    /**
                     * 上次取消激活时间，毫秒级时间戳 。
                     */
                    int64_t m_lastInactivationTime;
                    bool m_lastInactivationTimeHasBeenSet;

                    /**
                     * 设备证书的状态
    ACTIVE：激活 
    INACTIVE：未激活
    REVOKED：吊销
    PENDING_ACTIVATION：注册待激活
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Ca证书序列号
                     */
                    std::string m_caSn;
                    bool m_caSnHasBeenSet;

                    /**
                     * 设备证书序列号
                     */
                    std::string m_deviceCertificateSn;
                    bool m_deviceCertificateSnHasBeenSet;

                    /**
                     * 设备证书内容
                     */
                    std::string m_deviceCertificate;
                    bool m_deviceCertificateHasBeenSet;

                    /**
                     * 设备证书common name
                     */
                    std::string m_deviceCertificateCn;
                    bool m_deviceCertificateCnHasBeenSet;

                    /**
                     * 证书格式，当前仅支持PEM格式
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 客户端id
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * 证书来源    
API：手动注册   
JITP：自动注册
                     */
                    std::string m_certificateSource;
                    bool m_certificateSourceHasBeenSet;

                    /**
                     * 证书生效开始时间，毫秒级时间戳 。
                     */
                    int64_t m_notBeforeTime;
                    bool m_notBeforeTimeHasBeenSet;

                    /**
                     * 组织单位
                     */
                    std::string m_organizationalUnit;
                    bool m_organizationalUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEDEVICECERTIFICATERESPONSE_H_
