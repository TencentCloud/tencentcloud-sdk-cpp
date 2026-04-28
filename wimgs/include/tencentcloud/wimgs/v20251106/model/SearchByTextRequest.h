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

#ifndef TENCENTCLOUD_WIMGS_V20251106_MODEL_SEARCHBYTEXTREQUEST_H_
#define TENCENTCLOUD_WIMGS_V20251106_MODEL_SEARCHBYTEXTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wimgs
    {
        namespace V20251106
        {
            namespace Model
            {
                /**
                * SearchByText请求参数结构体
                */
                class SearchByTextRequest : public AbstractModel
                {
                public:
                    SearchByTextRequest();
                    ~SearchByTextRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>查询词</p>
                     * @return Query <p>查询词</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>查询词</p>
                     * @param _query <p>查询词</p>
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                private:

                    /**
                     * <p>查询词</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WIMGS_V20251106_MODEL_SEARCHBYTEXTREQUEST_H_
