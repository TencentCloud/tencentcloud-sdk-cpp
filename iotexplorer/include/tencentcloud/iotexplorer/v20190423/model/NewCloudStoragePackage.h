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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_NEWCLOUDSTORAGEPACKAGE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_NEWCLOUDSTORAGEPACKAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 新云存套餐相关参数
                */
                class NewCloudStoragePackage : public AbstractModel
                {
                public:
                    NewCloudStoragePackage();
                    ~NewCloudStoragePackage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资源id</p>
                     * @return ResourceId <p>资源id</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源id</p>
                     * @param _resourceId <p>资源id</p>
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
                     * 获取<p>媒体类型</p><p>枚举值：</p><ul><li>image： 图片套餐</li><li>video： 视频套餐</li></ul>
                     * @return MediaType <p>媒体类型</p><p>枚举值：</p><ul><li>image： 图片套餐</li><li>video： 视频套餐</li></ul>
                     * 
                     */
                    std::string GetMediaType() const;

                    /**
                     * 设置<p>媒体类型</p><p>枚举值：</p><ul><li>image： 图片套餐</li><li>video： 视频套餐</li></ul>
                     * @param _mediaType <p>媒体类型</p><p>枚举值：</p><ul><li>image： 图片套餐</li><li>video： 视频套餐</li></ul>
                     * 
                     */
                    void SetMediaType(const std::string& _mediaType);

                    /**
                     * 判断参数 MediaType 是否已赋值
                     * @return MediaType 是否已赋值
                     * 
                     */
                    bool MediaTypeHasBeenSet() const;

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
                     * 获取<p>录制模式</p><p>枚举值：</p><ul><li>low_power：  2小时/日</li><li>event：  8小时/日</li><li>full_time：  24小时/日</li></ul>
                     * @return RecordingMode <p>录制模式</p><p>枚举值：</p><ul><li>low_power：  2小时/日</li><li>event：  8小时/日</li><li>full_time：  24小时/日</li></ul>
                     * 
                     */
                    std::string GetRecordingMode() const;

                    /**
                     * 设置<p>录制模式</p><p>枚举值：</p><ul><li>low_power：  2小时/日</li><li>event：  8小时/日</li><li>full_time：  24小时/日</li></ul>
                     * @param _recordingMode <p>录制模式</p><p>枚举值：</p><ul><li>low_power：  2小时/日</li><li>event：  8小时/日</li><li>full_time：  24小时/日</li></ul>
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
                     * 获取<p>码率</p><p>枚举值：</p><ul><li>0.5m： 0.5Mbps</li><li>1m： 1Mbps</li><li>1.5m： 1.5Mbps</li><li>2m： 2Mbps</li></ul>
                     * @return Bitrate <p>码率</p><p>枚举值：</p><ul><li>0.5m： 0.5Mbps</li><li>1m： 1Mbps</li><li>1.5m： 1.5Mbps</li><li>2m： 2Mbps</li></ul>
                     * 
                     */
                    std::string GetBitrate() const;

                    /**
                     * 设置<p>码率</p><p>枚举值：</p><ul><li>0.5m： 0.5Mbps</li><li>1m： 1Mbps</li><li>1.5m： 1.5Mbps</li><li>2m： 2Mbps</li></ul>
                     * @param _bitrate <p>码率</p><p>枚举值：</p><ul><li>0.5m： 0.5Mbps</li><li>1m： 1Mbps</li><li>1.5m： 1.5Mbps</li><li>2m： 2Mbps</li></ul>
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
                     * 获取<p>开始时间</p>
                     * @return StartTime <p>开始时间</p>
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p>
                     * @param _startTime <p>开始时间</p>
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>过期时间</p>
                     * @return ExpireTime <p>过期时间</p>
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置<p>过期时间</p>
                     * @param _expireTime <p>过期时间</p>
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>套餐状态</p><p>枚举值：</p><ul><li>active： 生效中</li><li>queued： 排队中</li></ul>
                     * @return Status <p>套餐状态</p><p>枚举值：</p><ul><li>active： 生效中</li><li>queued： 排队中</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>套餐状态</p><p>枚举值：</p><ul><li>active： 生效中</li><li>queued： 排队中</li></ul>
                     * @param _status <p>套餐状态</p><p>枚举值：</p><ul><li>active： 生效中</li><li>queued： 排队中</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>启停状态</p><p>枚举值：</p><ul><li>0： 停用</li><li>1： 启用</li></ul>
                     * @return ReportEnabled <p>启停状态</p><p>枚举值：</p><ul><li>0： 停用</li><li>1： 启用</li></ul>
                     * 
                     */
                    uint64_t GetReportEnabled() const;

                    /**
                     * 设置<p>启停状态</p><p>枚举值：</p><ul><li>0： 停用</li><li>1： 启用</li></ul>
                     * @param _reportEnabled <p>启停状态</p><p>枚举值：</p><ul><li>0： 停用</li><li>1： 启用</li></ul>
                     * 
                     */
                    void SetReportEnabled(const uint64_t& _reportEnabled);

                    /**
                     * 判断参数 ReportEnabled 是否已赋值
                     * @return ReportEnabled 是否已赋值
                     * 
                     */
                    bool ReportEnabledHasBeenSet() const;

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

                    /**
                     * 获取<p>大订单号</p>
                     * @return BigDealId <p>大订单号</p>
                     * 
                     */
                    std::string GetBigDealId() const;

                    /**
                     * 设置<p>大订单号</p>
                     * @param _bigDealId <p>大订单号</p>
                     * 
                     */
                    void SetBigDealId(const std::string& _bigDealId);

                    /**
                     * 判断参数 BigDealId 是否已赋值
                     * @return BigDealId 是否已赋值
                     * 
                     */
                    bool BigDealIdHasBeenSet() const;

                    /**
                     * 获取<p>卡有效期类型</p><p>枚举值：</p><ul><li>monthly_card： 月卡</li><li>annual_card： 年卡</li></ul>
                     * @return ValidityPeriod <p>卡有效期类型</p><p>枚举值：</p><ul><li>monthly_card： 月卡</li><li>annual_card： 年卡</li></ul>
                     * 
                     */
                    std::string GetValidityPeriod() const;

                    /**
                     * 设置<p>卡有效期类型</p><p>枚举值：</p><ul><li>monthly_card： 月卡</li><li>annual_card： 年卡</li></ul>
                     * @param _validityPeriod <p>卡有效期类型</p><p>枚举值：</p><ul><li>monthly_card： 月卡</li><li>annual_card： 年卡</li></ul>
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
                     * 获取<p>图片档位</p><p>枚举值：</p><ul><li>300： 300张/日</li><li>1000： 1000张/日</li></ul>
                     * @return ImageCapacity <p>图片档位</p><p>枚举值：</p><ul><li>300： 300张/日</li><li>1000： 1000张/日</li></ul>
                     * 
                     */
                    std::string GetImageCapacity() const;

                    /**
                     * 设置<p>图片档位</p><p>枚举值：</p><ul><li>300： 300张/日</li><li>1000： 1000张/日</li></ul>
                     * @param _imageCapacity <p>图片档位</p><p>枚举值：</p><ul><li>300： 300张/日</li><li>1000： 1000张/日</li></ul>
                     * 
                     */
                    void SetImageCapacity(const std::string& _imageCapacity);

                    /**
                     * 判断参数 ImageCapacity 是否已赋值
                     * @return ImageCapacity 是否已赋值
                     * 
                     */
                    bool ImageCapacityHasBeenSet() const;

                private:

                    /**
                     * <p>资源id</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>媒体类型</p><p>枚举值：</p><ul><li>image： 图片套餐</li><li>video： 视频套餐</li></ul>
                     */
                    std::string m_mediaType;
                    bool m_mediaTypeHasBeenSet;

                    /**
                     * <p>存储天数</p><p>枚举值：</p><ul><li>3： 存储3天</li><li>7： 存储7天</li><li>15： 存储15天</li><li>30： 存储30天</li></ul>
                     */
                    uint64_t m_retentionDays;
                    bool m_retentionDaysHasBeenSet;

                    /**
                     * <p>录制模式</p><p>枚举值：</p><ul><li>low_power：  2小时/日</li><li>event：  8小时/日</li><li>full_time：  24小时/日</li></ul>
                     */
                    std::string m_recordingMode;
                    bool m_recordingModeHasBeenSet;

                    /**
                     * <p>码率</p><p>枚举值：</p><ul><li>0.5m： 0.5Mbps</li><li>1m： 1Mbps</li><li>1.5m： 1.5Mbps</li><li>2m： 2Mbps</li></ul>
                     */
                    std::string m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * <p>开始时间</p>
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>过期时间</p>
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>套餐状态</p><p>枚举值：</p><ul><li>active： 生效中</li><li>queued： 排队中</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>启停状态</p><p>枚举值：</p><ul><li>0： 停用</li><li>1： 启用</li></ul>
                     */
                    uint64_t m_reportEnabled;
                    bool m_reportEnabledHasBeenSet;

                    /**
                     * <p>订单id</p>
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * <p>大订单号</p>
                     */
                    std::string m_bigDealId;
                    bool m_bigDealIdHasBeenSet;

                    /**
                     * <p>卡有效期类型</p><p>枚举值：</p><ul><li>monthly_card： 月卡</li><li>annual_card： 年卡</li></ul>
                     */
                    std::string m_validityPeriod;
                    bool m_validityPeriodHasBeenSet;

                    /**
                     * <p>图片档位</p><p>枚举值：</p><ul><li>300： 300张/日</li><li>1000： 1000张/日</li></ul>
                     */
                    std::string m_imageCapacity;
                    bool m_imageCapacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_NEWCLOUDSTORAGEPACKAGE_H_
