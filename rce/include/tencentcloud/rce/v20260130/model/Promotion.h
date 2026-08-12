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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_PROMOTION_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_PROMOTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Coupon.h>
#include <tencentcloud/rce/v20260130/model/CreditPoint.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 营销活动
                */
                class Promotion : public AbstractModel
                {
                public:
                    Promotion();
                    ~Promotion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>营销活动ID</p>
                     * @return PromotionId <p>营销活动ID</p>
                     * 
                     */
                    std::string GetPromotionId() const;

                    /**
                     * 设置<p>营销活动ID</p>
                     * @param _promotionId <p>营销活动ID</p>
                     * 
                     */
                    void SetPromotionId(const std::string& _promotionId);

                    /**
                     * 判断参数 PromotionId 是否已赋值
                     * @return PromotionId 是否已赋值
                     * 
                     */
                    bool PromotionIdHasBeenSet() const;

                    /**
                     * 获取<p>营销活动名称</p>
                     * @return PromotionName <p>营销活动名称</p>
                     * 
                     */
                    std::string GetPromotionName() const;

                    /**
                     * 设置<p>营销活动名称</p>
                     * @param _promotionName <p>营销活动名称</p>
                     * 
                     */
                    void SetPromotionName(const std::string& _promotionName);

                    /**
                     * 判断参数 PromotionName 是否已赋值
                     * @return PromotionName 是否已赋值
                     * 
                     */
                    bool PromotionNameHasBeenSet() const;

                    /**
                     * 获取<p>营销活动描述</p>
                     * @return Description <p>营销活动描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>营销活动描述</p>
                     * @param _description <p>营销活动描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>邀请人ID</p>
                     * @return InviterUserId <p>邀请人ID</p>
                     * 
                     */
                    std::string GetInviterUserId() const;

                    /**
                     * 设置<p>邀请人ID</p>
                     * @param _inviterUserId <p>邀请人ID</p>
                     * 
                     */
                    void SetInviterUserId(const std::string& _inviterUserId);

                    /**
                     * 判断参数 InviterUserId 是否已赋值
                     * @return InviterUserId 是否已赋值
                     * 
                     */
                    bool InviterUserIdHasBeenSet() const;

                    /**
                     * 获取<p>优惠券</p>
                     * @return Coupon <p>优惠券</p>
                     * 
                     */
                    Coupon GetCoupon() const;

                    /**
                     * 设置<p>优惠券</p>
                     * @param _coupon <p>优惠券</p>
                     * 
                     */
                    void SetCoupon(const Coupon& _coupon);

                    /**
                     * 判断参数 Coupon 是否已赋值
                     * @return Coupon 是否已赋值
                     * 
                     */
                    bool CouponHasBeenSet() const;

                    /**
                     * 获取<p>积分</p>
                     * @return CreditPoint <p>积分</p>
                     * 
                     */
                    CreditPoint GetCreditPoint() const;

                    /**
                     * 设置<p>积分</p>
                     * @param _creditPoint <p>积分</p>
                     * 
                     */
                    void SetCreditPoint(const CreditPoint& _creditPoint);

                    /**
                     * 判断参数 CreditPoint 是否已赋值
                     * @return CreditPoint 是否已赋值
                     * 
                     */
                    bool CreditPointHasBeenSet() const;

                private:

                    /**
                     * <p>营销活动ID</p>
                     */
                    std::string m_promotionId;
                    bool m_promotionIdHasBeenSet;

                    /**
                     * <p>营销活动名称</p>
                     */
                    std::string m_promotionName;
                    bool m_promotionNameHasBeenSet;

                    /**
                     * <p>营销活动描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>邀请人ID</p>
                     */
                    std::string m_inviterUserId;
                    bool m_inviterUserIdHasBeenSet;

                    /**
                     * <p>优惠券</p>
                     */
                    Coupon m_coupon;
                    bool m_couponHasBeenSet;

                    /**
                     * <p>积分</p>
                     */
                    CreditPoint m_creditPoint;
                    bool m_creditPointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_PROMOTION_H_
