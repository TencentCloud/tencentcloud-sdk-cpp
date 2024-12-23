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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYTASKDBRESULT_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYTASKDBRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 扫描任务结果，按照数据库级别展示
                */
                class DspaDiscoveryTaskDbResult : public AbstractModel
                {
                public:
                    DspaDiscoveryTaskDbResult();
                    ~DspaDiscoveryTaskDbResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取扫描数据库结果ID
                     * @return DbResultId 扫描数据库结果ID
                     * 
                     */
                    int64_t GetDbResultId() const;

                    /**
                     * 设置扫描数据库结果ID
                     * @param _dbResultId 扫描数据库结果ID
                     * 
                     */
                    void SetDbResultId(const int64_t& _dbResultId);

                    /**
                     * 判断参数 DbResultId 是否已赋值
                     * @return DbResultId 是否已赋值
                     * 
                     */
                    bool DbResultIdHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param _taskName 任务名称
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取扫描任务最新一次扫描结果ID
                     * @return ResultId 扫描任务最新一次扫描结果ID
                     * 
                     */
                    int64_t GetResultId() const;

                    /**
                     * 设置扫描任务最新一次扫描结果ID
                     * @param _resultId 扫描任务最新一次扫描结果ID
                     * 
                     */
                    void SetResultId(const int64_t& _resultId);

                    /**
                     * 判断参数 ResultId 是否已赋值
                     * @return ResultId 是否已赋值
                     * 
                     */
                    bool ResultIdHasBeenSet() const;

                    /**
                     * 获取数据源ID
                     * @return DataSourceId 数据源ID
                     * 
                     */
                    std::string GetDataSourceId() const;

                    /**
                     * 设置数据源ID
                     * @param _dataSourceId 数据源ID
                     * 
                     */
                    void SetDataSourceId(const std::string& _dataSourceId);

                    /**
                     * 判断参数 DataSourceId 是否已赋值
                     * @return DataSourceId 是否已赋值
                     * 
                     */
                    bool DataSourceIdHasBeenSet() const;

                    /**
                     * 获取数据库名称
                     * @return DbName 数据库名称
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库名称
                     * @param _dbName 数据库名称
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取总表数
                     * @return TotalTables 总表数
                     * 
                     */
                    int64_t GetTotalTables() const;

                    /**
                     * 设置总表数
                     * @param _totalTables 总表数
                     * 
                     */
                    void SetTotalTables(const int64_t& _totalTables);

                    /**
                     * 判断参数 TotalTables 是否已赋值
                     * @return TotalTables 是否已赋值
                     * 
                     */
                    bool TotalTablesHasBeenSet() const;

                    /**
                     * 获取敏感表数
                     * @return SensitiveTables 敏感表数
                     * 
                     */
                    int64_t GetSensitiveTables() const;

                    /**
                     * 设置敏感表数
                     * @param _sensitiveTables 敏感表数
                     * 
                     */
                    void SetSensitiveTables(const int64_t& _sensitiveTables);

                    /**
                     * 判断参数 SensitiveTables 是否已赋值
                     * @return SensitiveTables 是否已赋值
                     * 
                     */
                    bool SensitiveTablesHasBeenSet() const;

                    /**
                     * 获取DB扫描的结束时间，格式如：2006-01-02 15:04:05
                     * @return EndTime DB扫描的结束时间，格式如：2006-01-02 15:04:05
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置DB扫描的结束时间，格式如：2006-01-02 15:04:05
                     * @param _endTime DB扫描的结束时间，格式如：2006-01-02 15:04:05
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取数据源名称
                     * @return DataSourceName 数据源名称
                     * 
                     */
                    std::string GetDataSourceName() const;

                    /**
                     * 设置数据源名称
                     * @param _dataSourceName 数据源名称
                     * 
                     */
                    void SetDataSourceName(const std::string& _dataSourceName);

                    /**
                     * 判断参数 DataSourceName 是否已赋值
                     * @return DataSourceName 是否已赋值
                     * 
                     */
                    bool DataSourceNameHasBeenSet() const;

                    /**
                     * 获取DB扫描状态，0待扫描 1扫描中 2扫描终止 3扫描成功 4扫描失败
                     * @return Status DB扫描状态，0待扫描 1扫描中 2扫描终止 3扫描成功 4扫描失败
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置DB扫描状态，0待扫描 1扫描中 2扫描终止 3扫描成功 4扫描失败
                     * @param _status DB扫描状态，0待扫描 1扫描中 2扫描终止 3扫描成功 4扫描失败
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取DB扫描结果错误信息
                     * @return ErrorInfo DB扫描结果错误信息
                     * 
                     */
                    std::string GetErrorInfo() const;

                    /**
                     * 设置DB扫描结果错误信息
                     * @param _errorInfo DB扫描结果错误信息
                     * 
                     */
                    void SetErrorInfo(const std::string& _errorInfo);

                    /**
                     * 判断参数 ErrorInfo 是否已赋值
                     * @return ErrorInfo 是否已赋值
                     * 
                     */
                    bool ErrorInfoHasBeenSet() const;

                    /**
                     * 获取资源所在地域
                     * @return ResourceRegion 资源所在地域
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置资源所在地域
                     * @param _resourceRegion 资源所在地域
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取敏感字段数
                     * @return SensitiveField 敏感字段数
                     * 
                     */
                    int64_t GetSensitiveField() const;

                    /**
                     * 设置敏感字段数
                     * @param _sensitiveField 敏感字段数
                     * 
                     */
                    void SetSensitiveField(const int64_t& _sensitiveField);

                    /**
                     * 判断参数 SensitiveField 是否已赋值
                     * @return SensitiveField 是否已赋值
                     * 
                     */
                    bool SensitiveFieldHasBeenSet() const;

                    /**
                     * 获取总的字段数
                     * @return TotalField 总的字段数
                     * 
                     */
                    int64_t GetTotalField() const;

                    /**
                     * 设置总的字段数
                     * @param _totalField 总的字段数
                     * 
                     */
                    void SetTotalField(const int64_t& _totalField);

                    /**
                     * 判断参数 TotalField 是否已赋值
                     * @return TotalField 是否已赋值
                     * 
                     */
                    bool TotalFieldHasBeenSet() const;

                private:

                    /**
                     * 扫描数据库结果ID
                     */
                    int64_t m_dbResultId;
                    bool m_dbResultIdHasBeenSet;

                    /**
                     * 任务ID
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 扫描任务最新一次扫描结果ID
                     */
                    int64_t m_resultId;
                    bool m_resultIdHasBeenSet;

                    /**
                     * 数据源ID
                     */
                    std::string m_dataSourceId;
                    bool m_dataSourceIdHasBeenSet;

                    /**
                     * 数据库名称
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 总表数
                     */
                    int64_t m_totalTables;
                    bool m_totalTablesHasBeenSet;

                    /**
                     * 敏感表数
                     */
                    int64_t m_sensitiveTables;
                    bool m_sensitiveTablesHasBeenSet;

                    /**
                     * DB扫描的结束时间，格式如：2006-01-02 15:04:05
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 数据源名称
                     */
                    std::string m_dataSourceName;
                    bool m_dataSourceNameHasBeenSet;

                    /**
                     * DB扫描状态，0待扫描 1扫描中 2扫描终止 3扫描成功 4扫描失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * DB扫描结果错误信息
                     */
                    std::string m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                    /**
                     * 资源所在地域
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 敏感字段数
                     */
                    int64_t m_sensitiveField;
                    bool m_sensitiveFieldHasBeenSet;

                    /**
                     * 总的字段数
                     */
                    int64_t m_totalField;
                    bool m_totalFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYTASKDBRESULT_H_
