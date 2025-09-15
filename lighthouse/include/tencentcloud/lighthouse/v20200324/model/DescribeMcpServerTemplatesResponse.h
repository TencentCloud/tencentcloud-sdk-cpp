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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEMCPSERVERTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEMCPSERVERTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/McpServerTemplate.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeMcpServerTemplates返回参数结构体
                */
                class DescribeMcpServerTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeMcpServerTemplatesResponse();
                    ~DescribeMcpServerTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取MCP Server模板列表。
                     * @return McpServerTemplateSet MCP Server模板列表。
                     * 
                     */
                    std::vector<McpServerTemplate> GetMcpServerTemplateSet() const;

                    /**
                     * 判断参数 McpServerTemplateSet 是否已赋值
                     * @return McpServerTemplateSet 是否已赋值
                     * 
                     */
                    bool McpServerTemplateSetHasBeenSet() const;

                    /**
                     * 获取符合条件的MCP Server模板数量。
                     * @return TotalCount 符合条件的MCP Server模板数量。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * MCP Server模板列表。
                     */
                    std::vector<McpServerTemplate> m_mcpServerTemplateSet;
                    bool m_mcpServerTemplateSetHasBeenSet;

                    /**
                     * 符合条件的MCP Server模板数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEMCPSERVERTEMPLATESRESPONSE_H_
