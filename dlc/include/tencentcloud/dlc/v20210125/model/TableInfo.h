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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TABLEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TABLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/TableBaseInfo.h>
#include <tencentcloud/dlc/v20210125/model/DataFormat.h>
#include <tencentcloud/dlc/v20210125/model/Column.h>
#include <tencentcloud/dlc/v20210125/model/Partition.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 返回数据表的相关信息。
                */
                class TableInfo : public AbstractModel
                {
                public:
                    TableInfo();
                    ~TableInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据表配置信息。
                     * @return TableBaseInfo 数据表配置信息。
                     * 
                     */
                    TableBaseInfo GetTableBaseInfo() const;

                    /**
                     * 设置数据表配置信息。
                     * @param _tableBaseInfo 数据表配置信息。
                     * 
                     */
                    void SetTableBaseInfo(const TableBaseInfo& _tableBaseInfo);

                    /**
                     * 判断参数 TableBaseInfo 是否已赋值
                     * @return TableBaseInfo 是否已赋值
                     * 
                     */
                    bool TableBaseInfoHasBeenSet() const;

                    /**
                     * 获取数据表格式。每次入参可选如下其一的KV结构，[TextFile，CSV，Json, Parquet, ORC, AVRD]。
                     * @return DataFormat 数据表格式。每次入参可选如下其一的KV结构，[TextFile，CSV，Json, Parquet, ORC, AVRD]。
                     * 
                     */
                    DataFormat GetDataFormat() const;

                    /**
                     * 设置数据表格式。每次入参可选如下其一的KV结构，[TextFile，CSV，Json, Parquet, ORC, AVRD]。
                     * @param _dataFormat 数据表格式。每次入参可选如下其一的KV结构，[TextFile，CSV，Json, Parquet, ORC, AVRD]。
                     * 
                     */
                    void SetDataFormat(const DataFormat& _dataFormat);

                    /**
                     * 判断参数 DataFormat 是否已赋值
                     * @return DataFormat 是否已赋值
                     * 
                     */
                    bool DataFormatHasBeenSet() const;

                    /**
                     * 获取数据表列信息。
                     * @return Columns 数据表列信息。
                     * 
                     */
                    std::vector<Column> GetColumns() const;

                    /**
                     * 设置数据表列信息。
                     * @param _columns 数据表列信息。
                     * 
                     */
                    void SetColumns(const std::vector<Column>& _columns);

                    /**
                     * 判断参数 Columns 是否已赋值
                     * @return Columns 是否已赋值
                     * 
                     */
                    bool ColumnsHasBeenSet() const;

                    /**
                     * 获取数据表分块信息。
                     * @return Partitions 数据表分块信息。
                     * 
                     */
                    std::vector<Partition> GetPartitions() const;

                    /**
                     * 设置数据表分块信息。
                     * @param _partitions 数据表分块信息。
                     * 
                     */
                    void SetPartitions(const std::vector<Partition>& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取数据存储路径。当前仅支持cos路径，格式如下：cosn://bucket-name/filepath。
                     * @return Location 数据存储路径。当前仅支持cos路径，格式如下：cosn://bucket-name/filepath。
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置数据存储路径。当前仅支持cos路径，格式如下：cosn://bucket-name/filepath。
                     * @param _location 数据存储路径。当前仅支持cos路径，格式如下：cosn://bucket-name/filepath。
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                private:

                    /**
                     * 数据表配置信息。
                     */
                    TableBaseInfo m_tableBaseInfo;
                    bool m_tableBaseInfoHasBeenSet;

                    /**
                     * 数据表格式。每次入参可选如下其一的KV结构，[TextFile，CSV，Json, Parquet, ORC, AVRD]。
                     */
                    DataFormat m_dataFormat;
                    bool m_dataFormatHasBeenSet;

                    /**
                     * 数据表列信息。
                     */
                    std::vector<Column> m_columns;
                    bool m_columnsHasBeenSet;

                    /**
                     * 数据表分块信息。
                     */
                    std::vector<Partition> m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * 数据存储路径。当前仅支持cos路径，格式如下：cosn://bucket-name/filepath。
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TABLEINFO_H_
