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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DEMOTESERVICEUSAGEPLANREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DEMOTESERVICEUSAGEPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DemoteServiceUsagePlan请求参数结构体
                */
                class DemoteServiceUsagePlanRequest : public AbstractModel
                {
                public:
                    DemoteServiceUsagePlanRequest();
                    ~DemoteServiceUsagePlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取使用计划ID。
                     * @return UsagePlanId 使用计划ID。
                     * 
                     */
                    std::string GetUsagePlanId() const;

                    /**
                     * 设置使用计划ID。
                     * @param _usagePlanId 使用计划ID。
                     * 
                     */
                    void SetUsagePlanId(const std::string& _usagePlanId);

                    /**
                     * 判断参数 UsagePlanId 是否已赋值
                     * @return UsagePlanId 是否已赋值
                     * 
                     */
                    bool UsagePlanIdHasBeenSet() const;

                    /**
                     * 获取待降级的服务唯一 ID。
                     * @return ServiceId 待降级的服务唯一 ID。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置待降级的服务唯一 ID。
                     * @param _serviceId 待降级的服务唯一 ID。
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取环境名称。
                     * @return Environment 环境名称。
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置环境名称。
                     * @param _environment 环境名称。
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                private:

                    /**
                     * 使用计划ID。
                     */
                    std::string m_usagePlanId;
                    bool m_usagePlanIdHasBeenSet;

                    /**
                     * 待降级的服务唯一 ID。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 环境名称。
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DEMOTESERVICEUSAGEPLANREQUEST_H_
