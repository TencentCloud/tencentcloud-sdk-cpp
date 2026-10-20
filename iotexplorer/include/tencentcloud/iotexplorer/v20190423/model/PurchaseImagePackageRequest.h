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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PURCHASEIMAGEPACKAGEREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PURCHASEIMAGEPACKAGEREQUEST_H_

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
                * PurchaseImagePackage请求参数结构体
                */
                class PurchaseImagePackageRequest : public AbstractModel
                {
                public:
                    PurchaseImagePackageRequest();
                    ~PurchaseImagePackageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>存储天数</p><p>枚举值：</p><ul><li>3： 存储3天</li><li>7： 存储7天</li><li>15： 存储15天</li><li>30： 存储30天</li></ul>
                     * @return RetentionDays <p>存储天数</p><p>枚举值：</p><ul><li>3： 存储3天</li><li>7： 存储7天</li><li>15： 存储15天</li><li>30： 存储30天</li></ul>
                     * 
                     */
                    uint64_t GetRetentionDays() const;

                    /**
                     * 设置<p>存储天数</p><p>枚举值：</p><ul><li>3： 存储3天</li><li>7： 存储7天</li><li>15： 存储15天</li><li>30： 存储30天</li></ul>
                     * @param _retentionDays <p>存储天数</p><p>枚举值：</p><ul><li>3： 存储3天</li><li>7： 存储7天</li><li>15： 存储15天</li><li>30： 存储30天</li></ul>
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
                     * 获取<p>图片档位：每日可上传的图片张数上限，&quot;300&quot;=300 张/日，&quot;1000&quot;=1000 张/日</p>
                     * @return ImageCapacity <p>图片档位：每日可上传的图片张数上限，&quot;300&quot;=300 张/日，&quot;1000&quot;=1000 张/日</p>
                     * 
                     */
                    std::string GetImageCapacity() const;

                    /**
                     * 设置<p>图片档位：每日可上传的图片张数上限，&quot;300&quot;=300 张/日，&quot;1000&quot;=1000 张/日</p>
                     * @param _imageCapacity <p>图片档位：每日可上传的图片张数上限，&quot;300&quot;=300 张/日，&quot;1000&quot;=1000 张/日</p>
                     * 
                     */
                    void SetImageCapacity(const std::string& _imageCapacity);

                    /**
                     * 判断参数 ImageCapacity 是否已赋值
                     * @return ImageCapacity 是否已赋值
                     * 
                     */
                    bool ImageCapacityHasBeenSet() const;

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
                     * 获取<p>通道 ID</p>
                     * @return ChannelId <p>通道 ID</p>
                     * 
                     */
                    uint64_t GetChannelId() const;

                    /**
                     * 设置<p>通道 ID</p>
                     * @param _channelId <p>通道 ID</p>
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
                     * <p>存储天数</p><p>枚举值：</p><ul><li>3： 存储3天</li><li>7： 存储7天</li><li>15： 存储15天</li><li>30： 存储30天</li></ul>
                     */
                    uint64_t m_retentionDays;
                    bool m_retentionDaysHasBeenSet;

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
                     * <p>图片档位：每日可上传的图片张数上限，&quot;300&quot;=300 张/日，&quot;1000&quot;=1000 张/日</p>
                     */
                    std::string m_imageCapacity;
                    bool m_imageCapacityHasBeenSet;

                    /**
                     * <p>同规格资源包个数（默认 1）</p>
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * <p>通道 ID</p>
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

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

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PURCHASEIMAGEPACKAGEREQUEST_H_
