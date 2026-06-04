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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPGREETINGCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPGREETINGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 欢迎语配置
                */
                class AppGreetingConfig : public AbstractModel
                {
                public:
                    AppGreetingConfig();
                    ~AppGreetingConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取欢迎语内容
                     * @return Greeting 欢迎语内容
                     * 
                     */
                    std::string GetGreeting() const;

                    /**
                     * 设置欢迎语内容
                     * @param _greeting 欢迎语内容
                     * 
                     */
                    void SetGreeting(const std::string& _greeting);

                    /**
                     * 判断参数 Greeting 是否已赋值
                     * @return Greeting 是否已赋值
                     * 
                     */
                    bool GreetingHasBeenSet() const;

                    /**
                     * 获取开场问题列表
                     * @return OpeningQuestionList 开场问题列表
                     * 
                     */
                    std::vector<std::string> GetOpeningQuestionList() const;

                    /**
                     * 设置开场问题列表
                     * @param _openingQuestionList 开场问题列表
                     * 
                     */
                    void SetOpeningQuestionList(const std::vector<std::string>& _openingQuestionList);

                    /**
                     * 判断参数 OpeningQuestionList 是否已赋值
                     * @return OpeningQuestionList 是否已赋值
                     * 
                     */
                    bool OpeningQuestionListHasBeenSet() const;

                private:

                    /**
                     * 欢迎语内容
                     */
                    std::string m_greeting;
                    bool m_greetingHasBeenSet;

                    /**
                     * 开场问题列表
                     */
                    std::vector<std::string> m_openingQuestionList;
                    bool m_openingQuestionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPGREETINGCONFIG_H_
