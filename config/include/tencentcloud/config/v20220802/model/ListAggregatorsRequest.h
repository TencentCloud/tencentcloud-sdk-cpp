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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTAGGREGATORSREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTAGGREGATORSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * ListAggregators请求参数结构体
                */
                class ListAggregatorsRequest : public AbstractModel
                {
                public:
                    ListAggregatorsRequest();
                    ~ListAggregatorsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取每页显示数量
                     * @return Limit 每页显示数量
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页显示数量
                     * @param _limit 每页显示数量
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
                     * 获取起始
                     * @return Offset 起始
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置起始
                     * @param _offset 起始
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
                     * 每页显示数量
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 起始
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTAGGREGATORSREQUEST_H_
