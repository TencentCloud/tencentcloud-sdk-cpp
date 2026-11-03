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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILSCOPE_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILSCOPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/CustomGuardrailResourceRef.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 自定义安全护栏生效范围
                */
                class CustomGuardrailScope : public AbstractModel
                {
                public:
                    CustomGuardrailScope();
                    ~CustomGuardrailScope() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>绑定方式：resource 显式指定业务资源；global 覆盖网关中当前支持的业务资源，由平台关联到其 Kong Route，并随受支持的资源变更协调绑定。不是创建一个独立的 Kong global 插件。相同 Route 不能同时被多个自定义护栏策略占用。</p>
                     * @return BindType <p>绑定方式：resource 显式指定业务资源；global 覆盖网关中当前支持的业务资源，由平台关联到其 Kong Route，并随受支持的资源变更协调绑定。不是创建一个独立的 Kong global 插件。相同 Route 不能同时被多个自定义护栏策略占用。</p>
                     * 
                     */
                    std::string GetBindType() const;

                    /**
                     * 设置<p>绑定方式：resource 显式指定业务资源；global 覆盖网关中当前支持的业务资源，由平台关联到其 Kong Route，并随受支持的资源变更协调绑定。不是创建一个独立的 Kong global 插件。相同 Route 不能同时被多个自定义护栏策略占用。</p>
                     * @param _bindType <p>绑定方式：resource 显式指定业务资源；global 覆盖网关中当前支持的业务资源，由平台关联到其 Kong Route，并随受支持的资源变更协调绑定。不是创建一个独立的 Kong global 插件。相同 Route 不能同时被多个自定义护栏策略占用。</p>
                     * 
                     */
                    void SetBindType(const std::string& _bindType);

                    /**
                     * 判断参数 BindType 是否已赋值
                     * @return BindType 是否已赋值
                     * 
                     */
                    bool BindTypeHasBeenSet() const;

                    /**
                     * 获取<p>BindType=resource 时必填，1～200 个资源，ResourceType/ResourceId 组合不得重复；global 时不应填写资源或传 []。Modify 传入 Scope 时替换整个范围，不是增量追加。暂不纳入 Dify/Custom Agent 和 Legacy SSE MCP。</p>
                     * @return Resources <p>BindType=resource 时必填，1～200 个资源，ResourceType/ResourceId 组合不得重复；global 时不应填写资源或传 []。Modify 传入 Scope 时替换整个范围，不是增量追加。暂不纳入 Dify/Custom Agent 和 Legacy SSE MCP。</p>
                     * 
                     */
                    std::vector<CustomGuardrailResourceRef> GetResources() const;

                    /**
                     * 设置<p>BindType=resource 时必填，1～200 个资源，ResourceType/ResourceId 组合不得重复；global 时不应填写资源或传 []。Modify 传入 Scope 时替换整个范围，不是增量追加。暂不纳入 Dify/Custom Agent 和 Legacy SSE MCP。</p>
                     * @param _resources <p>BindType=resource 时必填，1～200 个资源，ResourceType/ResourceId 组合不得重复；global 时不应填写资源或传 []。Modify 传入 Scope 时替换整个范围，不是增量追加。暂不纳入 Dify/Custom Agent 和 Legacy SSE MCP。</p>
                     * 
                     */
                    void SetResources(const std::vector<CustomGuardrailResourceRef>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                private:

                    /**
                     * <p>绑定方式：resource 显式指定业务资源；global 覆盖网关中当前支持的业务资源，由平台关联到其 Kong Route，并随受支持的资源变更协调绑定。不是创建一个独立的 Kong global 插件。相同 Route 不能同时被多个自定义护栏策略占用。</p>
                     */
                    std::string m_bindType;
                    bool m_bindTypeHasBeenSet;

                    /**
                     * <p>BindType=resource 时必填，1～200 个资源，ResourceType/ResourceId 组合不得重复；global 时不应填写资源或传 []。Modify 传入 Scope 时替换整个范围，不是增量追加。暂不纳入 Dify/Custom Agent 和 Legacy SSE MCP。</p>
                     */
                    std::vector<CustomGuardrailResourceRef> m_resources;
                    bool m_resourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILSCOPE_H_
