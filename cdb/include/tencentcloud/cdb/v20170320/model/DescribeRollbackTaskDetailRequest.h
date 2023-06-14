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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEROLLBACKTASKDETAILREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEROLLBACKTASKDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeRollbackTaskDetail请求参数结构体
                */
                class DescribeRollbackTaskDetailRequest : public AbstractModel
                {
                public:
                    DescribeRollbackTaskDetailRequest();
                    ~DescribeRollbackTaskDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID。与云数据库控制台页面中显示的实例 ID 相同，可使用 [查询实例列表](https://cloud.tencent.com/document/api/236/15872)。
                     * @return InstanceId 实例 ID。与云数据库控制台页面中显示的实例 ID 相同，可使用 [查询实例列表](https://cloud.tencent.com/document/api/236/15872)。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。与云数据库控制台页面中显示的实例 ID 相同，可使用 [查询实例列表](https://cloud.tencent.com/document/api/236/15872)。
                     * @param _instanceId 实例 ID。与云数据库控制台页面中显示的实例 ID 相同，可使用 [查询实例列表](https://cloud.tencent.com/document/api/236/15872)。
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
                     * 获取异步任务 ID。
                     * @return AsyncRequestId 异步任务 ID。
                     * 
                     */
                    std::string GetAsyncRequestId() const;

                    /**
                     * 设置异步任务 ID。
                     * @param _asyncRequestId 异步任务 ID。
                     * 
                     */
                    void SetAsyncRequestId(const std::string& _asyncRequestId);

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     * 
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                    /**
                     * 获取分页参数，每次请求返回的记录数。默认值为 20，最大值为 100。
                     * @return Limit 分页参数，每次请求返回的记录数。默认值为 20，最大值为 100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页参数，每次请求返回的记录数。默认值为 20，最大值为 100。
                     * @param _limit 分页参数，每次请求返回的记录数。默认值为 20，最大值为 100。
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
                     * 获取分页偏移量。默认为 0。
                     * @return Offset 分页偏移量。默认为 0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量。默认为 0。
                     * @param _offset 分页偏移量。默认为 0。
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
                     * 实例 ID。与云数据库控制台页面中显示的实例 ID 相同，可使用 [查询实例列表](https://cloud.tencent.com/document/api/236/15872)。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 异步任务 ID。
                     */
                    std::string m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                    /**
                     * 分页参数，每次请求返回的记录数。默认值为 20，最大值为 100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量。默认为 0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEROLLBACKTASKDETAILREQUEST_H_
