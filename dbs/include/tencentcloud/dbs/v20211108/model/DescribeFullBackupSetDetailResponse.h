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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_DESCRIBEFULLBACKUPSETDETAILRESPONSE_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_DESCRIBEFULLBACKUPSETDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbs/v20211108/model/FullBackupSetDetail.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * DescribeFullBackupSetDetail返回参数结构体
                */
                class DescribeFullBackupSetDetailResponse : public AbstractModel
                {
                public:
                    DescribeFullBackupSetDetailResponse();
                    ~DescribeFullBackupSetDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>全量备份集详情。</p>
                     * @return BackupSet <p>全量备份集详情。</p>
                     * 
                     */
                    FullBackupSetDetail GetBackupSet() const;

                    /**
                     * 判断参数 BackupSet 是否已赋值
                     * @return BackupSet 是否已赋值
                     * 
                     */
                    bool BackupSetHasBeenSet() const;

                private:

                    /**
                     * <p>全量备份集详情。</p>
                     */
                    FullBackupSetDetail m_backupSet;
                    bool m_backupSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_DESCRIBEFULLBACKUPSETDETAILRESPONSE_H_
