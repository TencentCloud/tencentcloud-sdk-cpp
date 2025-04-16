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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_MODIFYPRIVATEZONEVPCRESPONSE_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_MODIFYPRIVATEZONEVPCRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/VpcInfo.h>
#include <tencentcloud/privatedns/v20201028/model/AccountVpcInfoOutput.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * ModifyPrivateZoneVpc返回参数结构体
                */
                class ModifyPrivateZoneVpcResponse : public AbstractModel
                {
                public:
                    ModifyPrivateZoneVpcResponse();
                    ~ModifyPrivateZoneVpcResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取私有域ID, zone-12345ds6
                     * @return ZoneId 私有域ID, zone-12345ds6
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取解析域关联的VPC列表
                     * @return VpcSet 解析域关联的VPC列表
                     * 
                     */
                    std::vector<VpcInfo> GetVpcSet() const;

                    /**
                     * 判断参数 VpcSet 是否已赋值
                     * @return VpcSet 是否已赋值
                     * 
                     */
                    bool VpcSetHasBeenSet() const;

                    /**
                     * 获取私有域账号关联的全部VPC列表
                     * @return AccountVpcSet 私有域账号关联的全部VPC列表
                     * 
                     */
                    std::vector<AccountVpcInfoOutput> GetAccountVpcSet() const;

                    /**
                     * 判断参数 AccountVpcSet 是否已赋值
                     * @return AccountVpcSet 是否已赋值
                     * 
                     */
                    bool AccountVpcSetHasBeenSet() const;

                private:

                    /**
                     * 私有域ID, zone-12345ds6
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 解析域关联的VPC列表
                     */
                    std::vector<VpcInfo> m_vpcSet;
                    bool m_vpcSetHasBeenSet;

                    /**
                     * 私有域账号关联的全部VPC列表
                     */
                    std::vector<AccountVpcInfoOutput> m_accountVpcSet;
                    bool m_accountVpcSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_MODIFYPRIVATEZONEVPCRESPONSE_H_
