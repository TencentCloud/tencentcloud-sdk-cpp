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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKUSAGE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * AIGC 生视频任务的用量。
                */
                class AigcVideoTaskUsage : public AbstractModel
                {
                public:
                    AigcVideoTaskUsage();
                    ~AigcVideoTaskUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>输入 Token 数目。</p>
                     * @return InputTokens <p>输入 Token 数目。</p>
                     * 
                     */
                    int64_t GetInputTokens() const;

                    /**
                     * 设置<p>输入 Token 数目。</p>
                     * @param _inputTokens <p>输入 Token 数目。</p>
                     * 
                     */
                    void SetInputTokens(const int64_t& _inputTokens);

                    /**
                     * 判断参数 InputTokens 是否已赋值
                     * @return InputTokens 是否已赋值
                     * 
                     */
                    bool InputTokensHasBeenSet() const;

                    /**
                     * 获取<p>思考产生的 Token 数目。</p>
                     * @return ThoughtTokens <p>思考产生的 Token 数目。</p>
                     * 
                     */
                    int64_t GetThoughtTokens() const;

                    /**
                     * 设置<p>思考产生的 Token 数目。</p>
                     * @param _thoughtTokens <p>思考产生的 Token 数目。</p>
                     * 
                     */
                    void SetThoughtTokens(const int64_t& _thoughtTokens);

                    /**
                     * 判断参数 ThoughtTokens 是否已赋值
                     * @return ThoughtTokens 是否已赋值
                     * 
                     */
                    bool ThoughtTokensHasBeenSet() const;

                private:

                    /**
                     * <p>输入 Token 数目。</p>
                     */
                    int64_t m_inputTokens;
                    bool m_inputTokensHasBeenSet;

                    /**
                     * <p>思考产生的 Token 数目。</p>
                     */
                    int64_t m_thoughtTokens;
                    bool m_thoughtTokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKUSAGE_H_
