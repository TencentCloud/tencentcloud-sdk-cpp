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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBESPACELISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBESPACELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeSpaceList请求参数结构体
                */
                class DescribeSpaceListRequest : public AbstractModel
                {
                public:
                    DescribeSpaceListRequest();
                    ~DescribeSpaceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取支持空间名称模糊搜索
                     * @return Query 支持空间名称模糊搜索
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置支持空间名称模糊搜索
                     * @param _query 支持空间名称模糊搜索
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
                     * 支持空间名称模糊搜索
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBESPACELISTREQUEST_H_
