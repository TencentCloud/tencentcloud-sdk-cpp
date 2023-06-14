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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_TABLESPACETIMESERIES_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_TABLESPACETIMESERIES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20191016/model/MonitorFloatMetricSeriesData.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * 库表空间时序数据
                */
                class TableSpaceTimeSeries : public AbstractModel
                {
                public:
                    TableSpaceTimeSeries();
                    ~TableSpaceTimeSeries() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表名。
                     * @return TableName 表名。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名。
                     * @param _tableName 表名。
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取库名。
                     * @return TableSchema 库名。
                     * 
                     */
                    std::string GetTableSchema() const;

                    /**
                     * 设置库名。
                     * @param _tableSchema 库名。
                     * 
                     */
                    void SetTableSchema(const std::string& _tableSchema);

                    /**
                     * 判断参数 TableSchema 是否已赋值
                     * @return TableSchema 是否已赋值
                     * 
                     */
                    bool TableSchemaHasBeenSet() const;

                    /**
                     * 获取库表的存储引擎。
                     * @return Engine 库表的存储引擎。
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置库表的存储引擎。
                     * @param _engine 库表的存储引擎。
                     * 
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取单位时间间隔内的空间指标数据。
                     * @return SeriesData 单位时间间隔内的空间指标数据。
                     * 
                     */
                    MonitorFloatMetricSeriesData GetSeriesData() const;

                    /**
                     * 设置单位时间间隔内的空间指标数据。
                     * @param _seriesData 单位时间间隔内的空间指标数据。
                     * 
                     */
                    void SetSeriesData(const MonitorFloatMetricSeriesData& _seriesData);

                    /**
                     * 判断参数 SeriesData 是否已赋值
                     * @return SeriesData 是否已赋值
                     * 
                     */
                    bool SeriesDataHasBeenSet() const;

                private:

                    /**
                     * 表名。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 库名。
                     */
                    std::string m_tableSchema;
                    bool m_tableSchemaHasBeenSet;

                    /**
                     * 库表的存储引擎。
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * 单位时间间隔内的空间指标数据。
                     */
                    MonitorFloatMetricSeriesData m_seriesData;
                    bool m_seriesDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_TABLESPACETIMESERIES_H_
