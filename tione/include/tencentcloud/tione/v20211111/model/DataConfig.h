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
#include <tencentcloud/tione/v20211111/model/PublicDataSourceFS.h>


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
                     * 获取<p>映射路径</p>
                     * @return MappingPath <p>映射路径</p>
                     * 
                     */
                    std::string GetMappingPath() const;

                    /**
                     * 设置<p>映射路径</p>
                     * @param _mappingPath <p>映射路径</p>
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
                     * 获取<p>存储用途<br>可选值为 BUILTIN_CODE, BUILTIN_DATA, BUILTIN_MODEL, USER_DATA, USER_CODE, USER_MODEL, OUTPUT, OTHER</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSourceUsage <p>存储用途<br>可选值为 BUILTIN_CODE, BUILTIN_DATA, BUILTIN_MODEL, USER_DATA, USER_CODE, USER_MODEL, OUTPUT, OTHER</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataSourceUsage() const;

                    /**
                     * 设置<p>存储用途<br>可选值为 BUILTIN_CODE, BUILTIN_DATA, BUILTIN_MODEL, USER_DATA, USER_CODE, USER_MODEL, OUTPUT, OTHER</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataSourceUsage <p>存储用途<br>可选值为 BUILTIN_CODE, BUILTIN_DATA, BUILTIN_MODEL, USER_DATA, USER_CODE, USER_MODEL, OUTPUT, OTHER</p>
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
                     * 获取<p>DATASET、COS、CFS、CFSTurbo、GooseFSx、HDFS、WEDATA_HDFS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSourceType <p>DATASET、COS、CFS、CFSTurbo、GooseFSx、HDFS、WEDATA_HDFS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataSourceType() const;

                    /**
                     * 设置<p>DATASET、COS、CFS、CFSTurbo、GooseFSx、HDFS、WEDATA_HDFS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataSourceType <p>DATASET、COS、CFS、CFSTurbo、GooseFSx、HDFS、WEDATA_HDFS</p>
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
                     * 获取<p>来自数据集的数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSetSource <p>来自数据集的数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DataSetConfig GetDataSetSource() const;

                    /**
                     * 设置<p>来自数据集的数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataSetSource <p>来自数据集的数据</p>
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
                     * 获取<p>来自cos的数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return COSSource <p>来自cos的数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CosPathInfo GetCOSSource() const;

                    /**
                     * 设置<p>来自cos的数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cOSSource <p>来自cos的数据</p>
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
                     * 获取<p>来自CFS的数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CFSSource <p>来自CFS的数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CFSConfig GetCFSSource() const;

                    /**
                     * 设置<p>来自CFS的数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cFSSource <p>来自CFS的数据</p>
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
                     * 获取<p>来自HDFS的数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HDFSSource <p>来自HDFS的数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HDFSConfig GetHDFSSource() const;

                    /**
                     * 设置<p>来自HDFS的数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hDFSSource <p>来自HDFS的数据</p>
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
                     * 获取<p>配置GooseFS的数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GooseFSSource <p>配置GooseFS的数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GooseFS GetGooseFSSource() const;

                    /**
                     * 设置<p>配置GooseFS的数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gooseFSSource <p>配置GooseFS的数据</p>
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
                     * 获取<p>配置TurboFS的数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CFSTurboSource <p>配置TurboFS的数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CFSTurbo GetCFSTurboSource() const;

                    /**
                     * 设置<p>配置TurboFS的数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cFSTurboSource <p>配置TurboFS的数据</p>
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
                     * 获取<p>来自本地磁盘的信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocalDiskSource <p>来自本地磁盘的信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LocalDisk GetLocalDiskSource() const;

                    /**
                     * 设置<p>来自本地磁盘的信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _localDiskSource <p>来自本地磁盘的信息</p>
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
                     * 获取<p>CBS配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CBSSource <p>CBS配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CBSConfig GetCBSSource() const;

                    /**
                     * 设置<p>CBS配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cBSSource <p>CBS配置信息</p>
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
                     * 获取<p>主机路径信息</p>
                     * @return HostPathSource <p>主机路径信息</p>
                     * 
                     */
                    HostPath GetHostPathSource() const;

                    /**
                     * 设置<p>主机路径信息</p>
                     * @param _hostPathSource <p>主机路径信息</p>
                     * 
                     */
                    void SetHostPathSource(const HostPath& _hostPathSource);

                    /**
                     * 判断参数 HostPathSource 是否已赋值
                     * @return HostPathSource 是否已赋值
                     * 
                     */
                    bool HostPathSourceHasBeenSet() const;

                    /**
                     * 获取<p>公有云数据源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicDataSource <p>公有云数据源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PublicDataSourceFS GetPublicDataSource() const;

                    /**
                     * 设置<p>公有云数据源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicDataSource <p>公有云数据源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicDataSource(const PublicDataSourceFS& _publicDataSource);

                    /**
                     * 判断参数 PublicDataSource 是否已赋值
                     * @return PublicDataSource 是否已赋值
                     * 
                     */
                    bool PublicDataSourceHasBeenSet() const;

                private:

                    /**
                     * <p>映射路径</p>
                     */
                    std::string m_mappingPath;
                    bool m_mappingPathHasBeenSet;

                    /**
                     * <p>存储用途<br>可选值为 BUILTIN_CODE, BUILTIN_DATA, BUILTIN_MODEL, USER_DATA, USER_CODE, USER_MODEL, OUTPUT, OTHER</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataSourceUsage;
                    bool m_dataSourceUsageHasBeenSet;

                    /**
                     * <p>DATASET、COS、CFS、CFSTurbo、GooseFSx、HDFS、WEDATA_HDFS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataSourceType;
                    bool m_dataSourceTypeHasBeenSet;

                    /**
                     * <p>来自数据集的数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DataSetConfig m_dataSetSource;
                    bool m_dataSetSourceHasBeenSet;

                    /**
                     * <p>来自cos的数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CosPathInfo m_cOSSource;
                    bool m_cOSSourceHasBeenSet;

                    /**
                     * <p>来自CFS的数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CFSConfig m_cFSSource;
                    bool m_cFSSourceHasBeenSet;

                    /**
                     * <p>来自HDFS的数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HDFSConfig m_hDFSSource;
                    bool m_hDFSSourceHasBeenSet;

                    /**
                     * <p>配置GooseFS的数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GooseFS m_gooseFSSource;
                    bool m_gooseFSSourceHasBeenSet;

                    /**
                     * <p>配置TurboFS的数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CFSTurbo m_cFSTurboSource;
                    bool m_cFSTurboSourceHasBeenSet;

                    /**
                     * <p>来自本地磁盘的信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LocalDisk m_localDiskSource;
                    bool m_localDiskSourceHasBeenSet;

                    /**
                     * <p>CBS配置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CBSConfig m_cBSSource;
                    bool m_cBSSourceHasBeenSet;

                    /**
                     * <p>主机路径信息</p>
                     */
                    HostPath m_hostPathSource;
                    bool m_hostPathSourceHasBeenSet;

                    /**
                     * <p>公有云数据源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PublicDataSourceFS m_publicDataSource;
                    bool m_publicDataSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DATACONFIG_H_
