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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECLONELISTREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECLONELISTREQUEST_H_

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
                * DescribeCloneList请求参数结构体
                */
                class DescribeCloneListRequest : public AbstractModel
                {
                public:
                    DescribeCloneListRequest();
                    ~DescribeCloneListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询指定源实例的克隆任务列表。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/api/236/15872) 接口获取实例 ID。
                     * @return InstanceId 查询指定源实例的克隆任务列表。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/api/236/15872) 接口获取实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置查询指定源实例的克隆任务列表。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/api/236/15872) 接口获取实例 ID。
                     * @param _instanceId 查询指定源实例的克隆任务列表。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/api/236/15872) 接口获取实例 ID。
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
                     * 获取分页查询时的偏移量，默认值为0。
                     * @return Offset 分页查询时的偏移量，默认值为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页查询时的偏移量，默认值为0。
                     * @param _offset 分页查询时的偏移量，默认值为0。
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
                     * 获取分页查询时的每页条目数，默认值为20，建议最大取值100。
                     * @return Limit 分页查询时的每页条目数，默认值为20，建议最大取值100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页查询时的每页条目数，默认值为20，建议最大取值100。
                     * @param _limit 分页查询时的每页条目数，默认值为20，建议最大取值100。
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
                     * 查询指定源实例的克隆任务列表。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/api/236/15872) 接口获取实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 分页查询时的偏移量，默认值为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询时的每页条目数，默认值为20，建议最大取值100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECLONELISTREQUEST_H_
