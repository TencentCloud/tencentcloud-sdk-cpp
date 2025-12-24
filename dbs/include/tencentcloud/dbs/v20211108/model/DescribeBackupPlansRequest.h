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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_DESCRIBEBACKUPPLANSREQUEST_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_DESCRIBEBACKUPPLANSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbs/v20211108/model/TagFilter.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * DescribeBackupPlans请求参数结构体
                */
                class DescribeBackupPlansRequest : public AbstractModel
                {
                public:
                    DescribeBackupPlansRequest();
                    ~DescribeBackupPlansRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件，备份计划 ID。
                     * @return BackupPlanId 过滤条件，备份计划 ID。
                     * 
                     */
                    std::string GetBackupPlanId() const;

                    /**
                     * 设置过滤条件，备份计划 ID。
                     * @param _backupPlanId 过滤条件，备份计划 ID。
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
                     * 获取过滤条件，备份计划状态。
                     * @return Status 过滤条件，备份计划状态。
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置过滤条件，备份计划状态。
                     * @param _status 过滤条件，备份计划状态。
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取过滤条件，数据库类型。
                     * @return DatabaseType 过滤条件，数据库类型。
                     * 
                     */
                    std::vector<std::string> GetDatabaseType() const;

                    /**
                     * 设置过滤条件，数据库类型。
                     * @param _databaseType 过滤条件，数据库类型。
                     * 
                     */
                    void SetDatabaseType(const std::vector<std::string>& _databaseType);

                    /**
                     * 判断参数 DatabaseType 是否已赋值
                     * @return DatabaseType 是否已赋值
                     * 
                     */
                    bool DatabaseTypeHasBeenSet() const;

                    /**
                     * 获取过滤条件，接入访问类型。
                     * @return AccessType 过滤条件，接入访问类型。
                     * 
                     */
                    std::vector<std::string> GetAccessType() const;

                    /**
                     * 设置过滤条件，接入访问类型。
                     * @param _accessType 过滤条件，接入访问类型。
                     * 
                     */
                    void SetAccessType(const std::vector<std::string>& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取过滤条件，备份计划名称。
                     * @return BackupPlanName 过滤条件，备份计划名称。
                     * 
                     */
                    std::string GetBackupPlanName() const;

                    /**
                     * 设置过滤条件，备份计划名称。
                     * @param _backupPlanName 过滤条件，备份计划名称。
                     * 
                     */
                    void SetBackupPlanName(const std::string& _backupPlanName);

                    /**
                     * 判断参数 BackupPlanName 是否已赋值
                     * @return BackupPlanName 是否已赋值
                     * 
                     */
                    bool BackupPlanNameHasBeenSet() const;

                    /**
                     * 获取过滤条件，标签键值。
                     * @return TagFilters 过滤条件，标签键值。
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置过滤条件，标签键值。
                     * @param _tagFilters 过滤条件，标签键值。
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

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
                     * 过滤条件，备份计划 ID。
                     */
                    std::string m_backupPlanId;
                    bool m_backupPlanIdHasBeenSet;

                    /**
                     * 过滤条件，备份计划状态。
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 过滤条件，数据库类型。
                     */
                    std::vector<std::string> m_databaseType;
                    bool m_databaseTypeHasBeenSet;

                    /**
                     * 过滤条件，接入访问类型。
                     */
                    std::vector<std::string> m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * 过滤条件，备份计划名称。
                     */
                    std::string m_backupPlanName;
                    bool m_backupPlanNameHasBeenSet;

                    /**
                     * 过滤条件，标签键值。
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

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

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_DESCRIBEBACKUPPLANSREQUEST_H_
