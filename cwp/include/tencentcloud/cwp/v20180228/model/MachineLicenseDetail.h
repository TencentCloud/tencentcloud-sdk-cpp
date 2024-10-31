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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MACHINELICENSEDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MACHINELICENSEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 机器绑定授权信息
                */
                class MachineLicenseDetail : public AbstractModel
                {
                public:
                    MachineLicenseDetail();
                    ~MachineLicenseDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主机quuid
                     * @return Quuid 主机quuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机quuid
                     * @param _quuid 主机quuid
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取计费模式, 0 按量计费 , 1 预付费
                     * @return PayMode 计费模式, 0 按量计费 , 1 预付费
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置计费模式, 0 按量计费 , 1 预付费
                     * @param _payMode 计费模式, 0 按量计费 , 1 预付费
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return ResourceId 资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID
                     * @param _resourceId 资源ID
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
                     * 获取授权类型
                     * @return LicenseType 授权类型
                     * 
                     */
                    uint64_t GetLicenseType() const;

                    /**
                     * 设置授权类型
                     * @param _licenseType 授权类型
                     * 
                     */
                    void SetLicenseType(const uint64_t& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取订单类型,0 默认计费订单 1 试用订单, 2 赠送 3 体验
                     * @return SourceType 订单类型,0 默认计费订单 1 试用订单, 2 赠送 3 体验
                     * 
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置订单类型,0 默认计费订单 1 试用订单, 2 赠送 3 体验
                     * @param _sourceType 订单类型,0 默认计费订单 1 试用订单, 2 赠送 3 体验
                     * 
                     */
                    void SetSourceType(const uint64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取废弃字段,
                     * @return InquireKey 废弃字段,
                     * 
                     */
                    std::string GetInquireKey() const;

                    /**
                     * 设置废弃字段,
                     * @param _inquireKey 废弃字段,
                     * 
                     */
                    void SetInquireKey(const std::string& _inquireKey);

                    /**
                     * 判断参数 InquireKey 是否已赋值
                     * @return InquireKey 是否已赋值
                     * 
                     */
                    bool InquireKeyHasBeenSet() const;

                    /**
                     * 获取自动续费标识 0 默认不自动付费, 1 自动付费 2 手动设置不续费
                     * @return AutoRenewFlag 自动续费标识 0 默认不自动付费, 1 自动付费 2 手动设置不续费
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标识 0 默认不自动付费, 1 自动付费 2 手动设置不续费
                     * @param _autoRenewFlag 自动续费标识 0 默认不自动付费, 1 自动付费 2 手动设置不续费
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取到期时间,按量付费该值为空
                     * @return Deadline 到期时间,按量付费该值为空
                     * 
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置到期时间,按量付费该值为空
                     * @param _deadline 到期时间,按量付费该值为空
                     * 
                     */
                    void SetDeadline(const std::string& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取购买时间
                     * @return BuyTime 购买时间
                     * 
                     */
                    std::string GetBuyTime() const;

                    /**
                     * 设置购买时间
                     * @param _buyTime 购买时间
                     * 
                     */
                    void SetBuyTime(const std::string& _buyTime);

                    /**
                     * 判断参数 BuyTime 是否已赋值
                     * @return BuyTime 是否已赋值
                     * 
                     */
                    bool BuyTimeHasBeenSet() const;

                    /**
                     * 获取授权数量
                     * @return LicenseCnt 授权数量
                     * 
                     */
                    uint64_t GetLicenseCnt() const;

                    /**
                     * 设置授权数量
                     * @param _licenseCnt 授权数量
                     * 
                     */
                    void SetLicenseCnt(const uint64_t& _licenseCnt);

                    /**
                     * 判断参数 LicenseCnt 是否已赋值
                     * @return LicenseCnt 是否已赋值
                     * 
                     */
                    bool LicenseCntHasBeenSet() const;

                private:

                    /**
                     * 主机quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 计费模式, 0 按量计费 , 1 预付费
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 授权类型
                     */
                    uint64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * 订单类型,0 默认计费订单 1 试用订单, 2 赠送 3 体验
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 废弃字段,
                     */
                    std::string m_inquireKey;
                    bool m_inquireKeyHasBeenSet;

                    /**
                     * 自动续费标识 0 默认不自动付费, 1 自动付费 2 手动设置不续费
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 到期时间,按量付费该值为空
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 购买时间
                     */
                    std::string m_buyTime;
                    bool m_buyTimeHasBeenSet;

                    /**
                     * 授权数量
                     */
                    uint64_t m_licenseCnt;
                    bool m_licenseCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MACHINELICENSEDETAIL_H_
