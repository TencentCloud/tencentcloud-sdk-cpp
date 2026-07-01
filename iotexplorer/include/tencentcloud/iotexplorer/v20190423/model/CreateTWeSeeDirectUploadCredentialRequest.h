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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATETWESEEDIRECTUPLOADCREDENTIALREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATETWESEEDIRECTUPLOADCREDENTIALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeComprehensionConfig.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * CreateTWeSeeDirectUploadCredential请求参数结构体
                */
                class CreateTWeSeeDirectUploadCredentialRequest : public AbstractModel
                {
                public:
                    CreateTWeSeeDirectUploadCredentialRequest();
                    ~CreateTWeSeeDirectUploadCredentialRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>产品 ID</p><p>非 IoT 设备可传 <code>default</code></p>
                     * @return ProductId <p>产品 ID</p><p>非 IoT 设备可传 <code>default</code></p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>产品 ID</p><p>非 IoT 设备可传 <code>default</code></p>
                     * @param _productId <p>产品 ID</p><p>非 IoT 设备可传 <code>default</code></p>
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
                     * 获取<p>设备名称</p>
                     * @return DeviceName <p>设备名称</p>
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>设备名称</p>
                     * @param _deviceName <p>设备名称</p>
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
                     * 获取<p>算法类型</p><p>枚举值：</p><ul><li>VID_COMP： 视频理解（支持视频文件或多帧图片）</li><li>IMG_COMP： 图片理解（单帧图片）</li></ul>
                     * @return ServiceType <p>算法类型</p><p>枚举值：</p><ul><li>VID_COMP： 视频理解（支持视频文件或多帧图片）</li><li>IMG_COMP： 图片理解（单帧图片）</li></ul>
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置<p>算法类型</p><p>枚举值：</p><ul><li>VID_COMP： 视频理解（支持视频文件或多帧图片）</li><li>IMG_COMP： 图片理解（单帧图片）</li></ul>
                     * @param _serviceType <p>算法类型</p><p>枚举值：</p><ul><li>VID_COMP： 视频理解（支持视频文件或多帧图片）</li><li>IMG_COMP： 图片理解（单帧图片）</li></ul>
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取<p>通道 ID</p><p>默认值：0</p>
                     * @return ChannelId <p>通道 ID</p><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetChannelId() const;

                    /**
                     * 设置<p>通道 ID</p><p>默认值：0</p>
                     * @param _channelId <p>通道 ID</p><p>默认值：0</p>
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
                     * 获取<p>回调目标 ID</p>
                     * @return CallbackId <p>回调目标 ID</p>
                     * 
                     */
                    std::string GetCallbackId() const;

                    /**
                     * 设置<p>回调目标 ID</p>
                     * @param _callbackId <p>回调目标 ID</p>
                     * 
                     */
                    void SetCallbackId(const std::string& _callbackId);

                    /**
                     * 判断参数 CallbackId 是否已赋值
                     * @return CallbackId 是否已赋值
                     * 
                     */
                    bool CallbackIdHasBeenSet() const;

                    /**
                     * 获取<p>视觉理解配置项</p>
                     * @return ComprehensionConfig <p>视觉理解配置项</p>
                     * 
                     */
                    SeeComprehensionConfig GetComprehensionConfig() const;

                    /**
                     * 设置<p>视觉理解配置项</p>
                     * @param _comprehensionConfig <p>视觉理解配置项</p>
                     * 
                     */
                    void SetComprehensionConfig(const SeeComprehensionConfig& _comprehensionConfig);

                    /**
                     * 判断参数 ComprehensionConfig 是否已赋值
                     * @return ComprehensionConfig 是否已赋值
                     * 
                     */
                    bool ComprehensionConfigHasBeenSet() const;

                    /**
                     * 获取<p>自定义事件 ID，会透传到任务元数据与回调中</p>
                     * @return CustomId <p>自定义事件 ID，会透传到任务元数据与回调中</p>
                     * 
                     */
                    std::string GetCustomId() const;

                    /**
                     * 设置<p>自定义事件 ID，会透传到任务元数据与回调中</p>
                     * @param _customId <p>自定义事件 ID，会透传到任务元数据与回调中</p>
                     * 
                     */
                    void SetCustomId(const std::string& _customId);

                    /**
                     * 判断参数 CustomId 是否已赋值
                     * @return CustomId 是否已赋值
                     * 
                     */
                    bool CustomIdHasBeenSet() const;

                    /**
                     * 获取<p>临时密钥有效期，单位：秒。默认 300 秒，取值范围 5 到 86400。</p>
                     * @return DurationSeconds <p>临时密钥有效期，单位：秒。默认 300 秒，取值范围 5 到 86400。</p>
                     * 
                     */
                    int64_t GetDurationSeconds() const;

                    /**
                     * 设置<p>临时密钥有效期，单位：秒。默认 300 秒，取值范围 5 到 86400。</p>
                     * @param _durationSeconds <p>临时密钥有效期，单位：秒。默认 300 秒，取值范围 5 到 86400。</p>
                     * 
                     */
                    void SetDurationSeconds(const int64_t& _durationSeconds);

                    /**
                     * 判断参数 DurationSeconds 是否已赋值
                     * @return DurationSeconds 是否已赋值
                     * 
                     */
                    bool DurationSecondsHasBeenSet() const;

                    /**
                     * 获取<p>该直传凭据最多可触发的分析次数</p><p>取值范围：[1, 10000]</p><p>默认值：1</p>
                     * @return MaxInvokeCount <p>该直传凭据最多可触发的分析次数</p><p>取值范围：[1, 10000]</p><p>默认值：1</p>
                     * 
                     */
                    int64_t GetMaxInvokeCount() const;

                    /**
                     * 设置<p>该直传凭据最多可触发的分析次数</p><p>取值范围：[1, 10000]</p><p>默认值：1</p>
                     * @param _maxInvokeCount <p>该直传凭据最多可触发的分析次数</p><p>取值范围：[1, 10000]</p><p>默认值：1</p>
                     * 
                     */
                    void SetMaxInvokeCount(const int64_t& _maxInvokeCount);

                    /**
                     * 判断参数 MaxInvokeCount 是否已赋值
                     * @return MaxInvokeCount 是否已赋值
                     * 
                     */
                    bool MaxInvokeCountHasBeenSet() const;

                    /**
                     * 获取<p>上传 COS 存储桶所在地域。不填时使用默认地域。</p>
                     * @return StorageRegion <p>上传 COS 存储桶所在地域。不填时使用默认地域。</p>
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置<p>上传 COS 存储桶所在地域。不填时使用默认地域。</p>
                     * @param _storageRegion <p>上传 COS 存储桶所在地域。不填时使用默认地域。</p>
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
                     * 获取<p>上传方式</p><p>枚举值：</p><ul><li>single： 单文件上传</li><li>manifest： 上传源文件与 Manifest（先上传多个源文件，然后上传 Manifest JSON 触发分析）</li></ul><p>默认值：single</p>
                     * @return UploadMethod <p>上传方式</p><p>枚举值：</p><ul><li>single： 单文件上传</li><li>manifest： 上传源文件与 Manifest（先上传多个源文件，然后上传 Manifest JSON 触发分析）</li></ul><p>默认值：single</p>
                     * 
                     */
                    std::string GetUploadMethod() const;

                    /**
                     * 设置<p>上传方式</p><p>枚举值：</p><ul><li>single： 单文件上传</li><li>manifest： 上传源文件与 Manifest（先上传多个源文件，然后上传 Manifest JSON 触发分析）</li></ul><p>默认值：single</p>
                     * @param _uploadMethod <p>上传方式</p><p>枚举值：</p><ul><li>single： 单文件上传</li><li>manifest： 上传源文件与 Manifest（先上传多个源文件，然后上传 Manifest JSON 触发分析）</li></ul><p>默认值：single</p>
                     * 
                     */
                    void SetUploadMethod(const std::string& _uploadMethod);

                    /**
                     * 判断参数 UploadMethod 是否已赋值
                     * @return UploadMethod 是否已赋值
                     * 
                     */
                    bool UploadMethodHasBeenSet() const;

                private:

                    /**
                     * <p>产品 ID</p><p>非 IoT 设备可传 <code>default</code></p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>设备名称</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>算法类型</p><p>枚举值：</p><ul><li>VID_COMP： 视频理解（支持视频文件或多帧图片）</li><li>IMG_COMP： 图片理解（单帧图片）</li></ul>
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * <p>通道 ID</p><p>默认值：0</p>
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * <p>回调目标 ID</p>
                     */
                    std::string m_callbackId;
                    bool m_callbackIdHasBeenSet;

                    /**
                     * <p>视觉理解配置项</p>
                     */
                    SeeComprehensionConfig m_comprehensionConfig;
                    bool m_comprehensionConfigHasBeenSet;

                    /**
                     * <p>自定义事件 ID，会透传到任务元数据与回调中</p>
                     */
                    std::string m_customId;
                    bool m_customIdHasBeenSet;

                    /**
                     * <p>临时密钥有效期，单位：秒。默认 300 秒，取值范围 5 到 86400。</p>
                     */
                    int64_t m_durationSeconds;
                    bool m_durationSecondsHasBeenSet;

                    /**
                     * <p>该直传凭据最多可触发的分析次数</p><p>取值范围：[1, 10000]</p><p>默认值：1</p>
                     */
                    int64_t m_maxInvokeCount;
                    bool m_maxInvokeCountHasBeenSet;

                    /**
                     * <p>上传 COS 存储桶所在地域。不填时使用默认地域。</p>
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * <p>上传方式</p><p>枚举值：</p><ul><li>single： 单文件上传</li><li>manifest： 上传源文件与 Manifest（先上传多个源文件，然后上传 Manifest JSON 触发分析）</li></ul><p>默认值：single</p>
                     */
                    std::string m_uploadMethod;
                    bool m_uploadMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATETWESEEDIRECTUPLOADCREDENTIALREQUEST_H_
