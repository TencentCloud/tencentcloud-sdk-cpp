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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_OUTPUTDATACONFIG_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_OUTPUTDATACONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20191022/model/FileSystemDataSource.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * 输出数据配置
                */
                class OutputDataConfig : public AbstractModel
                {
                public:
                    OutputDataConfig();
                    ~OutputDataConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cos输出桶
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosOutputBucket cos输出桶
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosOutputBucket() const;

                    /**
                     * 设置cos输出桶
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosOutputBucket cos输出桶
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosOutputBucket(const std::string& _cosOutputBucket);

                    /**
                     * 判断参数 CosOutputBucket 是否已赋值
                     * @return CosOutputBucket 是否已赋值
                     * 
                     */
                    bool CosOutputBucketHasBeenSet() const;

                    /**
                     * 获取cos输出key前缀
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosOutputKeyPrefix cos输出key前缀
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosOutputKeyPrefix() const;

                    /**
                     * 设置cos输出key前缀
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosOutputKeyPrefix cos输出key前缀
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosOutputKeyPrefix(const std::string& _cosOutputKeyPrefix);

                    /**
                     * 判断参数 CosOutputKeyPrefix 是否已赋值
                     * @return CosOutputKeyPrefix 是否已赋值
                     * 
                     */
                    bool CosOutputKeyPrefixHasBeenSet() const;

                    /**
                     * 获取文件系统输出，如果指定了文件系统，那么Cos输出会被忽略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileSystemDataSource 文件系统输出，如果指定了文件系统，那么Cos输出会被忽略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FileSystemDataSource GetFileSystemDataSource() const;

                    /**
                     * 设置文件系统输出，如果指定了文件系统，那么Cos输出会被忽略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileSystemDataSource 文件系统输出，如果指定了文件系统，那么Cos输出会被忽略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileSystemDataSource(const FileSystemDataSource& _fileSystemDataSource);

                    /**
                     * 判断参数 FileSystemDataSource 是否已赋值
                     * @return FileSystemDataSource 是否已赋值
                     * 
                     */
                    bool FileSystemDataSourceHasBeenSet() const;

                private:

                    /**
                     * cos输出桶
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosOutputBucket;
                    bool m_cosOutputBucketHasBeenSet;

                    /**
                     * cos输出key前缀
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosOutputKeyPrefix;
                    bool m_cosOutputKeyPrefixHasBeenSet;

                    /**
                     * 文件系统输出，如果指定了文件系统，那么Cos输出会被忽略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileSystemDataSource m_fileSystemDataSource;
                    bool m_fileSystemDataSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_OUTPUTDATACONFIG_H_
