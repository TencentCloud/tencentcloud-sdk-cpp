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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GETTOKENCOUNTRESPONSE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GETTOKENCOUNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * GetTokenCount返回参数结构体
                */
                class GetTokenCountResponse : public AbstractModel
                {
                public:
                    GetTokenCountResponse();
                    ~GetTokenCountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取token计数
                     * @return TokenCount token计数
                     * 
                     */
                    int64_t GetTokenCount() const;

                    /**
                     * 判断参数 TokenCount 是否已赋值
                     * @return TokenCount 是否已赋值
                     * 
                     */
                    bool TokenCountHasBeenSet() const;

                    /**
                     * 获取字符计数
                     * @return CharacterCount 字符计数
                     * 
                     */
                    int64_t GetCharacterCount() const;

                    /**
                     * 判断参数 CharacterCount 是否已赋值
                     * @return CharacterCount 是否已赋值
                     * 
                     */
                    bool CharacterCountHasBeenSet() const;

                    /**
                     * 获取切分后的列表
                     * @return Tokens 切分后的列表
                     * 
                     */
                    std::vector<std::string> GetTokens() const;

                    /**
                     * 判断参数 Tokens 是否已赋值
                     * @return Tokens 是否已赋值
                     * 
                     */
                    bool TokensHasBeenSet() const;

                private:

                    /**
                     * token计数
                     */
                    int64_t m_tokenCount;
                    bool m_tokenCountHasBeenSet;

                    /**
                     * 字符计数
                     */
                    int64_t m_characterCount;
                    bool m_characterCountHasBeenSet;

                    /**
                     * 切分后的列表
                     */
                    std::vector<std::string> m_tokens;
                    bool m_tokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GETTOKENCOUNTRESPONSE_H_
