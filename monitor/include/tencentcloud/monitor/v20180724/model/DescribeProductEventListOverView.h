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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTOVERVIEW_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTOVERVIEW_H_

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
                * DescribeProductEventList返回的OverView对象
                */
                class DescribeProductEventListOverView : public AbstractModel
                {
                public:
                    DescribeProductEventListOverView();
                    ~DescribeProductEventListOverView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取状态变更的事件数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusChangeAmount 状态变更的事件数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatusChangeAmount() const;

                    /**
                     * 设置状态变更的事件数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusChangeAmount 状态变更的事件数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusChangeAmount(const int64_t& _statusChangeAmount);

                    /**
                     * 判断参数 StatusChangeAmount 是否已赋值
                     * @return StatusChangeAmount 是否已赋值
                     * 
                     */
                    bool StatusChangeAmountHasBeenSet() const;

                    /**
                     * 获取告警状态未配置的事件数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnConfigAlarmAmount 告警状态未配置的事件数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUnConfigAlarmAmount() const;

                    /**
                     * 设置告警状态未配置的事件数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unConfigAlarmAmount 告警状态未配置的事件数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnConfigAlarmAmount(const int64_t& _unConfigAlarmAmount);

                    /**
                     * 判断参数 UnConfigAlarmAmount 是否已赋值
                     * @return UnConfigAlarmAmount 是否已赋值
                     * 
                     */
                    bool UnConfigAlarmAmountHasBeenSet() const;

                    /**
                     * 获取异常事件数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnNormalEventAmount 异常事件数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUnNormalEventAmount() const;

                    /**
                     * 设置异常事件数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unNormalEventAmount 异常事件数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnNormalEventAmount(const int64_t& _unNormalEventAmount);

                    /**
                     * 判断参数 UnNormalEventAmount 是否已赋值
                     * @return UnNormalEventAmount 是否已赋值
                     * 
                     */
                    bool UnNormalEventAmountHasBeenSet() const;

                    /**
                     * 获取未恢复的事件数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnRecoverAmount 未恢复的事件数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUnRecoverAmount() const;

                    /**
                     * 设置未恢复的事件数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unRecoverAmount 未恢复的事件数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnRecoverAmount(const int64_t& _unRecoverAmount);

                    /**
                     * 判断参数 UnRecoverAmount 是否已赋值
                     * @return UnRecoverAmount 是否已赋值
                     * 
                     */
                    bool UnRecoverAmountHasBeenSet() const;

                private:

                    /**
                     * 状态变更的事件数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_statusChangeAmount;
                    bool m_statusChangeAmountHasBeenSet;

                    /**
                     * 告警状态未配置的事件数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_unConfigAlarmAmount;
                    bool m_unConfigAlarmAmountHasBeenSet;

                    /**
                     * 异常事件数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_unNormalEventAmount;
                    bool m_unNormalEventAmountHasBeenSet;

                    /**
                     * 未恢复的事件数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_unRecoverAmount;
                    bool m_unRecoverAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPRODUCTEVENTLISTOVERVIEW_H_
