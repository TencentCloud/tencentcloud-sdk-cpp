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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PURCHASEVIDEOPACKAGEREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PURCHASEVIDEOPACKAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * PurchaseVideoPackage请求参数结构体
                */
                class PurchaseVideoPackageRequest : public AbstractModel
                {
                public:
                    PurchaseVideoPackageRequest();
                    ~PurchaseVideoPackageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>存储天数（每份录像保留的天数）</p><p>枚举值：</p><ul><li>3： 存储3天</li><li>7： 存储7天</li><li>15： 存储15天</li><li>30： 存储30天</li></ul>
                     * @return RetentionDays <p>存储天数（每份录像保留的天数）</p><p>枚举值：</p><ul><li>3： 存储3天</li><li>7： 存储7天</li><li>15： 存储15天</li><li>30： 存储30天</li></ul>
                     * 
                     */
                    uint64_t GetRetentionDays() const;

                    /**
                     * 设置<p>存储天数（每份录像保留的天数）</p><p>枚举值：</p><ul><li>3： 存储3天</li><li>7： 存储7天</li><li>15： 存储15天</li><li>30： 存储30天</li></ul>
                     * @param _retentionDays <p>存储天数（每份录像保留的天数）</p><p>枚举值：</p><ul><li>3： 存储3天</li><li>7： 存储7天</li><li>15： 存储15天</li><li>30： 存储30天</li></ul>
                     * 
                     */
                    void SetRetentionDays(const uint64_t& _retentionDays);

                    /**
                     * 判断参数 RetentionDays 是否已赋值
                     * @return RetentionDays 是否已赋值
                     * 
                     */
                    bool RetentionDaysHasBeenSet() const;

                    /**
                     * 获取<p>录制模式：low_power=2 / event=8 / full_time=24，单位：小时/日</p><p>枚举值：</p><ul><li>low_power： 2小时/日</li><li>event： 8小时/日</li><li>full_time： 24小时/日</li></ul>
                     * @return RecordingMode <p>录制模式：low_power=2 / event=8 / full_time=24，单位：小时/日</p><p>枚举值：</p><ul><li>low_power： 2小时/日</li><li>event： 8小时/日</li><li>full_time： 24小时/日</li></ul>
                     * 
                     */
                    std::string GetRecordingMode() const;

                    /**
                     * 设置<p>录制模式：low_power=2 / event=8 / full_time=24，单位：小时/日</p><p>枚举值：</p><ul><li>low_power： 2小时/日</li><li>event： 8小时/日</li><li>full_time： 24小时/日</li></ul>
                     * @param _recordingMode <p>录制模式：low_power=2 / event=8 / full_time=24，单位：小时/日</p><p>枚举值：</p><ul><li>low_power： 2小时/日</li><li>event： 8小时/日</li><li>full_time： 24小时/日</li></ul>
                     * 
                     */
                    void SetRecordingMode(const std::string& _recordingMode);

                    /**
                     * 判断参数 RecordingMode 是否已赋值
                     * @return RecordingMode 是否已赋值
                     * 
                     */
                    bool RecordingModeHasBeenSet() const;

                    /**
                     * 获取<p>码率（视频必填）</p><p>枚举值：</p><ul><li>0.5m： 0.5Mbps</li><li>1m： 1Mbps</li><li>1.5m： 1.5Mbps</li><li>2m： 2Mbps</li></ul>
                     * @return Bitrate <p>码率（视频必填）</p><p>枚举值：</p><ul><li>0.5m： 0.5Mbps</li><li>1m： 1Mbps</li><li>1.5m： 1.5Mbps</li><li>2m： 2Mbps</li></ul>
                     * 
                     */
                    std::string GetBitrate() const;

                    /**
                     * 设置<p>码率（视频必填）</p><p>枚举值：</p><ul><li>0.5m： 0.5Mbps</li><li>1m： 1Mbps</li><li>1.5m： 1.5Mbps</li><li>2m： 2Mbps</li></ul>
                     * @param _bitrate <p>码率（视频必填）</p><p>枚举值：</p><ul><li>0.5m： 0.5Mbps</li><li>1m： 1Mbps</li><li>1.5m： 1.5Mbps</li><li>2m： 2Mbps</li></ul>
                     * 
                     */
                    void SetBitrate(const std::string& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取<p>产品 ID</p>
                     * @return ProductId <p>产品 ID</p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>产品 ID</p>
                     * @param _productId <p>产品 ID</p>
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取<p>设备名</p>
                     * @return DeviceName <p>设备名</p>
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>设备名</p>
                     * @param _deviceName <p>设备名</p>
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取<p>卡有效期类型：monthly_card=月卡（12 个月有效期），annual_card=年卡（24 个月有效期）</p>
                     * @return ValidityPeriod <p>卡有效期类型：monthly_card=月卡（12 个月有效期），annual_card=年卡（24 个月有效期）</p>
                     * 
                     */
                    std::string GetValidityPeriod() const;

                    /**
                     * 设置<p>卡有效期类型：monthly_card=月卡（12 个月有效期），annual_card=年卡（24 个月有效期）</p>
                     * @param _validityPeriod <p>卡有效期类型：monthly_card=月卡（12 个月有效期），annual_card=年卡（24 个月有效期）</p>
                     * 
                     */
                    void SetValidityPeriod(const std::string& _validityPeriod);

                    /**
                     * 判断参数 ValidityPeriod 是否已赋值
                     * @return ValidityPeriod 是否已赋值
                     * 
                     */
                    bool ValidityPeriodHasBeenSet() const;

                    /**
                     * 获取<p>同规格资源包个数（默认 1）</p>
                     * @return GoodsNum <p>同规格资源包个数（默认 1）</p>
                     * 
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置<p>同规格资源包个数（默认 1）</p>
                     * @param _goodsNum <p>同规格资源包个数（默认 1）</p>
                     * 
                     */
                    void SetGoodsNum(const uint64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取<p>通道 ID（多通道场景必填，否则填 0）</p>
                     * @return ChannelId <p>通道 ID（多通道场景必填，否则填 0）</p>
                     * 
                     */
                    uint64_t GetChannelId() const;

                    /**
                     * 设置<p>通道 ID（多通道场景必填，否则填 0）</p>
                     * @param _channelId <p>通道 ID（多通道场景必填，否则填 0）</p>
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
                     * 获取<p>存储地域（可选）</p>
                     * @return StorageRegion <p>存储地域（可选）</p>
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置<p>存储地域（可选）</p>
                     * @param _storageRegion <p>存储地域（可选）</p>
                     * 
                     */
                    void SetStorageRegion(const std::string& _storageRegion);

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     * 
                     */
                    bool StorageRegionHasBeenSet() const;

                    /**
                     * 获取<p>套餐生效策略：&quot;&quot;=默认语义，front=插队生效，end=排队末尾</p>
                     * @return PackageQueue <p>套餐生效策略：&quot;&quot;=默认语义，front=插队生效，end=排队末尾</p>
                     * 
                     */
                    std::string GetPackageQueue() const;

                    /**
                     * 设置<p>套餐生效策略：&quot;&quot;=默认语义，front=插队生效，end=排队末尾</p>
                     * @param _packageQueue <p>套餐生效策略：&quot;&quot;=默认语义，front=插队生效，end=排队末尾</p>
                     * 
                     */
                    void SetPackageQueue(const std::string& _packageQueue);

                    /**
                     * 判断参数 PackageQueue 是否已赋值
                     * @return PackageQueue 是否已赋值
                     * 
                     */
                    bool PackageQueueHasBeenSet() const;

                    /**
                     * 获取<p>覆盖当前生效套餐：0=否，1=是</p>
                     * @return Override <p>覆盖当前生效套餐：0=否，1=是</p>
                     * 
                     */
                    uint64_t GetOverride() const;

                    /**
                     * 设置<p>覆盖当前生效套餐：0=否，1=是</p>
                     * @param _override <p>覆盖当前生效套餐：0=否，1=是</p>
                     * 
                     */
                    void SetOverride(const uint64_t& _override);

                    /**
                     * 判断参数 Override 是否已赋值
                     * @return Override 是否已赋值
                     * 
                     */
                    bool OverrideHasBeenSet() const;

                    /**
                     * 获取<p>订单id</p>
                     * @return OrderId <p>订单id</p>
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置<p>订单id</p>
                     * @param _orderId <p>订单id</p>
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                private:

                    /**
                     * <p>存储天数（每份录像保留的天数）</p><p>枚举值：</p><ul><li>3： 存储3天</li><li>7： 存储7天</li><li>15： 存储15天</li><li>30： 存储30天</li></ul>
                     */
                    uint64_t m_retentionDays;
                    bool m_retentionDaysHasBeenSet;

                    /**
                     * <p>录制模式：low_power=2 / event=8 / full_time=24，单位：小时/日</p><p>枚举值：</p><ul><li>low_power： 2小时/日</li><li>event： 8小时/日</li><li>full_time： 24小时/日</li></ul>
                     */
                    std::string m_recordingMode;
                    bool m_recordingModeHasBeenSet;

                    /**
                     * <p>码率（视频必填）</p><p>枚举值：</p><ul><li>0.5m： 0.5Mbps</li><li>1m： 1Mbps</li><li>1.5m： 1.5Mbps</li><li>2m： 2Mbps</li></ul>
                     */
                    std::string m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * <p>产品 ID</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>设备名</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>卡有效期类型：monthly_card=月卡（12 个月有效期），annual_card=年卡（24 个月有效期）</p>
                     */
                    std::string m_validityPeriod;
                    bool m_validityPeriodHasBeenSet;

                    /**
                     * <p>同规格资源包个数（默认 1）</p>
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * <p>通道 ID（多通道场景必填，否则填 0）</p>
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * <p>存储地域（可选）</p>
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * <p>套餐生效策略：&quot;&quot;=默认语义，front=插队生效，end=排队末尾</p>
                     */
                    std::string m_packageQueue;
                    bool m_packageQueueHasBeenSet;

                    /**
                     * <p>覆盖当前生效套餐：0=否，1=是</p>
                     */
                    uint64_t m_override;
                    bool m_overrideHasBeenSet;

                    /**
                     * <p>订单id</p>
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PURCHASEVIDEOPACKAGEREQUEST_H_
