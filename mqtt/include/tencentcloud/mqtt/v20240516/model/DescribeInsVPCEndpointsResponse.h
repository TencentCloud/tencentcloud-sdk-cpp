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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEINSVPCENDPOINTSRESPONSE_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEINSVPCENDPOINTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mqtt/v20240516/model/MQTTEndpointItem.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * DescribeInsVPCEndpoints返回参数结构体
                */
                class DescribeInsVPCEndpointsResponse : public AbstractModel
                {
                public:
                    DescribeInsVPCEndpointsResponse();
                    ~DescribeInsVPCEndpointsResponse() = default;
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

                private:

                    /**
                     * 接入点
                     */
                    std::vector<MQTTEndpointItem> m_endpoints;
                    bool m_endpointsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEINSVPCENDPOINTSRESPONSE_H_
