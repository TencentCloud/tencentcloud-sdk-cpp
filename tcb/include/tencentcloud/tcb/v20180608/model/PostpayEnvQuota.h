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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_POSTPAYENVQUOTA_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_POSTPAYENVQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 按量付费免费配额信息
                */
                class PostpayEnvQuota : public AbstractModel
                {
                public:
                    PostpayEnvQuota();
                    ~PostpayEnvQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源类型
                     * @return ResourceType 资源类型
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型
                     * @param _resourceType 资源类型
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取指标名
                     * @return MetricName 指标名
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名
                     * @param _metricName 指标名
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取配额值
                     * @return Value 配额值
                     * 
                     */
                    uint64_t GetValue() const;

                    /**
                     * 设置配额值
                     * @param _value 配额值
                     * 
                     */
                    void SetValue(const uint64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取配额生效时间
为空表示没有时间限制
                     * @return StartTime 配额生效时间
为空表示没有时间限制
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置配额生效时间
为空表示没有时间限制
                     * @param _startTime 配额生效时间
为空表示没有时间限制
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取配额失效时间
为空表示没有时间限制
                     * @return EndTime 配额失效时间
为空表示没有时间限制
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置配额失效时间
为空表示没有时间限制
                     * @param _endTime 配额失效时间
为空表示没有时间限制
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 资源类型
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 指标名
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 配额值
                     */
                    uint64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 配额生效时间
为空表示没有时间限制
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 配额失效时间
为空表示没有时间限制
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_POSTPAYENVQUOTA_H_
