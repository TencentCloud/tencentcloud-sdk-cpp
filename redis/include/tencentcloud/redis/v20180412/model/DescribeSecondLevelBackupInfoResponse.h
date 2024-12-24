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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESECONDLEVELBACKUPINFORESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESECONDLEVELBACKUPINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/SecondLevelBackupMissingTimestamps.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeSecondLevelBackupInfo返回参数结构体
                */
                class DescribeSecondLevelBackupInfoResponse : public AbstractModel
                {
                public:
                    DescribeSecondLevelBackupInfoResponse();
                    ~DescribeSecondLevelBackupInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取备份记录ID 
                     * @return BackupId 备份记录ID 
                     * 
                     */
                    std::string GetBackupId() const;

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取备份时间戳
                     * @return BackupTimestamp 备份时间戳
                     * 
                     */
                    int64_t GetBackupTimestamp() const;

                    /**
                     * 判断参数 BackupTimestamp 是否已赋值
                     * @return BackupTimestamp 是否已赋值
                     * 
                     */
                    bool BackupTimestampHasBeenSet() const;

                    /**
                     * 获取备份不存在的时间戳范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MissingTimestamps 备份不存在的时间戳范围
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SecondLevelBackupMissingTimestamps> GetMissingTimestamps() const;

                    /**
                     * 判断参数 MissingTimestamps 是否已赋值
                     * @return MissingTimestamps 是否已赋值
                     * 
                     */
                    bool MissingTimestampsHasBeenSet() const;

                    /**
                     * 获取实例开启秒级备份的时间戳
                     * @return StartTimestamp 实例开启秒级备份的时间戳
                     * 
                     */
                    int64_t GetStartTimestamp() const;

                    /**
                     * 判断参数 StartTimestamp 是否已赋值
                     * @return StartTimestamp 是否已赋值
                     * 
                     */
                    bool StartTimestampHasBeenSet() const;

                private:

                    /**
                     * 备份记录ID 
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * 备份时间戳
                     */
                    int64_t m_backupTimestamp;
                    bool m_backupTimestampHasBeenSet;

                    /**
                     * 备份不存在的时间戳范围
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SecondLevelBackupMissingTimestamps> m_missingTimestamps;
                    bool m_missingTimestampsHasBeenSet;

                    /**
                     * 实例开启秒级备份的时间戳
                     */
                    int64_t m_startTimestamp;
                    bool m_startTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBESECONDLEVELBACKUPINFORESPONSE_H_
