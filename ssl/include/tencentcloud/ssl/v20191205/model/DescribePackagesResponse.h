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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEPACKAGESRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEPACKAGESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/PackageInfo.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribePackages返回参数结构体
                */
                class DescribePackagesResponse : public AbstractModel
                {
                public:
                    DescribePackagesResponse();
                    ~DescribePackagesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取权益包列表。
                     * @return Packages 权益包列表。
                     * 
                     */
                    std::vector<PackageInfo> GetPackages() const;

                    /**
                     * 判断参数 Packages 是否已赋值
                     * @return Packages 是否已赋值
                     * 
                     */
                    bool PackagesHasBeenSet() const;

                    /**
                     * 获取总条数。
                     * @return TotalCount 总条数。
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
                     * 获取权益点总余额。
                     * @return TotalBalance 权益点总余额。
                     * 
                     */
                    uint64_t GetTotalBalance() const;

                    /**
                     * 判断参数 TotalBalance 是否已赋值
                     * @return TotalBalance 是否已赋值
                     * 
                     */
                    bool TotalBalanceHasBeenSet() const;

                private:

                    /**
                     * 权益包列表。
                     */
                    std::vector<PackageInfo> m_packages;
                    bool m_packagesHasBeenSet;

                    /**
                     * 总条数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 权益点总余额。
                     */
                    uint64_t m_totalBalance;
                    bool m_totalBalanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEPACKAGESRESPONSE_H_
