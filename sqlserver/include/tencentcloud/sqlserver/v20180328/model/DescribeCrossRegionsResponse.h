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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBECROSSREGIONSRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBECROSSREGIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeCrossRegions返回参数结构体
                */
                class DescribeCrossRegionsResponse : public AbstractModel
                {
                public:
                    DescribeCrossRegionsResponse();
                    ~DescribeCrossRegionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取支持跨地域备份的目标地域集合
                     * @return Regions 支持跨地域备份的目标地域集合
                     * 
                     */
                    std::vector<std::string> GetRegions() const;

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     * 
                     */
                    bool RegionsHasBeenSet() const;

                private:

                    /**
                     * 支持跨地域备份的目标地域集合
                     */
                    std::vector<std::string> m_regions;
                    bool m_regionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBECROSSREGIONSRESPONSE_H_
