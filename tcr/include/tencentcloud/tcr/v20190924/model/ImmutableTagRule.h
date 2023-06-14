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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_IMMUTABLETAGRULE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_IMMUTABLETAGRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 镜像 tag 不可变规则
                */
                class ImmutableTagRule : public AbstractModel
                {
                public:
                    ImmutableTagRule();
                    ~ImmutableTagRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取仓库匹配规则
                     * @return RepositoryPattern 仓库匹配规则
                     * 
                     */
                    std::string GetRepositoryPattern() const;

                    /**
                     * 设置仓库匹配规则
                     * @param _repositoryPattern 仓库匹配规则
                     * 
                     */
                    void SetRepositoryPattern(const std::string& _repositoryPattern);

                    /**
                     * 判断参数 RepositoryPattern 是否已赋值
                     * @return RepositoryPattern 是否已赋值
                     * 
                     */
                    bool RepositoryPatternHasBeenSet() const;

                    /**
                     * 获取Tag 匹配规则
                     * @return TagPattern Tag 匹配规则
                     * 
                     */
                    std::string GetTagPattern() const;

                    /**
                     * 设置Tag 匹配规则
                     * @param _tagPattern Tag 匹配规则
                     * 
                     */
                    void SetTagPattern(const std::string& _tagPattern);

                    /**
                     * 判断参数 TagPattern 是否已赋值
                     * @return TagPattern 是否已赋值
                     * 
                     */
                    bool TagPatternHasBeenSet() const;

                    /**
                     * 获取repoMatches或repoExcludes
                     * @return RepositoryDecoration repoMatches或repoExcludes
                     * 
                     */
                    std::string GetRepositoryDecoration() const;

                    /**
                     * 设置repoMatches或repoExcludes
                     * @param _repositoryDecoration repoMatches或repoExcludes
                     * 
                     */
                    void SetRepositoryDecoration(const std::string& _repositoryDecoration);

                    /**
                     * 判断参数 RepositoryDecoration 是否已赋值
                     * @return RepositoryDecoration 是否已赋值
                     * 
                     */
                    bool RepositoryDecorationHasBeenSet() const;

                    /**
                     * 获取matches或excludes
                     * @return TagDecoration matches或excludes
                     * 
                     */
                    std::string GetTagDecoration() const;

                    /**
                     * 设置matches或excludes
                     * @param _tagDecoration matches或excludes
                     * 
                     */
                    void SetTagDecoration(const std::string& _tagDecoration);

                    /**
                     * 判断参数 TagDecoration 是否已赋值
                     * @return TagDecoration 是否已赋值
                     * 
                     */
                    bool TagDecorationHasBeenSet() const;

                    /**
                     * 获取禁用规则
                     * @return Disabled 禁用规则
                     * 
                     */
                    bool GetDisabled() const;

                    /**
                     * 设置禁用规则
                     * @param _disabled 禁用规则
                     * 
                     */
                    void SetDisabled(const bool& _disabled);

                    /**
                     * 判断参数 Disabled 是否已赋值
                     * @return Disabled 是否已赋值
                     * 
                     */
                    bool DisabledHasBeenSet() const;

                    /**
                     * 获取规则 Id
                     * @return RuleId 规则 Id
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则 Id
                     * @param _ruleId 规则 Id
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取命名空间
                     * @return NsName 命名空间
                     * 
                     */
                    std::string GetNsName() const;

                    /**
                     * 设置命名空间
                     * @param _nsName 命名空间
                     * 
                     */
                    void SetNsName(const std::string& _nsName);

                    /**
                     * 判断参数 NsName 是否已赋值
                     * @return NsName 是否已赋值
                     * 
                     */
                    bool NsNameHasBeenSet() const;

                private:

                    /**
                     * 仓库匹配规则
                     */
                    std::string m_repositoryPattern;
                    bool m_repositoryPatternHasBeenSet;

                    /**
                     * Tag 匹配规则
                     */
                    std::string m_tagPattern;
                    bool m_tagPatternHasBeenSet;

                    /**
                     * repoMatches或repoExcludes
                     */
                    std::string m_repositoryDecoration;
                    bool m_repositoryDecorationHasBeenSet;

                    /**
                     * matches或excludes
                     */
                    std::string m_tagDecoration;
                    bool m_tagDecorationHasBeenSet;

                    /**
                     * 禁用规则
                     */
                    bool m_disabled;
                    bool m_disabledHasBeenSet;

                    /**
                     * 规则 Id
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_nsName;
                    bool m_nsNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_IMMUTABLETAGRULE_H_
