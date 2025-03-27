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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_STEPTIP_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_STEPTIP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 当前步骤错误信息或者警告信息
                */
                class StepTip : public AbstractModel
                {
                public:
                    StepTip();
                    ~StepTip() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取错误码
                     * @return Code 错误码
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置错误码
                     * @param _code 错误码
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return Message 错误信息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置错误信息
                     * @param _message 错误信息
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取解决方式
                     * @return Solution 解决方式
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置解决方式
                     * @param _solution 解决方式
                     * 
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     * 
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取帮助文档
                     * @return HelpDoc 帮助文档
                     * 
                     */
                    std::string GetHelpDoc() const;

                    /**
                     * 设置帮助文档
                     * @param _helpDoc 帮助文档
                     * 
                     */
                    void SetHelpDoc(const std::string& _helpDoc);

                    /**
                     * 判断参数 HelpDoc 是否已赋值
                     * @return HelpDoc 是否已赋值
                     * 
                     */
                    bool HelpDocHasBeenSet() const;

                    /**
                     * 获取当前步骤跳过信息
                     * @return SkipInfo 当前步骤跳过信息
                     * 
                     */
                    std::string GetSkipInfo() const;

                    /**
                     * 设置当前步骤跳过信息
                     * @param _skipInfo 当前步骤跳过信息
                     * 
                     */
                    void SetSkipInfo(const std::string& _skipInfo);

                    /**
                     * 判断参数 SkipInfo 是否已赋值
                     * @return SkipInfo 是否已赋值
                     * 
                     */
                    bool SkipInfoHasBeenSet() const;

                private:

                    /**
                     * 错误码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 解决方式
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * 帮助文档
                     */
                    std::string m_helpDoc;
                    bool m_helpDocHasBeenSet;

                    /**
                     * 当前步骤跳过信息
                     */
                    std::string m_skipInfo;
                    bool m_skipInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_STEPTIP_H_
