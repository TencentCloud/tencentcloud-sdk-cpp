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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_REJECTEDQUESTION_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_REJECTEDQUESTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 发布拒答
                */
                class RejectedQuestion : public AbstractModel
                {
                public:
                    RejectedQuestion();
                    ~RejectedQuestion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取拒答问题ID


注意：此字段可能返回 null，表示取不到有效值。
                     * @return RejectedBizId 拒答问题ID


注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRejectedBizId() const;

                    /**
                     * 设置拒答问题ID


注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rejectedBizId 拒答问题ID


注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRejectedBizId(const std::string& _rejectedBizId);

                    /**
                     * 判断参数 RejectedBizId 是否已赋值
                     * @return RejectedBizId 是否已赋值
                     * 
                     */
                    bool RejectedBizIdHasBeenSet() const;

                    /**
                     * 获取被拒答的问题

注意：此字段可能返回 null，表示取不到有效值。
                     * @return Question 被拒答的问题

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置被拒答的问题

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _question 被拒答的问题

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuestion(const std::string& _question);

                    /**
                     * 判断参数 Question 是否已赋值
                     * @return Question 是否已赋值
                     * 
                     */
                    bool QuestionHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusDesc 状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusDesc 状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取更新时间

注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取是否允许编辑

注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAllowEdit 是否允许编辑

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsAllowEdit() const;

                    /**
                     * 设置是否允许编辑

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isAllowEdit 是否允许编辑

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsAllowEdit(const bool& _isAllowEdit);

                    /**
                     * 判断参数 IsAllowEdit 是否已赋值
                     * @return IsAllowEdit 是否已赋值
                     * 
                     */
                    bool IsAllowEditHasBeenSet() const;

                    /**
                     * 获取是否允许删除

注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAllowDelete 是否允许删除

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsAllowDelete() const;

                    /**
                     * 设置是否允许删除

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isAllowDelete 是否允许删除

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsAllowDelete(const bool& _isAllowDelete);

                    /**
                     * 判断参数 IsAllowDelete 是否已赋值
                     * @return IsAllowDelete 是否已赋值
                     * 
                     */
                    bool IsAllowDeleteHasBeenSet() const;

                private:

                    /**
                     * 拒答问题ID


注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rejectedBizId;
                    bool m_rejectedBizIdHasBeenSet;

                    /**
                     * 被拒答的问题

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 更新时间

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 是否允许编辑

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isAllowEdit;
                    bool m_isAllowEditHasBeenSet;

                    /**
                     * 是否允许删除

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isAllowDelete;
                    bool m_isAllowDeleteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_REJECTEDQUESTION_H_
