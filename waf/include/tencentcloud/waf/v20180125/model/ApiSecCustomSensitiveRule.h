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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_APISECCUSTOMSENSITIVERULE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_APISECCUSTOMSENSITIVERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * api安全客户自定义敏感检测规则
                */
                class ApiSecCustomSensitiveRule : public AbstractModel
                {
                public:
                    ApiSecCustomSensitiveRule();
                    ~ApiSecCustomSensitiveRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数位置
                     * @return Position 参数位置
                     * 
                     */
                    std::vector<std::string> GetPosition() const;

                    /**
                     * 设置参数位置
                     * @param _position 参数位置
                     * 
                     */
                    void SetPosition(const std::vector<std::string>& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取匹配条件
                     * @return MatchKey 匹配条件
                     * 
                     */
                    std::string GetMatchKey() const;

                    /**
                     * 设置匹配条件
                     * @param _matchKey 匹配条件
                     * 
                     */
                    void SetMatchKey(const std::string& _matchKey);

                    /**
                     * 判断参数 MatchKey 是否已赋值
                     * @return MatchKey 是否已赋值
                     * 
                     */
                    bool MatchKeyHasBeenSet() const;

                    /**
                     * 获取匹配值
                     * @return MatchValue 匹配值
                     * 
                     */
                    std::vector<std::string> GetMatchValue() const;

                    /**
                     * 设置匹配值
                     * @param _matchValue 匹配值
                     * 
                     */
                    void SetMatchValue(const std::vector<std::string>& _matchValue);

                    /**
                     * 判断参数 MatchValue 是否已赋值
                     * @return MatchValue 是否已赋值
                     * 
                     */
                    bool MatchValueHasBeenSet() const;

                    /**
                     * 获取风险等级
                     * @return Level 风险等级
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置风险等级
                     * @param _level 风险等级
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取匹配符号，当匹配条件为关键字匹配和字符匹配的时候传该值,可传多个
                     * @return MatchCond 匹配符号，当匹配条件为关键字匹配和字符匹配的时候传该值,可传多个
                     * 
                     */
                    std::vector<std::string> GetMatchCond() const;

                    /**
                     * 设置匹配符号，当匹配条件为关键字匹配和字符匹配的时候传该值,可传多个
                     * @param _matchCond 匹配符号，当匹配条件为关键字匹配和字符匹配的时候传该值,可传多个
                     * 
                     */
                    void SetMatchCond(const std::vector<std::string>& _matchCond);

                    /**
                     * 判断参数 MatchCond 是否已赋值
                     * @return MatchCond 是否已赋值
                     * 
                     */
                    bool MatchCondHasBeenSet() const;

                    /**
                     * 获取规则是否泛化，默认0表示不泛化
                     * @return IsPan 规则是否泛化，默认0表示不泛化
                     * 
                     */
                    int64_t GetIsPan() const;

                    /**
                     * 设置规则是否泛化，默认0表示不泛化
                     * @param _isPan 规则是否泛化，默认0表示不泛化
                     * 
                     */
                    void SetIsPan(const int64_t& _isPan);

                    /**
                     * 判断参数 IsPan 是否已赋值
                     * @return IsPan 是否已赋值
                     * 
                     */
                    bool IsPanHasBeenSet() const;

                private:

                    /**
                     * 参数位置
                     */
                    std::vector<std::string> m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * 匹配条件
                     */
                    std::string m_matchKey;
                    bool m_matchKeyHasBeenSet;

                    /**
                     * 匹配值
                     */
                    std::vector<std::string> m_matchValue;
                    bool m_matchValueHasBeenSet;

                    /**
                     * 风险等级
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 匹配符号，当匹配条件为关键字匹配和字符匹配的时候传该值,可传多个
                     */
                    std::vector<std::string> m_matchCond;
                    bool m_matchCondHasBeenSet;

                    /**
                     * 规则是否泛化，默认0表示不泛化
                     */
                    int64_t m_isPan;
                    bool m_isPanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_APISECCUSTOMSENSITIVERULE_H_
