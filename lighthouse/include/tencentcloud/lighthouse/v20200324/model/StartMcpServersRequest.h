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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_STARTMCPSERVERSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_STARTMCPSERVERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * StartMcpServers请求参数结构体
                */
                class StartMcpServersRequest : public AbstractModel
                {
                public:
                    StartMcpServersRequest();
                    ~StartMcpServersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。
                     * @return InstanceId 实例 ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。
                     * @param _instanceId 实例 ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取MCP Server ID列表。可通过DescribeMcpServers接口返回值中的McpServerId获取。最大长度：10
                     * @return McpServerIds MCP Server ID列表。可通过DescribeMcpServers接口返回值中的McpServerId获取。最大长度：10
                     * 
                     */
                    std::vector<std::string> GetMcpServerIds() const;

                    /**
                     * 设置MCP Server ID列表。可通过DescribeMcpServers接口返回值中的McpServerId获取。最大长度：10
                     * @param _mcpServerIds MCP Server ID列表。可通过DescribeMcpServers接口返回值中的McpServerId获取。最大长度：10
                     * 
                     */
                    void SetMcpServerIds(const std::vector<std::string>& _mcpServerIds);

                    /**
                     * 判断参数 McpServerIds 是否已赋值
                     * @return McpServerIds 是否已赋值
                     * 
                     */
                    bool McpServerIdsHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。可通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * MCP Server ID列表。可通过DescribeMcpServers接口返回值中的McpServerId获取。最大长度：10
                     */
                    std::vector<std::string> m_mcpServerIds;
                    bool m_mcpServerIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_STARTMCPSERVERSREQUEST_H_
