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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SCDNACLRULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SCDNACLRULE_H_

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
                * 精准访问控制匹配规则
                */
                class ScdnAclRule : public AbstractModel
                {
                public:
                    ScdnAclRule();
                    ~ScdnAclRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取匹配关键字
                     * @return MatchKey 匹配关键字
                     * 
                     */
                    std::string GetMatchKey() const;

                    /**
                     * 设置匹配关键字
                     * @param _matchKey 匹配关键字
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
                     * 获取逻辑操作符，取值如下
                     * @return LogiOperator 逻辑操作符，取值如下
                     * 
                     */
                    std::string GetLogiOperator() const;

                    /**
                     * 设置逻辑操作符，取值如下
                     * @param _logiOperator 逻辑操作符，取值如下
                     * 
                     */
                    void SetLogiOperator(const std::string& _logiOperator);

                    /**
                     * 判断参数 LogiOperator 是否已赋值
                     * @return LogiOperator 是否已赋值
                     * 
                     */
                    bool LogiOperatorHasBeenSet() const;

                    /**
                     * 获取匹配值。
                     * @return MatchValue 匹配值。
                     * 
                     */
                    std::string GetMatchValue() const;

                    /**
                     * 设置匹配值。
                     * @param _matchValue 匹配值。
                     * 
                     */
                    void SetMatchValue(const std::string& _matchValue);

                    /**
                     * 判断参数 MatchValue 是否已赋值
                     * @return MatchValue 是否已赋值
                     * 
                     */
                    bool MatchValueHasBeenSet() const;

                private:

                    /**
                     * 匹配关键字
                     */
                    std::string m_matchKey;
                    bool m_matchKeyHasBeenSet;

                    /**
                     * 逻辑操作符，取值如下
                     */
                    std::string m_logiOperator;
                    bool m_logiOperatorHasBeenSet;

                    /**
                     * 匹配值。
                     */
                    std::string m_matchValue;
                    bool m_matchValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SCDNACLRULE_H_
