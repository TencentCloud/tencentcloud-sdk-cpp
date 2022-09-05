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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_RATELIMITTEMPLATEDETAIL_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_RATELIMITTEMPLATEDETAIL_H_

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
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 模板当前详细配置。
                */
                class RateLimitTemplateDetail : public AbstractModel
                {
                public:
                    RateLimitTemplateDetail();
                    ~RateLimitTemplateDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板等级名称。
1. sup_loose 自适应 - 超级宽松
2. loose     自适应 - 宽松
3. emergency 自适应 - 紧急
4. normal    自适应 - 适中
5. strict    固定阈值 - 严格
6. close     关闭 - 仅精准速率限制生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mode 模板等级名称。
1. sup_loose 自适应 - 超级宽松
2. loose     自适应 - 宽松
3. emergency 自适应 - 紧急
4. normal    自适应 - 适中
5. strict    固定阈值 - 严格
6. close     关闭 - 仅精准速率限制生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMode() const;

                    /**
                     * 设置模板等级名称。
1. sup_loose 自适应 - 超级宽松
2. loose     自适应 - 宽松
3. emergency 自适应 - 紧急
4. normal    自适应 - 适中
5. strict    固定阈值 - 严格
6. close     关闭 - 仅精准速率限制生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Mode 模板等级名称。
1. sup_loose 自适应 - 超级宽松
2. loose     自适应 - 宽松
3. emergency 自适应 - 紧急
4. normal    自适应 - 适中
5. strict    固定阈值 - 严格
6. close     关闭 - 仅精准速率限制生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取唯一id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ID 唯一id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetID() const;

                    /**
                     * 设置唯一id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ID 唯一id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取处置动作。模板阀值触发后的处罚行为。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Action 处置动作。模板阀值触发后的处罚行为。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAction() const;

                    /**
                     * 设置处置动作。模板阀值触发后的处罚行为。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Action 处置动作。模板阀值触发后的处罚行为。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取惩罚时间，单位是秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PunishTime 惩罚时间，单位是秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPunishTime() const;

                    /**
                     * 设置惩罚时间，单位是秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PunishTime 惩罚时间，单位是秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPunishTime(const int64_t& _punishTime);

                    /**
                     * 判断参数 PunishTime 是否已赋值
                     * @return PunishTime 是否已赋值
                     */
                    bool PunishTimeHasBeenSet() const;

                    /**
                     * 获取阈值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Threshold 阈值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetThreshold() const;

                    /**
                     * 设置阈值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Threshold 阈值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetThreshold(const int64_t& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取统计周期。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Period 统计周期。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置统计周期。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Period 统计周期。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * 模板等级名称。
1. sup_loose 自适应 - 超级宽松
2. loose     自适应 - 宽松
3. emergency 自适应 - 紧急
4. normal    自适应 - 适中
5. strict    固定阈值 - 严格
6. close     关闭 - 仅精准速率限制生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 唯一id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 处置动作。模板阀值触发后的处罚行为。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 惩罚时间，单位是秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_punishTime;
                    bool m_punishTimeHasBeenSet;

                    /**
                     * 阈值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * 统计周期。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_RATELIMITTEMPLATEDETAIL_H_
