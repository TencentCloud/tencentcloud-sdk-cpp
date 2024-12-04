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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEDATAHUBTOPICSREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEDATAHUBTOPICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeDatahubTopics请求参数结构体
                */
                class DescribeDatahubTopicsRequest : public AbstractModel
                {
                public:
                    DescribeDatahubTopicsRequest();
                    ~DescribeDatahubTopicsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索词
                     * @return SearchWord 搜索词
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置搜索词
                     * @param _searchWord 搜索词
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取本次查询的偏移位置，默认为0
                     * @return Offset 本次查询的偏移位置，默认为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置本次查询的偏移位置，默认为0
                     * @param _offset 本次查询的偏移位置，默认为0
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
                     * 获取本次返回结果的最大个数，默认为50，最大值为50
                     * @return Limit 本次返回结果的最大个数，默认为50，最大值为50
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置本次返回结果的最大个数，默认为50，最大值为50
                     * @param _limit 本次返回结果的最大个数，默认为50，最大值为50
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
                     * 搜索词
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 本次查询的偏移位置，默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 本次返回结果的最大个数，默认为50，最大值为50
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEDATAHUBTOPICSREQUEST_H_
