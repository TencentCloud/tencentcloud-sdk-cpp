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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LISTTWESEECALLBACKREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LISTTWESEECALLBACKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * ListTWeSeeCallback请求参数结构体
                */
                class ListTWeSeeCallbackRequest : public AbstractModel
                {
                public:
                    ListTWeSeeCallbackRequest();
                    ~ListTWeSeeCallbackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页大小，范围 1-100
                     * @return Limit 分页大小，范围 1-100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页大小，范围 1-100
                     * @param _limit 分页大小，范围 1-100
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
                     * 获取分页偏移量，范围 0-10000
                     * @return Offset 分页偏移量，范围 0-10000
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，范围 0-10000
                     * @param _offset 分页偏移量，范围 0-10000
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 分页大小，范围 1-100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量，范围 0-10000
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LISTTWESEECALLBACKREQUEST_H_
