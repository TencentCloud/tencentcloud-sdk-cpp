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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_COSDATASOURCE_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_COSDATASOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * cos路径
                */
                class CosDataSource : public AbstractModel
                {
                public:
                    CosDataSource();
                    ~CosDataSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cos桶
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bucket cos桶
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置cos桶
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bucket cos桶
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取cos文件key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyPrefix cos文件key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKeyPrefix() const;

                    /**
                     * 设置cos文件key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyPrefix cos文件key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeyPrefix(const std::string& _keyPrefix);

                    /**
                     * 判断参数 KeyPrefix 是否已赋值
                     * @return KeyPrefix 是否已赋值
                     * 
                     */
                    bool KeyPrefixHasBeenSet() const;

                    /**
                     * 获取分布式数据下载方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataDistributionType 分布式数据下载方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataDistributionType() const;

                    /**
                     * 设置分布式数据下载方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataDistributionType 分布式数据下载方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataDistributionType(const std::string& _dataDistributionType);

                    /**
                     * 判断参数 DataDistributionType 是否已赋值
                     * @return DataDistributionType 是否已赋值
                     * 
                     */
                    bool DataDistributionTypeHasBeenSet() const;

                    /**
                     * 获取数据类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataType 数据类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataType() const;

                    /**
                     * 设置数据类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataType 数据类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataType(const std::string& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     * 
                     */
                    bool DataTypeHasBeenSet() const;

                private:

                    /**
                     * cos桶
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * cos文件key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keyPrefix;
                    bool m_keyPrefixHasBeenSet;

                    /**
                     * 分布式数据下载方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataDistributionType;
                    bool m_dataDistributionTypeHasBeenSet;

                    /**
                     * 数据类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataType;
                    bool m_dataTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_COSDATASOURCE_H_
