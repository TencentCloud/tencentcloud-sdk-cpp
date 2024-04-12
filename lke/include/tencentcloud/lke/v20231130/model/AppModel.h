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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_APPMODEL_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_APPMODEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 应用模型配置
                */
                class AppModel : public AbstractModel
                {
                public:
                    AppModel();
                    ~AppModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 模型名称
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
                     * 获取模型描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Desc 模型描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置模型描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _desc 模型描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取上下文指代轮次
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContextLimit 上下文指代轮次
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetContextLimit() const;

                    /**
                     * 设置上下文指代轮次
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contextLimit 上下文指代轮次
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContextLimit(const uint64_t& _contextLimit);

                    /**
                     * 判断参数 ContextLimit 是否已赋值
                     * @return ContextLimit 是否已赋值
                     * 
                     */
                    bool ContextLimitHasBeenSet() const;

                    /**
                     * 获取模型别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AliasName 模型别名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置模型别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aliasName 模型别名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                private:

                    /**
                     * 模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 模型描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 上下文指代轮次
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_contextLimit;
                    bool m_contextLimitHasBeenSet;

                    /**
                     * 模型别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_APPMODEL_H_
