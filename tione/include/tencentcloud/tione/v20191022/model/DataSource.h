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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_DATASOURCE_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_DATASOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20191022/model/CosDataSource.h>
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
                * 数据源
                */
                class DataSource : public AbstractModel
                {
                public:
                    DataSource();
                    ~DataSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cos数据源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosDataSource cos数据源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CosDataSource GetCosDataSource() const;

                    /**
                     * 设置cos数据源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosDataSource cos数据源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosDataSource(const CosDataSource& _cosDataSource);

                    /**
                     * 判断参数 CosDataSource 是否已赋值
                     * @return CosDataSource 是否已赋值
                     * 
                     */
                    bool CosDataSourceHasBeenSet() const;

                    /**
                     * 获取文件系统输入源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileSystemDataSource 文件系统输入源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FileSystemDataSource GetFileSystemDataSource() const;

                    /**
                     * 设置文件系统输入源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileSystemDataSource 文件系统输入源
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
                     * cos数据源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CosDataSource m_cosDataSource;
                    bool m_cosDataSourceHasBeenSet;

                    /**
                     * 文件系统输入源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileSystemDataSource m_fileSystemDataSource;
                    bool m_fileSystemDataSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_DATASOURCE_H_
