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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEHTTPSPACKAGESREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEHTTPSPACKAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeHttpsPackages请求参数结构体
                */
                class DescribeHttpsPackagesRequest : public AbstractModel
                {
                public:
                    DescribeHttpsPackagesRequest();
                    ~DescribeHttpsPackagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页查询起始地址，默认 0
                     * @return Offset 分页查询起始地址，默认 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页查询起始地址，默认 0
                     * @param _offset 分页查询起始地址，默认 0
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
                     * 获取分页查询记录个数，默认100，最大1000
                     * @return Limit 分页查询记录个数，默认100，最大1000
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页查询记录个数，默认100，最大1000
                     * @param _limit 分页查询记录个数，默认100，最大1000
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
                     * 分页查询起始地址，默认 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询记录个数，默认100，最大1000
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEHTTPSPACKAGESREQUEST_H_
