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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SKILLDETAIL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SKILLDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/SkillReferenceSummary.h>
#include <tencentcloud/adp/v20260520/model/SkillSummary.h>
#include <tencentcloud/adp/v20260520/model/SkillVersion.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * skill详情
                */
                class SkillDetail : public AbstractModel
                {
                public:
                    SkillDetail();
                    ~SkillDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取调用情况摘要
                     * @return ReferenceSummaryList 调用情况摘要
                     * 
                     */
                    std::vector<SkillReferenceSummary> GetReferenceSummaryList() const;

                    /**
                     * 设置调用情况摘要
                     * @param _referenceSummaryList 调用情况摘要
                     * 
                     */
                    void SetReferenceSummaryList(const std::vector<SkillReferenceSummary>& _referenceSummaryList);

                    /**
                     * 判断参数 ReferenceSummaryList 是否已赋值
                     * @return ReferenceSummaryList 是否已赋值
                     * 
                     */
                    bool ReferenceSummaryListHasBeenSet() const;

                    /**
                     * 获取Skill 摘要
                     * @return SkillSummary Skill 摘要
                     * 
                     */
                    SkillSummary GetSkillSummary() const;

                    /**
                     * 设置Skill 摘要
                     * @param _skillSummary Skill 摘要
                     * 
                     */
                    void SetSkillSummary(const SkillSummary& _skillSummary);

                    /**
                     * 判断参数 SkillSummary 是否已赋值
                     * @return SkillSummary 是否已赋值
                     * 
                     */
                    bool SkillSummaryHasBeenSet() const;

                    /**
                     * 获取版本列表
                     * @return VersionList 版本列表
                     * 
                     */
                    std::vector<SkillVersion> GetVersionList() const;

                    /**
                     * 设置版本列表
                     * @param _versionList 版本列表
                     * 
                     */
                    void SetVersionList(const std::vector<SkillVersion>& _versionList);

                    /**
                     * 判断参数 VersionList 是否已赋值
                     * @return VersionList 是否已赋值
                     * 
                     */
                    bool VersionListHasBeenSet() const;

                private:

                    /**
                     * 调用情况摘要
                     */
                    std::vector<SkillReferenceSummary> m_referenceSummaryList;
                    bool m_referenceSummaryListHasBeenSet;

                    /**
                     * Skill 摘要
                     */
                    SkillSummary m_skillSummary;
                    bool m_skillSummaryHasBeenSet;

                    /**
                     * 版本列表
                     */
                    std::vector<SkillVersion> m_versionList;
                    bool m_versionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SKILLDETAIL_H_
