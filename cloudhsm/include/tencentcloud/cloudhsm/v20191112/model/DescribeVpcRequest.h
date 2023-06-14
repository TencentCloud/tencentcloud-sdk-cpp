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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEVPCREQUEST_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEVPCREQUEST_H_

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
                * DescribeVpc请求参数结构体
                */
                class DescribeVpcRequest : public AbstractModel
                {
                public:
                    DescribeVpcRequest();
                    ~DescribeVpcRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取返回偏移量。Offset最小为0。
                     * @return Offset 返回偏移量。Offset最小为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置返回偏移量。Offset最小为0。
                     * @param _offset 返回偏移量。Offset最小为0。
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
                     * 获取返回数量。Limit需要在[1, 100]之间。
                     * @return Limit 返回数量。Limit需要在[1, 100]之间。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量。Limit需要在[1, 100]之间。
                     * @param _limit 返回数量。Limit需要在[1, 100]之间。
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
                     * 获取搜索关键字
                     * @return SearchWord 搜索关键字
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置搜索关键字
                     * @param _searchWord 搜索关键字
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
                     * 返回偏移量。Offset最小为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量。Limit需要在[1, 100]之间。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 搜索关键字
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEVPCREQUEST_H_
