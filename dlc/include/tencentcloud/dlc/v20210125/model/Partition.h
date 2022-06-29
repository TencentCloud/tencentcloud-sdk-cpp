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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_PARTITION_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_PARTITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 数据表分块信息。
                */
                class Partition : public AbstractModel
                {
                public:
                    Partition();
                    ~Partition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分区列名。
                     * @return Name 分区列名。
                     */
                    std::string GetName() const;

                    /**
                     * 设置分区列名。
                     * @param Name 分区列名。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取分区类型。
                     * @return Type 分区类型。
                     */
                    std::string GetType() const;

                    /**
                     * 设置分区类型。
                     * @param Type 分区类型。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取对分区的描述。
                     * @return Comment 对分区的描述。
                     */
                    std::string GetComment() const;

                    /**
                     * 设置对分区的描述。
                     * @param Comment 对分区的描述。
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取隐式分区转换策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Transform 隐式分区转换策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTransform() const;

                    /**
                     * 设置隐式分区转换策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Transform 隐式分区转换策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTransform(const std::string& _transform);

                    /**
                     * 判断参数 Transform 是否已赋值
                     * @return Transform 是否已赋值
                     */
                    bool TransformHasBeenSet() const;

                    /**
                     * 获取转换策略参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransformArgs 转换策略参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetTransformArgs() const;

                    /**
                     * 设置转换策略参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TransformArgs 转换策略参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTransformArgs(const std::vector<std::string>& _transformArgs);

                    /**
                     * 判断参数 TransformArgs 是否已赋值
                     * @return TransformArgs 是否已赋值
                     */
                    bool TransformArgsHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 分区列名。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 分区类型。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 对分区的描述。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 隐式分区转换策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_transform;
                    bool m_transformHasBeenSet;

                    /**
                     * 转换策略参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_transformArgs;
                    bool m_transformArgsHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_PARTITION_H_
