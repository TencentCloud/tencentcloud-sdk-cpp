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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEPERSONREQUEST_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEPERSONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribePerson请求参数结构体
                */
                class DescribePersonRequest : public AbstractModel
                {
                public:
                    DescribePersonRequest();
                    ~DescribePersonRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取卖场编码
                     * @return MallId 卖场编码
                     * 
                     */
                    std::string GetMallId() const;

                    /**
                     * 设置卖场编码
                     * @param _mallId 卖场编码
                     * 
                     */
                    void SetMallId(const std::string& _mallId);

                    /**
                     * 判断参数 MallId 是否已赋值
                     * @return MallId 是否已赋值
                     * 
                     */
                    bool MallIdHasBeenSet() const;

                    /**
                     * 获取查询偏移
                     * @return Offset 查询偏移
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询偏移
                     * @param _offset 查询偏移
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
                     * 获取查询数量，默认20，最大查询数量100
                     * @return Limit 查询数量，默认20，最大查询数量100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置查询数量，默认20，最大查询数量100
                     * @param _limit 查询数量，默认20，最大查询数量100
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
                     * 卖场编码
                     */
                    std::string m_mallId;
                    bool m_mallIdHasBeenSet;

                    /**
                     * 查询偏移
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询数量，默认20，最大查询数量100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEPERSONREQUEST_H_
