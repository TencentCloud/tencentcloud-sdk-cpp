/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_RESOURCEREFLATEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_RESOURCEREFLATEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 资源引用
                */
                class ResourceRefLatest : public AbstractModel
                {
                public:
                    ResourceRefLatest();
                    ~ResourceRefLatest() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceId 资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceId 资源id
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
                     * 获取版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 设置版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersion(const int64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取空间id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkspaceId 空间id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置空间id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workspaceId 空间id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 资源id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 空间id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_RESOURCEREFLATEST_H_
