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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_DESCRIBEFULLBACKUPSETDETAILREQUEST_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_DESCRIBEFULLBACKUPSETDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * DescribeFullBackupSetDetail请求参数结构体
                */
                class DescribeFullBackupSetDetailRequest : public AbstractModel
                {
                public:
                    DescribeFullBackupSetDetailRequest();
                    ~DescribeFullBackupSetDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>全量备份集 ID。可通过 DescribeFullBackupSets 接口获取。</p>
                     * @return BackupSetId <p>全量备份集 ID。可通过 DescribeFullBackupSets 接口获取。</p>
                     * 
                     */
                    std::string GetBackupSetId() const;

                    /**
                     * 设置<p>全量备份集 ID。可通过 DescribeFullBackupSets 接口获取。</p>
                     * @param _backupSetId <p>全量备份集 ID。可通过 DescribeFullBackupSets 接口获取。</p>
                     * 
                     */
                    void SetBackupSetId(const std::string& _backupSetId);

                    /**
                     * 判断参数 BackupSetId 是否已赋值
                     * @return BackupSetId 是否已赋值
                     * 
                     */
                    bool BackupSetIdHasBeenSet() const;

                private:

                    /**
                     * <p>全量备份集 ID。可通过 DescribeFullBackupSets 接口获取。</p>
                     */
                    std::string m_backupSetId;
                    bool m_backupSetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_DESCRIBEFULLBACKUPSETDETAILREQUEST_H_
