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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEIDENTIFICATIONSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEIDENTIFICATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Identification.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeIdentifications返回参数结构体
                */
                class DescribeIdentificationsResponse : public AbstractModel
                {
                public:
                    DescribeIdentificationsResponse();
                    ~DescribeIdentificationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的站点个数。
                     * @return TotalCount 符合条件的站点个数。
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
                     * 获取站点验证信息列表。
                     * @return Identifications 站点验证信息列表。
                     * 
                     */
                    std::vector<Identification> GetIdentifications() const;

                    /**
                     * 判断参数 Identifications 是否已赋值
                     * @return Identifications 是否已赋值
                     * 
                     */
                    bool IdentificationsHasBeenSet() const;

                private:

                    /**
                     * 符合条件的站点个数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 站点验证信息列表。
                     */
                    std::vector<Identification> m_identifications;
                    bool m_identificationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEIDENTIFICATIONSRESPONSE_H_
