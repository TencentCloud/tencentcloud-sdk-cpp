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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGERESOURCE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGERESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/LineageProperty.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 血缘资源实体
                */
                class LineageResource : public AbstractModel
                {
                public:
                    LineageResource();
                    ~LineageResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实体原始唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceUniqueId 实体原始唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceUniqueId() const;

                    /**
                     * 设置实体原始唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceUniqueId 实体原始唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceUniqueId(const std::string& _resourceUniqueId);

                    /**
                     * 判断参数 ResourceUniqueId 是否已赋值
                     * @return ResourceUniqueId 是否已赋值
                     * 
                     */
                    bool ResourceUniqueIdHasBeenSet() const;

                    /**
                     * 获取业务名称：库名.表名｜指标名称｜模型名称|字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceName 业务名称：库名.表名｜指标名称｜模型名称|字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置业务名称：库名.表名｜指标名称｜模型名称|字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceName 业务名称：库名.表名｜指标名称｜模型名称|字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取实体类型
TABLE|METRIC|MODEL|SERVICE|COLUMN
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceType 实体类型
TABLE|METRIC|MODEL|SERVICE|COLUMN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置实体类型
TABLE|METRIC|MODEL|SERVICE|COLUMN
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceType 实体类型
TABLE|METRIC|MODEL|SERVICE|COLUMN
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
                     * 获取血缘节点唯一标识符号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LineageNodeId 血缘节点唯一标识符号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLineageNodeId() const;

                    /**
                     * 设置血缘节点唯一标识符号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lineageNodeId 血缘节点唯一标识符号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLineageNodeId(const std::string& _lineageNodeId);

                    /**
                     * 判断参数 LineageNodeId 是否已赋值
                     * @return LineageNodeId 是否已赋值
                     * 
                     */
                    bool LineageNodeIdHasBeenSet() const;

                    /**
                     * 获取描述：表类型｜指标描述｜模型描述|字段描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述：表类型｜指标描述｜模型描述|字段描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述：表类型｜指标描述｜模型描述|字段描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述：表类型｜指标描述｜模型描述|字段描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取来源：WEDATA|THIRD
默认wedata
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Platform 来源：WEDATA|THIRD
默认wedata
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置来源：WEDATA|THIRD
默认wedata
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _platform 来源：WEDATA|THIRD
默认wedata
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取resource 额外扩展参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceProperties resource 额外扩展参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LineageProperty> GetResourceProperties() const;

                    /**
                     * 设置resource 额外扩展参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceProperties resource 额外扩展参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceProperties(const std::vector<LineageProperty>& _resourceProperties);

                    /**
                     * 判断参数 ResourceProperties 是否已赋值
                     * @return ResourceProperties 是否已赋值
                     * 
                     */
                    bool ResourcePropertiesHasBeenSet() const;

                private:

                    /**
                     * 实体原始唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceUniqueId;
                    bool m_resourceUniqueIdHasBeenSet;

                    /**
                     * 业务名称：库名.表名｜指标名称｜模型名称|字段名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 实体类型
TABLE|METRIC|MODEL|SERVICE|COLUMN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 血缘节点唯一标识符号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lineageNodeId;
                    bool m_lineageNodeIdHasBeenSet;

                    /**
                     * 描述：表类型｜指标描述｜模型描述|字段描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 来源：WEDATA|THIRD
默认wedata
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * resource 额外扩展参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LineageProperty> m_resourceProperties;
                    bool m_resourcePropertiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LINEAGERESOURCE_H_
