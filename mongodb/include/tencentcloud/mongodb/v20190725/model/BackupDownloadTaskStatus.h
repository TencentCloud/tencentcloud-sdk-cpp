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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_BACKUPDOWNLOADTASKSTATUS_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_BACKUPDOWNLOADTASKSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 创建备份下载任务结果
                */
                class BackupDownloadTaskStatus : public AbstractModel
                {
                public:
                    BackupDownloadTaskStatus();
                    ~BackupDownloadTaskStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分片名
                     * @return ReplicaSetId 分片名
                     * 
                     */
                    std::string GetReplicaSetId() const;

                    /**
                     * 设置分片名
                     * @param _replicaSetId 分片名
                     * 
                     */
                    void SetReplicaSetId(const std::string& _replicaSetId);

                    /**
                     * 判断参数 ReplicaSetId 是否已赋值
                     * @return ReplicaSetId 是否已赋值
                     * 
                     */
                    bool ReplicaSetIdHasBeenSet() const;

                    /**
                     * 获取任务当前状态。0-等待执行，1-正在下载，2-下载完成，3-下载失败，4-等待重试
                     * @return Status 任务当前状态。0-等待执行，1-正在下载，2-下载完成，3-下载失败，4-等待重试
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务当前状态。0-等待执行，1-正在下载，2-下载完成，3-下载失败，4-等待重试
                     * @param _status 任务当前状态。0-等待执行，1-正在下载，2-下载完成，3-下载失败，4-等待重试
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 分片名
                     */
                    std::string m_replicaSetId;
                    bool m_replicaSetIdHasBeenSet;

                    /**
                     * 任务当前状态。0-等待执行，1-正在下载，2-下载完成，3-下载失败，4-等待重试
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_BACKUPDOWNLOADTASKSTATUS_H_
