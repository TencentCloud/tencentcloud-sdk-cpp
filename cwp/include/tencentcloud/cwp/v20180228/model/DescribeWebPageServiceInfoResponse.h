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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWEBPAGESERVICEINFORESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWEBPAGESERVICEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/ProtectMachineInfo.h>
#include <tencentcloud/cwp/v20180228/model/ProtectMachine.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeWebPageServiceInfo返回参数结构体
                */
                class DescribeWebPageServiceInfoResponse : public AbstractModel
                {
                public:
                    DescribeWebPageServiceInfoResponse();
                    ~DescribeWebPageServiceInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否已购服务：true-是，false-否
                     * @return Status 是否已购服务：true-是，false-否
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取已使用授权数
                     * @return UsedNum 已使用授权数
                     * 
                     */
                    uint64_t GetUsedNum() const;

                    /**
                     * 判断参数 UsedNum 是否已赋值
                     * @return UsedNum 是否已赋值
                     * 
                     */
                    bool UsedNumHasBeenSet() const;

                    /**
                     * 获取剩余授权数
                     * @return ResidueNum 剩余授权数
                     * 
                     */
                    uint64_t GetResidueNum() const;

                    /**
                     * 判断参数 ResidueNum 是否已赋值
                     * @return ResidueNum 是否已赋值
                     * 
                     */
                    bool ResidueNumHasBeenSet() const;

                    /**
                     * 获取已购授权数
                     * @return BuyNum 已购授权数
                     * 
                     */
                    uint64_t GetBuyNum() const;

                    /**
                     * 判断参数 BuyNum 是否已赋值
                     * @return BuyNum 是否已赋值
                     * 
                     */
                    bool BuyNumHasBeenSet() const;

                    /**
                     * 获取临近到期数量
                     * @return ExpireNum 临近到期数量
                     * 
                     */
                    uint64_t GetExpireNum() const;

                    /**
                     * 判断参数 ExpireNum 是否已赋值
                     * @return ExpireNum 是否已赋值
                     * 
                     */
                    bool ExpireNumHasBeenSet() const;

                    /**
                     * 获取所有授权机器信息
                     * @return AllAuthorizedMachines 所有授权机器信息
                     * 
                     */
                    std::vector<ProtectMachineInfo> GetAllAuthorizedMachines() const;

                    /**
                     * 判断参数 AllAuthorizedMachines 是否已赋值
                     * @return AllAuthorizedMachines 是否已赋值
                     * 
                     */
                    bool AllAuthorizedMachinesHasBeenSet() const;

                    /**
                     * 获取临近到期授权机器信息
                     * @return ExpireAuthorizedMachines 临近到期授权机器信息
                     * 
                     */
                    std::vector<ProtectMachine> GetExpireAuthorizedMachines() const;

                    /**
                     * 判断参数 ExpireAuthorizedMachines 是否已赋值
                     * @return ExpireAuthorizedMachines 是否已赋值
                     * 
                     */
                    bool ExpireAuthorizedMachinesHasBeenSet() const;

                    /**
                     * 获取已过期授权数
                     * @return ExpiredNum 已过期授权数
                     * 
                     */
                    uint64_t GetExpiredNum() const;

                    /**
                     * 判断参数 ExpiredNum 是否已赋值
                     * @return ExpiredNum 是否已赋值
                     * 
                     */
                    bool ExpiredNumHasBeenSet() const;

                    /**
                     * 获取防护目录数
                     * @return ProtectDirNum 防护目录数
                     * 
                     */
                    uint64_t GetProtectDirNum() const;

                    /**
                     * 判断参数 ProtectDirNum 是否已赋值
                     * @return ProtectDirNum 是否已赋值
                     * 
                     */
                    bool ProtectDirNumHasBeenSet() const;

                private:

                    /**
                     * 是否已购服务：true-是，false-否
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 已使用授权数
                     */
                    uint64_t m_usedNum;
                    bool m_usedNumHasBeenSet;

                    /**
                     * 剩余授权数
                     */
                    uint64_t m_residueNum;
                    bool m_residueNumHasBeenSet;

                    /**
                     * 已购授权数
                     */
                    uint64_t m_buyNum;
                    bool m_buyNumHasBeenSet;

                    /**
                     * 临近到期数量
                     */
                    uint64_t m_expireNum;
                    bool m_expireNumHasBeenSet;

                    /**
                     * 所有授权机器信息
                     */
                    std::vector<ProtectMachineInfo> m_allAuthorizedMachines;
                    bool m_allAuthorizedMachinesHasBeenSet;

                    /**
                     * 临近到期授权机器信息
                     */
                    std::vector<ProtectMachine> m_expireAuthorizedMachines;
                    bool m_expireAuthorizedMachinesHasBeenSet;

                    /**
                     * 已过期授权数
                     */
                    uint64_t m_expiredNum;
                    bool m_expiredNumHasBeenSet;

                    /**
                     * 防护目录数
                     */
                    uint64_t m_protectDirNum;
                    bool m_protectDirNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWEBPAGESERVICEINFORESPONSE_H_
