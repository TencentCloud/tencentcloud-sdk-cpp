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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMMONITORLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMMONITORLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveStreamMonitorList请求参数结构体
                */
                class DescribeLiveStreamMonitorListRequest : public AbstractModel
                {
                public:
                    DescribeLiveStreamMonitorListRequest();
                    ~DescribeLiveStreamMonitorListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询列表时的起始偏移。
                     * @return Index 查询列表时的起始偏移。
                     * 
                     */
                    uint64_t GetIndex() const;

                    /**
                     * 设置查询列表时的起始偏移。
                     * @param _index 查询列表时的起始偏移。
                     * 
                     */
                    void SetIndex(const uint64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取本次查询的记录个数。最小值为1。
                     * @return Count 本次查询的记录个数。最小值为1。
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置本次查询的记录个数。最小值为1。
                     * @param _count 本次查询的记录个数。最小值为1。
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 查询列表时的起始偏移。
                     */
                    uint64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 本次查询的记录个数。最小值为1。
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMMONITORLISTREQUEST_H_
