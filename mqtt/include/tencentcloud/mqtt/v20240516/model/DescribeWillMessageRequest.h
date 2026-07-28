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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEWILLMESSAGEREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEWILLMESSAGEREQUEST_H_

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
                * DescribeWillMessage请求参数结构体
                */
                class DescribeWillMessageRequest : public AbstractModel
                {
                public:
                    DescribeWillMessageRequest();
                    ~DescribeWillMessageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * @return InstanceId <p>实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * @param _instanceId <p>实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
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

                private:

                    /**
                     * <p>实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>客户端id</p>
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEWILLMESSAGEREQUEST_H_
