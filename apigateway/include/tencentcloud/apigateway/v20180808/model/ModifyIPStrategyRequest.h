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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYIPSTRATEGYREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYIPSTRATEGYREQUEST_H_

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
                * ModifyIPStrategy请求参数结构体
                */
                class ModifyIPStrategyRequest : public AbstractModel
                {
                public:
                    ModifyIPStrategyRequest();
                    ~ModifyIPStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待修改的策略所属服务的唯一ID。
                     * @return ServiceId 待修改的策略所属服务的唯一ID。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置待修改的策略所属服务的唯一ID。
                     * @param _serviceId 待修改的策略所属服务的唯一ID。
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
                     * 获取待修改的策略唯一ID。
                     * @return StrategyId 待修改的策略唯一ID。
                     * 
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置待修改的策略唯一ID。
                     * @param _strategyId 待修改的策略唯一ID。
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
                     * 获取待修改的策略详情。
                     * @return StrategyData 待修改的策略详情。
                     * 
                     */
                    std::string GetStrategyData() const;

                    /**
                     * 设置待修改的策略详情。
                     * @param _strategyData 待修改的策略详情。
                     * 
                     */
                    void SetStrategyData(const std::string& _strategyData);

                    /**
                     * 判断参数 StrategyData 是否已赋值
                     * @return StrategyData 是否已赋值
                     * 
                     */
                    bool StrategyDataHasBeenSet() const;

                private:

                    /**
                     * 待修改的策略所属服务的唯一ID。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 待修改的策略唯一ID。
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * 待修改的策略详情。
                     */
                    std::string m_strategyData;
                    bool m_strategyDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYIPSTRATEGYREQUEST_H_
