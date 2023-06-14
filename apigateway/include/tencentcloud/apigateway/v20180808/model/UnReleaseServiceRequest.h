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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNRELEASESERVICEREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNRELEASESERVICEREQUEST_H_

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
                * UnReleaseService请求参数结构体
                */
                class UnReleaseServiceRequest : public AbstractModel
                {
                public:
                    UnReleaseServiceRequest();
                    ~UnReleaseServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待下线服务的唯一 ID。
                     * @return ServiceId 待下线服务的唯一 ID。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置待下线服务的唯一 ID。
                     * @param _serviceId 待下线服务的唯一 ID。
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
                     * 获取待下线的环境名称，当前支持三个环境，test（测试环境）、prepub（预发布环境）和 release（发布环境）。
                     * @return EnvironmentName 待下线的环境名称，当前支持三个环境，test（测试环境）、prepub（预发布环境）和 release（发布环境）。
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置待下线的环境名称，当前支持三个环境，test（测试环境）、prepub（预发布环境）和 release（发布环境）。
                     * @param _environmentName 待下线的环境名称，当前支持三个环境，test（测试环境）、prepub（预发布环境）和 release（发布环境）。
                     * 
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     * 
                     */
                    bool EnvironmentNameHasBeenSet() const;

                    /**
                     * 获取保留字段，待下线的API列表。
                     * @return ApiIds 保留字段，待下线的API列表。
                     * 
                     */
                    std::vector<std::string> GetApiIds() const;

                    /**
                     * 设置保留字段，待下线的API列表。
                     * @param _apiIds 保留字段，待下线的API列表。
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
                     * 待下线服务的唯一 ID。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 待下线的环境名称，当前支持三个环境，test（测试环境）、prepub（预发布环境）和 release（发布环境）。
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * 保留字段，待下线的API列表。
                     */
                    std::vector<std::string> m_apiIds;
                    bool m_apiIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNRELEASESERVICEREQUEST_H_
