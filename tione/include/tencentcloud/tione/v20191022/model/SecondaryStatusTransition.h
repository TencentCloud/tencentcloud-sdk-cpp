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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_SECONDARYSTATUSTRANSITION_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_SECONDARYSTATUSTRANSITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                *  二级状态流水
                */
                class SecondaryStatusTransition : public AbstractModel
                {
                public:
                    SecondaryStatusTransition();
                    ~SecondaryStatusTransition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取状态开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 状态开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置状态开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 状态开始时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取状态结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 状态结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置状态结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 状态结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取状态名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取状态详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusMessage 状态详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusMessage() const;

                    /**
                     * 设置状态详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusMessage 状态详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusMessage(const std::string& _statusMessage);

                    /**
                     * 判断参数 StatusMessage 是否已赋值
                     * @return StatusMessage 是否已赋值
                     * 
                     */
                    bool StatusMessageHasBeenSet() const;

                private:

                    /**
                     * 状态开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 状态结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 状态名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 状态详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusMessage;
                    bool m_statusMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_SECONDARYSTATUSTRANSITION_H_
