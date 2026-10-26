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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_AIGWLENGTHLIMITCONFIG_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_AIGWLENGTHLIMITCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * AI 网关模型服务单次请求输入字符长度限制。只拒绝超限输入，不做截断。计量为整个请求 JSON 的 Unicode 字符数。
                */
                class AIGWLengthLimitConfig : public AbstractModel
                {
                public:
                    AIGWLengthLimitConfig();
                    ~AIGWLengthLimitConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否开启输入限制</p>
                     * @return EnableInputLimit <p>是否开启输入限制</p>
                     * 
                     */
                    bool GetEnableInputLimit() const;

                    /**
                     * 设置<p>是否开启输入限制</p>
                     * @param _enableInputLimit <p>是否开启输入限制</p>
                     * 
                     */
                    void SetEnableInputLimit(const bool& _enableInputLimit);

                    /**
                     * 判断参数 EnableInputLimit 是否已赋值
                     * @return EnableInputLimit 是否已赋值
                     * 
                     */
                    bool EnableInputLimitHasBeenSet() const;

                    /**
                     * 获取<p>最大输入字符数</p>
                     * @return MaxInputChars <p>最大输入字符数</p>
                     * 
                     */
                    uint64_t GetMaxInputChars() const;

                    /**
                     * 设置<p>最大输入字符数</p>
                     * @param _maxInputChars <p>最大输入字符数</p>
                     * 
                     */
                    void SetMaxInputChars(const uint64_t& _maxInputChars);

                    /**
                     * 判断参数 MaxInputChars 是否已赋值
                     * @return MaxInputChars 是否已赋值
                     * 
                     */
                    bool MaxInputCharsHasBeenSet() const;

                private:

                    /**
                     * <p>是否开启输入限制</p>
                     */
                    bool m_enableInputLimit;
                    bool m_enableInputLimitHasBeenSet;

                    /**
                     * <p>最大输入字符数</p>
                     */
                    uint64_t m_maxInputChars;
                    bool m_maxInputCharsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_AIGWLENGTHLIMITCONFIG_H_
