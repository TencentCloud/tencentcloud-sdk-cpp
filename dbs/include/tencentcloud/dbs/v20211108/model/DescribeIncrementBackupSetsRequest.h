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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_DESCRIBEINCREMENTBACKUPSETSREQUEST_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_DESCRIBEINCREMENTBACKUPSETSREQUEST_H_

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
                * DescribeIncrementBackupSets请求参数结构体
                */
                class DescribeIncrementBackupSetsRequest : public AbstractModel
                {
                public:
                    DescribeIncrementBackupSetsRequest();
                    ~DescribeIncrementBackupSetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取备份计划 ID。
                     * @return BackupPlanId 备份计划 ID。
                     * 
                     */
                    std::string GetBackupPlanId() const;

                    /**
                     * 设置备份计划 ID。
                     * @param _backupPlanId 备份计划 ID。
                     * 
                     */
                    void SetBackupPlanId(const std::string& _backupPlanId);

                    /**
                     * 判断参数 BackupPlanId 是否已赋值
                     * @return BackupPlanId 是否已赋值
                     * 
                     */
                    bool BackupPlanIdHasBeenSet() const;

                    /**
                     * 获取过滤条件，备份集 ID。
                     * @return BackupSetId 过滤条件，备份集 ID。
                     * 
                     */
                    std::string GetBackupSetId() const;

                    /**
                     * 设置过滤条件，备份集 ID。
                     * @param _backupSetId 过滤条件，备份集 ID。
                     * 
                     */
                    void SetBackupSetId(const std::string& _backupSetId);

                    /**
                     * 判断参数 BackupSetId 是否已赋值
                     * @return BackupSetId 是否已赋值
                     * 
                     */
                    bool BackupSetIdHasBeenSet() const;

                    /**
                     * 获取分页参数。取值范围为(0, 100]，默认值为20。
                     * @return Limit 分页参数。取值范围为(0, 100]，默认值为20。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页参数。取值范围为(0, 100]，默认值为20。
                     * @param _limit 分页参数。取值范围为(0, 100]，默认值为20。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页参数。默认值为0。
                     * @return Offset 分页参数。默认值为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页参数。默认值为0。
                     * @param _offset 分页参数。默认值为0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 备份计划 ID。
                     */
                    std::string m_backupPlanId;
                    bool m_backupPlanIdHasBeenSet;

                    /**
                     * 过滤条件，备份集 ID。
                     */
                    std::string m_backupSetId;
                    bool m_backupSetIdHasBeenSet;

                    /**
                     * 分页参数。取值范围为(0, 100]，默认值为20。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页参数。默认值为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_DESCRIBEINCREMENTBACKUPSETSREQUEST_H_
