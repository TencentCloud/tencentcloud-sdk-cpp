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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_TAG_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_TAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * 音频切片识别标签
                */
                class Tag : public AbstractModel
                {
                public:
                    Tag();
                    ~Tag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取根据Label字段确定具体名称：
当Label 为Teenager 时 Name可能取值有：Teenager 
当Label 为Gender 时 Name可能取值有：Male 、Female
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 根据Label字段确定具体名称：
当Label 为Teenager 时 Name可能取值有：Teenager 
当Label 为Gender 时 Name可能取值有：Male 、Female
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置根据Label字段确定具体名称：
当Label 为Teenager 时 Name可能取值有：Teenager 
当Label 为Gender 时 Name可能取值有：Male 、Female
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 根据Label字段确定具体名称：
当Label 为Teenager 时 Name可能取值有：Teenager 
当Label 为Gender 时 Name可能取值有：Male 、Female
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取置信分：0～100，数值越大表示置信度越高
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Score 置信分：0～100，数值越大表示置信度越高
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置置信分：0～100，数值越大表示置信度越高
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _score 置信分：0～100，数值越大表示置信度越高
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取识别开始偏移时间，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 识别开始偏移时间，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetStartTime() const;

                    /**
                     * 设置识别开始偏移时间，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 识别开始偏移时间，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const double& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取识别结束偏移时间，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 识别结束偏移时间，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetEndTime() const;

                    /**
                     * 设置识别结束偏移时间，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 识别结束偏移时间，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const double& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 根据Label字段确定具体名称：
当Label 为Teenager 时 Name可能取值有：Teenager 
当Label 为Gender 时 Name可能取值有：Male 、Female
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 置信分：0～100，数值越大表示置信度越高
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 识别开始偏移时间，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 识别结束偏移时间，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_TAG_H_
