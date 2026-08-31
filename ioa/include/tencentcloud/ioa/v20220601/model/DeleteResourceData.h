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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DELETERESOURCEDATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DELETERESOURCEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 资源集
                */
                class DeleteResourceData : public AbstractModel
                {
                public:
                    DeleteResourceData();
                    ~DeleteResourceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源类型 ,1:资源 2:资源组(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceType 资源类型 ,1:资源 2:资源组(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetResourceType() const;

                    /**
                     * 设置资源类型 ,1:资源 2:资源组(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceType 资源类型 ,1:资源 2:资源组(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceType(const uint64_t& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取资源或资源组Id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceId 资源或资源组Id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetResourceId() const;

                    /**
                     * 设置资源或资源组Id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceId 资源或资源组Id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceId(const uint64_t& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * 资源类型 ,1:资源 2:资源组(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源或资源组Id(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DELETERESOURCEDATA_H_
