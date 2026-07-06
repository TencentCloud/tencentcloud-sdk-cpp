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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CREATESKILLSHAREREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CREATESKILLSHAREREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateSkillShare请求参数结构体
                */
                class CreateSkillShareRequest : public AbstractModel
                {
                public:
                    CreateSkillShareRequest();
                    ~CreateSkillShareRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>必填，申请备注（弹窗&quot;申请备注&quot;）</p>
                     * @return ApplyRemark <p>必填，申请备注（弹窗&quot;申请备注&quot;）</p>
                     * 
                     */
                    std::string GetApplyRemark() const;

                    /**
                     * 设置<p>必填，申请备注（弹窗&quot;申请备注&quot;）</p>
                     * @param _applyRemark <p>必填，申请备注（弹窗&quot;申请备注&quot;）</p>
                     * 
                     */
                    void SetApplyRemark(const std::string& _applyRemark);

                    /**
                     * 判断参数 ApplyRemark 是否已赋值
                     * @return ApplyRemark 是否已赋值
                     * 
                     */
                    bool ApplyRemarkHasBeenSet() const;

                    /**
                     * 获取<p>必填，原skill_id</p>
                     * @return SkillId <p>必填，原skill_id</p>
                     * 
                     */
                    std::string GetSkillId() const;

                    /**
                     * 设置<p>必填，原skill_id</p>
                     * @param _skillId <p>必填，原skill_id</p>
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
                     * 获取<p>空间ID，必填</p>
                     * @return SpaceId <p>空间ID，必填</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>空间ID，必填</p>
                     * @param _spaceId <p>空间ID，必填</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>必填，被共享的版本id（必须高于已共享版本）</p>
                     * @return VersionId <p>必填，被共享的版本id（必须高于已共享版本）</p>
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置<p>必填，被共享的版本id（必须高于已共享版本）</p>
                     * @param _versionId <p>必填，被共享的版本id（必须高于已共享版本）</p>
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                private:

                    /**
                     * <p>必填，申请备注（弹窗&quot;申请备注&quot;）</p>
                     */
                    std::string m_applyRemark;
                    bool m_applyRemarkHasBeenSet;

                    /**
                     * <p>必填，原skill_id</p>
                     */
                    std::string m_skillId;
                    bool m_skillIdHasBeenSet;

                    /**
                     * <p>空间ID，必填</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>必填，被共享的版本id（必须高于已共享版本）</p>
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATESKILLSHAREREQUEST_H_
