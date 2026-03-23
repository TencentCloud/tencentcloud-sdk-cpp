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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_PLUGINCONFIGDTO_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_PLUGINCONFIGDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/PluginFormValueDTO.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * PluginConfigDTO
                */
                class PluginConfigDTO : public AbstractModel
                {
                public:
                    PluginConfigDTO();
                    ~PluginConfigDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PluginName 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPluginName() const;

                    /**
                     * 设置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pluginName 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPluginName(const std::string& _pluginName);

                    /**
                     * 判断参数 PluginName 是否已赋值
                     * @return PluginName 是否已赋值
                     * 
                     */
                    bool PluginNameHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述
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
                     * 获取ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PluginID ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPluginID() const;

                    /**
                     * 设置ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pluginID ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPluginID(const std::string& _pluginID);

                    /**
                     * 判断参数 PluginID 是否已赋值
                     * @return PluginID 是否已赋值
                     * 
                     */
                    bool PluginIDHasBeenSet() const;

                    /**
                     * 获取优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Level 优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _level 优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取表单配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PluginFormValues 表单配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PluginFormValueDTO> GetPluginFormValues() const;

                    /**
                     * 设置表单配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pluginFormValues 表单配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPluginFormValues(const std::vector<PluginFormValueDTO>& _pluginFormValues);

                    /**
                     * 判断参数 PluginFormValues 是否已赋值
                     * @return PluginFormValues 是否已赋值
                     * 
                     */
                    bool PluginFormValuesHasBeenSet() const;

                private:

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pluginName;
                    bool m_pluginNameHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pluginID;
                    bool m_pluginIDHasBeenSet;

                    /**
                     * 优先级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 表单配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PluginFormValueDTO> m_pluginFormValues;
                    bool m_pluginFormValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_PLUGINCONFIGDTO_H_
