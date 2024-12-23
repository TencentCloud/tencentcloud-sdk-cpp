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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DSPACOSDISCOVERYTASKRESULT_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DSPACOSDISCOVERYTASKRESULT_H_

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
                * COS扫描任务结果，按照数据库级别展示
                */
                class DspaCOSDiscoveryTaskResult : public AbstractModel
                {
                public:
                    DspaCOSDiscoveryTaskResult();
                    ~DspaCOSDiscoveryTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取扫描bucket结果ID
                     * @return BucketResultId 扫描bucket结果ID
                     * 
                     */
                    int64_t GetBucketResultId() const;

                    /**
                     * 设置扫描bucket结果ID
                     * @param _bucketResultId 扫描bucket结果ID
                     * 
                     */
                    void SetBucketResultId(const int64_t& _bucketResultId);

                    /**
                     * 判断参数 BucketResultId 是否已赋值
                     * @return BucketResultId 是否已赋值
                     * 
                     */
                    bool BucketResultIdHasBeenSet() const;

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
                     * 获取桶名称
                     * @return BucketName 桶名称
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置桶名称
                     * @param _bucketName 桶名称
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取总文件数
                     * @return TotalFiles 总文件数
                     * 
                     */
                    int64_t GetTotalFiles() const;

                    /**
                     * 设置总文件数
                     * @param _totalFiles 总文件数
                     * 
                     */
                    void SetTotalFiles(const int64_t& _totalFiles);

                    /**
                     * 判断参数 TotalFiles 是否已赋值
                     * @return TotalFiles 是否已赋值
                     * 
                     */
                    bool TotalFilesHasBeenSet() const;

                    /**
                     * 获取被识别出的敏感数据数
                     * @return SensitiveDataNums 被识别出的敏感数据数
                     * 
                     */
                    int64_t GetSensitiveDataNums() const;

                    /**
                     * 设置被识别出的敏感数据数
                     * @param _sensitiveDataNums 被识别出的敏感数据数
                     * 
                     */
                    void SetSensitiveDataNums(const int64_t& _sensitiveDataNums);

                    /**
                     * 判断参数 SensitiveDataNums 是否已赋值
                     * @return SensitiveDataNums 是否已赋值
                     * 
                     */
                    bool SensitiveDataNumsHasBeenSet() const;

                    /**
                     * 获取Bucket扫描的结束时间，格式如：2006-01-02 15:04:05
                     * @return EndTime Bucket扫描的结束时间，格式如：2006-01-02 15:04:05
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Bucket扫描的结束时间，格式如：2006-01-02 15:04:05
                     * @param _endTime Bucket扫描的结束时间，格式如：2006-01-02 15:04:05
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
                     * 获取Bucket扫描状态，0待扫描 1扫描中 2扫描终止 3扫描成功 4扫描失败
                     * @return Status Bucket扫描状态，0待扫描 1扫描中 2扫描终止 3扫描成功 4扫描失败
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Bucket扫描状态，0待扫描 1扫描中 2扫描终止 3扫描成功 4扫描失败
                     * @param _status Bucket扫描状态，0待扫描 1扫描中 2扫描终止 3扫描成功 4扫描失败
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
                     * 获取Bucket扫描结果错误信息
                     * @return ErrorInfo Bucket扫描结果错误信息
                     * 
                     */
                    std::string GetErrorInfo() const;

                    /**
                     * 设置Bucket扫描结果错误信息
                     * @param _errorInfo Bucket扫描结果错误信息
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
                     * 获取是否超额
                     * @return OverSize 是否超额
                     * 
                     */
                    std::string GetOverSize() const;

                    /**
                     * 设置是否超额
                     * @param _overSize 是否超额
                     * 
                     */
                    void SetOverSize(const std::string& _overSize);

                    /**
                     * 判断参数 OverSize 是否已赋值
                     * @return OverSize 是否已赋值
                     * 
                     */
                    bool OverSizeHasBeenSet() const;

                private:

                    /**
                     * 扫描bucket结果ID
                     */
                    int64_t m_bucketResultId;
                    bool m_bucketResultIdHasBeenSet;

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
                     * 桶名称
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 总文件数
                     */
                    int64_t m_totalFiles;
                    bool m_totalFilesHasBeenSet;

                    /**
                     * 被识别出的敏感数据数
                     */
                    int64_t m_sensitiveDataNums;
                    bool m_sensitiveDataNumsHasBeenSet;

                    /**
                     * Bucket扫描的结束时间，格式如：2006-01-02 15:04:05
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 数据源名称
                     */
                    std::string m_dataSourceName;
                    bool m_dataSourceNameHasBeenSet;

                    /**
                     * Bucket扫描状态，0待扫描 1扫描中 2扫描终止 3扫描成功 4扫描失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Bucket扫描结果错误信息
                     */
                    std::string m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                    /**
                     * 资源所在地域
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 是否超额
                     */
                    std::string m_overSize;
                    bool m_overSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DSPACOSDISCOVERYTASKRESULT_H_
