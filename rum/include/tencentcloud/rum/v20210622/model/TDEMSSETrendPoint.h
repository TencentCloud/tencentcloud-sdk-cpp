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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_TDEMSSETRENDPOINT_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_TDEMSSETRENDPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 大模型对话趋势时间桶
                */
                class TDEMSSETrendPoint : public AbstractModel
                {
                public:
                    TDEMSSETrendPoint();
                    ~TDEMSSETrendPoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>时间桶起点，Unix 毫秒。</p>
                     * @return Time <p>时间桶起点，Unix 毫秒。</p>
                     * 
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置<p>时间桶起点，Unix 毫秒。</p>
                     * @param _time <p>时间桶起点，Unix 毫秒。</p>
                     * 
                     */
                    void SetTime(const int64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取<p>该桶内的对话次数。</p>
                     * @return ConversationCount <p>该桶内的对话次数。</p>
                     * 
                     */
                    int64_t GetConversationCount() const;

                    /**
                     * 设置<p>该桶内的对话次数。</p>
                     * @param _conversationCount <p>该桶内的对话次数。</p>
                     * 
                     */
                    void SetConversationCount(const int64_t& _conversationCount);

                    /**
                     * 判断参数 ConversationCount 是否已赋值
                     * @return ConversationCount 是否已赋值
                     * 
                     */
                    bool ConversationCountHasBeenSet() const;

                    /**
                     * 获取<p>该桶内当前指标的值。桶内没有可计算样本时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value <p>该桶内当前指标的值。桶内没有可计算样本时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置<p>该桶内当前指标的值。桶内没有可计算样本时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value <p>该桶内当前指标的值。桶内没有可计算样本时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValue(const double& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * <p>时间桶起点，Unix 毫秒。</p>
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * <p>该桶内的对话次数。</p>
                     */
                    int64_t m_conversationCount;
                    bool m_conversationCountHasBeenSet;

                    /**
                     * <p>该桶内当前指标的值。桶内没有可计算样本时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_TDEMSSETRENDPOINT_H_
