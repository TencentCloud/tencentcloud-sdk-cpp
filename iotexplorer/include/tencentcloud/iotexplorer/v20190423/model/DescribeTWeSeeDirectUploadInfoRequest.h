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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWESEEDIRECTUPLOADINFOREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWESEEDIRECTUPLOADINFOREQUEST_H_

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
                * DescribeTWeSeeDirectUploadInfo请求参数结构体
                */
                class DescribeTWeSeeDirectUploadInfoRequest : public AbstractModel
                {
                public:
                    DescribeTWeSeeDirectUploadInfoRequest();
                    ~DescribeTWeSeeDirectUploadInfoRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>服务类型。</p><p>枚举值：</p><ul><li>VID_COMP： 视频理解</li><li>IMG_COMP： 图片理解</li></ul>
                     * @return ServiceType <p>服务类型。</p><p>枚举值：</p><ul><li>VID_COMP： 视频理解</li><li>IMG_COMP： 图片理解</li></ul>
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置<p>服务类型。</p><p>枚举值：</p><ul><li>VID_COMP： 视频理解</li><li>IMG_COMP： 图片理解</li></ul>
                     * @param _serviceType <p>服务类型。</p><p>枚举值：</p><ul><li>VID_COMP： 视频理解</li><li>IMG_COMP： 图片理解</li></ul>
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
                     * 获取<p>上传方式。</p><p>枚举值：</p><ul><li>single： 单文件上传</li><li>manifest： 上传源文件与 Manifest（先上传多个源文件，然后上传 Manifest JSON 触发分析）</li></ul><p>默认值：single</p>
                     * @return UploadMethod <p>上传方式。</p><p>枚举值：</p><ul><li>single： 单文件上传</li><li>manifest： 上传源文件与 Manifest（先上传多个源文件，然后上传 Manifest JSON 触发分析）</li></ul><p>默认值：single</p>
                     * 
                     */
                    std::string GetUploadMethod() const;

                    /**
                     * 设置<p>上传方式。</p><p>枚举值：</p><ul><li>single： 单文件上传</li><li>manifest： 上传源文件与 Manifest（先上传多个源文件，然后上传 Manifest JSON 触发分析）</li></ul><p>默认值：single</p>
                     * @param _uploadMethod <p>上传方式。</p><p>枚举值：</p><ul><li>single： 单文件上传</li><li>manifest： 上传源文件与 Manifest（先上传多个源文件，然后上传 Manifest JSON 触发分析）</li></ul><p>默认值：single</p>
                     * 
                     */
                    void SetUploadMethod(const std::string& _uploadMethod);

                    /**
                     * 判断参数 UploadMethod 是否已赋值
                     * @return UploadMethod 是否已赋值
                     * 
                     */
                    bool UploadMethodHasBeenSet() const;

                    /**
                     * 获取<p>上传目标，固定取值为 <code>stream</code>，不填时默认为 <code>stream</code></p><p>枚举值：</p><ul><li>stream： 上传到指定设备（加载对应设备的 ComprehensionConfig 等配置）</li></ul><p>默认值：stream</p>
                     * @return UploadTarget <p>上传目标，固定取值为 <code>stream</code>，不填时默认为 <code>stream</code></p><p>枚举值：</p><ul><li>stream： 上传到指定设备（加载对应设备的 ComprehensionConfig 等配置）</li></ul><p>默认值：stream</p>
                     * 
                     */
                    std::string GetUploadTarget() const;

                    /**
                     * 设置<p>上传目标，固定取值为 <code>stream</code>，不填时默认为 <code>stream</code></p><p>枚举值：</p><ul><li>stream： 上传到指定设备（加载对应设备的 ComprehensionConfig 等配置）</li></ul><p>默认值：stream</p>
                     * @param _uploadTarget <p>上传目标，固定取值为 <code>stream</code>，不填时默认为 <code>stream</code></p><p>枚举值：</p><ul><li>stream： 上传到指定设备（加载对应设备的 ComprehensionConfig 等配置）</li></ul><p>默认值：stream</p>
                     * 
                     */
                    void SetUploadTarget(const std::string& _uploadTarget);

                    /**
                     * 判断参数 UploadTarget 是否已赋值
                     * @return UploadTarget 是否已赋值
                     * 
                     */
                    bool UploadTargetHasBeenSet() const;

                    /**
                     * 获取<p>通道 ID，非 NVR 设备不填，NVR 设备必填</p>
                     * @return ChannelId <p>通道 ID，非 NVR 设备不填，NVR 设备必填</p>
                     * 
                     */
                    uint64_t GetChannelId() const;

                    /**
                     * 设置<p>通道 ID，非 NVR 设备不填，NVR 设备必填</p>
                     * @param _channelId <p>通道 ID，非 NVR 设备不填，NVR 设备必填</p>
                     * 
                     */
                    void SetChannelId(const uint64_t& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                private:

                    /**
                     * <p>产品 ID</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>设备名称</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>服务类型。</p><p>枚举值：</p><ul><li>VID_COMP： 视频理解</li><li>IMG_COMP： 图片理解</li></ul>
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * <p>上传方式。</p><p>枚举值：</p><ul><li>single： 单文件上传</li><li>manifest： 上传源文件与 Manifest（先上传多个源文件，然后上传 Manifest JSON 触发分析）</li></ul><p>默认值：single</p>
                     */
                    std::string m_uploadMethod;
                    bool m_uploadMethodHasBeenSet;

                    /**
                     * <p>上传目标，固定取值为 <code>stream</code>，不填时默认为 <code>stream</code></p><p>枚举值：</p><ul><li>stream： 上传到指定设备（加载对应设备的 ComprehensionConfig 等配置）</li></ul><p>默认值：stream</p>
                     */
                    std::string m_uploadTarget;
                    bool m_uploadTargetHasBeenSet;

                    /**
                     * <p>通道 ID，非 NVR 设备不填，NVR 设备必填</p>
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWESEEDIRECTUPLOADINFOREQUEST_H_
