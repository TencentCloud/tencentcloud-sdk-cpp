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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBSREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBSREQUEST_H_

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
                * DescribeDBs请求参数结构体
                */
                class DescribeDBsRequest : public AbstractModel
                {
                public:
                    DescribeDBsRequest();
                    ~DescribeDBsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceIdSet 实例ID
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置实例ID
                     * @param InstanceIdSet 实例ID
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     */
                    bool InstanceIdSetHasBeenSet() const;

                    /**
                     * 获取每页记录数，最大为100，默认20
                     * @return Limit 每页记录数，最大为100，默认20
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页记录数，最大为100，默认20
                     * @param Limit 每页记录数，最大为100，默认20
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取页编号，从第0页开始
                     * @return Offset 页编号，从第0页开始
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置页编号，从第0页开始
                     * @param Offset 页编号，从第0页开始
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * 每页记录数，最大为100，默认20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 页编号，从第0页开始
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBSREQUEST_H_
