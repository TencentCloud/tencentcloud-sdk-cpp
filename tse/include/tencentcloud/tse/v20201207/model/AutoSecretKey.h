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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_AUTOSECRETKEY_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_AUTOSECRETKEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 新建消费者时为消费者自动绑定API密钥时自动生成密钥的参数体。仅当 SecretBindType="AutoGenerate" 时必填，其他分支禁止携带，否则返回 InvalidParameterValue.CreateError。
                */
                class AutoSecretKey : public AbstractModel
                {
                public:
                    AutoSecretKey();
                    ~AutoSecretKey() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>密钥名称，2-60 字符。</p><p>字符集与「密钥管理-新建密钥」一致（中英文、数字、下划线、短横线），禁止 -share 后缀，同网关内不可重名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>密钥名称，2-60 字符。</p><p>字符集与「密钥管理-新建密钥」一致（中英文、数字、下划线、短横线），禁止 -share 后缀，同网关内不可重名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>密钥名称，2-60 字符。</p><p>字符集与「密钥管理-新建密钥」一致（中英文、数字、下划线、短横线），禁止 -share 后缀，同网关内不可重名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>密钥名称，2-60 字符。</p><p>字符集与「密钥管理-新建密钥」一致（中英文、数字、下划线、短横线），禁止 -share 后缀，同网关内不可重名。</p>
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
                     * 获取<p>密钥描述。长度 ≤ 200，可为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>密钥描述。长度 ≤ 200，可为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>密钥描述。长度 ≤ 200，可为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>密钥描述。长度 ≤ 200，可为空。</p>
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

                private:

                    /**
                     * <p>密钥名称，2-60 字符。</p><p>字符集与「密钥管理-新建密钥」一致（中英文、数字、下划线、短横线），禁止 -share 后缀，同网关内不可重名。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>密钥描述。长度 ≤ 200，可为空。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_AUTOSECRETKEY_H_
