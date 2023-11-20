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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEPRODUCTSPECRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEPRODUCTSPECRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/ProductSpec.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeProductSpec返回参数结构体
                */
                class DescribeProductSpecResponse : public AbstractModel
                {
                public:
                    DescribeProductSpecResponse();
                    ~DescribeProductSpecResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取配置地域分的个数
                     * @return TotalCount 配置地域分的个数
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
                     * 获取规格信息数组
                     * @return SpecInfoList 规格信息数组
                     * 
                     */
                    std::vector<ProductSpec> GetSpecInfoList() const;

                    /**
                     * 判断参数 SpecInfoList 是否已赋值
                     * @return SpecInfoList 是否已赋值
                     * 
                     */
                    bool SpecInfoListHasBeenSet() const;

                private:

                    /**
                     * 配置地域分的个数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 规格信息数组
                     */
                    std::vector<ProductSpec> m_specInfoList;
                    bool m_specInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEPRODUCTSPECRESPONSE_H_
