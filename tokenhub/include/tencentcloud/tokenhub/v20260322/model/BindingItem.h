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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_BINDINGITEM_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_BINDINGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * 绑定资源项
                */
                class BindingItem : public AbstractModel
                {
                public:
                    BindingItem();
                    ~BindingItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资源 ID（模型 ID 或服务 ID）。</p>
                     * @return ResourceId <p>资源 ID（模型 ID 或服务 ID）。</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源 ID（模型 ID 或服务 ID）。</p>
                     * @param _resourceId <p>资源 ID（模型 ID 或服务 ID）。</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>资源类型。取值：endpoint（推理服务）、model（模型）。推荐绑定endpoint，绑定model即将下线。已绑定model的apikey仍可使用，但控制台回显将不会展示模型绑定列表。</p><p>枚举值：</p><ul><li>endpoint： 绑定到endpoint（默认推理服务或自定义推理服务）</li></ul>
                     * @return ResourceType <p>资源类型。取值：endpoint（推理服务）、model（模型）。推荐绑定endpoint，绑定model即将下线。已绑定model的apikey仍可使用，但控制台回显将不会展示模型绑定列表。</p><p>枚举值：</p><ul><li>endpoint： 绑定到endpoint（默认推理服务或自定义推理服务）</li></ul>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>资源类型。取值：endpoint（推理服务）、model（模型）。推荐绑定endpoint，绑定model即将下线。已绑定model的apikey仍可使用，但控制台回显将不会展示模型绑定列表。</p><p>枚举值：</p><ul><li>endpoint： 绑定到endpoint（默认推理服务或自定义推理服务）</li></ul>
                     * @param _resourceType <p>资源类型。取值：endpoint（推理服务）、model（模型）。推荐绑定endpoint，绑定model即将下线。已绑定model的apikey仍可使用，但控制台回显将不会展示模型绑定列表。</p><p>枚举值：</p><ul><li>endpoint： 绑定到endpoint（默认推理服务或自定义推理服务）</li></ul>
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
                     * 获取<p>资源状态</p>
                     * @return Status <p>资源状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>资源状态</p>
                     * @param _status <p>资源状态</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>资源 ID（模型 ID 或服务 ID）。</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>资源类型。取值：endpoint（推理服务）、model（模型）。推荐绑定endpoint，绑定model即将下线。已绑定model的apikey仍可使用，但控制台回显将不会展示模型绑定列表。</p><p>枚举值：</p><ul><li>endpoint： 绑定到endpoint（默认推理服务或自定义推理服务）</li></ul>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>资源状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_BINDINGITEM_H_
