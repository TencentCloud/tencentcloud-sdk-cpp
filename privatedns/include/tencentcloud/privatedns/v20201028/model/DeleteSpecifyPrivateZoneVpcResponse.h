/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DELETESPECIFYPRIVATEZONEVPCRESPONSE_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DELETESPECIFYPRIVATEZONEVPCRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/VpcInfo.h>
#include <tencentcloud/privatedns/v20201028/model/AccountVpcInfo.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DeleteSpecifyPrivateZoneVpc返回参数结构体
                */
                class DeleteSpecifyPrivateZoneVpcResponse : public AbstractModel
                {
                public:
                    DeleteSpecifyPrivateZoneVpcResponse();
                    ~DeleteSpecifyPrivateZoneVpcResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取私有域id
                     * @return ZoneId 私有域id
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
                     * 获取本次删除的VPC
                     * @return VpcSet 本次删除的VPC
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
                     * 获取本次删除的关联账户的VPC
                     * @return AccountVpcSet 本次删除的关联账户的VPC
                     * 
                     */
                    std::vector<AccountVpcInfo> GetAccountVpcSet() const;

                    /**
                     * 判断参数 AccountVpcSet 是否已赋值
                     * @return AccountVpcSet 是否已赋值
                     * 
                     */
                    bool AccountVpcSetHasBeenSet() const;

                    /**
                     * 获取唯一id
                     * @return UniqId 唯一id
                     * 
                     */
                    std::string GetUniqId() const;

                    /**
                     * 判断参数 UniqId 是否已赋值
                     * @return UniqId 是否已赋值
                     * 
                     */
                    bool UniqIdHasBeenSet() const;

                private:

                    /**
                     * 私有域id
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 本次删除的VPC
                     */
                    std::vector<VpcInfo> m_vpcSet;
                    bool m_vpcSetHasBeenSet;

                    /**
                     * 本次删除的关联账户的VPC
                     */
                    std::vector<AccountVpcInfo> m_accountVpcSet;
                    bool m_accountVpcSetHasBeenSet;

                    /**
                     * 唯一id
                     */
                    std::string m_uniqId;
                    bool m_uniqIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DELETESPECIFYPRIVATEZONEVPCRESPONSE_H_
