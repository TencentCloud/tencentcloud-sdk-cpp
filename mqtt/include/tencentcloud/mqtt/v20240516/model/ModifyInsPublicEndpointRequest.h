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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYINSPUBLICENDPOINTREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYINSPUBLICENDPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mqtt/v20240516/model/PublicAccessRule.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * ModifyInsPublicEndpoint请求参数结构体
                */
                class ModifyInsPublicEndpointRequest : public AbstractModel
                {
                public:
                    ModifyInsPublicEndpointRequest();
                    ~ModifyInsPublicEndpointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * @return InstanceId <p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * @param _instanceId <p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
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
                     * 获取<p>带宽，单位：Mbps</p>
                     * @return Bandwidth <p>带宽，单位：Mbps</p>
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置<p>带宽，单位：Mbps</p>
                     * @param _bandwidth <p>带宽，单位：Mbps</p>
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取<p>公网访问规则</p>
                     * @return Rules <p>公网访问规则</p>
                     * 
                     */
                    std::vector<PublicAccessRule> GetRules() const;

                    /**
                     * 设置<p>公网访问规则</p>
                     * @param _rules <p>公网访问规则</p>
                     * 
                     */
                    void SetRules(const std::vector<PublicAccessRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * <p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>带宽，单位：Mbps</p>
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * <p>公网访问规则</p>
                     */
                    std::vector<PublicAccessRule> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYINSPUBLICENDPOINTREQUEST_H_
