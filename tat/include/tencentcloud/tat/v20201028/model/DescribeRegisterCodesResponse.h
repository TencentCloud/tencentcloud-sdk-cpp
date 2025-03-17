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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEREGISTERCODESRESPONSE_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEREGISTERCODESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/RegisterCodeInfo.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeRegisterCodes返回参数结构体
                */
                class DescribeRegisterCodesResponse : public AbstractModel
                {
                public:
                    DescribeRegisterCodesResponse();
                    ~DescribeRegisterCodesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询到的注册码总数。
                     * @return TotalCount 查询到的注册码总数。
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
                     * 获取注册码信息列表。
                     * @return RegisterCodeSet 注册码信息列表。
                     * 
                     */
                    std::vector<RegisterCodeInfo> GetRegisterCodeSet() const;

                    /**
                     * 判断参数 RegisterCodeSet 是否已赋值
                     * @return RegisterCodeSet 是否已赋值
                     * 
                     */
                    bool RegisterCodeSetHasBeenSet() const;

                private:

                    /**
                     * 查询到的注册码总数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 注册码信息列表。
                     */
                    std::vector<RegisterCodeInfo> m_registerCodeSet;
                    bool m_registerCodeSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEREGISTERCODESRESPONSE_H_
