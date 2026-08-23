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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COMMANDSANDBOXFILERULE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COMMANDSANDBOXFILERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CommandSandboxFileRuleBase.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 命令沙箱文件访问规则基础信息
                */
                class CommandSandboxFileRule : public AbstractModel
                {
                public:
                    CommandSandboxFileRule();
                    ~CommandSandboxFileRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>规则 ID</p>
                     * @return RuleID <p>规则 ID</p>
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置<p>规则 ID</p>
                     * @param _ruleID <p>规则 ID</p>
                     * 
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取<p>规则来源类型</p><p>枚举值：</p><ul><li>SYSTEM ： 系统预置规则</li><li>CUSTOM： 自定义规则</li></ul>
                     * @return RuleType <p>规则来源类型</p><p>枚举值：</p><ul><li>SYSTEM ： 系统预置规则</li><li>CUSTOM： 自定义规则</li></ul>
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置<p>规则来源类型</p><p>枚举值：</p><ul><li>SYSTEM ： 系统预置规则</li><li>CUSTOM： 自定义规则</li></ul>
                     * @param _ruleType <p>规则来源类型</p><p>枚举值：</p><ul><li>SYSTEM ： 系统预置规则</li><li>CUSTOM： 自定义规则</li></ul>
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
                     * 获取<p>规则更新时间</p>
                     * @return UpdateTime <p>规则更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>规则更新时间</p>
                     * @param _updateTime <p>规则更新时间</p>
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
                     * 获取<p>规则内容</p>
                     * @return RuleContent <p>规则内容</p>
                     * 
                     */
                    CommandSandboxFileRuleBase GetRuleContent() const;

                    /**
                     * 设置<p>规则内容</p>
                     * @param _ruleContent <p>规则内容</p>
                     * 
                     */
                    void SetRuleContent(const CommandSandboxFileRuleBase& _ruleContent);

                    /**
                     * 判断参数 RuleContent 是否已赋值
                     * @return RuleContent 是否已赋值
                     * 
                     */
                    bool RuleContentHasBeenSet() const;

                private:

                    /**
                     * <p>规则 ID</p>
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * <p>规则来源类型</p><p>枚举值：</p><ul><li>SYSTEM ： 系统预置规则</li><li>CUSTOM： 自定义规则</li></ul>
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>规则更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>规则内容</p>
                     */
                    CommandSandboxFileRuleBase m_ruleContent;
                    bool m_ruleContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COMMANDSANDBOXFILERULE_H_
