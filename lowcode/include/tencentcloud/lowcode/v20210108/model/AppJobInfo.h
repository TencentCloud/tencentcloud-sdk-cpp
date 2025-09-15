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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_APPJOBINFO_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_APPJOBINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * 安装应用，任务详情
                */
                class AppJobInfo : public AbstractModel
                {
                public:
                    AppJobInfo();
                    ~AppJobInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取当前步骤
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Step 当前步骤
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStep() const;

                    /**
                     * 设置当前步骤
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _step 当前步骤
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStep(const int64_t& _step);

                    /**
                     * 判断参数 Step 是否已赋值
                     * @return Step 是否已赋值
                     * 
                     */
                    bool StepHasBeenSet() const;

                    /**
                     * 获取任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取任务总共步骤数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalStep 任务总共步骤数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalStep() const;

                    /**
                     * 设置任务总共步骤数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalStep 任务总共步骤数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalStep(const int64_t& _totalStep);

                    /**
                     * 判断参数 TotalStep 是否已赋值
                     * @return TotalStep 是否已赋值
                     * 
                     */
                    bool TotalStepHasBeenSet() const;

                    /**
                     * 获取当前步骤详情
                     * @return StepDesc 当前步骤详情
                     * 
                     */
                    std::string GetStepDesc() const;

                    /**
                     * 设置当前步骤详情
                     * @param _stepDesc 当前步骤详情
                     * 
                     */
                    void SetStepDesc(const std::string& _stepDesc);

                    /**
                     * 判断参数 StepDesc 是否已赋值
                     * @return StepDesc 是否已赋值
                     * 
                     */
                    bool StepDescHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return ErrMsg 错误信息
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置错误信息
                     * @param _errMsg 错误信息
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                private:

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 当前步骤
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_step;
                    bool m_stepHasBeenSet;

                    /**
                     * 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 任务总共步骤数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalStep;
                    bool m_totalStepHasBeenSet;

                    /**
                     * 当前步骤详情
                     */
                    std::string m_stepDesc;
                    bool m_stepDescHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_APPJOBINFO_H_
