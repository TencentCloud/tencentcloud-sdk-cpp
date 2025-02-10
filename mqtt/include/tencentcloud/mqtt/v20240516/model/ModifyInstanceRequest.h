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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYINSTANCEREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYINSTANCEREQUEST_H_

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
                * ModifyInstance请求参数结构体
                */
                class ModifyInstanceRequest : public AbstractModel
                {
                public:
                    ModifyInstanceRequest();
                    ~ModifyInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取要修改实例名称
                     * @return Name 要修改实例名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置要修改实例名称
                     * @param _name 要修改实例名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取要修改的备注信息
                     * @return Remark 要修改的备注信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置要修改的备注信息
                     * @param _remark 要修改的备注信息
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取要变更的配置规格
                     * @return SkuCode 要变更的配置规格
                     * 
                     */
                    std::string GetSkuCode() const;

                    /**
                     * 设置要变更的配置规格
                     * @param _skuCode 要变更的配置规格
                     * 
                     */
                    void SetSkuCode(const std::string& _skuCode);

                    /**
                     * 判断参数 SkuCode 是否已赋值
                     * @return SkuCode 是否已赋值
                     * 
                     */
                    bool SkuCodeHasBeenSet() const;

                    /**
                     * 获取客户端证书注册方式：
JITP：自动注册
API：手动通过API注册
                     * @return DeviceCertificateProvisionType 客户端证书注册方式：
JITP：自动注册
API：手动通过API注册
                     * 
                     */
                    std::string GetDeviceCertificateProvisionType() const;

                    /**
                     * 设置客户端证书注册方式：
JITP：自动注册
API：手动通过API注册
                     * @param _deviceCertificateProvisionType 客户端证书注册方式：
JITP：自动注册
API：手动通过API注册
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
                     * 获取自动注册证书是否自动激活
                     * @return AutomaticActivation 自动注册证书是否自动激活
                     * 
                     */
                    bool GetAutomaticActivation() const;

                    /**
                     * 设置自动注册证书是否自动激活
                     * @param _automaticActivation 自动注册证书是否自动激活
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
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 要修改实例名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 要修改的备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 要变更的配置规格
                     */
                    std::string m_skuCode;
                    bool m_skuCodeHasBeenSet;

                    /**
                     * 客户端证书注册方式：
JITP：自动注册
API：手动通过API注册
                     */
                    std::string m_deviceCertificateProvisionType;
                    bool m_deviceCertificateProvisionTypeHasBeenSet;

                    /**
                     * 自动注册证书是否自动激活
                     */
                    bool m_automaticActivation;
                    bool m_automaticActivationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYINSTANCEREQUEST_H_
