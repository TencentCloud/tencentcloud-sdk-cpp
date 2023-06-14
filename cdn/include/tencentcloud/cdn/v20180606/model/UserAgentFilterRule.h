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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_USERAGENTFILTERRULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_USERAGENTFILTERRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * UserAgent黑白名单规则配置
                */
                class UserAgentFilterRule : public AbstractModel
                {
                public:
                    UserAgentFilterRule();
                    ~UserAgentFilterRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问路径生效类型
all: 所有访问路径生效
file: 根据文件后缀类型生效
directory: 根据目录生效
path: 根据完整访问路径生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleType 访问路径生效类型
all: 所有访问路径生效
file: 根据文件后缀类型生效
directory: 根据目录生效
path: 根据完整访问路径生效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置访问路径生效类型
all: 所有访问路径生效
file: 根据文件后缀类型生效
directory: 根据目录生效
path: 根据完整访问路径生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleType 访问路径生效类型
all: 所有访问路径生效
file: 根据文件后缀类型生效
directory: 根据目录生效
path: 根据完整访问路径生效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取访问路径生效内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RulePaths 访问路径生效内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRulePaths() const;

                    /**
                     * 设置访问路径生效内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rulePaths 访问路径生效内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRulePaths(const std::vector<std::string>& _rulePaths);

                    /**
                     * 判断参数 RulePaths 是否已赋值
                     * @return RulePaths 是否已赋值
                     * 
                     */
                    bool RulePathsHasBeenSet() const;

                    /**
                     * 获取UserAgent列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserAgents UserAgent列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetUserAgents() const;

                    /**
                     * 设置UserAgent列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userAgents UserAgent列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserAgents(const std::vector<std::string>& _userAgents);

                    /**
                     * 判断参数 UserAgents 是否已赋值
                     * @return UserAgents 是否已赋值
                     * 
                     */
                    bool UserAgentsHasBeenSet() const;

                    /**
                     * 获取黑名单或白名单，blacklist或whitelist
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilterType 黑名单或白名单，blacklist或whitelist
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置黑名单或白名单，blacklist或whitelist
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _filterType 黑名单或白名单，blacklist或whitelist
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFilterType(const std::string& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     * 
                     */
                    bool FilterTypeHasBeenSet() const;

                private:

                    /**
                     * 访问路径生效类型
all: 所有访问路径生效
file: 根据文件后缀类型生效
directory: 根据目录生效
path: 根据完整访问路径生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 访问路径生效内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_rulePaths;
                    bool m_rulePathsHasBeenSet;

                    /**
                     * UserAgent列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_userAgents;
                    bool m_userAgentsHasBeenSet;

                    /**
                     * 黑名单或白名单，blacklist或whitelist
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_USERAGENTFILTERRULE_H_
