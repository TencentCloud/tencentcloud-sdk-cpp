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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_PRIVILEGERESOURCE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_PRIVILEGERESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 权限资源模型
                */
                class PrivilegeResource : public AbstractModel
                {
                public:
                    PrivilegeResource();
                    ~PrivilegeResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源类型 Catalog、Schema等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceType 资源类型 Catalog、Schema等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型 Catalog、Schema等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceType 资源类型 Catalog、Schema等
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取资源URI
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceUri 资源URI
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceUri() const;

                    /**
                     * 设置资源URI
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceUri 资源URI
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceUri(const std::string& _resourceUri);

                    /**
                     * 判断参数 ResourceUri 是否已赋值
                     * @return ResourceUri 是否已赋值
                     * 
                     */
                    bool ResourceUriHasBeenSet() const;

                private:

                    /**
                     * 资源类型 Catalog、Schema等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源URI
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceUri;
                    bool m_resourceUriHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_PRIVILEGERESOURCE_H_
