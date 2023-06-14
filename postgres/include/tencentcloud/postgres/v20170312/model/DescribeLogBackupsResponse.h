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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBELOGBACKUPSRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBELOGBACKUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/LogBackup.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeLogBackups返回参数结构体
                */
                class DescribeLogBackupsResponse : public AbstractModel
                {
                public:
                    DescribeLogBackupsResponse();
                    ~DescribeLogBackupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询到的日志备份数量。
                     * @return TotalCount 查询到的日志备份数量。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取日志备份详细信息列表。
                     * @return LogBackupSet 日志备份详细信息列表。
                     * 
                     */
                    std::vector<LogBackup> GetLogBackupSet() const;

                    /**
                     * 判断参数 LogBackupSet 是否已赋值
                     * @return LogBackupSet 是否已赋值
                     * 
                     */
                    bool LogBackupSetHasBeenSet() const;

                private:

                    /**
                     * 查询到的日志备份数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 日志备份详细信息列表。
                     */
                    std::vector<LogBackup> m_logBackupSet;
                    bool m_logBackupSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBELOGBACKUPSRESPONSE_H_
