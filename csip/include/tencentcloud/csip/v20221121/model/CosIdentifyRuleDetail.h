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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSIDENTIFYRULEDETAIL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSIDENTIFYRULEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * cos数据项详情
                */
                class CosIdentifyRuleDetail : public AbstractModel
                {
                public:
                    CosIdentifyRuleDetail();
                    ~CosIdentifyRuleDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据项id
                     * @return RuleId 数据项id
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置数据项id
                     * @param _ruleId 数据项id
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取数据项名称
                     * @return RuleName 数据项名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置数据项名称
                     * @param _ruleName 数据项名称
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取敏感级别id
                     * @return LevelId 敏感级别id
                     * 
                     */
                    uint64_t GetLevelId() const;

                    /**
                     * 设置敏感级别id
                     * @param _levelId 敏感级别id
                     * 
                     */
                    void SetLevelId(const uint64_t& _levelId);

                    /**
                     * 判断参数 LevelId 是否已赋值
                     * @return LevelId 是否已赋值
                     * 
                     */
                    bool LevelIdHasBeenSet() const;

                    /**
                     * 获取敏感级别名称
                     * @return LevelName 敏感级别名称
                     * 
                     */
                    std::string GetLevelName() const;

                    /**
                     * 设置敏感级别名称
                     * @param _levelName 敏感级别名称
                     * 
                     */
                    void SetLevelName(const std::string& _levelName);

                    /**
                     * 判断参数 LevelName 是否已赋值
                     * @return LevelName 是否已赋值
                     * 
                     */
                    bool LevelNameHasBeenSet() const;

                    /**
                     * 获取敏感程度
                     * @return LevelScore 敏感程度
                     * 
                     */
                    uint64_t GetLevelScore() const;

                    /**
                     * 设置敏感程度
                     * @param _levelScore 敏感程度
                     * 
                     */
                    void SetLevelScore(const uint64_t& _levelScore);

                    /**
                     * 判断参数 LevelScore 是否已赋值
                     * @return LevelScore 是否已赋值
                     * 
                     */
                    bool LevelScoreHasBeenSet() const;

                private:

                    /**
                     * 数据项id
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 数据项名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 敏感级别id
                     */
                    uint64_t m_levelId;
                    bool m_levelIdHasBeenSet;

                    /**
                     * 敏感级别名称
                     */
                    std::string m_levelName;
                    bool m_levelNameHasBeenSet;

                    /**
                     * 敏感程度
                     */
                    uint64_t m_levelScore;
                    bool m_levelScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSIDENTIFYRULEDETAIL_H_
