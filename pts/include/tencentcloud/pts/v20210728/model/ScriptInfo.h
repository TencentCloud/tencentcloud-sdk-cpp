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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_SCRIPTINFO_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_SCRIPTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 脚本信息
                */
                class ScriptInfo : public AbstractModel
                {
                public:
                    ScriptInfo();
                    ~ScriptInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 文件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 文件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Size 文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Size 文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetType() const;

                    /**
                     * 设置文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Type 文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedAt 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdatedAt 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取base64编码后的文件内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EncodedContent base64编码后的文件内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEncodedContent() const;

                    /**
                     * 设置base64编码后的文件内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EncodedContent base64编码后的文件内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEncodedContent(const std::string& _encodedContent);

                    /**
                     * 判断参数 EncodedContent 是否已赋值
                     * @return EncodedContent 是否已赋值
                     */
                    bool EncodedContentHasBeenSet() const;

                    /**
                     * 获取base64编码后的har结构体
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EncodedHttpArchive base64编码后的har结构体
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEncodedHttpArchive() const;

                    /**
                     * 设置base64编码后的har结构体
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EncodedHttpArchive base64编码后的har结构体
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEncodedHttpArchive(const std::string& _encodedHttpArchive);

                    /**
                     * 判断参数 EncodedHttpArchive 是否已赋值
                     * @return EncodedHttpArchive 是否已赋值
                     */
                    bool EncodedHttpArchiveHasBeenSet() const;

                    /**
                     * 获取脚本权重，范围 1-100
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoadWeight 脚本权重，范围 1-100
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetLoadWeight() const;

                    /**
                     * 设置脚本权重，范围 1-100
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LoadWeight 脚本权重，范围 1-100
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLoadWeight(const int64_t& _loadWeight);

                    /**
                     * 判断参数 LoadWeight 是否已赋值
                     * @return LoadWeight 是否已赋值
                     */
                    bool LoadWeightHasBeenSet() const;

                private:

                    /**
                     * 文件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * base64编码后的文件内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_encodedContent;
                    bool m_encodedContentHasBeenSet;

                    /**
                     * base64编码后的har结构体
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_encodedHttpArchive;
                    bool m_encodedHttpArchiveHasBeenSet;

                    /**
                     * 脚本权重，范围 1-100
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_loadWeight;
                    bool m_loadWeightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_SCRIPTINFO_H_
