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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESCHEDULEDSCALINGEFFECTIVERANGE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESCHEDULEDSCALINGEFFECTIVERANGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 边缘推理定时伸缩有效期范围配置。
                */
                class InferenceScheduledScalingEffectiveRange : public AbstractModel
                {
                public:
                    InferenceScheduledScalingEffectiveRange();
                    ~InferenceScheduledScalingEffectiveRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>有效期类型。取值有：<li>LongTerm：长期有效；</li><li>Custom：自定义起止日期。</li></p>
                     * @return EffectiveType <p>有效期类型。取值有：<li>LongTerm：长期有效；</li><li>Custom：自定义起止日期。</li></p>
                     * 
                     */
                    std::string GetEffectiveType() const;

                    /**
                     * 设置<p>有效期类型。取值有：<li>LongTerm：长期有效；</li><li>Custom：自定义起止日期。</li></p>
                     * @param _effectiveType <p>有效期类型。取值有：<li>LongTerm：长期有效；</li><li>Custom：自定义起止日期。</li></p>
                     * 
                     */
                    void SetEffectiveType(const std::string& _effectiveType);

                    /**
                     * 判断参数 EffectiveType 是否已赋值
                     * @return EffectiveType 是否已赋值
                     * 
                     */
                    bool EffectiveTypeHasBeenSet() const;

                    /**
                     * 获取<p>有效期起始日期。当 EffectiveType 为 Custom 时必填；当 EffectiveType 为 LongTerm 时不传该字段。</p>
                     * @return StartDate <p>有效期起始日期。当 EffectiveType 为 Custom 时必填；当 EffectiveType 为 LongTerm 时不传该字段。</p>
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置<p>有效期起始日期。当 EffectiveType 为 Custom 时必填；当 EffectiveType 为 LongTerm 时不传该字段。</p>
                     * @param _startDate <p>有效期起始日期。当 EffectiveType 为 Custom 时必填；当 EffectiveType 为 LongTerm 时不传该字段。</p>
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取<p>有效期终止日期。当 EffectiveType 为 Custom 时必填，且不得早于 StartDate；当 EffectiveType 为 LongTerm 时不传该字段。</p>
                     * @return EndDate <p>有效期终止日期。当 EffectiveType 为 Custom 时必填，且不得早于 StartDate；当 EffectiveType 为 LongTerm 时不传该字段。</p>
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置<p>有效期终止日期。当 EffectiveType 为 Custom 时必填，且不得早于 StartDate；当 EffectiveType 为 LongTerm 时不传该字段。</p>
                     * @param _endDate <p>有效期终止日期。当 EffectiveType 为 Custom 时必填，且不得早于 StartDate；当 EffectiveType 为 LongTerm 时不传该字段。</p>
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                private:

                    /**
                     * <p>有效期类型。取值有：<li>LongTerm：长期有效；</li><li>Custom：自定义起止日期。</li></p>
                     */
                    std::string m_effectiveType;
                    bool m_effectiveTypeHasBeenSet;

                    /**
                     * <p>有效期起始日期。当 EffectiveType 为 Custom 时必填；当 EffectiveType 为 LongTerm 时不传该字段。</p>
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * <p>有效期终止日期。当 EffectiveType 为 Custom 时必填，且不得早于 StartDate；当 EffectiveType 为 LongTerm 时不传该字段。</p>
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCESCHEDULEDSCALINGEFFECTIVERANGE_H_
