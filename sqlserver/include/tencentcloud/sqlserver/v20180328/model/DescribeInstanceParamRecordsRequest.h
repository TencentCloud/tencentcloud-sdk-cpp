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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEINSTANCEPARAMRECORDSREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEINSTANCEPARAMRECORDSREQUEST_H_

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
                * DescribeInstanceParamRecords请求参数结构体
                */
                class DescribeInstanceParamRecordsRequest : public AbstractModel
                {
                public:
                    DescribeInstanceParamRecordsRequest();
                    ~DescribeInstanceParamRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，格式如：mssql-dj5i29c5n，与云数据库控制台页面中显示的实例 ID 相同，可使用 DescribeDBInstances 接口获取，其值为输出参数中字段 InstanceId 的值。
                     * @return InstanceId 实例 ID，格式如：mssql-dj5i29c5n，与云数据库控制台页面中显示的实例 ID 相同，可使用 DescribeDBInstances 接口获取，其值为输出参数中字段 InstanceId 的值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，格式如：mssql-dj5i29c5n，与云数据库控制台页面中显示的实例 ID 相同，可使用 DescribeDBInstances 接口获取，其值为输出参数中字段 InstanceId 的值。
                     * @param _instanceId 实例 ID，格式如：mssql-dj5i29c5n，与云数据库控制台页面中显示的实例 ID 相同，可使用 DescribeDBInstances 接口获取，其值为输出参数中字段 InstanceId 的值。
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
                     * 获取分页，页数，默认0
                     * @return Offset 分页，页数，默认0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页，页数，默认0
                     * @param _offset 分页，页数，默认0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页，页大小，默认20，最大不超过100
                     * @return Limit 分页，页大小，默认20，最大不超过100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页，页大小，默认20，最大不超过100
                     * @param _limit 分页，页大小，默认20，最大不超过100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，格式如：mssql-dj5i29c5n，与云数据库控制台页面中显示的实例 ID 相同，可使用 DescribeDBInstances 接口获取，其值为输出参数中字段 InstanceId 的值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 分页，页数，默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页，页大小，默认20，最大不超过100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEINSTANCEPARAMRECORDSREQUEST_H_
