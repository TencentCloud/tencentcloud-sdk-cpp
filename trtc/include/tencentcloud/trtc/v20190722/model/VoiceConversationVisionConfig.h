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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONVISIONCONFIG_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONVISIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/CloudStorage.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * AI对话视觉理解相关的参数配置。
                */
                class VoiceConversationVisionConfig : public AbstractModel
                {
                public:
                    VoiceConversationVisionConfig();
                    ~VoiceConversationVisionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否启用视觉理解。</p>
                     * @return Enable <p>是否启用视觉理解。</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>是否启用视觉理解。</p>
                     * @param _enable <p>是否启用视觉理解。</p>
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>存储类型。</p><p>枚举值：</p><ul><li>0： 不存储。</li><li>1： 指定云存储，这种情况下CloudStorage参数必填。</li></ul><p>默认值：0</p>
                     * @return StorageType <p>存储类型。</p><p>枚举值：</p><ul><li>0： 不存储。</li><li>1： 指定云存储，这种情况下CloudStorage参数必填。</li></ul><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetStorageType() const;

                    /**
                     * 设置<p>存储类型。</p><p>枚举值：</p><ul><li>0： 不存储。</li><li>1： 指定云存储，这种情况下CloudStorage参数必填。</li></ul><p>默认值：0</p>
                     * @param _storageType <p>存储类型。</p><p>枚举值：</p><ul><li>0： 不存储。</li><li>1： 指定云存储，这种情况下CloudStorage参数必填。</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetStorageType(const uint64_t& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>第三方云存储归档配置。配置后，后台将从 SDK 收到的 I 帧自动上传至指定云存储桶进行持久化保存。</p>
                     * @return CloudStorage <p>第三方云存储归档配置。配置后，后台将从 SDK 收到的 I 帧自动上传至指定云存储桶进行持久化保存。</p>
                     * 
                     */
                    CloudStorage GetCloudStorage() const;

                    /**
                     * 设置<p>第三方云存储归档配置。配置后，后台将从 SDK 收到的 I 帧自动上传至指定云存储桶进行持久化保存。</p>
                     * @param _cloudStorage <p>第三方云存储归档配置。配置后，后台将从 SDK 收到的 I 帧自动上传至指定云存储桶进行持久化保存。</p>
                     * 
                     */
                    void SetCloudStorage(const CloudStorage& _cloudStorage);

                    /**
                     * 判断参数 CloudStorage 是否已赋值
                     * @return CloudStorage 是否已赋值
                     * 
                     */
                    bool CloudStorageHasBeenSet() const;

                private:

                    /**
                     * <p>是否启用视觉理解。</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>存储类型。</p><p>枚举值：</p><ul><li>0： 不存储。</li><li>1： 指定云存储，这种情况下CloudStorage参数必填。</li></ul><p>默认值：0</p>
                     */
                    uint64_t m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>第三方云存储归档配置。配置后，后台将从 SDK 收到的 I 帧自动上传至指定云存储桶进行持久化保存。</p>
                     */
                    CloudStorage m_cloudStorage;
                    bool m_cloudStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONVISIONCONFIG_H_
