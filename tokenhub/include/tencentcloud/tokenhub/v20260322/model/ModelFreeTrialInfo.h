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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODELFREETRIALINFO_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODELFREETRIALINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * 模型体验包信息
                */
                class ModelFreeTrialInfo : public AbstractModel
                {
                public:
                    ModelFreeTrialInfo();
                    ~ModelFreeTrialInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取推荐顺序，值越小排序越靠前。为空表示使用模型默认权重。
                     * @return RecommendWeight 推荐顺序，值越小排序越靠前。为空表示使用模型默认权重。
                     * 
                     */
                    int64_t GetRecommendWeight() const;

                    /**
                     * 设置推荐顺序，值越小排序越靠前。为空表示使用模型默认权重。
                     * @param _recommendWeight 推荐顺序，值越小排序越靠前。为空表示使用模型默认权重。
                     * 
                     */
                    void SetRecommendWeight(const int64_t& _recommendWeight);

                    /**
                     * 判断参数 RecommendWeight 是否已赋值
                     * @return RecommendWeight 是否已赋值
                     * 
                     */
                    bool RecommendWeightHasBeenSet() const;

                    /**
                     * 获取体验包容量大小。
                     * @return CapacitySize 体验包容量大小。
                     * 
                     */
                    int64_t GetCapacitySize() const;

                    /**
                     * 设置体验包容量大小。
                     * @param _capacitySize 体验包容量大小。
                     * 
                     */
                    void SetCapacitySize(const int64_t& _capacitySize);

                    /**
                     * 判断参数 CapacitySize 是否已赋值
                     * @return CapacitySize 是否已赋值
                     * 
                     */
                    bool CapacitySizeHasBeenSet() const;

                    /**
                     * 获取容量单位。取值：token。
                     * @return Unit 容量单位。取值：token。
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置容量单位。取值：token。
                     * @param _unit 容量单位。取值：token。
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取有效期天数（如90天）。为空表示不限期。
                     * @return ValidityDays 有效期天数（如90天）。为空表示不限期。
                     * 
                     */
                    int64_t GetValidityDays() const;

                    /**
                     * 设置有效期天数（如90天）。为空表示不限期。
                     * @param _validityDays 有效期天数（如90天）。为空表示不限期。
                     * 
                     */
                    void SetValidityDays(const int64_t& _validityDays);

                    /**
                     * 判断参数 ValidityDays 是否已赋值
                     * @return ValidityDays 是否已赋值
                     * 
                     */
                    bool ValidityDaysHasBeenSet() const;

                private:

                    /**
                     * 推荐顺序，值越小排序越靠前。为空表示使用模型默认权重。
                     */
                    int64_t m_recommendWeight;
                    bool m_recommendWeightHasBeenSet;

                    /**
                     * 体验包容量大小。
                     */
                    int64_t m_capacitySize;
                    bool m_capacitySizeHasBeenSet;

                    /**
                     * 容量单位。取值：token。
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 有效期天数（如90天）。为空表示不限期。
                     */
                    int64_t m_validityDays;
                    bool m_validityDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODELFREETRIALINFO_H_
