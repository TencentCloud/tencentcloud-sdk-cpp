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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNBINDIPSTRATEGYREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNBINDIPSTRATEGYREQUEST_H_

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
                * UnBindIPStrategy请求参数结构体
                */
                class UnBindIPStrategyRequest : public AbstractModel
                {
                public:
                    UnBindIPStrategyRequest();
                    ~UnBindIPStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待解绑的服务唯一ID。
                     * @return ServiceId 待解绑的服务唯一ID。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置待解绑的服务唯一ID。
                     * @param _serviceId 待解绑的服务唯一ID。
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
                     * 获取待解绑的IP策略唯一ID。
                     * @return StrategyId 待解绑的IP策略唯一ID。
                     * 
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置待解绑的IP策略唯一ID。
                     * @param _strategyId 待解绑的IP策略唯一ID。
                     * 
                     */
                    void SetStrategyId(const std::string& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取待解绑的环境。
                     * @return EnvironmentName 待解绑的环境。
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置待解绑的环境。
                     * @param _environmentName 待解绑的环境。
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
                     * 获取待解绑的 API 列表。
                     * @return UnBindApiIds 待解绑的 API 列表。
                     * 
                     */
                    std::vector<std::string> GetUnBindApiIds() const;

                    /**
                     * 设置待解绑的 API 列表。
                     * @param _unBindApiIds 待解绑的 API 列表。
                     * 
                     */
                    void SetUnBindApiIds(const std::vector<std::string>& _unBindApiIds);

                    /**
                     * 判断参数 UnBindApiIds 是否已赋值
                     * @return UnBindApiIds 是否已赋值
                     * 
                     */
                    bool UnBindApiIdsHasBeenSet() const;

                private:

                    /**
                     * 待解绑的服务唯一ID。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 待解绑的IP策略唯一ID。
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * 待解绑的环境。
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * 待解绑的 API 列表。
                     */
                    std::vector<std::string> m_unBindApiIds;
                    bool m_unBindApiIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNBINDIPSTRATEGYREQUEST_H_
