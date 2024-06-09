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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECUSTOMERRORPAGESRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECUSTOMERRORPAGESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CustomErrorPage.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeCustomErrorPages返回参数结构体
                */
                class DescribeCustomErrorPagesResponse : public AbstractModel
                {
                public:
                    DescribeCustomErrorPagesResponse();
                    ~DescribeCustomErrorPagesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取自定义错误页面总数。
                     * @return TotalCount 自定义错误页面总数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取自定义错误页面数据列表。
                     * @return ErrorPages 自定义错误页面数据列表。
                     * 
                     */
                    std::vector<CustomErrorPage> GetErrorPages() const;

                    /**
                     * 判断参数 ErrorPages 是否已赋值
                     * @return ErrorPages 是否已赋值
                     * 
                     */
                    bool ErrorPagesHasBeenSet() const;

                private:

                    /**
                     * 自定义错误页面总数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 自定义错误页面数据列表。
                     */
                    std::vector<CustomErrorPage> m_errorPages;
                    bool m_errorPagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECUSTOMERRORPAGESRESPONSE_H_
