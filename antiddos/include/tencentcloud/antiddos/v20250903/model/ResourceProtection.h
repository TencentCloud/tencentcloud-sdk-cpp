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

#ifndef TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_RESOURCEPROTECTION_H_
#define TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_RESOURCEPROTECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20250903
        {
            namespace Model
            {
                /**
                * 防护资源及其绑定的防护实例。
                */
                class ResourceProtection : public AbstractModel
                {
                public:
                    ResourceProtection();
                    ~ResourceProtection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>防护资源的资源六段式标识。</p>
                     * @return Resource <p>防护资源的资源六段式标识。</p>
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置<p>防护资源的资源六段式标识。</p>
                     * @param _resource <p>防护资源的资源六段式标识。</p>
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取<p>该资源绑定的防护实例 ID。</p>
                     * @return ProtectionId <p>该资源绑定的防护实例 ID。</p>
                     * 
                     */
                    std::string GetProtectionId() const;

                    /**
                     * 设置<p>该资源绑定的防护实例 ID。</p>
                     * @param _protectionId <p>该资源绑定的防护实例 ID。</p>
                     * 
                     */
                    void SetProtectionId(const std::string& _protectionId);

                    /**
                     * 判断参数 ProtectionId 是否已赋值
                     * @return ProtectionId 是否已赋值
                     * 
                     */
                    bool ProtectionIdHasBeenSet() const;

                private:

                    /**
                     * <p>防护资源的资源六段式标识。</p>
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * <p>该资源绑定的防护实例 ID。</p>
                     */
                    std::string m_protectionId;
                    bool m_protectionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_RESOURCEPROTECTION_H_
