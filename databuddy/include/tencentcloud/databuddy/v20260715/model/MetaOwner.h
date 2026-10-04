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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_METAOWNER_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_METAOWNER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 元数据责任人信息数据结构
                */
                class MetaOwner : public AbstractModel
                {
                public:
                    MetaOwner();
                    ~MetaOwner() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取元数据名称（全名）:catalog.schema.table
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FullName 元数据名称（全名）:catalog.schema.table
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置元数据名称（全名）:catalog.schema.table
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fullName 元数据名称（全名）:catalog.schema.table
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFullName(const std::string& _fullName);

                    /**
                     * 判断参数 FullName 是否已赋值
                     * @return FullName 是否已赋值
                     * 
                     */
                    bool FullNameHasBeenSet() const;

                    /**
                     * 获取所有者类型:User
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerType 所有者类型:User
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerType() const;

                    /**
                     * 设置所有者类型:User
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerType 所有者类型:User
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerType(const std::string& _ownerType);

                    /**
                     * 判断参数 OwnerType 是否已赋值
                     * @return OwnerType 是否已赋值
                     * 
                     */
                    bool OwnerTypeHasBeenSet() const;

                    /**
                     * 获取所有者:唯一标识(uin)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Owner 所有者:唯一标识(uin)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置所有者:唯一标识(uin)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _owner 所有者:唯一标识(uin)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取所有者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerName 所有者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerName() const;

                    /**
                     * 设置所有者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerName 所有者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerName(const std::string& _ownerName);

                    /**
                     * 判断参数 OwnerName 是否已赋值
                     * @return OwnerName 是否已赋值
                     * 
                     */
                    bool OwnerNameHasBeenSet() const;

                private:

                    /**
                     * 元数据名称（全名）:catalog.schema.table
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * 所有者类型:User
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerType;
                    bool m_ownerTypeHasBeenSet;

                    /**
                     * 所有者:唯一标识(uin)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 所有者名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerName;
                    bool m_ownerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_METAOWNER_H_
