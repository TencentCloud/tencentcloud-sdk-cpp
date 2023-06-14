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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEDATAREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeData请求参数结构体
                */
                class DescribeDataRequest : public AbstractModel
                {
                public:
                    DescribeDataRequest();
                    ~DescribeDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询字符串
                     * @return Query 查询字符串
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置查询字符串
                     * @param _query 查询字符串
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ID 项目ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置项目ID
                     * @param _iD 项目ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                private:

                    /**
                     * 查询字符串
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 项目ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEDATAREQUEST_H_
