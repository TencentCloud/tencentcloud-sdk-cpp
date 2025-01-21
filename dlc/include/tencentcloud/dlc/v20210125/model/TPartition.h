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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TPARTITION_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TPARTITION_H_

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
                * 表分区字段信息
                */
                class TPartition : public AbstractModel
                {
                public:
                    TPartition();
                    ~TPartition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段名称
                     * @return Name 字段名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置字段名称
                     * @param _name 字段名称
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
                     * 获取字段类型
                     * @return Type 字段类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置字段类型
                     * @param _type 字段类型
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
                     * 获取字段描述
                     * @return Comment 字段描述
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置字段描述
                     * @param _comment 字段描述
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
                     * 获取分区类型（已废弃）
                     * @return PartitionType 分区类型（已废弃）
                     * 
                     */
                    std::string GetPartitionType() const;

                    /**
                     * 设置分区类型（已废弃）
                     * @param _partitionType 分区类型（已废弃）
                     * 
                     */
                    void SetPartitionType(const std::string& _partitionType);

                    /**
                     * 判断参数 PartitionType 是否已赋值
                     * @return PartitionType 是否已赋值
                     * 
                     */
                    bool PartitionTypeHasBeenSet() const;

                    /**
                     * 获取分区格式（已废弃）
                     * @return PartitionFormat 分区格式（已废弃）
                     * 
                     */
                    std::string GetPartitionFormat() const;

                    /**
                     * 设置分区格式（已废弃）
                     * @param _partitionFormat 分区格式（已废弃）
                     * 
                     */
                    void SetPartitionFormat(const std::string& _partitionFormat);

                    /**
                     * 判断参数 PartitionFormat 是否已赋值
                     * @return PartitionFormat 是否已赋值
                     * 
                     */
                    bool PartitionFormatHasBeenSet() const;

                    /**
                     * 获取分区分隔数（已废弃）
                     * @return PartitionDot 分区分隔数（已废弃）
                     * 
                     */
                    int64_t GetPartitionDot() const;

                    /**
                     * 设置分区分隔数（已废弃）
                     * @param _partitionDot 分区分隔数（已废弃）
                     * 
                     */
                    void SetPartitionDot(const int64_t& _partitionDot);

                    /**
                     * 判断参数 PartitionDot 是否已赋值
                     * @return PartitionDot 是否已赋值
                     * 
                     */
                    bool PartitionDotHasBeenSet() const;

                    /**
                     * 获取分区转换策略
                     * @return Transform 分区转换策略
                     * 
                     */
                    std::string GetTransform() const;

                    /**
                     * 设置分区转换策略
                     * @param _transform 分区转换策略
                     * 
                     */
                    void SetTransform(const std::string& _transform);

                    /**
                     * 判断参数 Transform 是否已赋值
                     * @return Transform 是否已赋值
                     * 
                     */
                    bool TransformHasBeenSet() const;

                    /**
                     * 获取策略参数
                     * @return TransformArgs 策略参数
                     * 
                     */
                    std::vector<std::string> GetTransformArgs() const;

                    /**
                     * 设置策略参数
                     * @param _transformArgs 策略参数
                     * 
                     */
                    void SetTransformArgs(const std::vector<std::string>& _transformArgs);

                    /**
                     * 判断参数 TransformArgs 是否已赋值
                     * @return TransformArgs 是否已赋值
                     * 
                     */
                    bool TransformArgsHasBeenSet() const;

                private:

                    /**
                     * 字段名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 字段类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 字段描述
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 分区类型（已废弃）
                     */
                    std::string m_partitionType;
                    bool m_partitionTypeHasBeenSet;

                    /**
                     * 分区格式（已废弃）
                     */
                    std::string m_partitionFormat;
                    bool m_partitionFormatHasBeenSet;

                    /**
                     * 分区分隔数（已废弃）
                     */
                    int64_t m_partitionDot;
                    bool m_partitionDotHasBeenSet;

                    /**
                     * 分区转换策略
                     */
                    std::string m_transform;
                    bool m_transformHasBeenSet;

                    /**
                     * 策略参数
                     */
                    std::vector<std::string> m_transformArgs;
                    bool m_transformArgsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TPARTITION_H_
