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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CREATEDBSBACKUPRESPONSE_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CREATEDBSBACKUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * CreateDBSBackup返回参数结构体
                */
                class CreateDBSBackupResponse : public AbstractModel
                {
                public:
                    CreateDBSBackupResponse();
                    ~CreateDBSBackupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>备份集ID</p>
                     * @return BackupSetId <p>备份集ID</p>
                     * 
                     */
                    int64_t GetBackupSetId() const;

                    /**
                     * 判断参数 BackupSetId 是否已赋值
                     * @return BackupSetId 是否已赋值
                     * 
                     */
                    bool BackupSetIdHasBeenSet() const;

                    /**
                     * 获取<p>是否成功</p>
                     * @return IsSuccess <p>是否成功</p>
                     * 
                     */
                    bool GetIsSuccess() const;

                    /**
                     * 判断参数 IsSuccess 是否已赋值
                     * @return IsSuccess 是否已赋值
                     * 
                     */
                    bool IsSuccessHasBeenSet() const;

                private:

                    /**
                     * <p>备份集ID</p>
                     */
                    int64_t m_backupSetId;
                    bool m_backupSetIdHasBeenSet;

                    /**
                     * <p>是否成功</p>
                     */
                    bool m_isSuccess;
                    bool m_isSuccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CREATEDBSBACKUPRESPONSE_H_
