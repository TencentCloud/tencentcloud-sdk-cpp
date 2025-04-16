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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_GETSERVICESTATUSRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_GETSERVICESTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/kms/v20190118/model/ExclusiveHSM.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * GetServiceStatus返回参数结构体
                */
                class GetServiceStatusResponse : public AbstractModel
                {
                public:
                    GetServiceStatusResponse();
                    ~GetServiceStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取KMS服务是否开通， true 表示已开通
                     * @return ServiceEnabled KMS服务是否开通， true 表示已开通
                     * 
                     */
                    bool GetServiceEnabled() const;

                    /**
                     * 判断参数 ServiceEnabled 是否已赋值
                     * @return ServiceEnabled 是否已赋值
                     * 
                     */
                    bool ServiceEnabledHasBeenSet() const;

                    /**
                     * 获取服务不可用类型： 0-未购买，1-正常， 2-欠费停服， 3-资源释放
                     * @return InvalidType 服务不可用类型： 0-未购买，1-正常， 2-欠费停服， 3-资源释放
                     * 
                     */
                    int64_t GetInvalidType() const;

                    /**
                     * 判断参数 InvalidType 是否已赋值
                     * @return InvalidType 是否已赋值
                     * 
                     */
                    bool InvalidTypeHasBeenSet() const;

                    /**
                     * 获取0-普通版，1-旗舰版
                     * @return UserLevel 0-普通版，1-旗舰版
                     * 
                     */
                    uint64_t GetUserLevel() const;

                    /**
                     * 判断参数 UserLevel 是否已赋值
                     * @return UserLevel 是否已赋值
                     * 
                     */
                    bool UserLevelHasBeenSet() const;

                    /**
                     * 获取旗舰版到期时间（Epoch Unix Timestamp）。
                     * @return ProExpireTime 旗舰版到期时间（Epoch Unix Timestamp）。
                     * 
                     */
                    uint64_t GetProExpireTime() const;

                    /**
                     * 判断参数 ProExpireTime 是否已赋值
                     * @return ProExpireTime 是否已赋值
                     * 
                     */
                    bool ProExpireTimeHasBeenSet() const;

                    /**
                     * 获取旗舰版是否自动续费：0-不自动续费，1-自动续费
                     * @return ProRenewFlag 旗舰版是否自动续费：0-不自动续费，1-自动续费
                     * 
                     */
                    uint64_t GetProRenewFlag() const;

                    /**
                     * 判断参数 ProRenewFlag 是否已赋值
                     * @return ProRenewFlag 是否已赋值
                     * 
                     */
                    bool ProRenewFlagHasBeenSet() const;

                    /**
                     * 获取旗舰版购买记录的唯一性标识。如果为开通旗舰版，则返回值为空
                     * @return ProResourceId 旗舰版购买记录的唯一性标识。如果为开通旗舰版，则返回值为空
                     * 
                     */
                    std::string GetProResourceId() const;

                    /**
                     * 判断参数 ProResourceId 是否已赋值
                     * @return ProResourceId 是否已赋值
                     * 
                     */
                    bool ProResourceIdHasBeenSet() const;

                    /**
                     * 获取是否开通 KMS 托管版
                     * @return ExclusiveVSMEnabled 是否开通 KMS 托管版
                     * 
                     */
                    bool GetExclusiveVSMEnabled() const;

                    /**
                     * 判断参数 ExclusiveVSMEnabled 是否已赋值
                     * @return ExclusiveVSMEnabled 是否已赋值
                     * 
                     */
                    bool ExclusiveVSMEnabledHasBeenSet() const;

                    /**
                     * 获取是否开通 KMS 独享版
                     * @return ExclusiveHSMEnabled 是否开通 KMS 独享版
                     * 
                     */
                    bool GetExclusiveHSMEnabled() const;

                    /**
                     * 判断参数 ExclusiveHSMEnabled 是否已赋值
                     * @return ExclusiveHSMEnabled 是否已赋值
                     * 
                     */
                    bool ExclusiveHSMEnabledHasBeenSet() const;

                    /**
                     * 获取KMS 订阅信息。
                     * @return SubscriptionInfo KMS 订阅信息。
                     * 
                     */
                    std::string GetSubscriptionInfo() const;

                    /**
                     * 判断参数 SubscriptionInfo 是否已赋值
                     * @return SubscriptionInfo 是否已赋值
                     * 
                     */
                    bool SubscriptionInfoHasBeenSet() const;

                    /**
                     * 获取返回KMS用户密钥使用数量
                     * @return CmkUserCount 返回KMS用户密钥使用数量
                     * 
                     */
                    uint64_t GetCmkUserCount() const;

                    /**
                     * 判断参数 CmkUserCount 是否已赋值
                     * @return CmkUserCount 是否已赋值
                     * 
                     */
                    bool CmkUserCountHasBeenSet() const;

                    /**
                     * 获取返回KMS用户密钥规格数量
                     * @return CmkLimit 返回KMS用户密钥规格数量
                     * 
                     */
                    uint64_t GetCmkLimit() const;

                    /**
                     * 判断参数 CmkLimit 是否已赋值
                     * @return CmkLimit 是否已赋值
                     * 
                     */
                    bool CmkLimitHasBeenSet() const;

                    /**
                     * 获取返回独享集群组
                     * @return ExclusiveHSMList 返回独享集群组
                     * 
                     */
                    std::vector<ExclusiveHSM> GetExclusiveHSMList() const;

                    /**
                     * 判断参数 ExclusiveHSMList 是否已赋值
                     * @return ExclusiveHSMList 是否已赋值
                     * 
                     */
                    bool ExclusiveHSMListHasBeenSet() const;

                private:

                    /**
                     * KMS服务是否开通， true 表示已开通
                     */
                    bool m_serviceEnabled;
                    bool m_serviceEnabledHasBeenSet;

                    /**
                     * 服务不可用类型： 0-未购买，1-正常， 2-欠费停服， 3-资源释放
                     */
                    int64_t m_invalidType;
                    bool m_invalidTypeHasBeenSet;

                    /**
                     * 0-普通版，1-旗舰版
                     */
                    uint64_t m_userLevel;
                    bool m_userLevelHasBeenSet;

                    /**
                     * 旗舰版到期时间（Epoch Unix Timestamp）。
                     */
                    uint64_t m_proExpireTime;
                    bool m_proExpireTimeHasBeenSet;

                    /**
                     * 旗舰版是否自动续费：0-不自动续费，1-自动续费
                     */
                    uint64_t m_proRenewFlag;
                    bool m_proRenewFlagHasBeenSet;

                    /**
                     * 旗舰版购买记录的唯一性标识。如果为开通旗舰版，则返回值为空
                     */
                    std::string m_proResourceId;
                    bool m_proResourceIdHasBeenSet;

                    /**
                     * 是否开通 KMS 托管版
                     */
                    bool m_exclusiveVSMEnabled;
                    bool m_exclusiveVSMEnabledHasBeenSet;

                    /**
                     * 是否开通 KMS 独享版
                     */
                    bool m_exclusiveHSMEnabled;
                    bool m_exclusiveHSMEnabledHasBeenSet;

                    /**
                     * KMS 订阅信息。
                     */
                    std::string m_subscriptionInfo;
                    bool m_subscriptionInfoHasBeenSet;

                    /**
                     * 返回KMS用户密钥使用数量
                     */
                    uint64_t m_cmkUserCount;
                    bool m_cmkUserCountHasBeenSet;

                    /**
                     * 返回KMS用户密钥规格数量
                     */
                    uint64_t m_cmkLimit;
                    bool m_cmkLimitHasBeenSet;

                    /**
                     * 返回独享集群组
                     */
                    std::vector<ExclusiveHSM> m_exclusiveHSMList;
                    bool m_exclusiveHSMListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_GETSERVICESTATUSRESPONSE_H_
