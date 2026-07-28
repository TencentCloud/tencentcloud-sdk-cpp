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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DEVICECERTIFICATEBACKUPHISTORYITEM_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DEVICECERTIFICATEBACKUPHISTORYITEM_H_

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
                * 设备证书信息
                */
                class DeviceCertificateBackupHistoryItem : public AbstractModel
                {
                public:
                    DeviceCertificateBackupHistoryItem();
                    ~DeviceCertificateBackupHistoryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>客户端id</p>
                     * @return ClientId <p>客户端id</p>
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置<p>客户端id</p>
                     * @param _clientId <p>客户端id</p>
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取<p>设备证书</p>
                     * @return DeviceCertificate <p>设备证书</p>
                     * 
                     */
                    std::string GetDeviceCertificate() const;

                    /**
                     * 设置<p>设备证书</p>
                     * @param _deviceCertificate <p>设备证书</p>
                     * 
                     */
                    void SetDeviceCertificate(const std::string& _deviceCertificate);

                    /**
                     * 判断参数 DeviceCertificate 是否已赋值
                     * @return DeviceCertificate 是否已赋值
                     * 
                     */
                    bool DeviceCertificateHasBeenSet() const;

                    /**
                     * 获取<p>设备证书SN序列号，用于唯一标识一个设备证书</p>
                     * @return DeviceCertificateSn <p>设备证书SN序列号，用于唯一标识一个设备证书</p>
                     * 
                     */
                    std::string GetDeviceCertificateSn() const;

                    /**
                     * 设置<p>设备证书SN序列号，用于唯一标识一个设备证书</p>
                     * @param _deviceCertificateSn <p>设备证书SN序列号，用于唯一标识一个设备证书</p>
                     * 
                     */
                    void SetDeviceCertificateSn(const std::string& _deviceCertificateSn);

                    /**
                     * 判断参数 DeviceCertificateSn 是否已赋值
                     * @return DeviceCertificateSn 是否已赋值
                     * 
                     */
                    bool DeviceCertificateSnHasBeenSet() const;

                    /**
                     * 获取<p>设备证书Cn</p>
                     * @return DeviceCertificateCn <p>设备证书Cn</p>
                     * 
                     */
                    std::string GetDeviceCertificateCn() const;

                    /**
                     * 设置<p>设备证书Cn</p>
                     * @param _deviceCertificateCn <p>设备证书Cn</p>
                     * 
                     */
                    void SetDeviceCertificateCn(const std::string& _deviceCertificateCn);

                    /**
                     * 判断参数 DeviceCertificateCn 是否已赋值
                     * @return DeviceCertificateCn 是否已赋值
                     * 
                     */
                    bool DeviceCertificateCnHasBeenSet() const;

                    /**
                     * 获取<p>签发该证书的CA证书的序列号</p>
                     * @return CaSn <p>签发该证书的CA证书的序列号</p>
                     * 
                     */
                    std::string GetCaSn() const;

                    /**
                     * 设置<p>签发该证书的CA证书的序列号</p>
                     * @param _caSn <p>签发该证书的CA证书的序列号</p>
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
                     * 获取<p>证书格式，当前仅支持PEM</p>
                     * @return Format <p>证书格式，当前仅支持PEM</p>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置<p>证书格式，当前仅支持PEM</p>
                     * @param _format <p>证书格式，当前仅支持PEM</p>
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
                     * 获取<p>设备证书状态<br>    ACTIVE：激活<br>    INACTIVE：未激活<br>    REVOKED：吊销<br>    PENDING_ACTIVATION：注册待激活</p>
                     * @return Status <p>设备证书状态<br>    ACTIVE：激活<br>    INACTIVE：未激活<br>    REVOKED：吊销<br>    PENDING_ACTIVATION：注册待激活</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>设备证书状态<br>    ACTIVE：激活<br>    INACTIVE：未激活<br>    REVOKED：吊销<br>    PENDING_ACTIVATION：注册待激活</p>
                     * @param _status <p>设备证书状态<br>    ACTIVE：激活<br>    INACTIVE：未激活<br>    REVOKED：吊销<br>    PENDING_ACTIVATION：注册待激活</p>
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
                     * 获取<p>组织单位</p>
                     * @return OrganizationalUnit <p>组织单位</p>
                     * 
                     */
                    std::string GetOrganizationalUnit() const;

                    /**
                     * 设置<p>组织单位</p>
                     * @param _organizationalUnit <p>组织单位</p>
                     * 
                     */
                    void SetOrganizationalUnit(const std::string& _organizationalUnit);

                    /**
                     * 判断参数 OrganizationalUnit 是否已赋值
                     * @return OrganizationalUnit 是否已赋值
                     * 
                     */
                    bool OrganizationalUnitHasBeenSet() const;

                    /**
                     * 获取<p>上次激活时间，毫秒级时间戳 。</p>
                     * @return LastActivationTime <p>上次激活时间，毫秒级时间戳 。</p>
                     * 
                     */
                    int64_t GetLastActivationTime() const;

                    /**
                     * 设置<p>上次激活时间，毫秒级时间戳 。</p>
                     * @param _lastActivationTime <p>上次激活时间，毫秒级时间戳 。</p>
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
                     * 获取<p>上次取消激活时间，毫秒级时间戳 。</p>
                     * @return LastInactivationTime <p>上次取消激活时间，毫秒级时间戳 。</p>
                     * 
                     */
                    int64_t GetLastInactivationTime() const;

                    /**
                     * 设置<p>上次取消激活时间，毫秒级时间戳 。</p>
                     * @param _lastInactivationTime <p>上次取消激活时间，毫秒级时间戳 。</p>
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
                     * 获取<p>证书来源：<br>API, 手动注册<br>JITP 自动注册</p>
                     * @return CertificateSource <p>证书来源：<br>API, 手动注册<br>JITP 自动注册</p>
                     * 
                     */
                    std::string GetCertificateSource() const;

                    /**
                     * 设置<p>证书来源：<br>API, 手动注册<br>JITP 自动注册</p>
                     * @param _certificateSource <p>证书来源：<br>API, 手动注册<br>JITP 自动注册</p>
                     * 
                     */
                    void SetCertificateSource(const std::string& _certificateSource);

                    /**
                     * 判断参数 CertificateSource 是否已赋值
                     * @return CertificateSource 是否已赋值
                     * 
                     */
                    bool CertificateSourceHasBeenSet() const;

                    /**
                     * 获取<p>证书失效日期，毫秒级时间戳 。</p>
                     * @return NotAfterTime <p>证书失效日期，毫秒级时间戳 。</p>
                     * 
                     */
                    int64_t GetNotAfterTime() const;

                    /**
                     * 设置<p>证书失效日期，毫秒级时间戳 。</p>
                     * @param _notAfterTime <p>证书失效日期，毫秒级时间戳 。</p>
                     * 
                     */
                    void SetNotAfterTime(const int64_t& _notAfterTime);

                    /**
                     * 判断参数 NotAfterTime 是否已赋值
                     * @return NotAfterTime 是否已赋值
                     * 
                     */
                    bool NotAfterTimeHasBeenSet() const;

                    /**
                     * 获取<p>证书生效开始日期，毫秒级时间戳 。</p>
                     * @return NotBeforeTime <p>证书生效开始日期，毫秒级时间戳 。</p>
                     * 
                     */
                    int64_t GetNotBeforeTime() const;

                    /**
                     * 设置<p>证书生效开始日期，毫秒级时间戳 。</p>
                     * @param _notBeforeTime <p>证书生效开始日期，毫秒级时间戳 。</p>
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
                     * 获取<p>数据来源</p>
                     * @return Source <p>数据来源</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>数据来源</p>
                     * @param _source <p>数据来源</p>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>修改时间</p><p>单位：毫秒级时间戳</p>
                     * @return ModificationTime <p>修改时间</p><p>单位：毫秒级时间戳</p>
                     * 
                     */
                    int64_t GetModificationTime() const;

                    /**
                     * 设置<p>修改时间</p><p>单位：毫秒级时间戳</p>
                     * @param _modificationTime <p>修改时间</p><p>单位：毫秒级时间戳</p>
                     * 
                     */
                    void SetModificationTime(const int64_t& _modificationTime);

                    /**
                     * 判断参数 ModificationTime 是否已赋值
                     * @return ModificationTime 是否已赋值
                     * 
                     */
                    bool ModificationTimeHasBeenSet() const;

                private:

                    /**
                     * <p>客户端id</p>
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * <p>设备证书</p>
                     */
                    std::string m_deviceCertificate;
                    bool m_deviceCertificateHasBeenSet;

                    /**
                     * <p>设备证书SN序列号，用于唯一标识一个设备证书</p>
                     */
                    std::string m_deviceCertificateSn;
                    bool m_deviceCertificateSnHasBeenSet;

                    /**
                     * <p>设备证书Cn</p>
                     */
                    std::string m_deviceCertificateCn;
                    bool m_deviceCertificateCnHasBeenSet;

                    /**
                     * <p>签发该证书的CA证书的序列号</p>
                     */
                    std::string m_caSn;
                    bool m_caSnHasBeenSet;

                    /**
                     * <p>证书格式，当前仅支持PEM</p>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * <p>设备证书状态<br>    ACTIVE：激活<br>    INACTIVE：未激活<br>    REVOKED：吊销<br>    PENDING_ACTIVATION：注册待激活</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>组织单位</p>
                     */
                    std::string m_organizationalUnit;
                    bool m_organizationalUnitHasBeenSet;

                    /**
                     * <p>上次激活时间，毫秒级时间戳 。</p>
                     */
                    int64_t m_lastActivationTime;
                    bool m_lastActivationTimeHasBeenSet;

                    /**
                     * <p>上次取消激活时间，毫秒级时间戳 。</p>
                     */
                    int64_t m_lastInactivationTime;
                    bool m_lastInactivationTimeHasBeenSet;

                    /**
                     * <p>证书来源：<br>API, 手动注册<br>JITP 自动注册</p>
                     */
                    std::string m_certificateSource;
                    bool m_certificateSourceHasBeenSet;

                    /**
                     * <p>证书失效日期，毫秒级时间戳 。</p>
                     */
                    int64_t m_notAfterTime;
                    bool m_notAfterTimeHasBeenSet;

                    /**
                     * <p>证书生效开始日期，毫秒级时间戳 。</p>
                     */
                    int64_t m_notBeforeTime;
                    bool m_notBeforeTimeHasBeenSet;

                    /**
                     * <p>数据来源</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>修改时间</p><p>单位：毫秒级时间戳</p>
                     */
                    int64_t m_modificationTime;
                    bool m_modificationTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DEVICECERTIFICATEBACKUPHISTORYITEM_H_
