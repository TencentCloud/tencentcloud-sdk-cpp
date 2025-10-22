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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELETEBACKUPPLANREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELETEBACKUPPLANREQUEST_H_

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
                * DeleteBackupPlan请求参数结构体
                */
                class DeleteBackupPlanRequest : public AbstractModel
                {
                public:
                    DeleteBackupPlanRequest();
                    ~DeleteBackupPlanRequest() = default;
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
                     * 获取备份计划的ID。可通过[DescribeBackupPlans](https://cloud.tencent.com/document/api/409/68069)接口获取
                     * @return PlanId 备份计划的ID。可通过[DescribeBackupPlans](https://cloud.tencent.com/document/api/409/68069)接口获取
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置备份计划的ID。可通过[DescribeBackupPlans](https://cloud.tencent.com/document/api/409/68069)接口获取
                     * @param _planId 备份计划的ID。可通过[DescribeBackupPlans](https://cloud.tencent.com/document/api/409/68069)接口获取
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                private:

                    /**
                     * 实例ID。可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/409/16773)接口获取
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 备份计划的ID。可通过[DescribeBackupPlans](https://cloud.tencent.com/document/api/409/68069)接口获取
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELETEBACKUPPLANREQUEST_H_
