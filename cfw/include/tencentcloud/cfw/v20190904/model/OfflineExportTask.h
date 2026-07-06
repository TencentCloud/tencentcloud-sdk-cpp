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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_OFFLINEEXPORTTASK_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_OFFLINEEXPORTTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 离线导出任务
                */
                class OfflineExportTask : public AbstractModel
                {
                public:
                    OfflineExportTask();
                    ~OfflineExportTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取日志总数
                     * @return DataLength 日志总数
                     * 
                     */
                    uint64_t GetDataLength() const;

                    /**
                     * 设置日志总数
                     * @param _dataLength 日志总数
                     * 
                     */
                    void SetDataLength(const uint64_t& _dataLength);

                    /**
                     * 判断参数 DataLength 是否已赋值
                     * @return DataLength 是否已赋值
                     * 
                     */
                    bool DataLengthHasBeenSet() const;

                    /**
                     * 获取任务状态，0等待下载，1下载中，2下载完成，3下载失败，4文件过期
                     * @return Status 任务状态，0等待下载，1下载中，2下载完成，3下载失败，4文件过期
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置任务状态，0等待下载，1下载中，2下载完成，3下载失败，4文件过期
                     * @param _status 任务状态，0等待下载，1下载中，2下载完成，3下载失败，4文件过期
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取文件过期时间
                     * @return ExpireTime 文件过期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置文件过期时间
                     * @param _expireTime 文件过期时间
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取下载进度
                     * @return Progress 下载进度
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置下载进度
                     * @param _progress 下载进度
                     * 
                     */
                    void SetProgress(const double& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取导出失败信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorInfo 导出失败信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorInfo() const;

                    /**
                     * 设置导出失败信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorInfo 导出失败信息
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否使用Cos
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UseUserCos 是否使用Cos
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUseUserCos() const;

                    /**
                     * 设置是否使用Cos
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _useUserCos 是否使用Cos
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUseUserCos(const int64_t& _useUserCos);

                    /**
                     * 判断参数 UseUserCos 是否已赋值
                     * @return UseUserCos 是否已赋值
                     * 
                     */
                    bool UseUserCosHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 日志总数
                     */
                    uint64_t m_dataLength;
                    bool m_dataLengthHasBeenSet;

                    /**
                     * 任务状态，0等待下载，1下载中，2下载完成，3下载失败，4文件过期
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 文件过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 下载进度
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 导出失败信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                    /**
                     * 是否使用Cos
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_useUserCos;
                    bool m_useUserCosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_OFFLINEEXPORTTASK_H_
