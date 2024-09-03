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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_OBJECTTYPE_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_OBJECTTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/ObjectTypeConfig.h>
#include <tencentcloud/cfg/v20210820/model/ObjectTypeJsonParse.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 对象类型
                */
                class ObjectType : public AbstractModel
                {
                public:
                    ObjectType();
                    ~ObjectType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对象类型ID
                     * @return ObjectTypeId 对象类型ID
                     * 
                     */
                    int64_t GetObjectTypeId() const;

                    /**
                     * 设置对象类型ID
                     * @param _objectTypeId 对象类型ID
                     * 
                     */
                    void SetObjectTypeId(const int64_t& _objectTypeId);

                    /**
                     * 判断参数 ObjectTypeId 是否已赋值
                     * @return ObjectTypeId 是否已赋值
                     * 
                     */
                    bool ObjectTypeIdHasBeenSet() const;

                    /**
                     * 获取对象类型名称
                     * @return ObjectTypeTitle 对象类型名称
                     * 
                     */
                    std::string GetObjectTypeTitle() const;

                    /**
                     * 设置对象类型名称
                     * @param _objectTypeTitle 对象类型名称
                     * 
                     */
                    void SetObjectTypeTitle(const std::string& _objectTypeTitle);

                    /**
                     * 判断参数 ObjectTypeTitle 是否已赋值
                     * @return ObjectTypeTitle 是否已赋值
                     * 
                     */
                    bool ObjectTypeTitleHasBeenSet() const;

                    /**
                     * 获取对象类型第一级
                     * @return ObjectTypeLevelOne 对象类型第一级
                     * 
                     */
                    std::string GetObjectTypeLevelOne() const;

                    /**
                     * 设置对象类型第一级
                     * @param _objectTypeLevelOne 对象类型第一级
                     * 
                     */
                    void SetObjectTypeLevelOne(const std::string& _objectTypeLevelOne);

                    /**
                     * 判断参数 ObjectTypeLevelOne 是否已赋值
                     * @return ObjectTypeLevelOne 是否已赋值
                     * 
                     */
                    bool ObjectTypeLevelOneHasBeenSet() const;

                    /**
                     * 获取对象类型参数
                     * @return ObjectTypeParams 对象类型参数
                     * 
                     */
                    ObjectTypeConfig GetObjectTypeParams() const;

                    /**
                     * 设置对象类型参数
                     * @param _objectTypeParams 对象类型参数
                     * 
                     */
                    void SetObjectTypeParams(const ObjectTypeConfig& _objectTypeParams);

                    /**
                     * 判断参数 ObjectTypeParams 是否已赋值
                     * @return ObjectTypeParams 是否已赋值
                     * 
                     */
                    bool ObjectTypeParamsHasBeenSet() const;

                    /**
                     * 获取tke接口json解析规则，null不需要解析
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjectTypeJsonParse tke接口json解析规则，null不需要解析
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ObjectTypeJsonParse GetObjectTypeJsonParse() const;

                    /**
                     * 设置tke接口json解析规则，null不需要解析
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _objectTypeJsonParse tke接口json解析规则，null不需要解析
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetObjectTypeJsonParse(const ObjectTypeJsonParse& _objectTypeJsonParse);

                    /**
                     * 判断参数 ObjectTypeJsonParse 是否已赋值
                     * @return ObjectTypeJsonParse 是否已赋值
                     * 
                     */
                    bool ObjectTypeJsonParseHasBeenSet() const;

                    /**
                     * 获取是否包含新动作
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjectHasNewAction 是否包含新动作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetObjectHasNewAction() const;

                    /**
                     * 设置是否包含新动作
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _objectHasNewAction 是否包含新动作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetObjectHasNewAction(const bool& _objectHasNewAction);

                    /**
                     * 判断参数 ObjectHasNewAction 是否已赋值
                     * @return ObjectHasNewAction 是否已赋值
                     * 
                     */
                    bool ObjectHasNewActionHasBeenSet() const;

                    /**
                     * 获取对应在平台架构图中的资源类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjectPlatformName 对应在平台架构图中的资源类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetObjectPlatformName() const;

                    /**
                     * 设置对应在平台架构图中的资源类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _objectPlatformName 对应在平台架构图中的资源类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetObjectPlatformName(const std::string& _objectPlatformName);

                    /**
                     * 判断参数 ObjectPlatformName 是否已赋值
                     * @return ObjectPlatformName 是否已赋值
                     * 
                     */
                    bool ObjectPlatformNameHasBeenSet() const;

                    /**
                     * 获取1：平台支持的对象 2：应用支持的部分对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjectSupportType 1：平台支持的对象 2：应用支持的部分对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetObjectSupportType() const;

                    /**
                     * 设置1：平台支持的对象 2：应用支持的部分对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _objectSupportType 1：平台支持的对象 2：应用支持的部分对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetObjectSupportType(const int64_t& _objectSupportType);

                    /**
                     * 判断参数 ObjectSupportType 是否已赋值
                     * @return ObjectSupportType 是否已赋值
                     * 
                     */
                    bool ObjectSupportTypeHasBeenSet() const;

                private:

                    /**
                     * 对象类型ID
                     */
                    int64_t m_objectTypeId;
                    bool m_objectTypeIdHasBeenSet;

                    /**
                     * 对象类型名称
                     */
                    std::string m_objectTypeTitle;
                    bool m_objectTypeTitleHasBeenSet;

                    /**
                     * 对象类型第一级
                     */
                    std::string m_objectTypeLevelOne;
                    bool m_objectTypeLevelOneHasBeenSet;

                    /**
                     * 对象类型参数
                     */
                    ObjectTypeConfig m_objectTypeParams;
                    bool m_objectTypeParamsHasBeenSet;

                    /**
                     * tke接口json解析规则，null不需要解析
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ObjectTypeJsonParse m_objectTypeJsonParse;
                    bool m_objectTypeJsonParseHasBeenSet;

                    /**
                     * 是否包含新动作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_objectHasNewAction;
                    bool m_objectHasNewActionHasBeenSet;

                    /**
                     * 对应在平台架构图中的资源类型名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_objectPlatformName;
                    bool m_objectPlatformNameHasBeenSet;

                    /**
                     * 1：平台支持的对象 2：应用支持的部分对象
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_objectSupportType;
                    bool m_objectSupportTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_OBJECTTYPE_H_
