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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_PACKAGEINFO_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_PACKAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * 结构体（PackageInfo）记录了设备拥有的有效套餐信息，包括云存开启状态、云存类型、云存回看时长、云存套餐过期时间
                */
                class PackageInfo : public AbstractModel
                {
                public:
                    PackageInfo();
                    ~PackageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云存开启状态，0为未开启，2为正在生效，1为已过期
注：这里只返回状态为0的数据
                     * @return Status 云存开启状态，0为未开启，2为正在生效，1为已过期
注：这里只返回状态为0的数据
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置云存开启状态，0为未开启，2为正在生效，1为已过期
注：这里只返回状态为0的数据
                     * @param _status 云存开启状态，0为未开启，2为正在生效，1为已过期
注：这里只返回状态为0的数据
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取云存类型，1为全时云存，2为事件云存
                     * @return CSType 云存类型，1为全时云存，2为事件云存
                     * 
                     */
                    uint64_t GetCSType() const;

                    /**
                     * 设置云存类型，1为全时云存，2为事件云存
                     * @param _cSType 云存类型，1为全时云存，2为事件云存
                     * 
                     */
                    void SetCSType(const uint64_t& _cSType);

                    /**
                     * 判断参数 CSType 是否已赋值
                     * @return CSType 是否已赋值
                     * 
                     */
                    bool CSTypeHasBeenSet() const;

                    /**
                     * 获取云存回看时长
                     * @return CSShiftDuration 云存回看时长
                     * 
                     */
                    uint64_t GetCSShiftDuration() const;

                    /**
                     * 设置云存回看时长
                     * @param _cSShiftDuration 云存回看时长
                     * 
                     */
                    void SetCSShiftDuration(const uint64_t& _cSShiftDuration);

                    /**
                     * 判断参数 CSShiftDuration 是否已赋值
                     * @return CSShiftDuration 是否已赋值
                     * 
                     */
                    bool CSShiftDurationHasBeenSet() const;

                    /**
                     * 获取云存套餐过期时间
                     * @return CSExpiredTime 云存套餐过期时间
                     * 
                     */
                    int64_t GetCSExpiredTime() const;

                    /**
                     * 设置云存套餐过期时间
                     * @param _cSExpiredTime 云存套餐过期时间
                     * 
                     */
                    void SetCSExpiredTime(const int64_t& _cSExpiredTime);

                    /**
                     * 判断参数 CSExpiredTime 是否已赋值
                     * @return CSExpiredTime 是否已赋值
                     * 
                     */
                    bool CSExpiredTimeHasBeenSet() const;

                    /**
                     * 获取云存套餐创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt 云存套餐创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreatedAt() const;

                    /**
                     * 设置云存套餐创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdAt 云存套餐创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedAt(const int64_t& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取云存套餐更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedAt 云存套餐更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdatedAt() const;

                    /**
                     * 设置云存套餐更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedAt 云存套餐更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedAt(const int64_t& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取套餐id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageId 套餐id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置套餐id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packageId 套餐id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取订单id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderId 订单id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orderId 订单id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取通道id
                     * @return ChannelId 通道id
                     * 
                     */
                    uint64_t GetChannelId() const;

                    /**
                     * 设置通道id
                     * @param _channelId 通道id
                     * 
                     */
                    void SetChannelId(const uint64_t& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CSUserId 用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCSUserId() const;

                    /**
                     * 设置用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cSUserId 用户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCSUserId(const std::string& _cSUserId);

                    /**
                     * 判断参数 CSUserId 是否已赋值
                     * @return CSUserId 是否已赋值
                     * 
                     */
                    bool CSUserIdHasBeenSet() const;

                private:

                    /**
                     * 云存开启状态，0为未开启，2为正在生效，1为已过期
注：这里只返回状态为0的数据
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 云存类型，1为全时云存，2为事件云存
                     */
                    uint64_t m_cSType;
                    bool m_cSTypeHasBeenSet;

                    /**
                     * 云存回看时长
                     */
                    uint64_t m_cSShiftDuration;
                    bool m_cSShiftDurationHasBeenSet;

                    /**
                     * 云存套餐过期时间
                     */
                    int64_t m_cSExpiredTime;
                    bool m_cSExpiredTimeHasBeenSet;

                    /**
                     * 云存套餐创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 云存套餐更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 套餐id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 订单id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 通道id
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 用户id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cSUserId;
                    bool m_cSUserIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_PACKAGEINFO_H_
