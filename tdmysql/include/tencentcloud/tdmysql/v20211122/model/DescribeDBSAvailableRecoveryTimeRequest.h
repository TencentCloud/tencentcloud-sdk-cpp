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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBSAVAILABLERECOVERYTIMEREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBSAVAILABLERECOVERYTIMEREQUEST_H_

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
                * DescribeDBSAvailableRecoveryTime请求参数结构体
                */
                class DescribeDBSAvailableRecoveryTimeRequest : public AbstractModel
                {
                public:
                    DescribeDBSAvailableRecoveryTimeRequest();
                    ~DescribeDBSAvailableRecoveryTimeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>db实例ID</p>
                     * @return InstanceId <p>db实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>db实例ID</p>
                     * @param _instanceId <p>db实例ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>备份集ID,值来自 DescribeDBSBackupSets 接口返回</p>
                     * @return BackupSetId <p>备份集ID,值来自 DescribeDBSBackupSets 接口返回</p>
                     * 
                     */
                    int64_t GetBackupSetId() const;

                    /**
                     * 设置<p>备份集ID,值来自 DescribeDBSBackupSets 接口返回</p>
                     * @param _backupSetId <p>备份集ID,值来自 DescribeDBSBackupSets 接口返回</p>
                     * 
                     */
                    void SetBackupSetId(const int64_t& _backupSetId);

                    /**
                     * 判断参数 BackupSetId 是否已赋值
                     * @return BackupSetId 是否已赋值
                     * 
                     */
                    bool BackupSetIdHasBeenSet() const;

                private:

                    /**
                     * <p>db实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>备份集ID,值来自 DescribeDBSBackupSets 接口返回</p>
                     */
                    int64_t m_backupSetId;
                    bool m_backupSetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBSAVAILABLERECOVERYTIMEREQUEST_H_
