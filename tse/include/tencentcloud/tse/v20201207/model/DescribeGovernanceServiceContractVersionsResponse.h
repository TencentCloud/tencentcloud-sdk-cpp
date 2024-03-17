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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGOVERNANCESERVICECONTRACTVERSIONSRESPONSE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGOVERNANCESERVICECONTRACTVERSIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/GovernanceServiceContractVersion.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeGovernanceServiceContractVersions返回参数结构体
                */
                class DescribeGovernanceServiceContractVersionsResponse : public AbstractModel
                {
                public:
                    DescribeGovernanceServiceContractVersionsResponse();
                    ~DescribeGovernanceServiceContractVersionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取服务契约版本列表
                     * @return GovernanceServiceContractVersions 服务契约版本列表
                     * 
                     */
                    std::vector<GovernanceServiceContractVersion> GetGovernanceServiceContractVersions() const;

                    /**
                     * 判断参数 GovernanceServiceContractVersions 是否已赋值
                     * @return GovernanceServiceContractVersions 是否已赋值
                     * 
                     */
                    bool GovernanceServiceContractVersionsHasBeenSet() const;

                private:

                    /**
                     * 服务契约版本列表
                     */
                    std::vector<GovernanceServiceContractVersion> m_governanceServiceContractVersions;
                    bool m_governanceServiceContractVersionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGOVERNANCESERVICECONTRACTVERSIONSRESPONSE_H_
