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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SKILLSHARE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SKILLSHARE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * SkillShare Skill 企业共享信息。
                */
                class SkillShare : public AbstractModel
                {
                public:
                    SkillShare();
                    ~SkillShare() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取审批ID
                     * @return ApprovalId 审批ID
                     * 
                     */
                    std::string GetApprovalId() const;

                    /**
                     * 设置审批ID
                     * @param _approvalId 审批ID
                     * 
                     */
                    void SetApprovalId(const std::string& _approvalId);

                    /**
                     * 判断参数 ApprovalId 是否已赋值
                     * @return ApprovalId 是否已赋值
                     * 
                     */
                    bool ApprovalIdHasBeenSet() const;

                    /**
                     * 获取共享后关联的新 skill_id
                     * @return ShareSkillId 共享后关联的新 skill_id
                     * 
                     */
                    std::string GetShareSkillId() const;

                    /**
                     * 设置共享后关联的新 skill_id
                     * @param _shareSkillId 共享后关联的新 skill_id
                     * 
                     */
                    void SetShareSkillId(const std::string& _shareSkillId);

                    /**
                     * 判断参数 ShareSkillId 是否已赋值
                     * @return ShareSkillId 是否已赋值
                     * 
                     */
                    bool ShareSkillIdHasBeenSet() const;

                    /**
                     * 获取共享版本，如 1.0.0
                     * @return ShareVersion 共享版本，如 1.0.0
                     * 
                     */
                    std::string GetShareVersion() const;

                    /**
                     * 设置共享版本，如 1.0.0
                     * @param _shareVersion 共享版本，如 1.0.0
                     * 
                     */
                    void SetShareVersion(const std::string& _shareVersion);

                    /**
                     * 判断参数 ShareVersion 是否已赋值
                     * @return ShareVersion 是否已赋值
                     * 
                     */
                    bool ShareVersionHasBeenSet() const;

                    /**
                     * 获取共享版本ID
                     * @return ShareVersionId 共享版本ID
                     * 
                     */
                    std::string GetShareVersionId() const;

                    /**
                     * 设置共享版本ID
                     * @param _shareVersionId 共享版本ID
                     * 
                     */
                    void SetShareVersionId(const std::string& _shareVersionId);

                    /**
                     * 判断参数 ShareVersionId 是否已赋值
                     * @return ShareVersionId 是否已赋值
                     * 
                     */
                    bool ShareVersionIdHasBeenSet() const;

                    /**
                     * 获取原 skill_id
                     * @return SkillId 原 skill_id
                     * 
                     */
                    std::string GetSkillId() const;

                    /**
                     * 设置原 skill_id
                     * @param _skillId 原 skill_id
                     * 
                     */
                    void SetSkillId(const std::string& _skillId);

                    /**
                     * 判断参数 SkillId 是否已赋值
                     * @return SkillId 是否已赋值
                     * 
                     */
                    bool SkillIdHasBeenSet() const;

                    /**
                     * 获取共享状态

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 未共享 |
| 1 | 已共享 |
| 2 | 审批中 |
                     * @return Status 共享状态

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 未共享 |
| 1 | 已共享 |
| 2 | 审批中 |
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置共享状态

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 未共享 |
| 1 | 已共享 |
| 2 | 审批中 |
                     * @param _status 共享状态

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 未共享 |
| 1 | 已共享 |
| 2 | 审批中 |
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 审批ID
                     */
                    std::string m_approvalId;
                    bool m_approvalIdHasBeenSet;

                    /**
                     * 共享后关联的新 skill_id
                     */
                    std::string m_shareSkillId;
                    bool m_shareSkillIdHasBeenSet;

                    /**
                     * 共享版本，如 1.0.0
                     */
                    std::string m_shareVersion;
                    bool m_shareVersionHasBeenSet;

                    /**
                     * 共享版本ID
                     */
                    std::string m_shareVersionId;
                    bool m_shareVersionIdHasBeenSet;

                    /**
                     * 原 skill_id
                     */
                    std::string m_skillId;
                    bool m_skillIdHasBeenSet;

                    /**
                     * 共享状态

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 未共享 |
| 1 | 已共享 |
| 2 | 审批中 |
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SKILLSHARE_H_
