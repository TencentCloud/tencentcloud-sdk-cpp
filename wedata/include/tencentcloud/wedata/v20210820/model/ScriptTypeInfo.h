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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SCRIPTTYPEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SCRIPTTYPEINFO_H_

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
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 开发空间脚本类型信息
                */
                class ScriptTypeInfo : public AbstractModel
                {
                public:
                    ScriptTypeInfo();
                    ~ScriptTypeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取脚本类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 脚本类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置脚本类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 脚本类型
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
                     * 获取脚本展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayDesc 脚本展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisplayDesc() const;

                    /**
                     * 设置脚本展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _displayDesc 脚本展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisplayDesc(const std::string& _displayDesc);

                    /**
                     * 判断参数 DisplayDesc 是否已赋值
                     * @return DisplayDesc 是否已赋值
                     * 
                     */
                    bool DisplayDescHasBeenSet() const;

                private:

                    /**
                     * 脚本类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 脚本展示名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayDesc;
                    bool m_displayDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SCRIPTTYPEINFO_H_
