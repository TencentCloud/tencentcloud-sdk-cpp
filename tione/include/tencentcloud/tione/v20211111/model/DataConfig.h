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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DATACONFIG_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DATACONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/DataSetConfig.h>
#include <tencentcloud/tione/v20211111/model/CosPathInfo.h>
#include <tencentcloud/tione/v20211111/model/CFSConfig.h>
#include <tencentcloud/tione/v20211111/model/HDFSConfig.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 数据配置
                */
                class DataConfig : public AbstractModel
                {
                public:
                    DataConfig();
                    ~DataConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取映射路径
                     * @return MappingPath 映射路径
                     */
                    std::string GetMappingPath() const;

                    /**
                     * 设置映射路径
                     * @param MappingPath 映射路径
                     */
                    void SetMappingPath(const std::string& _mappingPath);

                    /**
                     * 判断参数 MappingPath 是否已赋值
                     * @return MappingPath 是否已赋值
                     */
                    bool MappingPathHasBeenSet() const;

                    /**
                     * 获取DATASET、COS、CFS、HDFS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSourceType DATASET、COS、CFS、HDFS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDataSourceType() const;

                    /**
                     * 设置DATASET、COS、CFS、HDFS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DataSourceType DATASET、COS、CFS、HDFS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDataSourceType(const std::string& _dataSourceType);

                    /**
                     * 判断参数 DataSourceType 是否已赋值
                     * @return DataSourceType 是否已赋值
                     */
                    bool DataSourceTypeHasBeenSet() const;

                    /**
                     * 获取来自数据集的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSetSource 来自数据集的数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DataSetConfig GetDataSetSource() const;

                    /**
                     * 设置来自数据集的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DataSetSource 来自数据集的数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDataSetSource(const DataSetConfig& _dataSetSource);

                    /**
                     * 判断参数 DataSetSource 是否已赋值
                     * @return DataSetSource 是否已赋值
                     */
                    bool DataSetSourceHasBeenSet() const;

                    /**
                     * 获取来自cos的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return COSSource 来自cos的数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CosPathInfo GetCOSSource() const;

                    /**
                     * 设置来自cos的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param COSSource 来自cos的数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCOSSource(const CosPathInfo& _cOSSource);

                    /**
                     * 判断参数 COSSource 是否已赋值
                     * @return COSSource 是否已赋值
                     */
                    bool COSSourceHasBeenSet() const;

                    /**
                     * 获取来自CFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CFSSource 来自CFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CFSConfig GetCFSSource() const;

                    /**
                     * 设置来自CFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CFSSource 来自CFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCFSSource(const CFSConfig& _cFSSource);

                    /**
                     * 判断参数 CFSSource 是否已赋值
                     * @return CFSSource 是否已赋值
                     */
                    bool CFSSourceHasBeenSet() const;

                    /**
                     * 获取来自HDFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HDFSSource 来自HDFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HDFSConfig GetHDFSSource() const;

                    /**
                     * 设置来自HDFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HDFSSource 来自HDFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHDFSSource(const HDFSConfig& _hDFSSource);

                    /**
                     * 判断参数 HDFSSource 是否已赋值
                     * @return HDFSSource 是否已赋值
                     */
                    bool HDFSSourceHasBeenSet() const;

                private:

                    /**
                     * 映射路径
                     */
                    std::string m_mappingPath;
                    bool m_mappingPathHasBeenSet;

                    /**
                     * DATASET、COS、CFS、HDFS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataSourceType;
                    bool m_dataSourceTypeHasBeenSet;

                    /**
                     * 来自数据集的数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DataSetConfig m_dataSetSource;
                    bool m_dataSetSourceHasBeenSet;

                    /**
                     * 来自cos的数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CosPathInfo m_cOSSource;
                    bool m_cOSSourceHasBeenSet;

                    /**
                     * 来自CFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CFSConfig m_cFSSource;
                    bool m_cFSSourceHasBeenSet;

                    /**
                     * 来自HDFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HDFSConfig m_hDFSSource;
                    bool m_hDFSSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DATACONFIG_H_
