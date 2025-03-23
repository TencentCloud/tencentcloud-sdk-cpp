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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_BACKUPJOBDISPLAY_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_BACKUPJOBDISPLAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * 备份任务详情
                */
                class BackUpJobDisplay : public AbstractModel
                {
                public:
                    BackUpJobDisplay();
                    ~BackUpJobDisplay() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份任务id
                     * @return JobId 备份任务id
                     * 
                     */
                    int64_t GetJobId() const;

                    /**
                     * 设置备份任务id
                     * @param _jobId 备份任务id
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
                     * 获取备份任务名
                     * @return Snapshot 备份任务名
                     * 
                     */
                    std::string GetSnapshot() const;

                    /**
                     * 设置备份任务名
                     * @param _snapshot 备份任务名
                     * 
                     */
                    void SetSnapshot(const std::string& _snapshot);

                    /**
                     * 判断参数 Snapshot 是否已赋值
                     * @return Snapshot 是否已赋值
                     * 
                     */
                    bool SnapshotHasBeenSet() const;

                    /**
                     * 获取任务类型(元数据),(数据)
                     * @return BackUpType 任务类型(元数据),(数据)
                     * 
                     */
                    std::string GetBackUpType() const;

                    /**
                     * 设置任务类型(元数据),(数据)
                     * @param _backUpType 任务类型(元数据),(数据)
                     * 
                     */
                    void SetBackUpType(const std::string& _backUpType);

                    /**
                     * 判断参数 BackUpType 是否已赋值
                     * @return BackUpType 是否已赋值
                     * 
                     */
                    bool BackUpTypeHasBeenSet() const;

                    /**
                     * 获取备份数据量
                     * @return BackUpSize 备份数据量
                     * 
                     */
                    int64_t GetBackUpSize() const;

                    /**
                     * 设置备份数据量
                     * @param _backUpSize 备份数据量
                     * 
                     */
                    void SetBackUpSize(const int64_t& _backUpSize);

                    /**
                     * 判断参数 BackUpSize 是否已赋值
                     * @return BackUpSize 是否已赋值
                     * 
                     */
                    bool BackUpSizeHasBeenSet() const;

                    /**
                     * 获取任务创建时间
                     * @return BackUpTime 任务创建时间
                     * 
                     */
                    std::string GetBackUpTime() const;

                    /**
                     * 设置任务创建时间
                     * @param _backUpTime 任务创建时间
                     * 
                     */
                    void SetBackUpTime(const std::string& _backUpTime);

                    /**
                     * 判断参数 BackUpTime 是否已赋值
                     * @return BackUpTime 是否已赋值
                     * 
                     */
                    bool BackUpTimeHasBeenSet() const;

                    /**
                     * 获取任务过期时间
                     * @return ExpireTime 任务过期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置任务过期时间
                     * @param _expireTime 任务过期时间
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
                     * 获取任务状态
                     * @return JobStatus 任务状态
                     * 
                     */
                    std::string GetJobStatus() const;

                    /**
                     * 设置任务状态
                     * @param _jobStatus 任务状态
                     * 
                     */
                    void SetJobStatus(const std::string& _jobStatus);

                    /**
                     * 判断参数 JobStatus 是否已赋值
                     * @return JobStatus 是否已赋值
                     * 
                     */
                    bool JobStatusHasBeenSet() const;

                    /**
                     * 获取处理数据量
                     * @return ProcessSize 处理数据量
                     * 
                     */
                    int64_t GetProcessSize() const;

                    /**
                     * 设置处理数据量
                     * @param _processSize 处理数据量
                     * 
                     */
                    void SetProcessSize(const int64_t& _processSize);

                    /**
                     * 判断参数 ProcessSize 是否已赋值
                     * @return ProcessSize 是否已赋值
                     * 
                     */
                    bool ProcessSizeHasBeenSet() const;

                    /**
                     * 获取错误原因
                     * @return ErrorReason 错误原因
                     * 
                     */
                    std::string GetErrorReason() const;

                    /**
                     * 设置错误原因
                     * @param _errorReason 错误原因
                     * 
                     */
                    void SetErrorReason(const std::string& _errorReason);

                    /**
                     * 判断参数 ErrorReason 是否已赋值
                     * @return ErrorReason 是否已赋值
                     * 
                     */
                    bool ErrorReasonHasBeenSet() const;

                private:

                    /**
                     * 备份任务id
                     */
                    int64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 备份任务名
                     */
                    std::string m_snapshot;
                    bool m_snapshotHasBeenSet;

                    /**
                     * 任务类型(元数据),(数据)
                     */
                    std::string m_backUpType;
                    bool m_backUpTypeHasBeenSet;

                    /**
                     * 备份数据量
                     */
                    int64_t m_backUpSize;
                    bool m_backUpSizeHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_backUpTime;
                    bool m_backUpTimeHasBeenSet;

                    /**
                     * 任务过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 任务状态
                     */
                    std::string m_jobStatus;
                    bool m_jobStatusHasBeenSet;

                    /**
                     * 处理数据量
                     */
                    int64_t m_processSize;
                    bool m_processSizeHasBeenSet;

                    /**
                     * 错误原因
                     */
                    std::string m_errorReason;
                    bool m_errorReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_BACKUPJOBDISPLAY_H_
