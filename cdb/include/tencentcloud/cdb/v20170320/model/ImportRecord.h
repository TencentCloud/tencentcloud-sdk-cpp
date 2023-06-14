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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_IMPORTRECORD_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_IMPORTRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 导入任务记录
                */
                class ImportRecord : public AbstractModel
                {
                public:
                    ImportRecord();
                    ~ImportRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取状态值
                     * @return Status 状态值
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态值
                     * @param _status 状态值
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
                     * 获取状态值
                     * @return Code 状态值
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置状态值
                     * @param _code 状态值
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取执行时间
                     * @return CostTime 执行时间
                     * 
                     */
                    int64_t GetCostTime() const;

                    /**
                     * 设置执行时间
                     * @param _costTime 执行时间
                     * 
                     */
                    void SetCostTime(const int64_t& _costTime);

                    /**
                     * 判断参数 CostTime 是否已赋值
                     * @return CostTime 是否已赋值
                     * 
                     */
                    bool CostTimeHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取后端任务ID
                     * @return WorkId 后端任务ID
                     * 
                     */
                    std::string GetWorkId() const;

                    /**
                     * 设置后端任务ID
                     * @param _workId 后端任务ID
                     * 
                     */
                    void SetWorkId(const std::string& _workId);

                    /**
                     * 判断参数 WorkId 是否已赋值
                     * @return WorkId 是否已赋值
                     * 
                     */
                    bool WorkIdHasBeenSet() const;

                    /**
                     * 获取导入文件名
                     * @return FileName 导入文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置导入文件名
                     * @param _fileName 导入文件名
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取执行进度
                     * @return Process 执行进度
                     * 
                     */
                    int64_t GetProcess() const;

                    /**
                     * 设置执行进度
                     * @param _process 执行进度
                     * 
                     */
                    void SetProcess(const int64_t& _process);

                    /**
                     * 判断参数 Process 是否已赋值
                     * @return Process 是否已赋值
                     * 
                     */
                    bool ProcessHasBeenSet() const;

                    /**
                     * 获取任务创建时间
                     * @return CreateTime 任务创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间
                     * @param _createTime 任务创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取文件大小
                     * @return FileSize 文件大小
                     * 
                     */
                    std::string GetFileSize() const;

                    /**
                     * 设置文件大小
                     * @param _fileSize 文件大小
                     * 
                     */
                    void SetFileSize(const std::string& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取任务执行信息
                     * @return Message 任务执行信息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置任务执行信息
                     * @param _message 任务执行信息
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return JobId 任务ID
                     * 
                     */
                    int64_t GetJobId() const;

                    /**
                     * 设置任务ID
                     * @param _jobId 任务ID
                     * 
                     */
                    void SetJobId(const int64_t& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取导入库表名
                     * @return DbName 导入库表名
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置导入库表名
                     * @param _dbName 导入库表名
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
                     * 获取异步任务的请求ID
                     * @return AsyncRequestId 异步任务的请求ID
                     * 
                     */
                    std::string GetAsyncRequestId() const;

                    /**
                     * 设置异步任务的请求ID
                     * @param _asyncRequestId 异步任务的请求ID
                     * 
                     */
                    void SetAsyncRequestId(const std::string& _asyncRequestId);

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     * 
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                private:

                    /**
                     * 状态值
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 状态值
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 执行时间
                     */
                    int64_t m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 后端任务ID
                     */
                    std::string m_workId;
                    bool m_workIdHasBeenSet;

                    /**
                     * 导入文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 执行进度
                     */
                    int64_t m_process;
                    bool m_processHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 文件大小
                     */
                    std::string m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 任务执行信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 任务ID
                     */
                    int64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 导入库表名
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 异步任务的请求ID
                     */
                    std::string m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_IMPORTRECORD_H_
