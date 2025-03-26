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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DELETECACERTIFICATEREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DELETECACERTIFICATEREQUEST_H_

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
                * DeleteCaCertificate请求参数结构体
                */
                class DeleteCaCertificateRequest : public AbstractModel
                {
                public:
                    DeleteCaCertificateRequest();
                    ~DeleteCaCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * @return InstanceId 实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * @param _instanceId 实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
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
                     * 获取CA证书序列号，可以从 [DescribeCaCertificates](https://cloud.tencent.com/document/api/1778/116206)接口、控制台、证书文件中获得。
                     * @return CaSn CA证书序列号，可以从 [DescribeCaCertificates](https://cloud.tencent.com/document/api/1778/116206)接口、控制台、证书文件中获得。
                     * 
                     */
                    std::string GetCaSn() const;

                    /**
                     * 设置CA证书序列号，可以从 [DescribeCaCertificates](https://cloud.tencent.com/document/api/1778/116206)接口、控制台、证书文件中获得。
                     * @param _caSn CA证书序列号，可以从 [DescribeCaCertificates](https://cloud.tencent.com/document/api/1778/116206)接口、控制台、证书文件中获得。
                     * 
                     */
                    void SetCaSn(const std::string& _caSn);

                    /**
                     * 判断参数 CaSn 是否已赋值
                     * @return CaSn 是否已赋值
                     * 
                     */
                    bool CaSnHasBeenSet() const;

                private:

                    /**
                     * 实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * CA证书序列号，可以从 [DescribeCaCertificates](https://cloud.tencent.com/document/api/1778/116206)接口、控制台、证书文件中获得。
                     */
                    std::string m_caSn;
                    bool m_caSnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DELETECACERTIFICATEREQUEST_H_
