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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_CREATEMUSKPROMPTRESPONSE_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_CREATEMUSKPROMPTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * CreateMuskPrompt返回参数结构体
                */
                class CreateMuskPromptResponse : public AbstractModel
                {
                public:
                    CreateMuskPromptResponse();
                    ~CreateMuskPromptResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取prompt id
                     * @return PromptId prompt id
                     * 
                     */
                    std::string GetPromptId() const;

                    /**
                     * 判断参数 PromptId 是否已赋值
                     * @return PromptId 是否已赋值
                     * 
                     */
                    bool PromptIdHasBeenSet() const;

                private:

                    /**
                     * prompt id
                     */
                    std::string m_promptId;
                    bool m_promptIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_CREATEMUSKPROMPTRESPONSE_H_
