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
                     * 获取资源 ID（模型 ID 或服务 ID）。
                     * @return ResourceId 资源 ID（模型 ID 或服务 ID）。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源 ID（模型 ID 或服务 ID）。
                     * @param _resourceId 资源 ID（模型 ID 或服务 ID）。
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
                     * 获取资源类型。取值：endpoint（服务）、model（模型）。
                     * @return ResourceType 资源类型。取值：endpoint（服务）、model（模型）。
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型。取值：endpoint（服务）、model（模型）。
                     * @param _resourceType 资源类型。取值：endpoint（服务）、model（模型）。
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
                     * 获取资源状态
                     * @return Status 资源状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置资源状态
                     * @param _status 资源状态
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
                     * 资源 ID（模型 ID 或服务 ID）。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源类型。取值：endpoint（服务）、model（模型）。
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_BINDINGITEM_H_
