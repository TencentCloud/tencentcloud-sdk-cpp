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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_EXPLOREFILERESOURCE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_EXPLOREFILERESOURCE_H_

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
                * 数据探索文件资源
                */
                class ExploreFileResource : public AbstractModel
                {
                public:
                    ExploreFileResource();
                    ~ExploreFileResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源类型，只能是这两种类型: folder, script
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceType 资源类型，只能是这两种类型: folder, script
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型，只能是这两种类型: folder, script
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceType 资源类型，只能是这两种类型: folder, script
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
                     * 获取资源ID：目录id或脚本id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceId 资源ID：目录id或脚本id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID：目录id或脚本id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceId 资源ID：目录id或脚本id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取id全路径，用于递归鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceIdForPath id全路径，用于递归鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceIdForPath() const;

                    /**
                     * 设置id全路径，用于递归鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceIdForPath id全路径，用于递归鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceIdForPath(const std::string& _resourceIdForPath);

                    /**
                     * 判断参数 ResourceIdForPath 是否已赋值
                     * @return ResourceIdForPath 是否已赋值
                     * 
                     */
                    bool ResourceIdForPathHasBeenSet() const;

                    /**
                     * 获取cfs路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceCFSPath cfs路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceCFSPath() const;

                    /**
                     * 设置cfs路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceCFSPath cfs路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceCFSPath(const std::string& _resourceCFSPath);

                    /**
                     * 判断参数 ResourceCFSPath 是否已赋值
                     * @return ResourceCFSPath 是否已赋值
                     * 
                     */
                    bool ResourceCFSPathHasBeenSet() const;

                private:

                    /**
                     * 资源类型，只能是这两种类型: folder, script
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源ID：目录id或脚本id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * id全路径，用于递归鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceIdForPath;
                    bool m_resourceIdForPathHasBeenSet;

                    /**
                     * cfs路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceCFSPath;
                    bool m_resourceCFSPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_EXPLOREFILERESOURCE_H_
