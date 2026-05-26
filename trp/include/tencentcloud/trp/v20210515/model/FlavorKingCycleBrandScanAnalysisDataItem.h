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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_FLAVORKINGCYCLEBRANDSCANANALYSISDATAITEM_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_FLAVORKINGCYCLEBRANDSCANANALYSISDATAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * 品牌扫码数据
                */
                class FlavorKingCycleBrandScanAnalysisDataItem : public AbstractModel
                {
                public:
                    FlavorKingCycleBrandScanAnalysisDataItem();
                    ~FlavorKingCycleBrandScanAnalysisDataItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>周期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration <p>周期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置<p>周期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration <p>周期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取<p>品牌</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BrandName <p>品牌</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBrandName() const;

                    /**
                     * 设置<p>品牌</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _brandName <p>品牌</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBrandName(const std::string& _brandName);

                    /**
                     * 判断参数 BrandName 是否已赋值
                     * @return BrandName 是否已赋值
                     * 
                     */
                    bool BrandNameHasBeenSet() const;

                    /**
                     * 获取<p>品牌占比</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ratio <p>品牌占比</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetRatio() const;

                    /**
                     * 设置<p>品牌占比</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ratio <p>品牌占比</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRatio(const double& _ratio);

                    /**
                     * 判断参数 Ratio 是否已赋值
                     * @return Ratio 是否已赋值
                     * 
                     */
                    bool RatioHasBeenSet() const;

                private:

                    /**
                     * <p>周期时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>品牌</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_brandName;
                    bool m_brandNameHasBeenSet;

                    /**
                     * <p>品牌占比</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_ratio;
                    bool m_ratioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_FLAVORKINGCYCLEBRANDSCANANALYSISDATAITEM_H_
