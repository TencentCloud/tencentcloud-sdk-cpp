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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECOMPANIESREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECOMPANIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeCompanies请求参数结构体
                */
                class DescribeCompaniesRequest : public AbstractModel
                {
                public:
                    DescribeCompaniesRequest();
                    ~DescribeCompaniesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页偏移量，默认值为0.
                     * @return Offset 分页偏移量，默认值为0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，默认值为0.
                     * @param _offset 分页偏移量，默认值为0.
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
                     * 获取分页每页限制数，默认值为0，最大值1000.
                     * @return Limit 分页每页限制数，默认值为0，最大值1000.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页每页限制数，默认值为0，最大值1000.
                     * @param _limit 分页每页限制数，默认值为0，最大值1000.
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
                     * 获取公司ID
                     * @return CompanyId 公司ID
                     * 
                     */
                    int64_t GetCompanyId() const;

                    /**
                     * 设置公司ID
                     * @param _companyId 公司ID
                     * 
                     */
                    void SetCompanyId(const int64_t& _companyId);

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                private:

                    /**
                     * 分页偏移量，默认值为0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页每页限制数，默认值为0，最大值1000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 公司ID
                     */
                    int64_t m_companyId;
                    bool m_companyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECOMPANIESREQUEST_H_
