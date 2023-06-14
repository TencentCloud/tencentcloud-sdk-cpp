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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBXLOGSRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBXLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/Xlog.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDBXlogs返回参数结构体
                */
                class DescribeDBXlogsResponse : public AbstractModel
                {
                public:
                    DescribeDBXlogsResponse();
                    ~DescribeDBXlogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取表示此次返回结果有多少条数据。
                     * @return TotalCount 表示此次返回结果有多少条数据。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Xlog列表
                     * @return XlogList Xlog列表
                     * 
                     */
                    std::vector<Xlog> GetXlogList() const;

                    /**
                     * 判断参数 XlogList 是否已赋值
                     * @return XlogList 是否已赋值
                     * 
                     */
                    bool XlogListHasBeenSet() const;

                private:

                    /**
                     * 表示此次返回结果有多少条数据。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Xlog列表
                     */
                    std::vector<Xlog> m_xlogList;
                    bool m_xlogListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBXLOGSRESPONSE_H_
