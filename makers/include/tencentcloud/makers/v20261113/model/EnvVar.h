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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_ENVVAR_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_ENVVAR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            namespace Model
            {
                /**
                * 环境变量。Env 缺省或空数组表示全局，写入时展开为项目当前全部环境
                */
                class EnvVar : public AbstractModel
                {
                public:
                    EnvVar();
                    ~EnvVar() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>变量名，最长 255</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Key <p>变量名，最长 255</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>变量名，最长 255</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _key <p>变量名，最长 255</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取<p>变量值，最长 1000</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value <p>变量值，最长 1000</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>变量值，最长 1000</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value <p>变量值，最长 1000</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取<p>变量 ID。创建时不传</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id <p>变量 ID。创建时不传</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>变量 ID。创建时不传</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id <p>变量 ID。创建时不传</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>备注，最长 255</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Comment <p>备注，最长 255</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>备注，最长 255</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _comment <p>备注，最长 255</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取<p>生效环境 slug，例如 Production、Preview。同 Key 的多行环境不能重叠</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Env <p>生效环境 slug，例如 Production、Preview。同 Key 的多行环境不能重叠</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetEnv() const;

                    /**
                     * 设置<p>生效环境 slug，例如 Production、Preview。同 Key 的多行环境不能重叠</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _env <p>生效环境 slug，例如 Production、Preview。同 Key 的多行环境不能重叠</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnv(const std::vector<std::string>& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                private:

                    /**
                     * <p>变量名，最长 255</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>变量值，最长 1000</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>变量 ID。创建时不传</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>备注，最长 255</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>生效环境 slug，例如 Production、Preview。同 Key 的多行环境不能重叠</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_env;
                    bool m_envHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_ENVVAR_H_
