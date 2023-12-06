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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_ADDSPECIFYPRIVATEZONEVPCREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_ADDSPECIFYPRIVATEZONEVPCREQUEST_H_

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
                * AddSpecifyPrivateZoneVpc请求参数结构体
                */
                class AddSpecifyPrivateZoneVpcRequest : public AbstractModel
                {
                public:
                    AddSpecifyPrivateZoneVpcRequest();
                    ~AddSpecifyPrivateZoneVpcRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取私有域id
                     * @return ZoneId 私有域id
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置私有域id
                     * @param _zoneId 私有域id
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取本次新增的vpc信息
                     * @return VpcSet 本次新增的vpc信息
                     * 
                     */
                    std::vector<VpcInfo> GetVpcSet() const;

                    /**
                     * 设置本次新增的vpc信息
                     * @param _vpcSet 本次新增的vpc信息
                     * 
                     */
                    void SetVpcSet(const std::vector<VpcInfo>& _vpcSet);

                    /**
                     * 判断参数 VpcSet 是否已赋值
                     * @return VpcSet 是否已赋值
                     * 
                     */
                    bool VpcSetHasBeenSet() const;

                    /**
                     * 获取本次新增关联账户vpc信息
                     * @return AccountVpcSet 本次新增关联账户vpc信息
                     * 
                     */
                    std::vector<AccountVpcInfo> GetAccountVpcSet() const;

                    /**
                     * 设置本次新增关联账户vpc信息
                     * @param _accountVpcSet 本次新增关联账户vpc信息
                     * 
                     */
                    void SetAccountVpcSet(const std::vector<AccountVpcInfo>& _accountVpcSet);

                    /**
                     * 判断参数 AccountVpcSet 是否已赋值
                     * @return AccountVpcSet 是否已赋值
                     * 
                     */
                    bool AccountVpcSetHasBeenSet() const;

                    /**
                     * 获取是否为同步操作
                     * @return Sync 是否为同步操作
                     * 
                     */
                    bool GetSync() const;

                    /**
                     * 设置是否为同步操作
                     * @param _sync 是否为同步操作
                     * 
                     */
                    void SetSync(const bool& _sync);

                    /**
                     * 判断参数 Sync 是否已赋值
                     * @return Sync 是否已赋值
                     * 
                     */
                    bool SyncHasBeenSet() const;

                private:

                    /**
                     * 私有域id
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 本次新增的vpc信息
                     */
                    std::vector<VpcInfo> m_vpcSet;
                    bool m_vpcSetHasBeenSet;

                    /**
                     * 本次新增关联账户vpc信息
                     */
                    std::vector<AccountVpcInfo> m_accountVpcSet;
                    bool m_accountVpcSetHasBeenSet;

                    /**
                     * 是否为同步操作
                     */
                    bool m_sync;
                    bool m_syncHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_ADDSPECIFYPRIVATEZONEVPCREQUEST_H_
