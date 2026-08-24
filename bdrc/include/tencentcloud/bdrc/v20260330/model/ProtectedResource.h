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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_PROTECTEDRESOURCE_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_PROTECTEDRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 受保护资源信息
                */
                class ProtectedResource : public AbstractModel
                {
                public:
                    ProtectedResource();
                    ~ProtectedResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源类型（与请求 SitePairType 一致，如 DISK/CFS/INSTANCE）
                     * @return ResourceType 资源类型（与请求 SitePairType 一致，如 DISK/CFS/INSTANCE）
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型（与请求 SitePairType 一致，如 DISK/CFS/INSTANCE）
                     * @param _resourceType 资源类型（与请求 SitePairType 一致，如 DISK/CFS/INSTANCE）
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
                     * 获取该类型下被保护的源端资源ID列表（DISK:disk-xxx / CFS:cfs-xxx / INSTANCE:ins-xxx）
                     * @return ResourceIdSet 该类型下被保护的源端资源ID列表（DISK:disk-xxx / CFS:cfs-xxx / INSTANCE:ins-xxx）
                     * 
                     */
                    std::vector<std::string> GetResourceIdSet() const;

                    /**
                     * 设置该类型下被保护的源端资源ID列表（DISK:disk-xxx / CFS:cfs-xxx / INSTANCE:ins-xxx）
                     * @param _resourceIdSet 该类型下被保护的源端资源ID列表（DISK:disk-xxx / CFS:cfs-xxx / INSTANCE:ins-xxx）
                     * 
                     */
                    void SetResourceIdSet(const std::vector<std::string>& _resourceIdSet);

                    /**
                     * 判断参数 ResourceIdSet 是否已赋值
                     * @return ResourceIdSet 是否已赋值
                     * 
                     */
                    bool ResourceIdSetHasBeenSet() const;

                private:

                    /**
                     * 资源类型（与请求 SitePairType 一致，如 DISK/CFS/INSTANCE）
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 该类型下被保护的源端资源ID列表（DISK:disk-xxx / CFS:cfs-xxx / INSTANCE:ins-xxx）
                     */
                    std::vector<std::string> m_resourceIdSet;
                    bool m_resourceIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_PROTECTEDRESOURCE_H_
