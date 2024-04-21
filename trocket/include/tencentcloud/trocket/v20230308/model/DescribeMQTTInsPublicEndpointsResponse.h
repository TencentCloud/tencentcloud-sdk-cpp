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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMQTTINSPUBLICENDPOINTSRESPONSE_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMQTTINSPUBLICENDPOINTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/MQTTEndpointItem.h>
#include <tencentcloud/trocket/v20230308/model/PublicAccessRule.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DescribeMQTTInsPublicEndpoints返回参数结构体
                */
                class DescribeMQTTInsPublicEndpointsResponse : public AbstractModel
                {
                public:
                    DescribeMQTTInsPublicEndpointsResponse();
                    ~DescribeMQTTInsPublicEndpointsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取接入点
                     * @return Endpoints 接入点
                     * 
                     */
                    std::vector<MQTTEndpointItem> GetEndpoints() const;

                    /**
                     * 判断参数 Endpoints 是否已赋值
                     * @return Endpoints 是否已赋值
                     * 
                     */
                    bool EndpointsHasBeenSet() const;

                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取带宽
                     * @return Bandwidth 带宽
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取公网访问规则
                     * @return Rules 公网访问规则
                     * 
                     */
                    std::vector<PublicAccessRule> GetRules() const;

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取公网状态：
    NORMAL-正常
    CLOSING-关闭中
    MODIFYING-修改中
    CREATING-开启中
    CLOSE-关闭
                     * @return Status 公网状态：
    NORMAL-正常
    CLOSING-关闭中
    MODIFYING-修改中
    CREATING-开启中
    CLOSE-关闭
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 接入点
                     */
                    std::vector<MQTTEndpointItem> m_endpoints;
                    bool m_endpointsHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 带宽
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 公网访问规则
                     */
                    std::vector<PublicAccessRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 公网状态：
    NORMAL-正常
    CLOSING-关闭中
    MODIFYING-修改中
    CREATING-开启中
    CLOSE-关闭
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMQTTINSPUBLICENDPOINTSRESPONSE_H_
