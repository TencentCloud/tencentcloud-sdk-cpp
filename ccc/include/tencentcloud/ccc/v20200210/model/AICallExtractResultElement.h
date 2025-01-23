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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AICALLEXTRACTRESULTELEMENT_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AICALLEXTRACTRESULTELEMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/AICallExtractResultInfo.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * AI 通话提取结果。
                */
                class AICallExtractResultElement : public AbstractModel
                {
                public:
                    AICallExtractResultElement();
                    ~AICallExtractResultElement() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取提取信息的类型
Text 文本
Selector 选项
Boolean 布尔值
Number 数字
                     * @return InfoType 提取信息的类型
Text 文本
Selector 选项
Boolean 布尔值
Number 数字
                     * 
                     */
                    std::string GetInfoType() const;

                    /**
                     * 设置提取信息的类型
Text 文本
Selector 选项
Boolean 布尔值
Number 数字
                     * @param _infoType 提取信息的类型
Text 文本
Selector 选项
Boolean 布尔值
Number 数字
                     * 
                     */
                    void SetInfoType(const std::string& _infoType);

                    /**
                     * 判断参数 InfoType 是否已赋值
                     * @return InfoType 是否已赋值
                     * 
                     */
                    bool InfoTypeHasBeenSet() const;

                    /**
                     * 获取提取信息的名称
                     * @return InfoName 提取信息的名称
                     * 
                     */
                    std::string GetInfoName() const;

                    /**
                     * 设置提取信息的名称
                     * @param _infoName 提取信息的名称
                     * 
                     */
                    void SetInfoName(const std::string& _infoName);

                    /**
                     * 判断参数 InfoName 是否已赋值
                     * @return InfoName 是否已赋值
                     * 
                     */
                    bool InfoNameHasBeenSet() const;

                    /**
                     * 获取提取信息的具体描述
                     * @return InfoContent 提取信息的具体描述
                     * 
                     */
                    std::string GetInfoContent() const;

                    /**
                     * 设置提取信息的具体描述
                     * @param _infoContent 提取信息的具体描述
                     * 
                     */
                    void SetInfoContent(const std::string& _infoContent);

                    /**
                     * 判断参数 InfoContent 是否已赋值
                     * @return InfoContent 是否已赋值
                     * 
                     */
                    bool InfoContentHasBeenSet() const;

                    /**
                     * 获取提取信息的具体结果
                     * @return Result 提取信息的具体结果
                     * 
                     */
                    AICallExtractResultInfo GetResult() const;

                    /**
                     * 设置提取信息的具体结果
                     * @param _result 提取信息的具体结果
                     * 
                     */
                    void SetResult(const AICallExtractResultInfo& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * 提取信息的类型
Text 文本
Selector 选项
Boolean 布尔值
Number 数字
                     */
                    std::string m_infoType;
                    bool m_infoTypeHasBeenSet;

                    /**
                     * 提取信息的名称
                     */
                    std::string m_infoName;
                    bool m_infoNameHasBeenSet;

                    /**
                     * 提取信息的具体描述
                     */
                    std::string m_infoContent;
                    bool m_infoContentHasBeenSet;

                    /**
                     * 提取信息的具体结果
                     */
                    AICallExtractResultInfo m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AICALLEXTRACTRESULTELEMENT_H_
