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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_APISECPRIVILEGERULE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_APISECPRIVILEGERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ApiNameOp.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 自定义api鉴权规则
                */
                class ApiSecPrivilegeRule : public AbstractModel
                {
                public:
                    ApiSecPrivilegeRule();
                    ~ApiSecPrivilegeRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则名称，不可重复
                     * @return RuleName 规则名称，不可重复
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称，不可重复
                     * @param _ruleName 规则名称，不可重复
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
                     * 获取1:开，0:关
                     * @return Status 1:开，0:关
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置1:开，0:关
                     * @param _status 1:开，0:关
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
                     * 获取最多输入20个api
                     * @return ApiName 最多输入20个api
                     * 
                     */
                    std::vector<std::string> GetApiName() const;

                    /**
                     * 设置最多输入20个api
                     * @param _apiName 最多输入20个api
                     * 
                     */
                    void SetApiName(const std::vector<std::string>& _apiName);

                    /**
                     * 判断参数 ApiName 是否已赋值
                     * @return ApiName 是否已赋值
                     * 
                     */
                    bool ApiNameHasBeenSet() const;

                    /**
                     * 获取鉴权位置
                     * @return Position 鉴权位置
                     * 
                     */
                    std::string GetPosition() const;

                    /**
                     * 设置鉴权位置
                     * @param _position 鉴权位置
                     * 
                     */
                    void SetPosition(const std::string& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取鉴权参数列表
                     * @return ParameterList 鉴权参数列表
                     * 
                     */
                    std::vector<std::string> GetParameterList() const;

                    /**
                     * 设置鉴权参数列表
                     * @param _parameterList 鉴权参数列表
                     * 
                     */
                    void SetParameterList(const std::vector<std::string>& _parameterList);

                    /**
                     * 判断参数 ParameterList 是否已赋值
                     * @return ParameterList 是否已赋值
                     * 
                     */
                    bool ParameterListHasBeenSet() const;

                    /**
                     * 获取更新时间戳
                     * @return UpdateTime 更新时间戳
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间戳
                     * @param _updateTime 更新时间戳
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取规则来源
                     * @return Source 规则来源
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置规则来源
                     * @param _source 规则来源
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取带有匹配方式的api列表
                     * @return ApiNameOp 带有匹配方式的api列表
                     * 
                     */
                    std::vector<ApiNameOp> GetApiNameOp() const;

                    /**
                     * 设置带有匹配方式的api列表
                     * @param _apiNameOp 带有匹配方式的api列表
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
                     * 获取应用对象取值，1表示手动填写，2表示从api资产中获取
                     * @return Option 应用对象取值，1表示手动填写，2表示从api资产中获取
                     * 
                     */
                    uint64_t GetOption() const;

                    /**
                     * 设置应用对象取值，1表示手动填写，2表示从api资产中获取
                     * @param _option 应用对象取值，1表示手动填写，2表示从api资产中获取
                     * 
                     */
                    void SetOption(const uint64_t& _option);

                    /**
                     * 判断参数 Option 是否已赋值
                     * @return Option 是否已赋值
                     * 
                     */
                    bool OptionHasBeenSet() const;

                private:

                    /**
                     * 规则名称，不可重复
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 1:开，0:关
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 最多输入20个api
                     */
                    std::vector<std::string> m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * 鉴权位置
                     */
                    std::string m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * 鉴权参数列表
                     */
                    std::vector<std::string> m_parameterList;
                    bool m_parameterListHasBeenSet;

                    /**
                     * 更新时间戳
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 规则来源
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 带有匹配方式的api列表
                     */
                    std::vector<ApiNameOp> m_apiNameOp;
                    bool m_apiNameOpHasBeenSet;

                    /**
                     * 应用对象取值，1表示手动填写，2表示从api资产中获取
                     */
                    uint64_t m_option;
                    bool m_optionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_APISECPRIVILEGERULE_H_
