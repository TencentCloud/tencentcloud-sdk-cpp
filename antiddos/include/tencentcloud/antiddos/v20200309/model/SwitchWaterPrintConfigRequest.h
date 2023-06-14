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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_SWITCHWATERPRINTCONFIGREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_SWITCHWATERPRINTCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * SwitchWaterPrintConfig请求参数结构体
                */
                class SwitchWaterPrintConfigRequest : public AbstractModel
                {
                public:
                    SwitchWaterPrintConfigRequest();
                    ~SwitchWaterPrintConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源实例ID
                     * @return InstanceId 资源实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置资源实例ID
                     * @param _instanceId 资源实例ID
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
                     * 获取水印开启/关闭状态，1表示开启；0表示关闭
                     * @return OpenStatus 水印开启/关闭状态，1表示开启；0表示关闭
                     * 
                     */
                    int64_t GetOpenStatus() const;

                    /**
                     * 设置水印开启/关闭状态，1表示开启；0表示关闭
                     * @param _openStatus 水印开启/关闭状态，1表示开启；0表示关闭
                     * 
                     */
                    void SetOpenStatus(const int64_t& _openStatus);

                    /**
                     * 判断参数 OpenStatus 是否已赋值
                     * @return OpenStatus 是否已赋值
                     * 
                     */
                    bool OpenStatusHasBeenSet() const;

                    /**
                     * 获取是否开启代理，1开启则忽略IP+端口校验；0关闭则需要IP+端口校验
                     * @return CloudSdkProxy 是否开启代理，1开启则忽略IP+端口校验；0关闭则需要IP+端口校验
                     * 
                     */
                    int64_t GetCloudSdkProxy() const;

                    /**
                     * 设置是否开启代理，1开启则忽略IP+端口校验；0关闭则需要IP+端口校验
                     * @param _cloudSdkProxy 是否开启代理，1开启则忽略IP+端口校验；0关闭则需要IP+端口校验
                     * 
                     */
                    void SetCloudSdkProxy(const int64_t& _cloudSdkProxy);

                    /**
                     * 判断参数 CloudSdkProxy 是否已赋值
                     * @return CloudSdkProxy 是否已赋值
                     * 
                     */
                    bool CloudSdkProxyHasBeenSet() const;

                private:

                    /**
                     * 资源实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 水印开启/关闭状态，1表示开启；0表示关闭
                     */
                    int64_t m_openStatus;
                    bool m_openStatusHasBeenSet;

                    /**
                     * 是否开启代理，1开启则忽略IP+端口校验；0关闭则需要IP+端口校验
                     */
                    int64_t m_cloudSdkProxy;
                    bool m_cloudSdkProxyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_SWITCHWATERPRINTCONFIGREQUEST_H_
