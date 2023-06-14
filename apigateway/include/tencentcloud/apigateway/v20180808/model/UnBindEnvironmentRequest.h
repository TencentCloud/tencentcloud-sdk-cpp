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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNBINDENVIRONMENTREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNBINDENVIRONMENTREQUEST_H_

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
                * UnBindEnvironment请求参数结构体
                */
                class UnBindEnvironmentRequest : public AbstractModel
                {
                public:
                    UnBindEnvironmentRequest();
                    ~UnBindEnvironmentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取绑定类型，取值为 API、SERVICE，默认值为 SERVICE。
                     * @return BindType 绑定类型，取值为 API、SERVICE，默认值为 SERVICE。
                     * 
                     */
                    std::string GetBindType() const;

                    /**
                     * 设置绑定类型，取值为 API、SERVICE，默认值为 SERVICE。
                     * @param _bindType 绑定类型，取值为 API、SERVICE，默认值为 SERVICE。
                     * 
                     */
                    void SetBindType(const std::string& _bindType);

                    /**
                     * 判断参数 BindType 是否已赋值
                     * @return BindType 是否已赋值
                     * 
                     */
                    bool BindTypeHasBeenSet() const;

                    /**
                     * 获取待绑定的使用计划唯一 ID 列表。
                     * @return UsagePlanIds 待绑定的使用计划唯一 ID 列表。
                     * 
                     */
                    std::vector<std::string> GetUsagePlanIds() const;

                    /**
                     * 设置待绑定的使用计划唯一 ID 列表。
                     * @param _usagePlanIds 待绑定的使用计划唯一 ID 列表。
                     * 
                     */
                    void SetUsagePlanIds(const std::vector<std::string>& _usagePlanIds);

                    /**
                     * 判断参数 UsagePlanIds 是否已赋值
                     * @return UsagePlanIds 是否已赋值
                     * 
                     */
                    bool UsagePlanIdsHasBeenSet() const;

                    /**
                     * 获取待解绑的服务环境。
                     * @return Environment 待解绑的服务环境。
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置待解绑的服务环境。
                     * @param _environment 待解绑的服务环境。
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取待解绑的服务唯一 ID。
                     * @return ServiceId 待解绑的服务唯一 ID。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置待解绑的服务唯一 ID。
                     * @param _serviceId 待解绑的服务唯一 ID。
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
                     * 获取API 唯一 ID 数组，当 BindType=API 时，需要传入此参数。
                     * @return ApiIds API 唯一 ID 数组，当 BindType=API 时，需要传入此参数。
                     * 
                     */
                    std::vector<std::string> GetApiIds() const;

                    /**
                     * 设置API 唯一 ID 数组，当 BindType=API 时，需要传入此参数。
                     * @param _apiIds API 唯一 ID 数组，当 BindType=API 时，需要传入此参数。
                     * 
                     */
                    void SetApiIds(const std::vector<std::string>& _apiIds);

                    /**
                     * 判断参数 ApiIds 是否已赋值
                     * @return ApiIds 是否已赋值
                     * 
                     */
                    bool ApiIdsHasBeenSet() const;

                private:

                    /**
                     * 绑定类型，取值为 API、SERVICE，默认值为 SERVICE。
                     */
                    std::string m_bindType;
                    bool m_bindTypeHasBeenSet;

                    /**
                     * 待绑定的使用计划唯一 ID 列表。
                     */
                    std::vector<std::string> m_usagePlanIds;
                    bool m_usagePlanIdsHasBeenSet;

                    /**
                     * 待解绑的服务环境。
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * 待解绑的服务唯一 ID。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * API 唯一 ID 数组，当 BindType=API 时，需要传入此参数。
                     */
                    std::vector<std::string> m_apiIds;
                    bool m_apiIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNBINDENVIRONMENTREQUEST_H_
