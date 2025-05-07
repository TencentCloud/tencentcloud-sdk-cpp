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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DOMAINLIST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DOMAINLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 域名列表
                */
                class DomainList : public AbstractModel
                {
                public:
                    DomainList();
                    ~DomainList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否是溢价域名：
ture 是    
false 不是
                     * @return IsPremium 是否是溢价域名：
ture 是    
false 不是
                     * 
                     */
                    bool GetIsPremium() const;

                    /**
                     * 设置是否是溢价域名：
ture 是    
false 不是
                     * @param _isPremium 是否是溢价域名：
ture 是    
false 不是
                     * 
                     */
                    void SetIsPremium(const bool& _isPremium);

                    /**
                     * 判断参数 IsPremium 是否已赋值
                     * @return IsPremium 是否已赋值
                     * 
                     */
                    bool IsPremiumHasBeenSet() const;

                    /**
                     * 获取域名资源ID。
                     * @return DomainId 域名资源ID。
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置域名资源ID。
                     * @param _domainId 域名资源ID。
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取域名名称。
                     * @return DomainName 域名名称。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置域名名称。
                     * @param _domainName 域名名称。
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取是否已设置自动续费 。
0：未设置 
1：已设置
2：设置后，关闭
                     * @return AutoRenew 是否已设置自动续费 。
0：未设置 
1：已设置
2：设置后，关闭
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置是否已设置自动续费 。
0：未设置 
1：已设置
2：设置后，关闭
                     * @param _autoRenew 是否已设置自动续费 。
0：未设置 
1：已设置
2：设置后，关闭
                     * 
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取注册时间。
格式:YYYY-MM-DD HH:mm:ss
                     * @return CreationDate 注册时间。
格式:YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetCreationDate() const;

                    /**
                     * 设置注册时间。
格式:YYYY-MM-DD HH:mm:ss
                     * @param _creationDate 注册时间。
格式:YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    void SetCreationDate(const std::string& _creationDate);

                    /**
                     * 判断参数 CreationDate 是否已赋值
                     * @return CreationDate 是否已赋值
                     * 
                     */
                    bool CreationDateHasBeenSet() const;

                    /**
                     * 获取到期时间。
格式:YYYY-MM-DD HH:mm:ss
                     * @return ExpirationDate 到期时间。
格式:YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetExpirationDate() const;

                    /**
                     * 设置到期时间。
格式:YYYY-MM-DD HH:mm:ss
                     * @param _expirationDate 到期时间。
格式:YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    void SetExpirationDate(const std::string& _expirationDate);

                    /**
                     * 判断参数 ExpirationDate 是否已赋值
                     * @return ExpirationDate 是否已赋值
                     * 
                     */
                    bool ExpirationDateHasBeenSet() const;

                    /**
                     * 获取域名后缀，根据具体域名确定
例如:
123.com 后缀则为.com
123.com.cn 后缀则为.com.cn
123.中国 后缀则为.中国

                     * @return Tld 域名后缀，根据具体域名确定
例如:
123.com 后缀则为.com
123.com.cn 后缀则为.com.cn
123.中国 后缀则为.中国

                     * 
                     */
                    std::string GetTld() const;

                    /**
                     * 设置域名后缀，根据具体域名确定
例如:
123.com 后缀则为.com
123.com.cn 后缀则为.com.cn
123.中国 后缀则为.中国

                     * @param _tld 域名后缀，根据具体域名确定
例如:
123.com 后缀则为.com
123.com.cn 后缀则为.com.cn
123.中国 后缀则为.中国

                     * 
                     */
                    void SetTld(const std::string& _tld);

                    /**
                     * 判断参数 Tld 是否已赋值
                     * @return Tld 是否已赋值
                     * 
                     */
                    bool TldHasBeenSet() const;

                    /**
                     * 获取编码后的后缀（中文会进行Punycode编码）根据具体域名确定
例如:
123.com 后缀则为.com
123.com.cn 后缀则为.com.cn
123.中国 后缀则为.xn--fiqs8s
                     * @return CodeTld 编码后的后缀（中文会进行Punycode编码）根据具体域名确定
例如:
123.com 后缀则为.com
123.com.cn 后缀则为.com.cn
123.中国 后缀则为.xn--fiqs8s
                     * 
                     */
                    std::string GetCodeTld() const;

                    /**
                     * 设置编码后的后缀（中文会进行Punycode编码）根据具体域名确定
例如:
123.com 后缀则为.com
123.com.cn 后缀则为.com.cn
123.中国 后缀则为.xn--fiqs8s
                     * @param _codeTld 编码后的后缀（中文会进行Punycode编码）根据具体域名确定
例如:
123.com 后缀则为.com
123.com.cn 后缀则为.com.cn
123.中国 后缀则为.xn--fiqs8s
                     * 
                     */
                    void SetCodeTld(const std::string& _codeTld);

                    /**
                     * 判断参数 CodeTld 是否已赋值
                     * @return CodeTld 是否已赋值
                     * 
                     */
                    bool CodeTldHasBeenSet() const;

                    /**
                     * 获取域名购买状态。
ok：正常
AboutToExpire: 即将到期
RegisterPending：注册中
RegisterDoing：注册中
RegisterFailed：注册失败
RenewPending：续费期
RenewDoing：续费中
RedemptionPending：赎回期
RedemptionDoing：赎回中
TransferPending：转入中
TransferTransing：转入中
TransferFailed：转入失败
                     * @return BuyStatus 域名购买状态。
ok：正常
AboutToExpire: 即将到期
RegisterPending：注册中
RegisterDoing：注册中
RegisterFailed：注册失败
RenewPending：续费期
RenewDoing：续费中
RedemptionPending：赎回期
RedemptionDoing：赎回中
TransferPending：转入中
TransferTransing：转入中
TransferFailed：转入失败
                     * 
                     */
                    std::string GetBuyStatus() const;

                    /**
                     * 设置域名购买状态。
ok：正常
AboutToExpire: 即将到期
RegisterPending：注册中
RegisterDoing：注册中
RegisterFailed：注册失败
RenewPending：续费期
RenewDoing：续费中
RedemptionPending：赎回期
RedemptionDoing：赎回中
TransferPending：转入中
TransferTransing：转入中
TransferFailed：转入失败
                     * @param _buyStatus 域名购买状态。
ok：正常
AboutToExpire: 即将到期
RegisterPending：注册中
RegisterDoing：注册中
RegisterFailed：注册失败
RenewPending：续费期
RenewDoing：续费中
RedemptionPending：赎回期
RedemptionDoing：赎回中
TransferPending：转入中
TransferTransing：转入中
TransferFailed：转入失败
                     * 
                     */
                    void SetBuyStatus(const std::string& _buyStatus);

                    /**
                     * 判断参数 BuyStatus 是否已赋值
                     * @return BuyStatus 是否已赋值
                     * 
                     */
                    bool BuyStatusHasBeenSet() const;

                private:

                    /**
                     * 是否是溢价域名：
ture 是    
false 不是
                     */
                    bool m_isPremium;
                    bool m_isPremiumHasBeenSet;

                    /**
                     * 域名资源ID。
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 域名名称。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 是否已设置自动续费 。
0：未设置 
1：已设置
2：设置后，关闭
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * 注册时间。
格式:YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_creationDate;
                    bool m_creationDateHasBeenSet;

                    /**
                     * 到期时间。
格式:YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_expirationDate;
                    bool m_expirationDateHasBeenSet;

                    /**
                     * 域名后缀，根据具体域名确定
例如:
123.com 后缀则为.com
123.com.cn 后缀则为.com.cn
123.中国 后缀则为.中国

                     */
                    std::string m_tld;
                    bool m_tldHasBeenSet;

                    /**
                     * 编码后的后缀（中文会进行Punycode编码）根据具体域名确定
例如:
123.com 后缀则为.com
123.com.cn 后缀则为.com.cn
123.中国 后缀则为.xn--fiqs8s
                     */
                    std::string m_codeTld;
                    bool m_codeTldHasBeenSet;

                    /**
                     * 域名购买状态。
ok：正常
AboutToExpire: 即将到期
RegisterPending：注册中
RegisterDoing：注册中
RegisterFailed：注册失败
RenewPending：续费期
RenewDoing：续费中
RedemptionPending：赎回期
RedemptionDoing：赎回中
TransferPending：转入中
TransferTransing：转入中
TransferFailed：转入失败
                     */
                    std::string m_buyStatus;
                    bool m_buyStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DOMAINLIST_H_
