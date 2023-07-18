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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_REFERERRULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_REFERERRULE_H_

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
                * Referer 黑白名单配置规则，针对特定资源生效
                */
                class RefererRule : public AbstractModel
                {
                public:
                    RefererRule();
                    ~RefererRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
                     * @return RuleType 规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
                     * @param _ruleType 规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
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
                     * 获取RuleType 对应类型下的匹配内容：
all 时填充 *
file 时填充后缀名，如 jpg、txt
directory 时填充路径，如 /xxx/test/
path 时填充绝对路径，如 /xxx/test.html
                     * @return RulePaths RuleType 对应类型下的匹配内容：
all 时填充 *
file 时填充后缀名，如 jpg、txt
directory 时填充路径，如 /xxx/test/
path 时填充绝对路径，如 /xxx/test.html
                     * 
                     */
                    std::vector<std::string> GetRulePaths() const;

                    /**
                     * 设置RuleType 对应类型下的匹配内容：
all 时填充 *
file 时填充后缀名，如 jpg、txt
directory 时填充路径，如 /xxx/test/
path 时填充绝对路径，如 /xxx/test.html
                     * @param _rulePaths RuleType 对应类型下的匹配内容：
all 时填充 *
file 时填充后缀名，如 jpg、txt
directory 时填充路径，如 /xxx/test/
path 时填充绝对路径，如 /xxx/test.html
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
                     * 获取referer 配置类型
whitelist：白名单
blacklist：黑名单
                     * @return RefererType referer 配置类型
whitelist：白名单
blacklist：黑名单
                     * 
                     */
                    std::string GetRefererType() const;

                    /**
                     * 设置referer 配置类型
whitelist：白名单
blacklist：黑名单
                     * @param _refererType referer 配置类型
whitelist：白名单
blacklist：黑名单
                     * 
                     */
                    void SetRefererType(const std::string& _refererType);

                    /**
                     * 判断参数 RefererType 是否已赋值
                     * @return RefererType 是否已赋值
                     * 
                     */
                    bool RefererTypeHasBeenSet() const;

                    /**
                     * 获取referer 内容列表
                     * @return Referers referer 内容列表
                     * 
                     */
                    std::vector<std::string> GetReferers() const;

                    /**
                     * 设置referer 内容列表
                     * @param _referers referer 内容列表
                     * 
                     */
                    void SetReferers(const std::vector<std::string>& _referers);

                    /**
                     * 判断参数 Referers 是否已赋值
                     * @return Referers 是否已赋值
                     * 
                     */
                    bool ReferersHasBeenSet() const;

                    /**
                     * 获取是否允许空 referer
防盗链类型为白名单时，true表示允许空 referer，false表示不允许空 referer；
防盗链类型为黑名单时，true表示拒绝空referer，false表示不拒绝空referer；
                     * @return AllowEmpty 是否允许空 referer
防盗链类型为白名单时，true表示允许空 referer，false表示不允许空 referer；
防盗链类型为黑名单时，true表示拒绝空referer，false表示不拒绝空referer；
                     * 
                     */
                    bool GetAllowEmpty() const;

                    /**
                     * 设置是否允许空 referer
防盗链类型为白名单时，true表示允许空 referer，false表示不允许空 referer；
防盗链类型为黑名单时，true表示拒绝空referer，false表示不拒绝空referer；
                     * @param _allowEmpty 是否允许空 referer
防盗链类型为白名单时，true表示允许空 referer，false表示不允许空 referer；
防盗链类型为黑名单时，true表示拒绝空referer，false表示不拒绝空referer；
                     * 
                     */
                    void SetAllowEmpty(const bool& _allowEmpty);

                    /**
                     * 判断参数 AllowEmpty 是否已赋值
                     * @return AllowEmpty 是否已赋值
                     * 
                     */
                    bool AllowEmptyHasBeenSet() const;

                private:

                    /**
                     * 规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * RuleType 对应类型下的匹配内容：
all 时填充 *
file 时填充后缀名，如 jpg、txt
directory 时填充路径，如 /xxx/test/
path 时填充绝对路径，如 /xxx/test.html
                     */
                    std::vector<std::string> m_rulePaths;
                    bool m_rulePathsHasBeenSet;

                    /**
                     * referer 配置类型
whitelist：白名单
blacklist：黑名单
                     */
                    std::string m_refererType;
                    bool m_refererTypeHasBeenSet;

                    /**
                     * referer 内容列表
                     */
                    std::vector<std::string> m_referers;
                    bool m_referersHasBeenSet;

                    /**
                     * 是否允许空 referer
防盗链类型为白名单时，true表示允许空 referer，false表示不允许空 referer；
防盗链类型为黑名单时，true表示拒绝空referer，false表示不拒绝空referer；
                     */
                    bool m_allowEmpty;
                    bool m_allowEmptyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_REFERERRULE_H_
