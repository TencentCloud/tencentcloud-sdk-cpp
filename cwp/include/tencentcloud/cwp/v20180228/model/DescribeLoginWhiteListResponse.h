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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGINWHITELISTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGINWHITELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/LoginWhiteLists.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeLoginWhiteList返回参数结构体
                */
                class DescribeLoginWhiteListResponse : public AbstractModel
                {
                public:
                    DescribeLoginWhiteListResponse();
                    ~DescribeLoginWhiteListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取记录总数
                     * @return TotalCount 记录总数
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
                     * 获取异地登录白名单数组
                     * @return LoginWhiteLists 异地登录白名单数组
                     * 
                     */
                    std::vector<LoginWhiteLists> GetLoginWhiteLists() const;

                    /**
                     * 判断参数 LoginWhiteLists 是否已赋值
                     * @return LoginWhiteLists 是否已赋值
                     * 
                     */
                    bool LoginWhiteListsHasBeenSet() const;

                private:

                    /**
                     * 记录总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 异地登录白名单数组
                     */
                    std::vector<LoginWhiteLists> m_loginWhiteLists;
                    bool m_loginWhiteListsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGINWHITELISTRESPONSE_H_
