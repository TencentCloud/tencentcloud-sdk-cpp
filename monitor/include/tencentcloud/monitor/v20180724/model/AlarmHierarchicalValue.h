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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMHIERARCHICALVALUE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMHIERARCHICALVALUE_H_

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
                * 告警分级阈值配置
                */
                class AlarmHierarchicalValue : public AbstractModel
                {
                public:
                    AlarmHierarchicalValue();
                    ~AlarmHierarchicalValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取提醒等级阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remind 提醒等级阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemind() const;

                    /**
                     * 设置提醒等级阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remind 提醒等级阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemind(const std::string& _remind);

                    /**
                     * 判断参数 Remind 是否已赋值
                     * @return Remind 是否已赋值
                     * 
                     */
                    bool RemindHasBeenSet() const;

                    /**
                     * 获取警告等级阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Warn 警告等级阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWarn() const;

                    /**
                     * 设置警告等级阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warn 警告等级阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWarn(const std::string& _warn);

                    /**
                     * 判断参数 Warn 是否已赋值
                     * @return Warn 是否已赋值
                     * 
                     */
                    bool WarnHasBeenSet() const;

                    /**
                     * 获取严重等级阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Serious 严重等级阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSerious() const;

                    /**
                     * 设置严重等级阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serious 严重等级阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSerious(const std::string& _serious);

                    /**
                     * 判断参数 Serious 是否已赋值
                     * @return Serious 是否已赋值
                     * 
                     */
                    bool SeriousHasBeenSet() const;

                private:

                    /**
                     * 提醒等级阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remind;
                    bool m_remindHasBeenSet;

                    /**
                     * 警告等级阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_warn;
                    bool m_warnHasBeenSet;

                    /**
                     * 严重等级阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serious;
                    bool m_seriousHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ALARMHIERARCHICALVALUE_H_
