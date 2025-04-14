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
#include <tencentcloud/tione/v20211111/model/GooseFS.h>
#include <tencentcloud/tione/v20211111/model/CFSTurbo.h>
#include <tencentcloud/tione/v20211111/model/LocalDisk.h>
#include <tencentcloud/tione/v20211111/model/CBSConfig.h>
#include <tencentcloud/tione/v20211111/model/HostPath.h>


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
                     * 
                     */
                    std::string GetMappingPath() const;

                    /**
                     * 设置映射路径
                     * @param _mappingPath 映射路径
                     * 
                     */
                    void SetMappingPath(const std::string& _mappingPath);

                    /**
                     * 判断参数 MappingPath 是否已赋值
                     * @return MappingPath 是否已赋值
                     * 
                     */
                    bool MappingPathHasBeenSet() const;

                    /**
                     * 获取存储用途
可选值为 BUILTIN_CODE, BUILTIN_DATA, BUILTIN_MODEL, USER_DATA, USER_CODE, USER_MODEL, OUTPUT, OTHER
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSourceUsage 存储用途
可选值为 BUILTIN_CODE, BUILTIN_DATA, BUILTIN_MODEL, USER_DATA, USER_CODE, USER_MODEL, OUTPUT, OTHER
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataSourceUsage() const;

                    /**
                     * 设置存储用途
可选值为 BUILTIN_CODE, BUILTIN_DATA, BUILTIN_MODEL, USER_DATA, USER_CODE, USER_MODEL, OUTPUT, OTHER
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataSourceUsage 存储用途
可选值为 BUILTIN_CODE, BUILTIN_DATA, BUILTIN_MODEL, USER_DATA, USER_CODE, USER_MODEL, OUTPUT, OTHER
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataSourceUsage(const std::string& _dataSourceUsage);

                    /**
                     * 判断参数 DataSourceUsage 是否已赋值
                     * @return DataSourceUsage 是否已赋值
                     * 
                     */
                    bool DataSourceUsageHasBeenSet() const;

                    /**
                     * 获取DATASET、COS、CFS、CFSTurbo、GooseFSx、HDFS、WEDATA_HDFS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSourceType DATASET、COS、CFS、CFSTurbo、GooseFSx、HDFS、WEDATA_HDFS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataSourceType() const;

                    /**
                     * 设置DATASET、COS、CFS、CFSTurbo、GooseFSx、HDFS、WEDATA_HDFS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataSourceType DATASET、COS、CFS、CFSTurbo、GooseFSx、HDFS、WEDATA_HDFS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataSourceType(const std::string& _dataSourceType);

                    /**
                     * 判断参数 DataSourceType 是否已赋值
                     * @return DataSourceType 是否已赋值
                     * 
                     */
                    bool DataSourceTypeHasBeenSet() const;

                    /**
                     * 获取来自数据集的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSetSource 来自数据集的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DataSetConfig GetDataSetSource() const;

                    /**
                     * 设置来自数据集的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataSetSource 来自数据集的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataSetSource(const DataSetConfig& _dataSetSource);

                    /**
                     * 判断参数 DataSetSource 是否已赋值
                     * @return DataSetSource 是否已赋值
                     * 
                     */
                    bool DataSetSourceHasBeenSet() const;

                    /**
                     * 获取来自cos的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return COSSource 来自cos的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CosPathInfo GetCOSSource() const;

                    /**
                     * 设置来自cos的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cOSSource 来自cos的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCOSSource(const CosPathInfo& _cOSSource);

                    /**
                     * 判断参数 COSSource 是否已赋值
                     * @return COSSource 是否已赋值
                     * 
                     */
                    bool COSSourceHasBeenSet() const;

                    /**
                     * 获取来自CFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CFSSource 来自CFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CFSConfig GetCFSSource() const;

                    /**
                     * 设置来自CFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cFSSource 来自CFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCFSSource(const CFSConfig& _cFSSource);

                    /**
                     * 判断参数 CFSSource 是否已赋值
                     * @return CFSSource 是否已赋值
                     * 
                     */
                    bool CFSSourceHasBeenSet() const;

                    /**
                     * 获取来自HDFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HDFSSource 来自HDFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HDFSConfig GetHDFSSource() const;

                    /**
                     * 设置来自HDFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hDFSSource 来自HDFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHDFSSource(const HDFSConfig& _hDFSSource);

                    /**
                     * 判断参数 HDFSSource 是否已赋值
                     * @return HDFSSource 是否已赋值
                     * 
                     */
                    bool HDFSSourceHasBeenSet() const;

                    /**
                     * 获取配置GooseFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GooseFSSource 配置GooseFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GooseFS GetGooseFSSource() const;

                    /**
                     * 设置配置GooseFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gooseFSSource 配置GooseFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGooseFSSource(const GooseFS& _gooseFSSource);

                    /**
                     * 判断参数 GooseFSSource 是否已赋值
                     * @return GooseFSSource 是否已赋值
                     * 
                     */
                    bool GooseFSSourceHasBeenSet() const;

                    /**
                     * 获取配置TurboFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CFSTurboSource 配置TurboFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CFSTurbo GetCFSTurboSource() const;

                    /**
                     * 设置配置TurboFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cFSTurboSource 配置TurboFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCFSTurboSource(const CFSTurbo& _cFSTurboSource);

                    /**
                     * 判断参数 CFSTurboSource 是否已赋值
                     * @return CFSTurboSource 是否已赋值
                     * 
                     */
                    bool CFSTurboSourceHasBeenSet() const;

                    /**
                     * 获取来自本地磁盘的信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocalDiskSource 来自本地磁盘的信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LocalDisk GetLocalDiskSource() const;

                    /**
                     * 设置来自本地磁盘的信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _localDiskSource 来自本地磁盘的信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocalDiskSource(const LocalDisk& _localDiskSource);

                    /**
                     * 判断参数 LocalDiskSource 是否已赋值
                     * @return LocalDiskSource 是否已赋值
                     * 
                     */
                    bool LocalDiskSourceHasBeenSet() const;

                    /**
                     * 获取CBS配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CBSSource CBS配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CBSConfig GetCBSSource() const;

                    /**
                     * 设置CBS配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cBSSource CBS配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCBSSource(const CBSConfig& _cBSSource);

                    /**
                     * 判断参数 CBSSource 是否已赋值
                     * @return CBSSource 是否已赋值
                     * 
                     */
                    bool CBSSourceHasBeenSet() const;

                    /**
                     * 获取主机路径信息
                     * @return HostPathSource 主机路径信息
                     * 
                     */
                    HostPath GetHostPathSource() const;

                    /**
                     * 设置主机路径信息
                     * @param _hostPathSource 主机路径信息
                     * 
                     */
                    void SetHostPathSource(const HostPath& _hostPathSource);

                    /**
                     * 判断参数 HostPathSource 是否已赋值
                     * @return HostPathSource 是否已赋值
                     * 
                     */
                    bool HostPathSourceHasBeenSet() const;

                private:

                    /**
                     * 映射路径
                     */
                    std::string m_mappingPath;
                    bool m_mappingPathHasBeenSet;

                    /**
                     * 存储用途
可选值为 BUILTIN_CODE, BUILTIN_DATA, BUILTIN_MODEL, USER_DATA, USER_CODE, USER_MODEL, OUTPUT, OTHER
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataSourceUsage;
                    bool m_dataSourceUsageHasBeenSet;

                    /**
                     * DATASET、COS、CFS、CFSTurbo、GooseFSx、HDFS、WEDATA_HDFS
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

                    /**
                     * 配置GooseFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GooseFS m_gooseFSSource;
                    bool m_gooseFSSourceHasBeenSet;

                    /**
                     * 配置TurboFS的数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CFSTurbo m_cFSTurboSource;
                    bool m_cFSTurboSourceHasBeenSet;

                    /**
                     * 来自本地磁盘的信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LocalDisk m_localDiskSource;
                    bool m_localDiskSourceHasBeenSet;

                    /**
                     * CBS配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CBSConfig m_cBSSource;
                    bool m_cBSSourceHasBeenSet;

                    /**
                     * 主机路径信息
                     */
                    HostPath m_hostPathSource;
                    bool m_hostPathSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DATACONFIG_H_
