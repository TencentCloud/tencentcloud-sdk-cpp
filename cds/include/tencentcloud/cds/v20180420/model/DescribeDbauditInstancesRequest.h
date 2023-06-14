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

#ifndef TENCENTCLOUD_CDS_V20180420_MODEL_DESCRIBEDBAUDITINSTANCESREQUEST_H_
#define TENCENTCLOUD_CDS_V20180420_MODEL_DESCRIBEDBAUDITINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cds
    {
        namespace V20180420
        {
            namespace Model
            {
                /**
                * DescribeDbauditInstances请求参数结构体
                */
                class DescribeDbauditInstancesRequest : public AbstractModel
                {
                public:
                    DescribeDbauditInstancesRequest();
                    ~DescribeDbauditInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询条件地域
                     * @return SearchRegion 查询条件地域
                     * 
                     */
                    std::string GetSearchRegion() const;

                    /**
                     * 设置查询条件地域
                     * @param _searchRegion 查询条件地域
                     * 
                     */
                    void SetSearchRegion(const std::string& _searchRegion);

                    /**
                     * 判断参数 SearchRegion 是否已赋值
                     * @return SearchRegion 是否已赋值
                     * 
                     */
                    bool SearchRegionHasBeenSet() const;

                    /**
                     * 获取限制数目，默认10， 最大50
                     * @return Limit 限制数目，默认10， 最大50
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数目，默认10， 最大50
                     * @param _limit 限制数目，默认10， 最大50
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
                     * 获取偏移量，默认1
                     * @return Offset 偏移量，默认1
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认1
                     * @param _offset 偏移量，默认1
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
                     * 查询条件地域
                     */
                    std::string m_searchRegion;
                    bool m_searchRegionHasBeenSet;

                    /**
                     * 限制数目，默认10， 最大50
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认1
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDS_V20180420_MODEL_DESCRIBEDBAUDITINSTANCESREQUEST_H_
