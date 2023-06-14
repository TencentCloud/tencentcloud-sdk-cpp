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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_PLUGIN_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_PLUGIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/AttachedApiInfo.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * API网关插件详情。
                */
                class Plugin : public AbstractModel
                {
                public:
                    Plugin();
                    ~Plugin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取插件ID。
                     * @return PluginId 插件ID。
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置插件ID。
                     * @param _pluginId 插件ID。
                     * 
                     */
                    void SetPluginId(const std::string& _pluginId);

                    /**
                     * 判断参数 PluginId 是否已赋值
                     * @return PluginId 是否已赋值
                     * 
                     */
                    bool PluginIdHasBeenSet() const;

                    /**
                     * 获取插件名称。
                     * @return PluginName 插件名称。
                     * 
                     */
                    std::string GetPluginName() const;

                    /**
                     * 设置插件名称。
                     * @param _pluginName 插件名称。
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
                     * 获取插件类型。
                     * @return PluginType 插件类型。
                     * 
                     */
                    std::string GetPluginType() const;

                    /**
                     * 设置插件类型。
                     * @param _pluginType 插件类型。
                     * 
                     */
                    void SetPluginType(const std::string& _pluginType);

                    /**
                     * 判断参数 PluginType 是否已赋值
                     * @return PluginType 是否已赋值
                     * 
                     */
                    bool PluginTypeHasBeenSet() const;

                    /**
                     * 获取插件定义语句。
                     * @return PluginData 插件定义语句。
                     * 
                     */
                    std::string GetPluginData() const;

                    /**
                     * 设置插件定义语句。
                     * @param _pluginData 插件定义语句。
                     * 
                     */
                    void SetPluginData(const std::string& _pluginData);

                    /**
                     * 判断参数 PluginData 是否已赋值
                     * @return PluginData 是否已赋值
                     * 
                     */
                    bool PluginDataHasBeenSet() const;

                    /**
                     * 获取插件描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 插件描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置插件描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 插件描述。
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
                     * 获取插件创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     * @return CreatedTime 插件创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置插件创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     * @param _createdTime 插件创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取插件修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     * @return ModifiedTime 插件修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置插件修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     * @param _modifiedTime 插件修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取插件绑定的API总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttachedApiTotalCount 插件绑定的API总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAttachedApiTotalCount() const;

                    /**
                     * 设置插件绑定的API总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attachedApiTotalCount 插件绑定的API总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttachedApiTotalCount(const int64_t& _attachedApiTotalCount);

                    /**
                     * 判断参数 AttachedApiTotalCount 是否已赋值
                     * @return AttachedApiTotalCount 是否已赋值
                     * 
                     */
                    bool AttachedApiTotalCountHasBeenSet() const;

                    /**
                     * 获取插件绑定的API信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttachedApis 插件绑定的API信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AttachedApiInfo> GetAttachedApis() const;

                    /**
                     * 设置插件绑定的API信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attachedApis 插件绑定的API信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttachedApis(const std::vector<AttachedApiInfo>& _attachedApis);

                    /**
                     * 判断参数 AttachedApis 是否已赋值
                     * @return AttachedApis 是否已赋值
                     * 
                     */
                    bool AttachedApisHasBeenSet() const;

                private:

                    /**
                     * 插件ID。
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * 插件名称。
                     */
                    std::string m_pluginName;
                    bool m_pluginNameHasBeenSet;

                    /**
                     * 插件类型。
                     */
                    std::string m_pluginType;
                    bool m_pluginTypeHasBeenSet;

                    /**
                     * 插件定义语句。
                     */
                    std::string m_pluginData;
                    bool m_pluginDataHasBeenSet;

                    /**
                     * 插件描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 插件创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 插件修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。格式为：YYYY-MM-DDThh:mm:ssZ。
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * 插件绑定的API总数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_attachedApiTotalCount;
                    bool m_attachedApiTotalCountHasBeenSet;

                    /**
                     * 插件绑定的API信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AttachedApiInfo> m_attachedApis;
                    bool m_attachedApisHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_PLUGIN_H_
