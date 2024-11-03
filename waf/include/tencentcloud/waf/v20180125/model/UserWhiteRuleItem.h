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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_USERWHITERULEITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_USERWHITERULEITEM_H_

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
                * 用户规则白名单规则子项
                */
                class UserWhiteRuleItem : public AbstractModel
                {
                public:
                    UserWhiteRuleItem();
                    ~UserWhiteRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取匹配域
                     * @return MatchField 匹配域
                     * 
                     */
                    std::string GetMatchField() const;

                    /**
                     * 设置匹配域
                     * @param _matchField 匹配域
                     * 
                     */
                    void SetMatchField(const std::string& _matchField);

                    /**
                     * 判断参数 MatchField 是否已赋值
                     * @return MatchField 是否已赋值
                     * 
                     */
                    bool MatchFieldHasBeenSet() const;

                    /**
                     * 获取匹配方法
                     * @return MatchMethod 匹配方法
                     * 
                     */
                    std::string GetMatchMethod() const;

                    /**
                     * 设置匹配方法
                     * @param _matchMethod 匹配方法
                     * 
                     */
                    void SetMatchMethod(const std::string& _matchMethod);

                    /**
                     * 判断参数 MatchMethod 是否已赋值
                     * @return MatchMethod 是否已赋值
                     * 
                     */
                    bool MatchMethodHasBeenSet() const;

                    /**
                     * 获取匹配内容
                     * @return MatchContent 匹配内容
                     * 
                     */
                    std::string GetMatchContent() const;

                    /**
                     * 设置匹配内容
                     * @param _matchContent 匹配内容
                     * 
                     */
                    void SetMatchContent(const std::string& _matchContent);

                    /**
                     * 判断参数 MatchContent 是否已赋值
                     * @return MatchContent 是否已赋值
                     * 
                     */
                    bool MatchContentHasBeenSet() const;

                    /**
                     * 获取匹配参数名
                     * @return MatchParams 匹配参数名
                     * 
                     */
                    std::string GetMatchParams() const;

                    /**
                     * 设置匹配参数名
                     * @param _matchParams 匹配参数名
                     * 
                     */
                    void SetMatchParams(const std::string& _matchParams);

                    /**
                     * 判断参数 MatchParams 是否已赋值
                     * @return MatchParams 是否已赋值
                     * 
                     */
                    bool MatchParamsHasBeenSet() const;

                private:

                    /**
                     * 匹配域
                     */
                    std::string m_matchField;
                    bool m_matchFieldHasBeenSet;

                    /**
                     * 匹配方法
                     */
                    std::string m_matchMethod;
                    bool m_matchMethodHasBeenSet;

                    /**
                     * 匹配内容
                     */
                    std::string m_matchContent;
                    bool m_matchContentHasBeenSet;

                    /**
                     * 匹配参数名
                     */
                    std::string m_matchParams;
                    bool m_matchParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_USERWHITERULEITEM_H_
