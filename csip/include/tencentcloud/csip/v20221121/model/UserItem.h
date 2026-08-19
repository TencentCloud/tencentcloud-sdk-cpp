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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_USERITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_USERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 用户信息
                */
                class UserItem : public AbstractModel
                {
                public:
                    UserItem();
                    ~UserItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>登录用户appid</p>
                     * @return AppID <p>登录用户appid</p>
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置<p>登录用户appid</p>
                     * @param _appID <p>登录用户appid</p>
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>用户类型</p>
                     * @return AccountType <p>用户类型</p>
                     * 
                     */
                    uint64_t GetAccountType() const;

                    /**
                     * 设置<p>用户类型</p>
                     * @param _accountType <p>用户类型</p>
                     * 
                     */
                    void SetAccountType(const uint64_t& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取<p>用户付费类型</p>
                     * @return PayType <p>用户付费类型</p>
                     * 
                     */
                    uint64_t GetPayType() const;

                    /**
                     * 设置<p>用户付费类型</p>
                     * @param _payType <p>用户付费类型</p>
                     * 
                     */
                    void SetPayType(const uint64_t& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取<p>总配额次数</p>
                     * @return TotalQuota <p>总配额次数</p>
                     * 
                     */
                    uint64_t GetTotalQuota() const;

                    /**
                     * 设置<p>总配额次数</p>
                     * @param _totalQuota <p>总配额次数</p>
                     * 
                     */
                    void SetTotalQuota(const uint64_t& _totalQuota);

                    /**
                     * 判断参数 TotalQuota 是否已赋值
                     * @return TotalQuota 是否已赋值
                     * 
                     */
                    bool TotalQuotaHasBeenSet() const;

                    /**
                     * 获取<p>已消耗配额次数</p>
                     * @return CostQuota <p>已消耗配额次数</p>
                     * 
                     */
                    uint64_t GetCostQuota() const;

                    /**
                     * 设置<p>已消耗配额次数</p>
                     * @param _costQuota <p>已消耗配额次数</p>
                     * 
                     */
                    void SetCostQuota(const uint64_t& _costQuota);

                    /**
                     * 判断参数 CostQuota 是否已赋值
                     * @return CostQuota 是否已赋值
                     * 
                     */
                    bool CostQuotaHasBeenSet() const;

                    /**
                     * 获取<p>云厂商信息</p>
                     * @return Providers <p>云厂商信息</p>
                     * 
                     */
                    std::vector<std::string> GetProviders() const;

                    /**
                     * 设置<p>云厂商信息</p>
                     * @param _providers <p>云厂商信息</p>
                     * 
                     */
                    void SetProviders(const std::vector<std::string>& _providers);

                    /**
                     * 判断参数 Providers 是否已赋值
                     * @return Providers 是否已赋值
                     * 
                     */
                    bool ProvidersHasBeenSet() const;

                    /**
                     * 获取<p>refresh:下次仍会刷新;expire:下次不再刷新</p>
                     * @return QuotaFlushType <p>refresh:下次仍会刷新;expire:下次不再刷新</p>
                     * 
                     */
                    std::string GetQuotaFlushType() const;

                    /**
                     * 设置<p>refresh:下次仍会刷新;expire:下次不再刷新</p>
                     * @param _quotaFlushType <p>refresh:下次仍会刷新;expire:下次不再刷新</p>
                     * 
                     */
                    void SetQuotaFlushType(const std::string& _quotaFlushType);

                    /**
                     * 判断参数 QuotaFlushType 是否已赋值
                     * @return QuotaFlushType 是否已赋值
                     * 
                     */
                    bool QuotaFlushTypeHasBeenSet() const;

                    /**
                     * 获取<p>下次配额刷新时间</p>
                     * @return QuotaFlushTime <p>下次配额刷新时间</p>
                     * 
                     */
                    std::string GetQuotaFlushTime() const;

                    /**
                     * 设置<p>下次配额刷新时间</p>
                     * @param _quotaFlushTime <p>下次配额刷新时间</p>
                     * 
                     */
                    void SetQuotaFlushTime(const std::string& _quotaFlushTime);

                    /**
                     * 判断参数 QuotaFlushTime 是否已赋值
                     * @return QuotaFlushTime 是否已赋值
                     * 
                     */
                    bool QuotaFlushTimeHasBeenSet() const;

                    /**
                     * 获取<p>购买类型</p>
                     * @return QuotaSource <p>购买类型</p>
                     * 
                     */
                    uint64_t GetQuotaSource() const;

                    /**
                     * 设置<p>购买类型</p>
                     * @param _quotaSource <p>购买类型</p>
                     * 
                     */
                    void SetQuotaSource(const uint64_t& _quotaSource);

                    /**
                     * 判断参数 QuotaSource 是否已赋值
                     * @return QuotaSource 是否已赋值
                     * 
                     */
                    bool QuotaSourceHasBeenSet() const;

                    /**
                     * 获取<p>被共享时为共享方appid，自购或无配额时为0</p>
                     * @return ShareFromAppID <p>被共享时为共享方appid，自购或无配额时为0</p>
                     * 
                     */
                    uint64_t GetShareFromAppID() const;

                    /**
                     * 设置<p>被共享时为共享方appid，自购或无配额时为0</p>
                     * @param _shareFromAppID <p>被共享时为共享方appid，自购或无配额时为0</p>
                     * 
                     */
                    void SetShareFromAppID(const uint64_t& _shareFromAppID);

                    /**
                     * 判断参数 ShareFromAppID 是否已赋值
                     * @return ShareFromAppID 是否已赋值
                     * 
                     */
                    bool ShareFromAppIDHasBeenSet() const;

                    /**
                     * 获取<p>配额共享方账号</p>
                     * @return ShareFromUser <p>配额共享方账号</p>
                     * 
                     */
                    std::string GetShareFromUser() const;

                    /**
                     * 设置<p>配额共享方账号</p>
                     * @param _shareFromUser <p>配额共享方账号</p>
                     * 
                     */
                    void SetShareFromUser(const std::string& _shareFromUser);

                    /**
                     * 判断参数 ShareFromUser 是否已赋值
                     * @return ShareFromUser 是否已赋值
                     * 
                     */
                    bool ShareFromUserHasBeenSet() const;

                private:

                    /**
                     * <p>登录用户appid</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>用户类型</p>
                     */
                    uint64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * <p>用户付费类型</p>
                     */
                    uint64_t m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * <p>总配额次数</p>
                     */
                    uint64_t m_totalQuota;
                    bool m_totalQuotaHasBeenSet;

                    /**
                     * <p>已消耗配额次数</p>
                     */
                    uint64_t m_costQuota;
                    bool m_costQuotaHasBeenSet;

                    /**
                     * <p>云厂商信息</p>
                     */
                    std::vector<std::string> m_providers;
                    bool m_providersHasBeenSet;

                    /**
                     * <p>refresh:下次仍会刷新;expire:下次不再刷新</p>
                     */
                    std::string m_quotaFlushType;
                    bool m_quotaFlushTypeHasBeenSet;

                    /**
                     * <p>下次配额刷新时间</p>
                     */
                    std::string m_quotaFlushTime;
                    bool m_quotaFlushTimeHasBeenSet;

                    /**
                     * <p>购买类型</p>
                     */
                    uint64_t m_quotaSource;
                    bool m_quotaSourceHasBeenSet;

                    /**
                     * <p>被共享时为共享方appid，自购或无配额时为0</p>
                     */
                    uint64_t m_shareFromAppID;
                    bool m_shareFromAppIDHasBeenSet;

                    /**
                     * <p>配额共享方账号</p>
                     */
                    std::string m_shareFromUser;
                    bool m_shareFromUserHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_USERITEM_H_
