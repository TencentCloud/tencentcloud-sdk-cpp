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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_COUPON_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_COUPON_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Amount.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 优惠券
                */
                class Coupon : public AbstractModel
                {
                public:
                    Coupon();
                    ~Coupon() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>优惠券ID</p>
                     * @return CouponId <p>优惠券ID</p>
                     * 
                     */
                    std::string GetCouponId() const;

                    /**
                     * 设置<p>优惠券ID</p>
                     * @param _couponId <p>优惠券ID</p>
                     * 
                     */
                    void SetCouponId(const std::string& _couponId);

                    /**
                     * 判断参数 CouponId 是否已赋值
                     * @return CouponId 是否已赋值
                     * 
                     */
                    bool CouponIdHasBeenSet() const;

                    /**
                     * 获取<p>优惠券名称</p>
                     * @return CouponName <p>优惠券名称</p>
                     * 
                     */
                    std::string GetCouponName() const;

                    /**
                     * 设置<p>优惠券名称</p>
                     * @param _couponName <p>优惠券名称</p>
                     * 
                     */
                    void SetCouponName(const std::string& _couponName);

                    /**
                     * 判断参数 CouponName 是否已赋值
                     * @return CouponName 是否已赋值
                     * 
                     */
                    bool CouponNameHasBeenSet() const;

                    /**
                     * 获取<p>优惠券开始时间</p><p>参数格式：符合ISO 8601标准的带UTC时区的毫秒级时间</p>
                     * @return StartTime <p>优惠券开始时间</p><p>参数格式：符合ISO 8601标准的带UTC时区的毫秒级时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>优惠券开始时间</p><p>参数格式：符合ISO 8601标准的带UTC时区的毫秒级时间</p>
                     * @param _startTime <p>优惠券开始时间</p><p>参数格式：符合ISO 8601标准的带UTC时区的毫秒级时间</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>优惠券过期时间</p><p>参数格式：符合ISO 8601标准的带UTC时区的毫秒级时间</p>
                     * @return ExpireTime <p>优惠券过期时间</p><p>参数格式：符合ISO 8601标准的带UTC时区的毫秒级时间</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>优惠券过期时间</p><p>参数格式：符合ISO 8601标准的带UTC时区的毫秒级时间</p>
                     * @param _expireTime <p>优惠券过期时间</p><p>参数格式：符合ISO 8601标准的带UTC时区的毫秒级时间</p>
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>折扣百分比，如果折扣为 10%，则发送“0.1”</p>
                     * @return PercentageRate <p>折扣百分比，如果折扣为 10%，则发送“0.1”</p>
                     * 
                     */
                    double GetPercentageRate() const;

                    /**
                     * 设置<p>折扣百分比，如果折扣为 10%，则发送“0.1”</p>
                     * @param _percentageRate <p>折扣百分比，如果折扣为 10%，则发送“0.1”</p>
                     * 
                     */
                    void SetPercentageRate(const double& _percentageRate);

                    /**
                     * 判断参数 PercentageRate 是否已赋值
                     * @return PercentageRate 是否已赋值
                     * 
                     */
                    bool PercentageRateHasBeenSet() const;

                    /**
                     * 获取<p>折扣金额</p>
                     * @return DiscountAmount <p>折扣金额</p>
                     * 
                     */
                    Amount GetDiscountAmount() const;

                    /**
                     * 设置<p>折扣金额</p>
                     * @param _discountAmount <p>折扣金额</p>
                     * 
                     */
                    void SetDiscountAmount(const Amount& _discountAmount);

                    /**
                     * 判断参数 DiscountAmount 是否已赋值
                     * @return DiscountAmount 是否已赋值
                     * 
                     */
                    bool DiscountAmountHasBeenSet() const;

                    /**
                     * 获取<p>优惠券门槛</p>
                     * @return Threshold <p>优惠券门槛</p>
                     * 
                     */
                    double GetThreshold() const;

                    /**
                     * 设置<p>优惠券门槛</p>
                     * @param _threshold <p>优惠券门槛</p>
                     * 
                     */
                    void SetThreshold(const double& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                private:

                    /**
                     * <p>优惠券ID</p>
                     */
                    std::string m_couponId;
                    bool m_couponIdHasBeenSet;

                    /**
                     * <p>优惠券名称</p>
                     */
                    std::string m_couponName;
                    bool m_couponNameHasBeenSet;

                    /**
                     * <p>优惠券开始时间</p><p>参数格式：符合ISO 8601标准的带UTC时区的毫秒级时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>优惠券过期时间</p><p>参数格式：符合ISO 8601标准的带UTC时区的毫秒级时间</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>折扣百分比，如果折扣为 10%，则发送“0.1”</p>
                     */
                    double m_percentageRate;
                    bool m_percentageRateHasBeenSet;

                    /**
                     * <p>折扣金额</p>
                     */
                    Amount m_discountAmount;
                    bool m_discountAmountHasBeenSet;

                    /**
                     * <p>优惠券门槛</p>
                     */
                    double m_threshold;
                    bool m_thresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_COUPON_H_
