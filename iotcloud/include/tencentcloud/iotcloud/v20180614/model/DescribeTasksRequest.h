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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBETASKSREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * DescribeTasks请求参数结构体
                */
                class DescribeTasksRequest : public AbstractModel
                {
                public:
                    DescribeTasksRequest();
                    ~DescribeTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量，从0开始
                     * @return Offset 偏移量，从0开始
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，从0开始
                     * @param _offset 偏移量，从0开始
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
                     * 获取分页的大小，数值范围 1-250
                     * @return Limit 分页的大小，数值范围 1-250
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页的大小，数值范围 1-250
                     * @param _limit 分页的大小，数值范围 1-250
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 偏移量，从0开始
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页的大小，数值范围 1-250
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBETASKSREQUEST_H_
