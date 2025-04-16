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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEUSERHBACONFIGRESPONSE_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEUSERHBACONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/HbaConfig.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * DescribeUserHbaConfig返回参数结构体
                */
                class DescribeUserHbaConfigResponse : public AbstractModel
                {
                public:
                    DescribeUserHbaConfigResponse();
                    ~DescribeUserHbaConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例总数
                     * @return TotalCount 实例总数
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
                     * 获取hba数组
                     * @return HbaConfigs hba数组
                     * 
                     */
                    std::vector<HbaConfig> GetHbaConfigs() const;

                    /**
                     * 判断参数 HbaConfigs 是否已赋值
                     * @return HbaConfigs 是否已赋值
                     * 
                     */
                    bool HbaConfigsHasBeenSet() const;

                private:

                    /**
                     * 实例总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * hba数组
                     */
                    std::vector<HbaConfig> m_hbaConfigs;
                    bool m_hbaConfigsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBEUSERHBACONFIGRESPONSE_H_
