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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYBACKUPTIMEREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYBACKUPTIMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyBackupTime请求参数结构体
                */
                class ModifyBackupTimeRequest : public AbstractModel
                {
                public:
                    ModifyBackupTimeRequest();
                    ~ModifyBackupTimeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
                     * @return InstanceId 实例ID，形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
                     * @param _instanceId 实例ID，形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
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
                     * 获取每天备份执行的区间的开始时间，格式 mm:ss，形如 22:00
                     * @return StartBackupTime 每天备份执行的区间的开始时间，格式 mm:ss，形如 22:00
                     * 
                     */
                    std::string GetStartBackupTime() const;

                    /**
                     * 设置每天备份执行的区间的开始时间，格式 mm:ss，形如 22:00
                     * @param _startBackupTime 每天备份执行的区间的开始时间，格式 mm:ss，形如 22:00
                     * 
                     */
                    void SetStartBackupTime(const std::string& _startBackupTime);

                    /**
                     * 判断参数 StartBackupTime 是否已赋值
                     * @return StartBackupTime 是否已赋值
                     * 
                     */
                    bool StartBackupTimeHasBeenSet() const;

                    /**
                     * 获取每天备份执行的区间的结束时间，格式 mm:ss，形如 23:59
                     * @return EndBackupTime 每天备份执行的区间的结束时间，格式 mm:ss，形如 23:59
                     * 
                     */
                    std::string GetEndBackupTime() const;

                    /**
                     * 设置每天备份执行的区间的结束时间，格式 mm:ss，形如 23:59
                     * @param _endBackupTime 每天备份执行的区间的结束时间，格式 mm:ss，形如 23:59
                     * 
                     */
                    void SetEndBackupTime(const std::string& _endBackupTime);

                    /**
                     * 判断参数 EndBackupTime 是否已赋值
                     * @return EndBackupTime 是否已赋值
                     * 
                     */
                    bool EndBackupTimeHasBeenSet() const;

                private:

                    /**
                     * 实例ID，形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 每天备份执行的区间的开始时间，格式 mm:ss，形如 22:00
                     */
                    std::string m_startBackupTime;
                    bool m_startBackupTimeHasBeenSet;

                    /**
                     * 每天备份执行的区间的结束时间，格式 mm:ss，形如 23:59
                     */
                    std::string m_endBackupTime;
                    bool m_endBackupTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYBACKUPTIMEREQUEST_H_
