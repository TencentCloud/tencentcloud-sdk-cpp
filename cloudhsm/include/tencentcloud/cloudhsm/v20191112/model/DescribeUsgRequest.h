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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEUSGREQUEST_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEUSGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudhsm
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeUsg请求参数结构体
                */
                class DescribeUsgRequest : public AbstractModel
                {
                public:
                    DescribeUsgRequest();
                    ~DescribeUsgRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量，当Offset和Limit均为0时将一次性返回用户所有的安全组列表。
                     * @return Offset 偏移量，当Offset和Limit均为0时将一次性返回用户所有的安全组列表。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，当Offset和Limit均为0时将一次性返回用户所有的安全组列表。
                     * @param _offset 偏移量，当Offset和Limit均为0时将一次性返回用户所有的安全组列表。
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
                     * 获取返回量，当Offset和Limit均为0时将一次性返回用户所有的安全组列表。
                     * @return Limit 返回量，当Offset和Limit均为0时将一次性返回用户所有的安全组列表。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回量，当Offset和Limit均为0时将一次性返回用户所有的安全组列表。
                     * @param _limit 返回量，当Offset和Limit均为0时将一次性返回用户所有的安全组列表。
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
                     * 获取过滤条件，支持安全组id
                     * @return SearchWord 过滤条件，支持安全组id
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置过滤条件，支持安全组id
                     * @param _searchWord 过滤条件，支持安全组id
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                private:

                    /**
                     * 偏移量，当Offset和Limit均为0时将一次性返回用户所有的安全组列表。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回量，当Offset和Limit均为0时将一次性返回用户所有的安全组列表。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤条件，支持安全组id
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEUSGREQUEST_H_
