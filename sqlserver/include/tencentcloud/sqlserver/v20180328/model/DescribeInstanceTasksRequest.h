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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEINSTANCETASKSREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEINSTANCETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeInstanceTasks请求参数结构体
                */
                class DescribeInstanceTasksRequest : public AbstractModel
                {
                public:
                    DescribeInstanceTasksRequest();
                    ~DescribeInstanceTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库实例ID，形如mssql-njj2mtpl
                     * @return InstanceId 数据库实例ID，形如mssql-njj2mtpl
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置数据库实例ID，形如mssql-njj2mtpl
                     * @param _instanceId 数据库实例ID，形如mssql-njj2mtpl
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
                     * 获取分页大小
                     * @return Limit 分页大小
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页大小
                     * @param _limit 分页大小
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
                     * 获取异步任务状态 1-运行中，2-运行成功，3-运行失败
                     * @return Status 异步任务状态 1-运行中，2-运行成功，3-运行失败
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置异步任务状态 1-运行中，2-运行成功，3-运行失败
                     * @param _status 异步任务状态 1-运行中，2-运行成功，3-运行失败
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取分页偏移量
                     * @return Offset 分页偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量
                     * @param _offset 分页偏移量
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
                     * 数据库实例ID，形如mssql-njj2mtpl
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 分页大小
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 异步任务状态 1-运行中，2-运行成功，3-运行失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 分页偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEINSTANCETASKSREQUEST_H_
