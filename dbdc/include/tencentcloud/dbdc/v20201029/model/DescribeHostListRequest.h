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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEHOSTLISTREQUEST_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEHOSTLISTREQUEST_H_

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
                * DescribeHostList请求参数结构体
                */
                class DescribeHostListRequest : public AbstractModel
                {
                public:
                    DescribeHostListRequest();
                    ~DescribeHostListRequest() = default;
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
                     * 获取分配状态过滤，0-可分配，1-禁止分配
                     * @return AssignStatus 分配状态过滤，0-可分配，1-禁止分配
                     * 
                     */
                    std::vector<int64_t> GetAssignStatus() const;

                    /**
                     * 设置分配状态过滤，0-可分配，1-禁止分配
                     * @param _assignStatus 分配状态过滤，0-可分配，1-禁止分配
                     * 
                     */
                    void SetAssignStatus(const std::vector<int64_t>& _assignStatus);

                    /**
                     * 判断参数 AssignStatus 是否已赋值
                     * @return AssignStatus 是否已赋值
                     * 
                     */
                    bool AssignStatusHasBeenSet() const;

                private:

                    /**
                     * 独享集群实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

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
                     * 分配状态过滤，0-可分配，1-禁止分配
                     */
                    std::vector<int64_t> m_assignStatus;
                    bool m_assignStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEHOSTLISTREQUEST_H_
