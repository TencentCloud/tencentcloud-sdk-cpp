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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEWAFPROTECTIONRESULT_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEWAFPROTECTIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/ServiceWafStatus.h>
#include <tencentcloud/tse/v20201207/model/RouteWafStatus.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 获取WAF保护资源状态
                */
                class DescribeWafProtectionResult : public AbstractModel
                {
                public:
                    DescribeWafProtectionResult();
                    ~DescribeWafProtectionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取全局防护状态
                     * @return GlobalStatus 全局防护状态
                     * 
                     */
                    std::string GetGlobalStatus() const;

                    /**
                     * 设置全局防护状态
                     * @param _globalStatus 全局防护状态
                     * 
                     */
                    void SetGlobalStatus(const std::string& _globalStatus);

                    /**
                     * 判断参数 GlobalStatus 是否已赋值
                     * @return GlobalStatus 是否已赋值
                     * 
                     */
                    bool GlobalStatusHasBeenSet() const;

                    /**
                     * 获取服务防护状态
                     * @return ServicesStatus 服务防护状态
                     * 
                     */
                    std::vector<ServiceWafStatus> GetServicesStatus() const;

                    /**
                     * 设置服务防护状态
                     * @param _servicesStatus 服务防护状态
                     * 
                     */
                    void SetServicesStatus(const std::vector<ServiceWafStatus>& _servicesStatus);

                    /**
                     * 判断参数 ServicesStatus 是否已赋值
                     * @return ServicesStatus 是否已赋值
                     * 
                     */
                    bool ServicesStatusHasBeenSet() const;

                    /**
                     * 获取路由防护状态
                     * @return RouteStatus 路由防护状态
                     * 
                     */
                    std::vector<RouteWafStatus> GetRouteStatus() const;

                    /**
                     * 设置路由防护状态
                     * @param _routeStatus 路由防护状态
                     * 
                     */
                    void SetRouteStatus(const std::vector<RouteWafStatus>& _routeStatus);

                    /**
                     * 判断参数 RouteStatus 是否已赋值
                     * @return RouteStatus 是否已赋值
                     * 
                     */
                    bool RouteStatusHasBeenSet() const;

                    /**
                     * 获取对象防护状态
                     * @return ObjectStatus 对象防护状态
                     * 
                     */
                    std::string GetObjectStatus() const;

                    /**
                     * 设置对象防护状态
                     * @param _objectStatus 对象防护状态
                     * 
                     */
                    void SetObjectStatus(const std::string& _objectStatus);

                    /**
                     * 判断参数 ObjectStatus 是否已赋值
                     * @return ObjectStatus 是否已赋值
                     * 
                     */
                    bool ObjectStatusHasBeenSet() const;

                private:

                    /**
                     * 全局防护状态
                     */
                    std::string m_globalStatus;
                    bool m_globalStatusHasBeenSet;

                    /**
                     * 服务防护状态
                     */
                    std::vector<ServiceWafStatus> m_servicesStatus;
                    bool m_servicesStatusHasBeenSet;

                    /**
                     * 路由防护状态
                     */
                    std::vector<RouteWafStatus> m_routeStatus;
                    bool m_routeStatusHasBeenSet;

                    /**
                     * 对象防护状态
                     */
                    std::string m_objectStatus;
                    bool m_objectStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEWAFPROTECTIONRESULT_H_
