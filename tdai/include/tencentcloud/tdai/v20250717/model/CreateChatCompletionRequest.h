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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_CREATECHATCOMPLETIONREQUEST_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_CREATECHATCOMPLETIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateChatCompletion请求参数结构体
                */
                class CreateChatCompletionRequest : public AbstractModel
                {
                public:
                    CreateChatCompletionRequest();
                    ~CreateChatCompletionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否隐藏
                     * @return IsHidden 是否隐藏
                     * 
                     */
                    bool GetIsHidden() const;

                    /**
                     * 设置是否隐藏
                     * @param _isHidden 是否隐藏
                     * 
                     */
                    void SetIsHidden(const bool& _isHidden);

                    /**
                     * 判断参数 IsHidden 是否已赋值
                     * @return IsHidden 是否已赋值
                     * 
                     */
                    bool IsHiddenHasBeenSet() const;

                private:

                    /**
                     * 是否隐藏
                     */
                    bool m_isHidden;
                    bool m_isHiddenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_CREATECHATCOMPLETIONREQUEST_H_
