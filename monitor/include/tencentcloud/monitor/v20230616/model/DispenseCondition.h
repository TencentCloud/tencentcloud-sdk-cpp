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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_DISPENSECONDITION_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_DISPENSECONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/DispenseFilter.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 转发过滤条件信息
                */
                class DispenseCondition : public AbstractModel
                {
                public:
                    DispenseCondition();
                    ~DispenseCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对外指标名
                     * @return ExtMetric 对外指标名
                     * 
                     */
                    std::string GetExtMetric() const;

                    /**
                     * 设置对外指标名
                     * @param _extMetric 对外指标名
                     * 
                     */
                    void SetExtMetric(const std::string& _extMetric);

                    /**
                     * 判断参数 ExtMetric 是否已赋值
                     * @return ExtMetric 是否已赋值
                     * 
                     */
                    bool ExtMetricHasBeenSet() const;

                    /**
                     * 获取过滤条件表
                     * @return DispenseFilters 过滤条件表
                     * 
                     */
                    std::vector<DispenseFilter> GetDispenseFilters() const;

                    /**
                     * 设置过滤条件表
                     * @param _dispenseFilters 过滤条件表
                     * 
                     */
                    void SetDispenseFilters(const std::vector<DispenseFilter>& _dispenseFilters);

                    /**
                     * 判断参数 DispenseFilters 是否已赋值
                     * @return DispenseFilters 是否已赋值
                     * 
                     */
                    bool DispenseFiltersHasBeenSet() const;

                    /**
                     * 获取过滤条件id
                     * @return ConditionId 过滤条件id
                     * 
                     */
                    int64_t GetConditionId() const;

                    /**
                     * 设置过滤条件id
                     * @param _conditionId 过滤条件id
                     * 
                     */
                    void SetConditionId(const int64_t& _conditionId);

                    /**
                     * 判断参数 ConditionId 是否已赋值
                     * @return ConditionId 是否已赋值
                     * 
                     */
                    bool ConditionIdHasBeenSet() const;

                private:

                    /**
                     * 对外指标名
                     */
                    std::string m_extMetric;
                    bool m_extMetricHasBeenSet;

                    /**
                     * 过滤条件表
                     */
                    std::vector<DispenseFilter> m_dispenseFilters;
                    bool m_dispenseFiltersHasBeenSet;

                    /**
                     * 过滤条件id
                     */
                    int64_t m_conditionId;
                    bool m_conditionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_DISPENSECONDITION_H_
