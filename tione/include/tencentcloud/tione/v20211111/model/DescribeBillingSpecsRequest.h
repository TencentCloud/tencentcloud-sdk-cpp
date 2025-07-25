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
                     * 获取付费模式：POSTPAID_BY_HOUR按量计费、PREPAID包年包月
                     * @return ChargeType 付费模式：POSTPAID_BY_HOUR按量计费、PREPAID包年包月
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置付费模式：POSTPAID_BY_HOUR按量计费、PREPAID包年包月
                     * @param _chargeType 付费模式：POSTPAID_BY_HOUR按量计费、PREPAID包年包月
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取枚举值：空、TRAIN、NOTEBOOK、INFERENCE或EMS
                     * @return TaskType 枚举值：空、TRAIN、NOTEBOOK、INFERENCE或EMS
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置枚举值：空、TRAIN、NOTEBOOK、INFERENCE或EMS
                     * @param _taskType 枚举值：空、TRAIN、NOTEBOOK、INFERENCE或EMS
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取资源类型：["", "CALC", "CPU", "GPU", "GPU-SW"]
                     * @return ResourceType 资源类型：["", "CALC", "CPU", "GPU", "GPU-SW"]
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型：["", "CALC", "CPU", "GPU", "GPU-SW"]
                     * @param _resourceType 资源类型：["", "CALC", "CPU", "GPU", "GPU-SW"]
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                private:

                    /**
                     * 付费模式：POSTPAID_BY_HOUR按量计费、PREPAID包年包月
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 枚举值：空、TRAIN、NOTEBOOK、INFERENCE或EMS
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 资源类型：["", "CALC", "CPU", "GPU", "GPU-SW"]
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBILLINGSPECSREQUEST_H_
