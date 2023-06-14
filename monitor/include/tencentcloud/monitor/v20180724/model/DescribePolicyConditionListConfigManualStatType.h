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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTCONFIGMANUALSTATTYPE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTCONFIGMANUALSTATTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePolicyConditionList.ConfigManual.StatType
                */
                class DescribePolicyConditionListConfigManualStatType : public AbstractModel
                {
                public:
                    DescribePolicyConditionListConfigManualStatType();
                    ~DescribePolicyConditionListConfigManualStatType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据聚合方式，周期5秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return P5 数据聚合方式，周期5秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetP5() const;

                    /**
                     * 设置数据聚合方式，周期5秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _p5 数据聚合方式，周期5秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetP5(const std::string& _p5);

                    /**
                     * 判断参数 P5 是否已赋值
                     * @return P5 是否已赋值
                     * 
                     */
                    bool P5HasBeenSet() const;

                    /**
                     * 获取数据聚合方式，周期10秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return P10 数据聚合方式，周期10秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetP10() const;

                    /**
                     * 设置数据聚合方式，周期10秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _p10 数据聚合方式，周期10秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetP10(const std::string& _p10);

                    /**
                     * 判断参数 P10 是否已赋值
                     * @return P10 是否已赋值
                     * 
                     */
                    bool P10HasBeenSet() const;

                    /**
                     * 获取数据聚合方式，周期1分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @return P60 数据聚合方式，周期1分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetP60() const;

                    /**
                     * 设置数据聚合方式，周期1分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _p60 数据聚合方式，周期1分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetP60(const std::string& _p60);

                    /**
                     * 判断参数 P60 是否已赋值
                     * @return P60 是否已赋值
                     * 
                     */
                    bool P60HasBeenSet() const;

                    /**
                     * 获取数据聚合方式，周期5分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @return P300 数据聚合方式，周期5分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetP300() const;

                    /**
                     * 设置数据聚合方式，周期5分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _p300 数据聚合方式，周期5分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetP300(const std::string& _p300);

                    /**
                     * 判断参数 P300 是否已赋值
                     * @return P300 是否已赋值
                     * 
                     */
                    bool P300HasBeenSet() const;

                    /**
                     * 获取数据聚合方式，周期10分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @return P600 数据聚合方式，周期10分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetP600() const;

                    /**
                     * 设置数据聚合方式，周期10分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _p600 数据聚合方式，周期10分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetP600(const std::string& _p600);

                    /**
                     * 判断参数 P600 是否已赋值
                     * @return P600 是否已赋值
                     * 
                     */
                    bool P600HasBeenSet() const;

                    /**
                     * 获取数据聚合方式，周期30分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @return P1800 数据聚合方式，周期30分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetP1800() const;

                    /**
                     * 设置数据聚合方式，周期30分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _p1800 数据聚合方式，周期30分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetP1800(const std::string& _p1800);

                    /**
                     * 判断参数 P1800 是否已赋值
                     * @return P1800 是否已赋值
                     * 
                     */
                    bool P1800HasBeenSet() const;

                    /**
                     * 获取数据聚合方式，周期1小时
注意：此字段可能返回 null，表示取不到有效值。
                     * @return P3600 数据聚合方式，周期1小时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetP3600() const;

                    /**
                     * 设置数据聚合方式，周期1小时
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _p3600 数据聚合方式，周期1小时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetP3600(const std::string& _p3600);

                    /**
                     * 判断参数 P3600 是否已赋值
                     * @return P3600 是否已赋值
                     * 
                     */
                    bool P3600HasBeenSet() const;

                    /**
                     * 获取数据聚合方式，周期1天
注意：此字段可能返回 null，表示取不到有效值。
                     * @return P86400 数据聚合方式，周期1天
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetP86400() const;

                    /**
                     * 设置数据聚合方式，周期1天
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _p86400 数据聚合方式，周期1天
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetP86400(const std::string& _p86400);

                    /**
                     * 判断参数 P86400 是否已赋值
                     * @return P86400 是否已赋值
                     * 
                     */
                    bool P86400HasBeenSet() const;

                private:

                    /**
                     * 数据聚合方式，周期5秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_p5;
                    bool m_p5HasBeenSet;

                    /**
                     * 数据聚合方式，周期10秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_p10;
                    bool m_p10HasBeenSet;

                    /**
                     * 数据聚合方式，周期1分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_p60;
                    bool m_p60HasBeenSet;

                    /**
                     * 数据聚合方式，周期5分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_p300;
                    bool m_p300HasBeenSet;

                    /**
                     * 数据聚合方式，周期10分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_p600;
                    bool m_p600HasBeenSet;

                    /**
                     * 数据聚合方式，周期30分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_p1800;
                    bool m_p1800HasBeenSet;

                    /**
                     * 数据聚合方式，周期1小时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_p3600;
                    bool m_p3600HasBeenSet;

                    /**
                     * 数据聚合方式，周期1天
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_p86400;
                    bool m_p86400HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTCONFIGMANUALSTATTYPE_H_
