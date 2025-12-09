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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEINSTANCEPASSWORDCOMPLEXITYRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEINSTANCEPASSWORDCOMPLEXITYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/ParameterDetail.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeInstancePasswordComplexity返回参数结构体
                */
                class DescribeInstancePasswordComplexityResponse : public AbstractModel
                {
                public:
                    DescribeInstancePasswordComplexityResponse();
                    ~DescribeInstancePasswordComplexityResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取密码复杂度相关参数总数
                     * @return TotalCount 密码复杂度相关参数总数
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
                     * 获取密码复杂度参数详情，policy取值范围["","LOW","MEDIUM"],空或者LOW表示：密码复杂度关，MEDIUM表示：密码复杂度开；当policy参数值是MEDIUM时，以下参数才有意义，length:取值范围[8-64],表示：最少字符数；mixed_case_count：取值范围[1-16]，表示大写字母和小写字母的最少个数。number_count：取值范围[1-16]，表示数字字符的最少个数。special_char_count：取值范围[1-16]，表示特殊字符的最少个数。
                     * @return Items 密码复杂度参数详情，policy取值范围["","LOW","MEDIUM"],空或者LOW表示：密码复杂度关，MEDIUM表示：密码复杂度开；当policy参数值是MEDIUM时，以下参数才有意义，length:取值范围[8-64],表示：最少字符数；mixed_case_count：取值范围[1-16]，表示大写字母和小写字母的最少个数。number_count：取值范围[1-16]，表示数字字符的最少个数。special_char_count：取值范围[1-16]，表示特殊字符的最少个数。
                     * 
                     */
                    std::vector<ParameterDetail> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 密码复杂度相关参数总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 密码复杂度参数详情，policy取值范围["","LOW","MEDIUM"],空或者LOW表示：密码复杂度关，MEDIUM表示：密码复杂度开；当policy参数值是MEDIUM时，以下参数才有意义，length:取值范围[8-64],表示：最少字符数；mixed_case_count：取值范围[1-16]，表示大写字母和小写字母的最少个数。number_count：取值范围[1-16]，表示数字字符的最少个数。special_char_count：取值范围[1-16]，表示特殊字符的最少个数。
                     */
                    std::vector<ParameterDetail> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEINSTANCEPASSWORDCOMPLEXITYRESPONSE_H_
