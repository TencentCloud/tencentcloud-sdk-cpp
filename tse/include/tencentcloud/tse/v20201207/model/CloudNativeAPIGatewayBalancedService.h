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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYBALANCEDSERVICE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYBALANCEDSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 含百分比流量配置的服务
                */
                class CloudNativeAPIGatewayBalancedService : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayBalancedService();
                    ~CloudNativeAPIGatewayBalancedService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务 ID，作为入参时，必填
                     * @return ServiceID 服务 ID，作为入参时，必填
                     * 
                     */
                    std::string GetServiceID() const;

                    /**
                     * 设置服务 ID，作为入参时，必填
                     * @param _serviceID 服务 ID，作为入参时，必填
                     * 
                     */
                    void SetServiceID(const std::string& _serviceID);

                    /**
                     * 判断参数 ServiceID 是否已赋值
                     * @return ServiceID 是否已赋值
                     * 
                     */
                    bool ServiceIDHasBeenSet() const;

                    /**
                     * 获取服务名称，作为入参时，无意义
                     * @return ServiceName 服务名称，作为入参时，无意义
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务名称，作为入参时，无意义
                     * @param _serviceName 服务名称，作为入参时，无意义
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取Upstream 名称，作为入参时，无意义
                     * @return UpstreamName Upstream 名称，作为入参时，无意义
                     * 
                     */
                    std::string GetUpstreamName() const;

                    /**
                     * 设置Upstream 名称，作为入参时，无意义
                     * @param _upstreamName Upstream 名称，作为入参时，无意义
                     * 
                     */
                    void SetUpstreamName(const std::string& _upstreamName);

                    /**
                     * 判断参数 UpstreamName 是否已赋值
                     * @return UpstreamName 是否已赋值
                     * 
                     */
                    bool UpstreamNameHasBeenSet() const;

                    /**
                     * 获取百分比，10 即 10%，范围0-100
                     * @return Percent 百分比，10 即 10%，范围0-100
                     * 
                     */
                    double GetPercent() const;

                    /**
                     * 设置百分比，10 即 10%，范围0-100
                     * @param _percent 百分比，10 即 10%，范围0-100
                     * 
                     */
                    void SetPercent(const double& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                private:

                    /**
                     * 服务 ID，作为入参时，必填
                     */
                    std::string m_serviceID;
                    bool m_serviceIDHasBeenSet;

                    /**
                     * 服务名称，作为入参时，无意义
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Upstream 名称，作为入参时，无意义
                     */
                    std::string m_upstreamName;
                    bool m_upstreamNameHasBeenSet;

                    /**
                     * 百分比，10 即 10%，范围0-100
                     */
                    double m_percent;
                    bool m_percentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYBALANCEDSERVICE_H_
