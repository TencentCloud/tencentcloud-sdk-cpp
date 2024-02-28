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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEPREDOMAINLISTREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEPREDOMAINLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribePreDomainList请求参数结构体
                */
                class DescribePreDomainListRequest : public AbstractModel
                {
                public:
                    DescribePreDomainListRequest();
                    ~DescribePreDomainListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页码
                     * @return Page 页码
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置页码
                     * @param _page 页码
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取条数
                     * @return Size 条数
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置条数
                     * @param _size 条数
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取用于结束时间筛选
                     * @return EndTime 用于结束时间筛选
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置用于结束时间筛选
                     * @param _endTime 用于结束时间筛选
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 页码
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 条数
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 用于结束时间筛选
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEPREDOMAINLISTREQUEST_H_
