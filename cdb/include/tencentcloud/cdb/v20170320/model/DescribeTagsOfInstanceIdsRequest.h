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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETAGSOFINSTANCEIDSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETAGSOFINSTANCEIDSREQUEST_H_

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
                * DescribeTagsOfInstanceIds请求参数结构体
                */
                class DescribeTagsOfInstanceIdsRequest : public AbstractModel
                {
                public:
                    DescribeTagsOfInstanceIdsRequest();
                    ~DescribeTagsOfInstanceIdsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例列表。实例 ID 可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。可传入的数组长度暂无限制。
                     * @return InstanceIds 实例列表。实例 ID 可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。可传入的数组长度暂无限制。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例列表。实例 ID 可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。可传入的数组长度暂无限制。
                     * @param _instanceIds 实例列表。实例 ID 可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。可传入的数组长度暂无限制。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取分页偏移量。
                     * @return Offset 分页偏移量。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量。
                     * @param _offset 分页偏移量。
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
                     * 获取分页大小。默认为15。
                     * @return Limit 分页大小。默认为15。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页大小。默认为15。
                     * @param _limit 分页大小。默认为15。
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
                     * 实例列表。实例 ID 可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。可传入的数组长度暂无限制。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 分页偏移量。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页大小。默认为15。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBETAGSOFINSTANCEIDSREQUEST_H_
