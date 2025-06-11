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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_VASLISTITEM_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_VASLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 增值服务信息
                */
                class VasListItem : public AbstractModel
                {
                public:
                    VasListItem();
                    ~VasListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规格总数
                     * @return LimitNumber 规格总数
                     * 
                     */
                    uint64_t GetLimitNumber() const;

                    /**
                     * 设置规格总数
                     * @param _limitNumber 规格总数
                     * 
                     */
                    void SetLimitNumber(const uint64_t& _limitNumber);

                    /**
                     * 判断参数 LimitNumber 是否已赋值
                     * @return LimitNumber 是否已赋值
                     * 
                     */
                    bool LimitNumberHasBeenSet() const;

                    /**
                     * 获取购买时间
                     * @return StartedAt 购买时间
                     * 
                     */
                    std::string GetStartedAt() const;

                    /**
                     * 设置购买时间
                     * @param _startedAt 购买时间
                     * 
                     */
                    void SetStartedAt(const std::string& _startedAt);

                    /**
                     * 判断参数 StartedAt 是否已赋值
                     * @return StartedAt 是否已赋值
                     * 
                     */
                    bool StartedAtHasBeenSet() const;

                    /**
                     * 获取到期时间
                     * @return EndedAt 到期时间
                     * 
                     */
                    std::string GetEndedAt() const;

                    /**
                     * 设置到期时间
                     * @param _endedAt 到期时间
                     * 
                     */
                    void SetEndedAt(const std::string& _endedAt);

                    /**
                     * 判断参数 EndedAt 是否已赋值
                     * @return EndedAt 是否已赋值
                     * 
                     */
                    bool EndedAtHasBeenSet() const;

                    /**
                     * 获取资源唯一 ID
                     * @return ResourceId 资源唯一 ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源唯一 ID
                     * @param _resourceId 资源唯一 ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取自动续费标识
                     * @return AutoRenew 自动续费标识
                     * 
                     */
                    std::string GetAutoRenew() const;

                    /**
                     * 设置自动续费标识
                     * @param _autoRenew 自动续费标识
                     * 
                     */
                    void SetAutoRenew(const std::string& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取已绑定的域名
                     * @return Domain 已绑定的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置已绑定的域名
                     * @param _domain 已绑定的域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取绑定类型
                     * @return BindType 绑定类型
                     * 
                     */
                    std::string GetBindType() const;

                    /**
                     * 设置绑定类型
                     * @param _bindType 绑定类型
                     * 
                     */
                    void SetBindType(const std::string& _bindType);

                    /**
                     * 判断参数 BindType 是否已赋值
                     * @return BindType 是否已赋值
                     * 
                     */
                    bool BindTypeHasBeenSet() const;

                    /**
                     * 获取增值服务类型
                     * @return Key 增值服务类型
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置增值服务类型
                     * @param _key 增值服务类型
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取增值服务名
                     * @return Name 增值服务名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置增值服务名
                     * @param _name 增值服务名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取是否可续费
                     * @return CanRenew 是否可续费
                     * 
                     */
                    bool GetCanRenew() const;

                    /**
                     * 设置是否可续费
                     * @param _canRenew 是否可续费
                     * 
                     */
                    void SetCanRenew(const bool& _canRenew);

                    /**
                     * 判断参数 CanRenew 是否已赋值
                     * @return CanRenew 是否已赋值
                     * 
                     */
                    bool CanRenewHasBeenSet() const;

                    /**
                     * 获取是否只允许付费套餐域名可购买
                     * @return VipDomain 是否只允许付费套餐域名可购买
                     * 
                     */
                    bool GetVipDomain() const;

                    /**
                     * 设置是否只允许付费套餐域名可购买
                     * @param _vipDomain 是否只允许付费套餐域名可购买
                     * 
                     */
                    void SetVipDomain(const bool& _vipDomain);

                    /**
                     * 判断参数 VipDomain 是否已赋值
                     * @return VipDomain 是否已赋值
                     * 
                     */
                    bool VipDomainHasBeenSet() const;

                private:

                    /**
                     * 规格总数
                     */
                    uint64_t m_limitNumber;
                    bool m_limitNumberHasBeenSet;

                    /**
                     * 购买时间
                     */
                    std::string m_startedAt;
                    bool m_startedAtHasBeenSet;

                    /**
                     * 到期时间
                     */
                    std::string m_endedAt;
                    bool m_endedAtHasBeenSet;

                    /**
                     * 资源唯一 ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 自动续费标识
                     */
                    std::string m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * 已绑定的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 绑定类型
                     */
                    std::string m_bindType;
                    bool m_bindTypeHasBeenSet;

                    /**
                     * 增值服务类型
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 增值服务名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 是否可续费
                     */
                    bool m_canRenew;
                    bool m_canRenewHasBeenSet;

                    /**
                     * 是否只允许付费套餐域名可购买
                     */
                    bool m_vipDomain;
                    bool m_vipDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_VASLISTITEM_H_
