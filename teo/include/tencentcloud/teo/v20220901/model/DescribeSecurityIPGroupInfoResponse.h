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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYIPGROUPINFORESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYIPGROUPINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/IPGroup.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeSecurityIPGroupInfo返回参数结构体
                */
                class DescribeSecurityIPGroupInfoResponse : public AbstractModel
                {
                public:
                    DescribeSecurityIPGroupInfoResponse();
                    ~DescribeSecurityIPGroupInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的满足条件的 IP 组数量。
                     * @return TotalCount 返回的满足条件的 IP 组数量。
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
                     * 获取IP 组的详细配置信息。包含每个 IP 组的 ID 、名称和 IP /网段列表信息。
                     * @return IPGroups IP 组的详细配置信息。包含每个 IP 组的 ID 、名称和 IP /网段列表信息。
                     * 
                     */
                    std::vector<IPGroup> GetIPGroups() const;

                    /**
                     * 判断参数 IPGroups 是否已赋值
                     * @return IPGroups 是否已赋值
                     * 
                     */
                    bool IPGroupsHasBeenSet() const;

                private:

                    /**
                     * 返回的满足条件的 IP 组数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * IP 组的详细配置信息。包含每个 IP 组的 ID 、名称和 IP /网段列表信息。
                     */
                    std::vector<IPGroup> m_iPGroups;
                    bool m_iPGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYIPGROUPINFORESPONSE_H_
