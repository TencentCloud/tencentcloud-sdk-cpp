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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_TRIGGERINFO_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_TRIGGERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 触发器信息
                */
                class TriggerInfo : public AbstractModel
                {
                public:
                    TriggerInfo();
                    ~TriggerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取使能开关
                     * @return Enable 使能开关
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置使能开关
                     * @param _enable 使能开关
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取函数版本或别名
                     * @return Qualifier 函数版本或别名
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置函数版本或别名
                     * @param _qualifier 函数版本或别名
                     * 
                     */
                    void SetQualifier(const std::string& _qualifier);

                    /**
                     * 判断参数 Qualifier 是否已赋值
                     * @return Qualifier 是否已赋值
                     * 
                     */
                    bool QualifierHasBeenSet() const;

                    /**
                     * 获取触发器名称
                     * @return TriggerName 触发器名称
                     * 
                     */
                    std::string GetTriggerName() const;

                    /**
                     * 设置触发器名称
                     * @param _triggerName 触发器名称
                     * 
                     */
                    void SetTriggerName(const std::string& _triggerName);

                    /**
                     * 判断参数 TriggerName 是否已赋值
                     * @return TriggerName 是否已赋值
                     * 
                     */
                    bool TriggerNameHasBeenSet() const;

                    /**
                     * 获取触发器类型
                     * @return Type 触发器类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置触发器类型
                     * @param _type 触发器类型
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
                     * 获取触发器详细配置
                     * @return TriggerDesc 触发器详细配置
                     * 
                     */
                    std::string GetTriggerDesc() const;

                    /**
                     * 设置触发器详细配置
                     * @param _triggerDesc 触发器详细配置
                     * 
                     */
                    void SetTriggerDesc(const std::string& _triggerDesc);

                    /**
                     * 判断参数 TriggerDesc 是否已赋值
                     * @return TriggerDesc 是否已赋值
                     * 
                     */
                    bool TriggerDescHasBeenSet() const;

                    /**
                     * 获取触发器是否可用
                     * @return AvailableStatus 触发器是否可用
                     * 
                     */
                    std::string GetAvailableStatus() const;

                    /**
                     * 设置触发器是否可用
                     * @param _availableStatus 触发器是否可用
                     * 
                     */
                    void SetAvailableStatus(const std::string& _availableStatus);

                    /**
                     * 判断参数 AvailableStatus 是否已赋值
                     * @return AvailableStatus 是否已赋值
                     * 
                     */
                    bool AvailableStatusHasBeenSet() const;

                    /**
                     * 获取客户自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomArgument 客户自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCustomArgument() const;

                    /**
                     * 设置客户自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customArgument 客户自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomArgument(const std::string& _customArgument);

                    /**
                     * 判断参数 CustomArgument 是否已赋值
                     * @return CustomArgument 是否已赋值
                     * 
                     */
                    bool CustomArgumentHasBeenSet() const;

                    /**
                     * 获取触发器创建时间
                     * @return AddTime 触发器创建时间
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置触发器创建时间
                     * @param _addTime 触发器创建时间
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取触发器最后修改时间
                     * @return ModTime 触发器最后修改时间
                     * 
                     */
                    std::string GetModTime() const;

                    /**
                     * 设置触发器最后修改时间
                     * @param _modTime 触发器最后修改时间
                     * 
                     */
                    void SetModTime(const std::string& _modTime);

                    /**
                     * 判断参数 ModTime 是否已赋值
                     * @return ModTime 是否已赋值
                     * 
                     */
                    bool ModTimeHasBeenSet() const;

                    /**
                     * 获取触发器最小资源ID
                     * @return ResourceId 触发器最小资源ID
                     * @deprecated
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置触发器最小资源ID
                     * @param _resourceId 触发器最小资源ID
                     * @deprecated
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * @deprecated
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取触发器和云函数绑定状态
                     * @return BindStatus 触发器和云函数绑定状态
                     * @deprecated
                     */
                    std::string GetBindStatus() const;

                    /**
                     * 设置触发器和云函数绑定状态
                     * @param _bindStatus 触发器和云函数绑定状态
                     * @deprecated
                     */
                    void SetBindStatus(const std::string& _bindStatus);

                    /**
                     * 判断参数 BindStatus 是否已赋值
                     * @return BindStatus 是否已赋值
                     * @deprecated
                     */
                    bool BindStatusHasBeenSet() const;

                    /**
                     * 获取触发器类型，双向表示两侧控制台均可操作，单向表示SCF控制台单向创建
                     * @return TriggerAttribute 触发器类型，双向表示两侧控制台均可操作，单向表示SCF控制台单向创建
                     * @deprecated
                     */
                    std::string GetTriggerAttribute() const;

                    /**
                     * 设置触发器类型，双向表示两侧控制台均可操作，单向表示SCF控制台单向创建
                     * @param _triggerAttribute 触发器类型，双向表示两侧控制台均可操作，单向表示SCF控制台单向创建
                     * @deprecated
                     */
                    void SetTriggerAttribute(const std::string& _triggerAttribute);

                    /**
                     * 判断参数 TriggerAttribute 是否已赋值
                     * @return TriggerAttribute 是否已赋值
                     * @deprecated
                     */
                    bool TriggerAttributeHasBeenSet() const;

                    /**
                     * 获取客户自定义触发器描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 客户自定义触发器描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置客户自定义触发器描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 客户自定义触发器描述
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
                     * 获取与此触发器关联的资源。目前仅函数URL关联的自定义域名会返回
                     * @return BoundResources 与此触发器关联的资源。目前仅函数URL关联的自定义域名会返回
                     * 
                     */
                    std::string GetBoundResources() const;

                    /**
                     * 设置与此触发器关联的资源。目前仅函数URL关联的自定义域名会返回
                     * @param _boundResources 与此触发器关联的资源。目前仅函数URL关联的自定义域名会返回
                     * 
                     */
                    void SetBoundResources(const std::string& _boundResources);

                    /**
                     * 判断参数 BoundResources 是否已赋值
                     * @return BoundResources 是否已赋值
                     * 
                     */
                    bool BoundResourcesHasBeenSet() const;

                private:

                    /**
                     * 使能开关
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 函数版本或别名
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * 触发器名称
                     */
                    std::string m_triggerName;
                    bool m_triggerNameHasBeenSet;

                    /**
                     * 触发器类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 触发器详细配置
                     */
                    std::string m_triggerDesc;
                    bool m_triggerDescHasBeenSet;

                    /**
                     * 触发器是否可用
                     */
                    std::string m_availableStatus;
                    bool m_availableStatusHasBeenSet;

                    /**
                     * 客户自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customArgument;
                    bool m_customArgumentHasBeenSet;

                    /**
                     * 触发器创建时间
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * 触发器最后修改时间
                     */
                    std::string m_modTime;
                    bool m_modTimeHasBeenSet;

                    /**
                     * 触发器最小资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 触发器和云函数绑定状态
                     */
                    std::string m_bindStatus;
                    bool m_bindStatusHasBeenSet;

                    /**
                     * 触发器类型，双向表示两侧控制台均可操作，单向表示SCF控制台单向创建
                     */
                    std::string m_triggerAttribute;
                    bool m_triggerAttributeHasBeenSet;

                    /**
                     * 客户自定义触发器描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 与此触发器关联的资源。目前仅函数URL关联的自定义域名会返回
                     */
                    std::string m_boundResources;
                    bool m_boundResourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_TRIGGERINFO_H_
