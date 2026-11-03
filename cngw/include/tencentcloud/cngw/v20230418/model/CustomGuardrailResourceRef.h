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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILRESOURCEREF_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILRESOURCEREF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 自定义安全护栏业务资源引用
                */
                class CustomGuardrailResourceRef : public AbstractModel
                {
                public:
                    CustomGuardrailResourceRef();
                    ~CustomGuardrailResourceRef() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>被审核的业务资源类型：model_api 模型 API；mcp_server MCP Server（当前支持 Streamable HTTP）；agent_api Agent API（当前支持 A2A）。</p>
                     * @return ResourceType <p>被审核的业务资源类型：model_api 模型 API；mcp_server MCP Server（当前支持 Streamable HTTP）；agent_api Agent API（当前支持 A2A）。</p>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>被审核的业务资源类型：model_api 模型 API；mcp_server MCP Server（当前支持 Streamable HTTP）；agent_api Agent API（当前支持 A2A）。</p>
                     * @param _resourceType <p>被审核的业务资源类型：model_api 模型 API；mcp_server MCP Server（当前支持 Streamable HTTP）；agent_api Agent API（当前支持 A2A）。</p>
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>上述类型的管控业务资源 ID，可从 DescribeAIGWCustomGuardrailBindableResources 获取；不是审核引擎 ServiceId，也不是 Kong RouteId。请原样使用接口返回 ID。</p>
                     * @return ResourceId <p>上述类型的管控业务资源 ID，可从 DescribeAIGWCustomGuardrailBindableResources 获取；不是审核引擎 ServiceId，也不是 Kong RouteId。请原样使用接口返回 ID。</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>上述类型的管控业务资源 ID，可从 DescribeAIGWCustomGuardrailBindableResources 获取；不是审核引擎 ServiceId，也不是 Kong RouteId。请原样使用接口返回 ID。</p>
                     * @param _resourceId <p>上述类型的管控业务资源 ID，可从 DescribeAIGWCustomGuardrailBindableResources 获取；不是审核引擎 ServiceId，也不是 Kong RouteId。请原样使用接口返回 ID。</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * <p>被审核的业务资源类型：model_api 模型 API；mcp_server MCP Server（当前支持 Streamable HTTP）；agent_api Agent API（当前支持 A2A）。</p>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>上述类型的管控业务资源 ID，可从 DescribeAIGWCustomGuardrailBindableResources 获取；不是审核引擎 ServiceId，也不是 Kong RouteId。请原样使用接口返回 ID。</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILRESOURCEREF_H_
