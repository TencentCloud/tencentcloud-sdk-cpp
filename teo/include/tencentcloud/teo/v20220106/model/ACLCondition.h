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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_ACLCONDITION_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_ACLCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 精准防护条件
                */
                class ACLCondition : public AbstractModel
                {
                public:
                    ACLCondition();
                    ~ACLCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取匹配字段
                     * @return MatchFrom 匹配字段
                     */
                    std::string GetMatchFrom() const;

                    /**
                     * 设置匹配字段
                     * @param MatchFrom 匹配字段
                     */
                    void SetMatchFrom(const std::string& _matchFrom);

                    /**
                     * 判断参数 MatchFrom 是否已赋值
                     * @return MatchFrom 是否已赋值
                     */
                    bool MatchFromHasBeenSet() const;

                    /**
                     * 获取匹配字符串
                     * @return MatchParam 匹配字符串
                     */
                    std::string GetMatchParam() const;

                    /**
                     * 设置匹配字符串
                     * @param MatchParam 匹配字符串
                     */
                    void SetMatchParam(const std::string& _matchParam);

                    /**
                     * 判断参数 MatchParam 是否已赋值
                     * @return MatchParam 是否已赋值
                     */
                    bool MatchParamHasBeenSet() const;

                    /**
                     * 获取匹配关系
                     * @return Operator 匹配关系
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置匹配关系
                     * @param Operator 匹配关系
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取匹配内容
                     * @return MatchContent 匹配内容
                     */
                    std::string GetMatchContent() const;

                    /**
                     * 设置匹配内容
                     * @param MatchContent 匹配内容
                     */
                    void SetMatchContent(const std::string& _matchContent);

                    /**
                     * 判断参数 MatchContent 是否已赋值
                     * @return MatchContent 是否已赋值
                     */
                    bool MatchContentHasBeenSet() const;

                private:

                    /**
                     * 匹配字段
                     */
                    std::string m_matchFrom;
                    bool m_matchFromHasBeenSet;

                    /**
                     * 匹配字符串
                     */
                    std::string m_matchParam;
                    bool m_matchParamHasBeenSet;

                    /**
                     * 匹配关系
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 匹配内容
                     */
                    std::string m_matchContent;
                    bool m_matchContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_ACLCONDITION_H_
