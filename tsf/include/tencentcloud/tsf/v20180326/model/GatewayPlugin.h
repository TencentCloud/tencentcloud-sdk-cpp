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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_GATEWAYPLUGIN_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_GATEWAYPLUGIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 微服务网关插件实例对象
                */
                class GatewayPlugin : public AbstractModel
                {
                public:
                    GatewayPlugin();
                    ~GatewayPlugin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>网关插件id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id <p>网关插件id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>网关插件id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id <p>网关插件id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>插件名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>插件名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>插件名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>插件名称</p>
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

                    /**
                     * 获取<p>插件类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>插件类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>插件类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>插件类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>插件描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>插件描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>插件描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>插件描述</p>
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
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedTime <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedTime <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>发布状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>发布状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>发布状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>发布状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>是否禁用删除</p>
                     * @return DeleteDisabled <p>是否禁用删除</p>
                     * 
                     */
                    bool GetDeleteDisabled() const;

                    /**
                     * 设置<p>是否禁用删除</p>
                     * @param _deleteDisabled <p>是否禁用删除</p>
                     * 
                     */
                    void SetDeleteDisabled(const bool& _deleteDisabled);

                    /**
                     * 判断参数 DeleteDisabled 是否已赋值
                     * @return DeleteDisabled 是否已赋值
                     * 
                     */
                    bool DeleteDisabledHasBeenSet() const;

                    /**
                     * 获取<p>禁用原因</p>
                     * @return DeleteDisabledReason <p>禁用原因</p>
                     * 
                     */
                    std::string GetDeleteDisabledReason() const;

                    /**
                     * 设置<p>禁用原因</p>
                     * @param _deleteDisabledReason <p>禁用原因</p>
                     * 
                     */
                    void SetDeleteDisabledReason(const std::string& _deleteDisabledReason);

                    /**
                     * 判断参数 DeleteDisabledReason 是否已赋值
                     * @return DeleteDisabledReason 是否已赋值
                     * 
                     */
                    bool DeleteDisabledReasonHasBeenSet() const;

                    /**
                     * 获取<p>是否不可绑定</p><p>枚举值：</p><ul><li>true： 禁止绑定</li><li>false： 允许绑定</li></ul>
                     * @return BindDisabled <p>是否不可绑定</p><p>枚举值：</p><ul><li>true： 禁止绑定</li><li>false： 允许绑定</li></ul>
                     * 
                     */
                    bool GetBindDisabled() const;

                    /**
                     * 设置<p>是否不可绑定</p><p>枚举值：</p><ul><li>true： 禁止绑定</li><li>false： 允许绑定</li></ul>
                     * @param _bindDisabled <p>是否不可绑定</p><p>枚举值：</p><ul><li>true： 禁止绑定</li><li>false： 允许绑定</li></ul>
                     * 
                     */
                    void SetBindDisabled(const bool& _bindDisabled);

                    /**
                     * 判断参数 BindDisabled 是否已赋值
                     * @return BindDisabled 是否已赋值
                     * 
                     */
                    bool BindDisabledHasBeenSet() const;

                private:

                    /**
                     * <p>网关插件id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>插件名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>插件类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>插件描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * <p>发布状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>是否禁用删除</p>
                     */
                    bool m_deleteDisabled;
                    bool m_deleteDisabledHasBeenSet;

                    /**
                     * <p>禁用原因</p>
                     */
                    std::string m_deleteDisabledReason;
                    bool m_deleteDisabledReasonHasBeenSet;

                    /**
                     * <p>是否不可绑定</p><p>枚举值：</p><ul><li>true： 禁止绑定</li><li>false： 允许绑定</li></ul>
                     */
                    bool m_bindDisabled;
                    bool m_bindDisabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_GATEWAYPLUGIN_H_
