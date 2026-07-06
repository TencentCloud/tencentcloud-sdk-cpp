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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBEVENT_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 描述作业发生的一个事件
                */
                class JobEvent : public AbstractModel
                {
                public:
                    JobEvent();
                    ~JobEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>内部定义的事件类型</p>
                     * @return Type <p>内部定义的事件类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>内部定义的事件类型</p>
                     * @param _type <p>内部定义的事件类型</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>事件类型的说明文字</p>
                     * @return Description <p>事件类型的说明文字</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>事件类型的说明文字</p>
                     * @param _description <p>事件类型的说明文字</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>事件发生的 Unix 时间戳（秒）</p>
                     * @return Timestamp <p>事件发生的 Unix 时间戳（秒）</p>
                     * 
                     */
                    uint64_t GetTimestamp() const;

                    /**
                     * 设置<p>事件发生的 Unix 时间戳（秒）</p>
                     * @param _timestamp <p>事件发生的 Unix 时间戳（秒）</p>
                     * 
                     */
                    void SetTimestamp(const uint64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取<p>事件发生时的运行 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunningOrderId <p>事件发生时的运行 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRunningOrderId() const;

                    /**
                     * 设置<p>事件发生时的运行 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runningOrderId <p>事件发生时的运行 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunningOrderId(const uint64_t& _runningOrderId);

                    /**
                     * 判断参数 RunningOrderId 是否已赋值
                     * @return RunningOrderId 是否已赋值
                     * 
                     */
                    bool RunningOrderIdHasBeenSet() const;

                    /**
                     * 获取<p>事件的一些可选说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message <p>事件的一些可选说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>事件的一些可选说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message <p>事件的一些可选说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>异常事件的排查手册链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SolutionLink <p>异常事件的排查手册链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSolutionLink() const;

                    /**
                     * 设置<p>异常事件的排查手册链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _solutionLink <p>异常事件的排查手册链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSolutionLink(const std::string& _solutionLink);

                    /**
                     * 判断参数 SolutionLink 是否已赋值
                     * @return SolutionLink 是否已赋值
                     * 
                     */
                    bool SolutionLinkHasBeenSet() const;

                    /**
                     * 获取<p>异常事件原因分析</p>
                     * @return CauseAnalysis <p>异常事件原因分析</p>
                     * 
                     */
                    std::string GetCauseAnalysis() const;

                    /**
                     * 设置<p>异常事件原因分析</p>
                     * @param _causeAnalysis <p>异常事件原因分析</p>
                     * 
                     */
                    void SetCauseAnalysis(const std::string& _causeAnalysis);

                    /**
                     * 判断参数 CauseAnalysis 是否已赋值
                     * @return CauseAnalysis 是否已赋值
                     * 
                     */
                    bool CauseAnalysisHasBeenSet() const;

                    /**
                     * 获取<p>异常事件处理的参考方案</p>
                     * @return Solution <p>异常事件处理的参考方案</p>
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置<p>异常事件处理的参考方案</p>
                     * @param _solution <p>异常事件处理的参考方案</p>
                     * 
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     * 
                     */
                    bool SolutionHasBeenSet() const;

                private:

                    /**
                     * <p>内部定义的事件类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>事件类型的说明文字</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>事件发生的 Unix 时间戳（秒）</p>
                     */
                    uint64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * <p>事件发生时的运行 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_runningOrderId;
                    bool m_runningOrderIdHasBeenSet;

                    /**
                     * <p>事件的一些可选说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>异常事件的排查手册链接</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_solutionLink;
                    bool m_solutionLinkHasBeenSet;

                    /**
                     * <p>异常事件原因分析</p>
                     */
                    std::string m_causeAnalysis;
                    bool m_causeAnalysisHasBeenSet;

                    /**
                     * <p>异常事件处理的参考方案</p>
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_JOBEVENT_H_
