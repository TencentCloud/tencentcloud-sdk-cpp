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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_TRANSFERINDOMAINBATCHREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_TRANSFERINDOMAINBATCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * TransferInDomainBatch请求参数结构体
                */
                class TransferInDomainBatchRequest : public AbstractModel
                {
                public:
                    TransferInDomainBatchRequest();
                    ~TransferInDomainBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取转入的域名名称数组。
                     * @return Domains 转入的域名名称数组。
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置转入的域名名称数组。
                     * @param Domains 转入的域名名称数组。
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取域名转移码数组。
                     * @return PassWords 域名转移码数组。
                     */
                    std::vector<std::string> GetPassWords() const;

                    /**
                     * 设置域名转移码数组。
                     * @param PassWords 域名转移码数组。
                     */
                    void SetPassWords(const std::vector<std::string>& _passWords);

                    /**
                     * 判断参数 PassWords 是否已赋值
                     * @return PassWords 是否已赋值
                     */
                    bool PassWordsHasBeenSet() const;

                    /**
                     * 获取模板ID。
                     * @return TemplateId 模板ID。
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板ID。
                     * @param TemplateId 模板ID。
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取付费模式 0手动在线付费，1使用余额付费。
                     * @return PayMode 付费模式 0手动在线付费，1使用余额付费。
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费模式 0手动在线付费，1使用余额付费。
                     * @param PayMode 付费模式 0手动在线付费，1使用余额付费。
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取自动续费开关。有两个可选值：
0 表示关闭，不自动续费（默认值）
1 表示开启，将自动续费
                     * @return AutoRenewFlag 自动续费开关。有两个可选值：
0 表示关闭，不自动续费（默认值）
1 表示开启，将自动续费
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费开关。有两个可选值：
0 表示关闭，不自动续费（默认值）
1 表示开启，将自动续费
                     * @param AutoRenewFlag 自动续费开关。有两个可选值：
0 表示关闭，不自动续费（默认值）
1 表示开启，将自动续费
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取true： 开启60天内禁止转移注册商锁定
false：关闭60天内禁止转移注册商锁定
默认 true
                     * @return LockTransfer true： 开启60天内禁止转移注册商锁定
false：关闭60天内禁止转移注册商锁定
默认 true
                     */
                    bool GetLockTransfer() const;

                    /**
                     * 设置true： 开启60天内禁止转移注册商锁定
false：关闭60天内禁止转移注册商锁定
默认 true
                     * @param LockTransfer true： 开启60天内禁止转移注册商锁定
false：关闭60天内禁止转移注册商锁定
默认 true
                     */
                    void SetLockTransfer(const bool& _lockTransfer);

                    /**
                     * 判断参数 LockTransfer 是否已赋值
                     * @return LockTransfer 是否已赋值
                     */
                    bool LockTransferHasBeenSet() const;

                    /**
                     * 获取是否开启更新锁：0=默认不开启，1=开启
                     * @return UpdateProhibition 是否开启更新锁：0=默认不开启，1=开启
                     */
                    int64_t GetUpdateProhibition() const;

                    /**
                     * 设置是否开启更新锁：0=默认不开启，1=开启
                     * @param UpdateProhibition 是否开启更新锁：0=默认不开启，1=开启
                     */
                    void SetUpdateProhibition(const int64_t& _updateProhibition);

                    /**
                     * 判断参数 UpdateProhibition 是否已赋值
                     * @return UpdateProhibition 是否已赋值
                     */
                    bool UpdateProhibitionHasBeenSet() const;

                    /**
                     * 获取是否开启转移锁：0=默认不开启，1=开启
                     * @return TransferProhibition 是否开启转移锁：0=默认不开启，1=开启
                     */
                    int64_t GetTransferProhibition() const;

                    /**
                     * 设置是否开启转移锁：0=默认不开启，1=开启
                     * @param TransferProhibition 是否开启转移锁：0=默认不开启，1=开启
                     */
                    void SetTransferProhibition(const int64_t& _transferProhibition);

                    /**
                     * 判断参数 TransferProhibition 是否已赋值
                     * @return TransferProhibition 是否已赋值
                     */
                    bool TransferProhibitionHasBeenSet() const;

                private:

                    /**
                     * 转入的域名名称数组。
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 域名转移码数组。
                     */
                    std::vector<std::string> m_passWords;
                    bool m_passWordsHasBeenSet;

                    /**
                     * 模板ID。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 付费模式 0手动在线付费，1使用余额付费。
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 自动续费开关。有两个可选值：
0 表示关闭，不自动续费（默认值）
1 表示开启，将自动续费
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * true： 开启60天内禁止转移注册商锁定
false：关闭60天内禁止转移注册商锁定
默认 true
                     */
                    bool m_lockTransfer;
                    bool m_lockTransferHasBeenSet;

                    /**
                     * 是否开启更新锁：0=默认不开启，1=开启
                     */
                    int64_t m_updateProhibition;
                    bool m_updateProhibitionHasBeenSet;

                    /**
                     * 是否开启转移锁：0=默认不开启，1=开启
                     */
                    int64_t m_transferProhibition;
                    bool m_transferProhibitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_TRANSFERINDOMAINBATCHREQUEST_H_
