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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBILLINGSPECSREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBILLINGSPECSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeBillingSpecs请求参数结构体
                */
                class DescribeBillingSpecsRequest : public AbstractModel
                {
                public:
                    DescribeBillingSpecsRequest();
                    ~DescribeBillingSpecsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取枚举值：TRAIN、NOTEBOOK、INFERENCE
                     * @return TaskType 枚举值：TRAIN、NOTEBOOK、INFERENCE
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置枚举值：TRAIN、NOTEBOOK、INFERENCE
                     * @param TaskType 枚举值：TRAIN、NOTEBOOK、INFERENCE
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取付费模式：POSTPAID_BY_HOUR按量计费、PREPAID包年包月
                     * @return ChargeType 付费模式：POSTPAID_BY_HOUR按量计费、PREPAID包年包月
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置付费模式：POSTPAID_BY_HOUR按量计费、PREPAID包年包月
                     * @param ChargeType 付费模式：POSTPAID_BY_HOUR按量计费、PREPAID包年包月
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取资源类型：CALC 计算资源、CPU CPU资源、GPU GPU资源、CBS云硬盘
                     * @return ResourceType 资源类型：CALC 计算资源、CPU CPU资源、GPU GPU资源、CBS云硬盘
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型：CALC 计算资源、CPU CPU资源、GPU GPU资源、CBS云硬盘
                     * @param ResourceType 资源类型：CALC 计算资源、CPU CPU资源、GPU GPU资源、CBS云硬盘
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     */
                    bool ResourceTypeHasBeenSet() const;

                private:

                    /**
                     * 枚举值：TRAIN、NOTEBOOK、INFERENCE
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 付费模式：POSTPAID_BY_HOUR按量计费、PREPAID包年包月
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 资源类型：CALC 计算资源、CPU CPU资源、GPU GPU资源、CBS云硬盘
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBILLINGSPECSREQUEST_H_
