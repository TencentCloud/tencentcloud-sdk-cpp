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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELETEBASEBACKUPREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELETEBASEBACKUPREQUEST_H_

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
                * DeleteBaseBackup请求参数结构体
                */
                class DeleteBaseBackupRequest : public AbstractModel
                {
                public:
                    DeleteBaseBackupRequest();
                    ~DeleteBaseBackupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/409/16773)接口获取
                     * @return DBInstanceId 实例ID。可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/409/16773)接口获取
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID。可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/409/16773)接口获取
                     * @param _dBInstanceId 实例ID。可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/409/16773)接口获取
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
                     * 获取数据备份ID。可通过[DescribeBaseBackups](https://cloud.tencent.com/document/api/409/89022)接口获取。7天内自动备份集不允许删除。
                     * @return BaseBackupId 数据备份ID。可通过[DescribeBaseBackups](https://cloud.tencent.com/document/api/409/89022)接口获取。7天内自动备份集不允许删除。
                     * 
                     */
                    std::string GetBaseBackupId() const;

                    /**
                     * 设置数据备份ID。可通过[DescribeBaseBackups](https://cloud.tencent.com/document/api/409/89022)接口获取。7天内自动备份集不允许删除。
                     * @param _baseBackupId 数据备份ID。可通过[DescribeBaseBackups](https://cloud.tencent.com/document/api/409/89022)接口获取。7天内自动备份集不允许删除。
                     * 
                     */
                    void SetBaseBackupId(const std::string& _baseBackupId);

                    /**
                     * 判断参数 BaseBackupId 是否已赋值
                     * @return BaseBackupId 是否已赋值
                     * 
                     */
                    bool BaseBackupIdHasBeenSet() const;

                private:

                    /**
                     * 实例ID。可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/409/16773)接口获取
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 数据备份ID。可通过[DescribeBaseBackups](https://cloud.tencent.com/document/api/409/89022)接口获取。7天内自动备份集不允许删除。
                     */
                    std::string m_baseBackupId;
                    bool m_baseBackupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELETEBASEBACKUPREQUEST_H_
