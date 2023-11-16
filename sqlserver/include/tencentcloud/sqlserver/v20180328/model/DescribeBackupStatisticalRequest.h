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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPSTATISTICALREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPSTATISTICALREQUEST_H_

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
                * DescribeBackupStatistical请求参数结构体
                */
                class DescribeBackupStatisticalRequest : public AbstractModel
                {
                public:
                    DescribeBackupStatisticalRequest();
                    ~DescribeBackupStatisticalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页返回，每页返回的数目，取值为1-100，默认值为100
                     * @return Limit 分页返回，每页返回的数目，取值为1-100，默认值为100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页返回，每页返回的数目，取值为1-100，默认值为100
                     * @param _limit 分页返回，每页返回的数目，取值为1-100，默认值为100
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页返回，页编号，默认值为第0页。
                     * @return Offset 分页返回，页编号，默认值为第0页。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页返回，页编号，默认值为第0页。
                     * @param _offset 分页返回，页编号，默认值为第0页。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取一个或者多个实例ID。实例ID，格式如：mssql-si2823jyl。
                     * @return InstanceIdSet 一个或者多个实例ID。实例ID，格式如：mssql-si2823jyl。
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置一个或者多个实例ID。实例ID，格式如：mssql-si2823jyl。
                     * @param _instanceIdSet 一个或者多个实例ID。实例ID，格式如：mssql-si2823jyl。
                     * 
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     * 
                     */
                    bool InstanceIdSetHasBeenSet() const;

                    /**
                     * 获取实例名称列表，模糊查询。
                     * @return InstanceNameSet 实例名称列表，模糊查询。
                     * 
                     */
                    std::vector<std::string> GetInstanceNameSet() const;

                    /**
                     * 设置实例名称列表，模糊查询。
                     * @param _instanceNameSet 实例名称列表，模糊查询。
                     * 
                     */
                    void SetInstanceNameSet(const std::vector<std::string>& _instanceNameSet);

                    /**
                     * 判断参数 InstanceNameSet 是否已赋值
                     * @return InstanceNameSet 是否已赋值
                     * 
                     */
                    bool InstanceNameSetHasBeenSet() const;

                    /**
                     * 获取排序字段，默认default，则按照备份空间降序。
default 按照备份空间排序
data 数据备份排序
log 日志备份排序
auto 自动备份排序
manual 手动备份排序
                     * @return OrderBy 排序字段，默认default，则按照备份空间降序。
default 按照备份空间排序
data 数据备份排序
log 日志备份排序
auto 自动备份排序
manual 手动备份排序
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，默认default，则按照备份空间降序。
default 按照备份空间排序
data 数据备份排序
log 日志备份排序
auto 自动备份排序
manual 手动备份排序
                     * @param _orderBy 排序字段，默认default，则按照备份空间降序。
default 按照备份空间排序
data 数据备份排序
log 日志备份排序
auto 自动备份排序
manual 手动备份排序
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取默认降序，[desc-降序，asc-升序]。
                     * @return OrderByType 默认降序，[desc-降序，asc-升序]。
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置默认降序，[desc-降序，asc-升序]。
                     * @param _orderByType 默认降序，[desc-降序，asc-升序]。
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                private:

                    /**
                     * 分页返回，每页返回的数目，取值为1-100，默认值为100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页返回，页编号，默认值为第0页。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 一个或者多个实例ID。实例ID，格式如：mssql-si2823jyl。
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * 实例名称列表，模糊查询。
                     */
                    std::vector<std::string> m_instanceNameSet;
                    bool m_instanceNameSetHasBeenSet;

                    /**
                     * 排序字段，默认default，则按照备份空间降序。
default 按照备份空间排序
data 数据备份排序
log 日志备份排序
auto 自动备份排序
manual 手动备份排序
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 默认降序，[desc-降序，asc-升序]。
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPSTATISTICALREQUEST_H_
