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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_APISECSENSITIVEWHITERULE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_APISECSENSITIVEWHITERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ApiNameOp.h>
#include <tencentcloud/waf/v20180125/model/ApiSecSensitiveWhiteField.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 敏感数据加白规则模型
                */
                class ApiSecSensitiveWhiteRule : public AbstractModel
                {
                public:
                    ApiSecSensitiveWhiteRule();
                    ~ApiSecSensitiveWhiteRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>白名单规则名称</p>
                     * @return RuleName <p>白名单规则名称</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>白名单规则名称</p>
                     * @param _ruleName <p>白名单规则名称</p>
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
                     * 获取<p>加白对象配置</p>
                     * @return ApiNameOp <p>加白对象配置</p>
                     * 
                     */
                    std::vector<ApiNameOp> GetApiNameOp() const;

                    /**
                     * 设置<p>加白对象配置</p>
                     * @param _apiNameOp <p>加白对象配置</p>
                     * 
                     */
                    void SetApiNameOp(const std::vector<ApiNameOp>& _apiNameOp);

                    /**
                     * 判断参数 ApiNameOp 是否已赋值
                     * @return ApiNameOp 是否已赋值
                     * 
                     */
                    bool ApiNameOpHasBeenSet() const;

                    /**
                     * 获取<p>加白模式</p><p>枚举值：</p><ul><li>1： 对整个API加白</li><li>2： 对指定字段加白</li></ul>
                     * @return WhiteMode <p>加白模式</p><p>枚举值：</p><ul><li>1： 对整个API加白</li><li>2： 对指定字段加白</li></ul>
                     * 
                     */
                    int64_t GetWhiteMode() const;

                    /**
                     * 设置<p>加白模式</p><p>枚举值：</p><ul><li>1： 对整个API加白</li><li>2： 对指定字段加白</li></ul>
                     * @param _whiteMode <p>加白模式</p><p>枚举值：</p><ul><li>1： 对整个API加白</li><li>2： 对指定字段加白</li></ul>
                     * 
                     */
                    void SetWhiteMode(const int64_t& _whiteMode);

                    /**
                     * 判断参数 WhiteMode 是否已赋值
                     * @return WhiteMode 是否已赋值
                     * 
                     */
                    bool WhiteModeHasBeenSet() const;

                    /**
                     * 获取<p>加白字段配置列表</p>
                     * @return WhiteFields <p>加白字段配置列表</p>
                     * 
                     */
                    std::vector<ApiSecSensitiveWhiteField> GetWhiteFields() const;

                    /**
                     * 设置<p>加白字段配置列表</p>
                     * @param _whiteFields <p>加白字段配置列表</p>
                     * 
                     */
                    void SetWhiteFields(const std::vector<ApiSecSensitiveWhiteField>& _whiteFields);

                    /**
                     * 判断参数 WhiteFields 是否已赋值
                     * @return WhiteFields 是否已赋值
                     * 
                     */
                    bool WhiteFieldsHasBeenSet() const;

                    /**
                     * 获取<p>规则开关</p><p>枚举值：</p><ul><li>0： 关</li><li>1： 开</li></ul>
                     * @return Status <p>规则开关</p><p>枚举值：</p><ul><li>0： 关</li><li>1： 开</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>规则开关</p><p>枚举值：</p><ul><li>0： 关</li><li>1： 开</li></ul>
                     * @param _status <p>规则开关</p><p>枚举值：</p><ul><li>0： 关</li><li>1： 开</li></ul>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>规则描述</p>
                     * @return Description <p>规则描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>规则描述</p>
                     * @param _description <p>规则描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>修改时间</p><p>单位：s</p>
                     * @return UpdateTime <p>修改时间</p><p>单位：s</p>
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置<p>修改时间</p><p>单位：s</p>
                     * @param _updateTime <p>修改时间</p><p>单位：s</p>
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>白名单规则名称</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>加白对象配置</p>
                     */
                    std::vector<ApiNameOp> m_apiNameOp;
                    bool m_apiNameOpHasBeenSet;

                    /**
                     * <p>加白模式</p><p>枚举值：</p><ul><li>1： 对整个API加白</li><li>2： 对指定字段加白</li></ul>
                     */
                    int64_t m_whiteMode;
                    bool m_whiteModeHasBeenSet;

                    /**
                     * <p>加白字段配置列表</p>
                     */
                    std::vector<ApiSecSensitiveWhiteField> m_whiteFields;
                    bool m_whiteFieldsHasBeenSet;

                    /**
                     * <p>规则开关</p><p>枚举值：</p><ul><li>0： 关</li><li>1： 开</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>规则描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>修改时间</p><p>单位：s</p>
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_APISECSENSITIVEWHITERULE_H_
