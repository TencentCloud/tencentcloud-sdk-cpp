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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_MCPURLOBJ_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_MCPURLOBJ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * Mcp的访问URL
                */
                class McpUrlObj : public AbstractModel
                {
                public:
                    McpUrlObj();
                    ~McpUrlObj() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取sse访问URL
                     * @return SSEUrl sse访问URL
                     * 
                     */
                    std::string GetSSEUrl() const;

                    /**
                     * 设置sse访问URL
                     * @param _sSEUrl sse访问URL
                     * 
                     */
                    void SetSSEUrl(const std::string& _sSEUrl);

                    /**
                     * 判断参数 SSEUrl 是否已赋值
                     * @return SSEUrl 是否已赋值
                     * 
                     */
                    bool SSEUrlHasBeenSet() const;

                    /**
                     * 获取streamable访问URL
                     * @return StreamAbleUrl streamable访问URL
                     * 
                     */
                    std::string GetStreamAbleUrl() const;

                    /**
                     * 设置streamable访问URL
                     * @param _streamAbleUrl streamable访问URL
                     * 
                     */
                    void SetStreamAbleUrl(const std::string& _streamAbleUrl);

                    /**
                     * 判断参数 StreamAbleUrl 是否已赋值
                     * @return StreamAbleUrl 是否已赋值
                     * 
                     */
                    bool StreamAbleUrlHasBeenSet() const;

                private:

                    /**
                     * sse访问URL
                     */
                    std::string m_sSEUrl;
                    bool m_sSEUrlHasBeenSet;

                    /**
                     * streamable访问URL
                     */
                    std::string m_streamAbleUrl;
                    bool m_streamAbleUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_MCPURLOBJ_H_
