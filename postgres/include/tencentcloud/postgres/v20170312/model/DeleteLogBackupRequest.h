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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELETELOGBACKUPREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELETELOGBACKUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeleteLogBackup请求参数结构体
                */
                class DeleteLogBackupRequest : public AbstractModel
                {
                public:
                    DeleteLogBackupRequest();
                    ~DeleteLogBackupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。
                     * @return DBInstanceId 实例ID。
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _dBInstanceId 实例ID。
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取日志备份ID。
                     * @return LogBackupId 日志备份ID。
                     * 
                     */
                    std::string GetLogBackupId() const;

                    /**
                     * 设置日志备份ID。
                     * @param _logBackupId 日志备份ID。
                     * 
                     */
                    void SetLogBackupId(const std::string& _logBackupId);

                    /**
                     * 判断参数 LogBackupId 是否已赋值
                     * @return LogBackupId 是否已赋值
                     * 
                     */
                    bool LogBackupIdHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 日志备份ID。
                     */
                    std::string m_logBackupId;
                    bool m_logBackupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELETELOGBACKUPREQUEST_H_
