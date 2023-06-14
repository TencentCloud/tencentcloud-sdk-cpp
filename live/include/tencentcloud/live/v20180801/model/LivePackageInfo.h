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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_LIVEPACKAGEINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_LIVEPACKAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 直播包信息。
                */
                class LivePackageInfo : public AbstractModel
                {
                public:
                    LivePackageInfo();
                    ~LivePackageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取包 ID。
                     * @return Id 包 ID。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置包 ID。
                     * @param _id 包 ID。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取总量。
注意：当为流量包时单位为字节。
当为转码包时单位为分钟。
                     * @return Total 总量。
注意：当为流量包时单位为字节。
当为转码包时单位为分钟。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置总量。
注意：当为流量包时单位为字节。
当为转码包时单位为分钟。
                     * @param _total 总量。
注意：当为流量包时单位为字节。
当为转码包时单位为分钟。
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取使用量。
注意：当为流量包时单位为字节。
当为转码包时单位为分钟。
当为连麦包时单位为小时。
                     * @return Used 使用量。
注意：当为流量包时单位为字节。
当为转码包时单位为分钟。
当为连麦包时单位为小时。
                     * 
                     */
                    int64_t GetUsed() const;

                    /**
                     * 设置使用量。
注意：当为流量包时单位为字节。
当为转码包时单位为分钟。
当为连麦包时单位为小时。
                     * @param _used 使用量。
注意：当为流量包时单位为字节。
当为转码包时单位为分钟。
当为连麦包时单位为小时。
                     * 
                     */
                    void SetUsed(const int64_t& _used);

                    /**
                     * 判断参数 Used 是否已赋值
                     * @return Used 是否已赋值
                     * 
                     */
                    bool UsedHasBeenSet() const;

                    /**
                     * 获取剩余量。
注意：当为流量包时单位为字节。
当为转码包时单位为分钟。
当为连麦包时单位为小时。
                     * @return Left 剩余量。
注意：当为流量包时单位为字节。
当为转码包时单位为分钟。
当为连麦包时单位为小时。
                     * 
                     */
                    int64_t GetLeft() const;

                    /**
                     * 设置剩余量。
注意：当为流量包时单位为字节。
当为转码包时单位为分钟。
当为连麦包时单位为小时。
                     * @param _left 剩余量。
注意：当为流量包时单位为字节。
当为转码包时单位为分钟。
当为连麦包时单位为小时。
                     * 
                     */
                    void SetLeft(const int64_t& _left);

                    /**
                     * 判断参数 Left 是否已赋值
                     * @return Left 是否已赋值
                     * 
                     */
                    bool LeftHasBeenSet() const;

                    /**
                     * 获取购买时间。
注：此字段为北京时间（UTC+8时区）。
                     * @return BuyTime 购买时间。
注：此字段为北京时间（UTC+8时区）。
                     * 
                     */
                    std::string GetBuyTime() const;

                    /**
                     * 设置购买时间。
注：此字段为北京时间（UTC+8时区）。
                     * @param _buyTime 购买时间。
注：此字段为北京时间（UTC+8时区）。
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
                     * 获取过期时间。
注：此字段为北京时间（UTC+8时区）。
                     * @return ExpireTime 过期时间。
注：此字段为北京时间（UTC+8时区）。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间。
注：此字段为北京时间（UTC+8时区）。
                     * @param _expireTime 过期时间。
注：此字段为北京时间（UTC+8时区）。
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
                     * 获取包类型，可选值:
0: 流量包。
1: 普通转码包。
2: 极速高清包。
3: 连麦包。
                     * @return Type 包类型，可选值:
0: 流量包。
1: 普通转码包。
2: 极速高清包。
3: 连麦包。
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置包类型，可选值:
0: 流量包。
1: 普通转码包。
2: 极速高清包。
3: 连麦包。
                     * @param _type 包类型，可选值:
0: 流量包。
1: 普通转码包。
2: 极速高清包。
3: 连麦包。
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取包状态，可选值:
0: 未使用。
1: 使用中。
2: 已过期。
3: 已冻结。
4: 已耗尽。
5: 已退款
                     * @return Status 包状态，可选值:
0: 未使用。
1: 使用中。
2: 已过期。
3: 已冻结。
4: 已耗尽。
5: 已退款
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置包状态，可选值:
0: 未使用。
1: 使用中。
2: 已过期。
3: 已冻结。
4: 已耗尽。
5: 已退款
                     * @param _status 包状态，可选值:
0: 未使用。
1: 使用中。
2: 已过期。
3: 已冻结。
4: 已耗尽。
5: 已退款
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否自动续购。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WillRenew 是否自动续购。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWillRenew() const;

                    /**
                     * 设置是否自动续购。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _willRenew 是否自动续购。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWillRenew(const int64_t& _willRenew);

                    /**
                     * 判断参数 WillRenew 是否已赋值
                     * @return WillRenew 是否已赋值
                     * 
                     */
                    bool WillRenewHasBeenSet() const;

                    /**
                     * 获取续购状态。
1 ：续购成功。
0 ：尚未续购。
<0  : 续购失败。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RenewalResult 续购状态。
1 ：续购成功。
0 ：尚未续购。
<0  : 续购失败。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRenewalResult() const;

                    /**
                     * 设置续购状态。
1 ：续购成功。
0 ：尚未续购。
<0  : 续购失败。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _renewalResult 续购状态。
1 ：续购成功。
0 ：尚未续购。
<0  : 续购失败。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRenewalResult(const int64_t& _renewalResult);

                    /**
                     * 判断参数 RenewalResult 是否已赋值
                     * @return RenewalResult 是否已赋值
                     * 
                     */
                    bool RenewalResultHasBeenSet() const;

                private:

                    /**
                     * 包 ID。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 总量。
注意：当为流量包时单位为字节。
当为转码包时单位为分钟。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 使用量。
注意：当为流量包时单位为字节。
当为转码包时单位为分钟。
当为连麦包时单位为小时。
                     */
                    int64_t m_used;
                    bool m_usedHasBeenSet;

                    /**
                     * 剩余量。
注意：当为流量包时单位为字节。
当为转码包时单位为分钟。
当为连麦包时单位为小时。
                     */
                    int64_t m_left;
                    bool m_leftHasBeenSet;

                    /**
                     * 购买时间。
注：此字段为北京时间（UTC+8时区）。
                     */
                    std::string m_buyTime;
                    bool m_buyTimeHasBeenSet;

                    /**
                     * 过期时间。
注：此字段为北京时间（UTC+8时区）。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 包类型，可选值:
0: 流量包。
1: 普通转码包。
2: 极速高清包。
3: 连麦包。
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 包状态，可选值:
0: 未使用。
1: 使用中。
2: 已过期。
3: 已冻结。
4: 已耗尽。
5: 已退款
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否自动续购。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_willRenew;
                    bool m_willRenewHasBeenSet;

                    /**
                     * 续购状态。
1 ：续购成功。
0 ：尚未续购。
<0  : 续购失败。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_renewalResult;
                    bool m_renewalResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_LIVEPACKAGEINFO_H_
