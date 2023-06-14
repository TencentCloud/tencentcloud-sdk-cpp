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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_COMPAREMETRICSDATA_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_COMPAREMETRICSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * 结构化对比指标（准确率/召回率）数据
                */
                class CompareMetricsData : public AbstractModel
                {
                public:
                    CompareMetricsData();
                    ~CompareMetricsData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取短文准确率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShortStructAccuracy 短文准确率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShortStructAccuracy() const;

                    /**
                     * 设置短文准确率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shortStructAccuracy 短文准确率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShortStructAccuracy(const std::string& _shortStructAccuracy);

                    /**
                     * 判断参数 ShortStructAccuracy 是否已赋值
                     * @return ShortStructAccuracy 是否已赋值
                     * 
                     */
                    bool ShortStructAccuracyHasBeenSet() const;

                    /**
                     * 获取短文召回率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShortStructRecall 短文召回率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShortStructRecall() const;

                    /**
                     * 设置短文召回率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shortStructRecall 短文召回率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShortStructRecall(const std::string& _shortStructRecall);

                    /**
                     * 判断参数 ShortStructRecall 是否已赋值
                     * @return ShortStructRecall 是否已赋值
                     * 
                     */
                    bool ShortStructRecallHasBeenSet() const;

                    /**
                     * 获取长文结构化准确率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LongStructAccuracy 长文结构化准确率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLongStructAccuracy() const;

                    /**
                     * 设置长文结构化准确率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _longStructAccuracy 长文结构化准确率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLongStructAccuracy(const std::string& _longStructAccuracy);

                    /**
                     * 判断参数 LongStructAccuracy 是否已赋值
                     * @return LongStructAccuracy 是否已赋值
                     * 
                     */
                    bool LongStructAccuracyHasBeenSet() const;

                    /**
                     * 获取长文结构化召回率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LongStructRecall 长文结构化召回率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLongStructRecall() const;

                    /**
                     * 设置长文结构化召回率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _longStructRecall 长文结构化召回率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLongStructRecall(const std::string& _longStructRecall);

                    /**
                     * 判断参数 LongStructRecall 是否已赋值
                     * @return LongStructRecall 是否已赋值
                     * 
                     */
                    bool LongStructRecallHasBeenSet() const;

                    /**
                     * 获取长文提取准确率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LongContentAccuracy 长文提取准确率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLongContentAccuracy() const;

                    /**
                     * 设置长文提取准确率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _longContentAccuracy 长文提取准确率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLongContentAccuracy(const std::string& _longContentAccuracy);

                    /**
                     * 判断参数 LongContentAccuracy 是否已赋值
                     * @return LongContentAccuracy 是否已赋值
                     * 
                     */
                    bool LongContentAccuracyHasBeenSet() const;

                    /**
                     * 获取长文提取召回率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LongContentRecall 长文提取召回率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLongContentRecall() const;

                    /**
                     * 设置长文提取召回率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _longContentRecall 长文提取召回率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLongContentRecall(const std::string& _longContentRecall);

                    /**
                     * 判断参数 LongContentRecall 是否已赋值
                     * @return LongContentRecall 是否已赋值
                     * 
                     */
                    bool LongContentRecallHasBeenSet() const;

                private:

                    /**
                     * 短文准确率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shortStructAccuracy;
                    bool m_shortStructAccuracyHasBeenSet;

                    /**
                     * 短文召回率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shortStructRecall;
                    bool m_shortStructRecallHasBeenSet;

                    /**
                     * 长文结构化准确率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_longStructAccuracy;
                    bool m_longStructAccuracyHasBeenSet;

                    /**
                     * 长文结构化召回率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_longStructRecall;
                    bool m_longStructRecallHasBeenSet;

                    /**
                     * 长文提取准确率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_longContentAccuracy;
                    bool m_longContentAccuracyHasBeenSet;

                    /**
                     * 长文提取召回率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_longContentRecall;
                    bool m_longContentRecallHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_COMPAREMETRICSDATA_H_
