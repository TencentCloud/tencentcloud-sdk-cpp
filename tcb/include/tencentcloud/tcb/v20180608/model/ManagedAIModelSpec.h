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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_MANAGEDAIMODELSPEC_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_MANAGEDAIMODELSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 托管 AI 模型参数规格
                */
                class ManagedAIModelSpec : public AbstractModel
                {
                public:
                    ManagedAIModelSpec();
                    ~ManagedAIModelSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>最大输入 Token</p>
                     * @return MaxInputToken <p>最大输入 Token</p>
                     * 
                     */
                    std::string GetMaxInputToken() const;

                    /**
                     * 设置<p>最大输入 Token</p>
                     * @param _maxInputToken <p>最大输入 Token</p>
                     * 
                     */
                    void SetMaxInputToken(const std::string& _maxInputToken);

                    /**
                     * 判断参数 MaxInputToken 是否已赋值
                     * @return MaxInputToken 是否已赋值
                     * 
                     */
                    bool MaxInputTokenHasBeenSet() const;

                    /**
                     * 获取<p>最大输出 Token</p>
                     * @return MaxOutputToken <p>最大输出 Token</p>
                     * 
                     */
                    std::string GetMaxOutputToken() const;

                    /**
                     * 设置<p>最大输出 Token</p>
                     * @param _maxOutputToken <p>最大输出 Token</p>
                     * 
                     */
                    void SetMaxOutputToken(const std::string& _maxOutputToken);

                    /**
                     * 判断参数 MaxOutputToken 是否已赋值
                     * @return MaxOutputToken 是否已赋值
                     * 
                     */
                    bool MaxOutputTokenHasBeenSet() const;

                    /**
                     * 获取<p>上下文长度</p>
                     * @return ContextLength <p>上下文长度</p>
                     * 
                     */
                    std::string GetContextLength() const;

                    /**
                     * 设置<p>上下文长度</p>
                     * @param _contextLength <p>上下文长度</p>
                     * 
                     */
                    void SetContextLength(const std::string& _contextLength);

                    /**
                     * 判断参数 ContextLength 是否已赋值
                     * @return ContextLength 是否已赋值
                     * 
                     */
                    bool ContextLengthHasBeenSet() const;

                private:

                    /**
                     * <p>最大输入 Token</p>
                     */
                    std::string m_maxInputToken;
                    bool m_maxInputTokenHasBeenSet;

                    /**
                     * <p>最大输出 Token</p>
                     */
                    std::string m_maxOutputToken;
                    bool m_maxOutputTokenHasBeenSet;

                    /**
                     * <p>上下文长度</p>
                     */
                    std::string m_contextLength;
                    bool m_contextLengthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_MANAGEDAIMODELSPEC_H_
