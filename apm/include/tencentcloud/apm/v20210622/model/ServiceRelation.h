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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_SERVICERELATION_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_SERVICERELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 应用对应的链路上下游应用集合
                */
                class ServiceRelation : public AbstractModel
                {
                public:
                    ServiceRelation();
                    ~ServiceRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用名
                     * @return ServiceName 应用名
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置应用名
                     * @param _serviceName 应用名
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
                     * 获取上游应用集合
                     * @return UpstreamServices 上游应用集合
                     * 
                     */
                    std::vector<std::string> GetUpstreamServices() const;

                    /**
                     * 设置上游应用集合
                     * @param _upstreamServices 上游应用集合
                     * 
                     */
                    void SetUpstreamServices(const std::vector<std::string>& _upstreamServices);

                    /**
                     * 判断参数 UpstreamServices 是否已赋值
                     * @return UpstreamServices 是否已赋值
                     * 
                     */
                    bool UpstreamServicesHasBeenSet() const;

                    /**
                     * 获取下游应用集合
                     * @return DownstreamServices 下游应用集合
                     * 
                     */
                    std::vector<std::string> GetDownstreamServices() const;

                    /**
                     * 设置下游应用集合
                     * @param _downstreamServices 下游应用集合
                     * 
                     */
                    void SetDownstreamServices(const std::vector<std::string>& _downstreamServices);

                    /**
                     * 判断参数 DownstreamServices 是否已赋值
                     * @return DownstreamServices 是否已赋值
                     * 
                     */
                    bool DownstreamServicesHasBeenSet() const;

                private:

                    /**
                     * 应用名
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 上游应用集合
                     */
                    std::vector<std::string> m_upstreamServices;
                    bool m_upstreamServicesHasBeenSet;

                    /**
                     * 下游应用集合
                     */
                    std::vector<std::string> m_downstreamServices;
                    bool m_downstreamServicesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_SERVICERELATION_H_
