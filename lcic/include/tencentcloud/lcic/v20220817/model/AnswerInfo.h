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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_ANSWERINFO_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_ANSWERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * 房间问答答案详情
                */
                class AnswerInfo : public AbstractModel
                {
                public:
                    AnswerInfo();
                    ~AnswerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户名
                     * @return Name 用户名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置用户名
                     * @param _name 用户名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取答案（按照位表示是否选择，如0x1表示选择A，0x11表示选择AB）
                     * @return Answer 答案（按照位表示是否选择，如0x1表示选择A，0x11表示选择AB）
                     * 
                     */
                    uint64_t GetAnswer() const;

                    /**
                     * 设置答案（按照位表示是否选择，如0x1表示选择A，0x11表示选择AB）
                     * @param _answer 答案（按照位表示是否选择，如0x1表示选择A，0x11表示选择AB）
                     * 
                     */
                    void SetAnswer(const uint64_t& _answer);

                    /**
                     * 判断参数 Answer 是否已赋值
                     * @return Answer 是否已赋值
                     * 
                     */
                    bool AnswerHasBeenSet() const;

                    /**
                     * 获取答题用时
                     * @return CostTime 答题用时
                     * 
                     */
                    uint64_t GetCostTime() const;

                    /**
                     * 设置答题用时
                     * @param _costTime 答题用时
                     * 
                     */
                    void SetCostTime(const uint64_t& _costTime);

                    /**
                     * 判断参数 CostTime 是否已赋值
                     * @return CostTime 是否已赋值
                     * 
                     */
                    bool CostTimeHasBeenSet() const;

                    /**
                     * 获取用户ID
                     * @return UserId 用户ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID
                     * @param _userId 用户ID
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取答案是否正确（1正确0错误）
                     * @return IsCorrect 答案是否正确（1正确0错误）
                     * 
                     */
                    uint64_t GetIsCorrect() const;

                    /**
                     * 设置答案是否正确（1正确0错误）
                     * @param _isCorrect 答案是否正确（1正确0错误）
                     * 
                     */
                    void SetIsCorrect(const uint64_t& _isCorrect);

                    /**
                     * 判断参数 IsCorrect 是否已赋值
                     * @return IsCorrect 是否已赋值
                     * 
                     */
                    bool IsCorrectHasBeenSet() const;

                private:

                    /**
                     * 用户名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 答案（按照位表示是否选择，如0x1表示选择A，0x11表示选择AB）
                     */
                    uint64_t m_answer;
                    bool m_answerHasBeenSet;

                    /**
                     * 答题用时
                     */
                    uint64_t m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * 用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 答案是否正确（1正确0错误）
                     */
                    uint64_t m_isCorrect;
                    bool m_isCorrectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_ANSWERINFO_H_
