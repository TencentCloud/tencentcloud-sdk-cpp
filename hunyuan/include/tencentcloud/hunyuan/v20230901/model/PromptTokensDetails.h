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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_PROMPTTOKENSDETAILS_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_PROMPTTOKENSDETAILS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 输入token的详细信息。
                */
                class PromptTokensDetails : public AbstractModel
                {
                public:
                    PromptTokensDetails();
                    ~PromptTokensDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取缓存 token 的数量。
                     * @return CachedTokens 缓存 token 的数量。
                     * 
                     */
                    std::string GetCachedTokens() const;

                    /**
                     * 设置缓存 token 的数量。
                     * @param _cachedTokens 缓存 token 的数量。
                     * 
                     */
                    void SetCachedTokens(const std::string& _cachedTokens);

                    /**
                     * 判断参数 CachedTokens 是否已赋值
                     * @return CachedTokens 是否已赋值
                     * 
                     */
                    bool CachedTokensHasBeenSet() const;

                private:

                    /**
                     * 缓存 token 的数量。
                     */
                    std::string m_cachedTokens;
                    bool m_cachedTokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_PROMPTTOKENSDETAILS_H_
