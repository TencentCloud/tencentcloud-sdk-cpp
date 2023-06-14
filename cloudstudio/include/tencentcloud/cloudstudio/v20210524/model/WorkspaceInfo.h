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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_WORKSPACEINFO_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_WORKSPACEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudstudio
    {
        namespace V20210524
        {
            namespace Model
            {
                /**
                * 工作空间信息
                */
                class WorkspaceInfo : public AbstractModel
                {
                public:
                    WorkspaceInfo();
                    ~WorkspaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkspaceId 工作空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWorkspaceId() const;

                    /**
                     * 设置工作空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workspaceId 工作空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkspaceId(const int64_t& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取工作空间标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpaceKey 工作空间标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpaceKey() const;

                    /**
                     * 设置工作空间标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _spaceKey 工作空间标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpaceKey(const std::string& _spaceKey);

                    /**
                     * 判断参数 SpaceKey 是否已赋值
                     * @return SpaceKey 是否已赋值
                     * 
                     */
                    bool SpaceKeyHasBeenSet() const;

                    /**
                     * 获取工作空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 工作空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置工作空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 工作空间名称
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
                     * 工作空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 工作空间标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_spaceKey;
                    bool m_spaceKeyHasBeenSet;

                    /**
                     * 工作空间名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_WORKSPACEINFO_H_
