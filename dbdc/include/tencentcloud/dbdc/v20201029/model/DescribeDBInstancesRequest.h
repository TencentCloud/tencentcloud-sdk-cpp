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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * DescribeDBInstances请求参数结构体
                */
                class DescribeDBInstancesRequest : public AbstractModel
                {
                public:
                    DescribeDBInstancesRequest();
                    ~DescribeDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取独享集群实例Id
                     * @return InstanceId 独享集群实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置独享集群实例Id
                     * @param _instanceId 独享集群实例Id
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
                     * 获取独享集群主机Id
                     * @return HostId 独享集群主机Id
                     * 
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置独享集群主机Id
                     * @param _hostId 独享集群主机Id
                     * 
                     */
                    void SetHostId(const std::string& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     * 
                     */
                    bool HostIdHasBeenSet() const;

                    /**
                     * 获取分页返回数量
                     * @return Limit 分页返回数量
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页返回数量
                     * @param _limit 分页返回数量
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

                    /**
                     * 获取实例类型,0:mariadb, 1:tdsql
                     * @return ShardType 实例类型,0:mariadb, 1:tdsql
                     * 
                     */
                    std::vector<int64_t> GetShardType() const;

                    /**
                     * 设置实例类型,0:mariadb, 1:tdsql
                     * @param _shardType 实例类型,0:mariadb, 1:tdsql
                     * 
                     */
                    void SetShardType(const std::vector<int64_t>& _shardType);

                    /**
                     * 判断参数 ShardType 是否已赋值
                     * @return ShardType 是否已赋值
                     * 
                     */
                    bool ShardTypeHasBeenSet() const;

                private:

                    /**
                     * 独享集群实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 独享集群主机Id
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * 分页返回数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 实例类型,0:mariadb, 1:tdsql
                     */
                    std::vector<int64_t> m_shardType;
                    bool m_shardTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBINSTANCESREQUEST_H_
