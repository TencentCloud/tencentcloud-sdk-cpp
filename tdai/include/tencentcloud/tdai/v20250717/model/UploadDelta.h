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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_UPLOADDELTA_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_UPLOADDELTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * 流式接口当前消息数据详细内容
                */
                class UploadDelta : public AbstractModel
                {
                public:
                    UploadDelta();
                    ~UploadDelta() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取步骤摘要
                     * @return StepBrief 步骤摘要
                     * 
                     */
                    std::string GetStepBrief() const;

                    /**
                     * 设置步骤摘要
                     * @param _stepBrief 步骤摘要
                     * 
                     */
                    void SetStepBrief(const std::string& _stepBrief);

                    /**
                     * 判断参数 StepBrief 是否已赋值
                     * @return StepBrief 是否已赋值
                     * 
                     */
                    bool StepBriefHasBeenSet() const;

                    /**
                     * 获取步骤详情
                     * @return Content 步骤详情
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置步骤详情
                     * @param _content 步骤详情
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 步骤摘要
                     */
                    std::string m_stepBrief;
                    bool m_stepBriefHasBeenSet;

                    /**
                     * 步骤详情
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_UPLOADDELTA_H_
