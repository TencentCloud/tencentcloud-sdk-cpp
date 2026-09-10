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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBESKILLREFERENCELISTRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBESKILLREFERENCELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/SkillReferenceGroup.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeSkillReferenceList返回参数结构体
                */
                class DescribeSkillReferenceListResponse : public AbstractModel
                {
                public:
                    DescribeSkillReferenceListResponse();
                    ~DescribeSkillReferenceListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>按 SkillRefType 分组的引用汇总：某类型 total_count = 0 时不入组（不返回空占位） 本期同时落 OPENCLAW / AGENT / CORP_ASSISTANT 三路</p>
                     * @return ReferenceList <p>按 SkillRefType 分组的引用汇总：某类型 total_count = 0 时不入组（不返回空占位） 本期同时落 OPENCLAW / AGENT / CORP_ASSISTANT 三路</p>
                     * 
                     */
                    std::vector<SkillReferenceGroup> GetReferenceList() const;

                    /**
                     * 判断参数 ReferenceList 是否已赋值
                     * @return ReferenceList 是否已赋值
                     * 
                     */
                    bool ReferenceListHasBeenSet() const;

                    /**
                     * 获取<p>当前用户是否允许强制删除有引用的Skill</p>
                     * @return AllowForceModify <p>当前用户是否允许强制删除有引用的Skill</p>
                     * 
                     */
                    bool GetAllowForceModify() const;

                    /**
                     * 判断参数 AllowForceModify 是否已赋值
                     * @return AllowForceModify 是否已赋值
                     * 
                     */
                    bool AllowForceModifyHasBeenSet() const;

                private:

                    /**
                     * <p>按 SkillRefType 分组的引用汇总：某类型 total_count = 0 时不入组（不返回空占位） 本期同时落 OPENCLAW / AGENT / CORP_ASSISTANT 三路</p>
                     */
                    std::vector<SkillReferenceGroup> m_referenceList;
                    bool m_referenceListHasBeenSet;

                    /**
                     * <p>当前用户是否允许强制删除有引用的Skill</p>
                     */
                    bool m_allowForceModify;
                    bool m_allowForceModifyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBESKILLREFERENCELISTRESPONSE_H_
