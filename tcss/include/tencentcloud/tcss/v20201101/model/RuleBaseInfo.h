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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_RULEBASEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_RULEBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 运行时安全，策略基本信息
                */
                class RuleBaseInfo : public AbstractModel
                {
                public:
                    RuleBaseInfo();
                    ~RuleBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取true: 默认策略，false:自定义策略
                     * @return IsDefault true: 默认策略，false:自定义策略
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置true: 默认策略，false:自定义策略
                     * @param _isDefault true: 默认策略，false:自定义策略
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取策略生效镜像数量
                     * @return EffectImageCount 策略生效镜像数量
                     * 
                     */
                    uint64_t GetEffectImageCount() const;

                    /**
                     * 设置策略生效镜像数量
                     * @param _effectImageCount 策略生效镜像数量
                     * 
                     */
                    void SetEffectImageCount(const uint64_t& _effectImageCount);

                    /**
                     * 判断参数 EffectImageCount 是否已赋值
                     * @return EffectImageCount 是否已赋值
                     * 
                     */
                    bool EffectImageCountHasBeenSet() const;

                    /**
                     * 获取策略Id
                     * @return RuleId 策略Id
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置策略Id
                     * @param _ruleId 策略Id
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取策略更新时间, 存在为空的情况
                     * @return UpdateTime 策略更新时间, 存在为空的情况
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置策略更新时间, 存在为空的情况
                     * @param _updateTime 策略更新时间, 存在为空的情况
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
                     * 获取策略名字
                     * @return RuleName 策略名字
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置策略名字
                     * @param _ruleName 策略名字
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
                     * 获取编辑用户名称
                     * @return EditUserName 编辑用户名称
                     * 
                     */
                    std::string GetEditUserName() const;

                    /**
                     * 设置编辑用户名称
                     * @param _editUserName 编辑用户名称
                     * 
                     */
                    void SetEditUserName(const std::string& _editUserName);

                    /**
                     * 判断参数 EditUserName 是否已赋值
                     * @return EditUserName 是否已赋值
                     * 
                     */
                    bool EditUserNameHasBeenSet() const;

                    /**
                     * 获取true: 策略启用，false：策略禁用
                     * @return IsEnable true: 策略启用，false：策略禁用
                     * 
                     */
                    bool GetIsEnable() const;

                    /**
                     * 设置true: 策略启用，false：策略禁用
                     * @param _isEnable true: 策略启用，false：策略禁用
                     * 
                     */
                    void SetIsEnable(const bool& _isEnable);

                    /**
                     * 判断参数 IsEnable 是否已赋值
                     * @return IsEnable 是否已赋值
                     * 
                     */
                    bool IsEnableHasBeenSet() const;

                private:

                    /**
                     * true: 默认策略，false:自定义策略
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 策略生效镜像数量
                     */
                    uint64_t m_effectImageCount;
                    bool m_effectImageCountHasBeenSet;

                    /**
                     * 策略Id
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 策略更新时间, 存在为空的情况
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 策略名字
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 编辑用户名称
                     */
                    std::string m_editUserName;
                    bool m_editUserNameHasBeenSet;

                    /**
                     * true: 策略启用，false：策略禁用
                     */
                    bool m_isEnable;
                    bool m_isEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_RULEBASEINFO_H_
