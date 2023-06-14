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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_DEPLOYDYNAMICBCOSCONTRACTRESPONSE_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_DEPLOYDYNAMICBCOSCONTRACTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DeployDynamicBcosContract返回参数结构体
                */
                class DeployDynamicBcosContractResponse : public AbstractModel
                {
                public:
                    DeployDynamicBcosContractResponse();
                    ~DeployDynamicBcosContractResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取部署成功返回的合约地址
                     * @return ContractAddress 部署成功返回的合约地址
                     * 
                     */
                    std::string GetContractAddress() const;

                    /**
                     * 判断参数 ContractAddress 是否已赋值
                     * @return ContractAddress 是否已赋值
                     * 
                     */
                    bool ContractAddressHasBeenSet() const;

                private:

                    /**
                     * 部署成功返回的合约地址
                     */
                    std::string m_contractAddress;
                    bool m_contractAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_DEPLOYDYNAMICBCOSCONTRACTRESPONSE_H_
