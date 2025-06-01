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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYINSTANCECERTBINDINGREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYINSTANCECERTBINDINGREQUEST_H_

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
                * ModifyInstanceCertBinding请求参数结构体
                */
                class ModifyInstanceCertBindingRequest : public AbstractModel
                {
                public:
                    ModifyInstanceCertBindingRequest();
                    ~ModifyInstanceCertBindingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * @return InstanceId 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * @param _instanceId 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取加密通信方式
TLS：单向证书认证
mTLS：双向证书认证
BYOC：一设备一证书认证
                     * @return X509Mode 加密通信方式
TLS：单向证书认证
mTLS：双向证书认证
BYOC：一设备一证书认证
                     * 
                     */
                    std::string GetX509Mode() const;

                    /**
                     * 设置加密通信方式
TLS：单向证书认证
mTLS：双向证书认证
BYOC：一设备一证书认证
                     * @param _x509Mode 加密通信方式
TLS：单向证书认证
mTLS：双向证书认证
BYOC：一设备一证书认证
                     * 
                     */
                    void SetX509Mode(const std::string& _x509Mode);

                    /**
                     * 判断参数 X509Mode 是否已赋值
                     * @return X509Mode 是否已赋值
                     * 
                     */
                    bool X509ModeHasBeenSet() const;

                    /**
                     * 获取服务端证书id，从 [获取证书列表](https://cloud.tencent.com/document/api/400/41671) 或者腾讯云证书服务控制台获取。X509Mode为mTLS或BYOC时为必填。
                     * @return SSLServerCertId 服务端证书id，从 [获取证书列表](https://cloud.tencent.com/document/api/400/41671) 或者腾讯云证书服务控制台获取。X509Mode为mTLS或BYOC时为必填。
                     * 
                     */
                    std::string GetSSLServerCertId() const;

                    /**
                     * 设置服务端证书id，从 [获取证书列表](https://cloud.tencent.com/document/api/400/41671) 或者腾讯云证书服务控制台获取。X509Mode为mTLS或BYOC时为必填。
                     * @param _sSLServerCertId 服务端证书id，从 [获取证书列表](https://cloud.tencent.com/document/api/400/41671) 或者腾讯云证书服务控制台获取。X509Mode为mTLS或BYOC时为必填。
                     * 
                     */
                    void SetSSLServerCertId(const std::string& _sSLServerCertId);

                    /**
                     * 判断参数 SSLServerCertId 是否已赋值
                     * @return SSLServerCertId 是否已赋值
                     * 
                     */
                    bool SSLServerCertIdHasBeenSet() const;

                    /**
                     * 获取CA证书id，从 [获取证书列表](https://cloud.tencent.com/document/api/400/41671) 或者腾讯云证书服务控制台获取。X509Mode为mTLS时为必填
                     * @return SSLCaCertId CA证书id，从 [获取证书列表](https://cloud.tencent.com/document/api/400/41671) 或者腾讯云证书服务控制台获取。X509Mode为mTLS时为必填
                     * 
                     */
                    std::string GetSSLCaCertId() const;

                    /**
                     * 设置CA证书id，从 [获取证书列表](https://cloud.tencent.com/document/api/400/41671) 或者腾讯云证书服务控制台获取。X509Mode为mTLS时为必填
                     * @param _sSLCaCertId CA证书id，从 [获取证书列表](https://cloud.tencent.com/document/api/400/41671) 或者腾讯云证书服务控制台获取。X509Mode为mTLS时为必填
                     * 
                     */
                    void SetSSLCaCertId(const std::string& _sSLCaCertId);

                    /**
                     * 判断参数 SSLCaCertId 是否已赋值
                     * @return SSLCaCertId 是否已赋值
                     * 
                     */
                    bool SSLCaCertIdHasBeenSet() const;

                    /**
                     * 获取设备证书注册类型：
JITP：自动注册；
API：手动注册
默认值：API
                     * @return DeviceCertificateProvisionType 设备证书注册类型：
JITP：自动注册；
API：手动注册
默认值：API
                     * 
                     */
                    std::string GetDeviceCertificateProvisionType() const;

                    /**
                     * 设置设备证书注册类型：
JITP：自动注册；
API：手动注册
默认值：API
                     * @param _deviceCertificateProvisionType 设备证书注册类型：
JITP：自动注册；
API：手动注册
默认值：API
                     * 
                     */
                    void SetDeviceCertificateProvisionType(const std::string& _deviceCertificateProvisionType);

                    /**
                     * 判断参数 DeviceCertificateProvisionType 是否已赋值
                     * @return DeviceCertificateProvisionType 是否已赋值
                     * 
                     */
                    bool DeviceCertificateProvisionTypeHasBeenSet() const;

                    /**
                     * 获取是否自动激活，默认为false
                     * @return AutomaticActivation 是否自动激活，默认为false
                     * 
                     */
                    bool GetAutomaticActivation() const;

                    /**
                     * 设置是否自动激活，默认为false
                     * @param _automaticActivation 是否自动激活，默认为false
                     * 
                     */
                    void SetAutomaticActivation(const bool& _automaticActivation);

                    /**
                     * 判断参数 AutomaticActivation 是否已赋值
                     * @return AutomaticActivation 是否已赋值
                     * 
                     */
                    bool AutomaticActivationHasBeenSet() const;

                private:

                    /**
                     * 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 加密通信方式
TLS：单向证书认证
mTLS：双向证书认证
BYOC：一设备一证书认证
                     */
                    std::string m_x509Mode;
                    bool m_x509ModeHasBeenSet;

                    /**
                     * 服务端证书id，从 [获取证书列表](https://cloud.tencent.com/document/api/400/41671) 或者腾讯云证书服务控制台获取。X509Mode为mTLS或BYOC时为必填。
                     */
                    std::string m_sSLServerCertId;
                    bool m_sSLServerCertIdHasBeenSet;

                    /**
                     * CA证书id，从 [获取证书列表](https://cloud.tencent.com/document/api/400/41671) 或者腾讯云证书服务控制台获取。X509Mode为mTLS时为必填
                     */
                    std::string m_sSLCaCertId;
                    bool m_sSLCaCertIdHasBeenSet;

                    /**
                     * 设备证书注册类型：
JITP：自动注册；
API：手动注册
默认值：API
                     */
                    std::string m_deviceCertificateProvisionType;
                    bool m_deviceCertificateProvisionTypeHasBeenSet;

                    /**
                     * 是否自动激活，默认为false
                     */
                    bool m_automaticActivation;
                    bool m_automaticActivationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYINSTANCECERTBINDINGREQUEST_H_
