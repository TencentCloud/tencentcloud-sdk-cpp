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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_READMCPRESOURCERESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_READMCPRESOURCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/MCPResourceContents.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ReadMCPResource返回参数结构体
                */
                class ReadMCPResourceResponse : public AbstractModel
                {
                public:
                    ReadMCPResourceResponse();
                    ~ReadMCPResourceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>MCP resources/read 返回的资源内容</p>
                     * @return Contents <p>MCP resources/read 返回的资源内容</p>
                     * 
                     */
                    std::vector<MCPResourceContents> GetContents() const;

                    /**
                     * 判断参数 Contents 是否已赋值
                     * @return Contents 是否已赋值
                     * 
                     */
                    bool ContentsHasBeenSet() const;

                    /**
                     * 获取<p>JSON：Resource 的 _meta 原文，MCP App 场景 Host 依据 ui.csp 强制 CSP 策略</p>
                     * @return ResourceMeta <p>JSON：Resource 的 _meta 原文，MCP App 场景 Host 依据 ui.csp 强制 CSP 策略</p>
                     * 
                     */
                    std::string GetResourceMeta() const;

                    /**
                     * 判断参数 ResourceMeta 是否已赋值
                     * @return ResourceMeta 是否已赋值
                     * 
                     */
                    bool ResourceMetaHasBeenSet() const;

                private:

                    /**
                     * <p>MCP resources/read 返回的资源内容</p>
                     */
                    std::vector<MCPResourceContents> m_contents;
                    bool m_contentsHasBeenSet;

                    /**
                     * <p>JSON：Resource 的 _meta 原文，MCP App 场景 Host 依据 ui.csp 强制 CSP 策略</p>
                     */
                    std::string m_resourceMeta;
                    bool m_resourceMetaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_READMCPRESOURCERESPONSE_H_
