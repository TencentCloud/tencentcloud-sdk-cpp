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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MODERATIONSUPPLIERPARAM_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MODERATIONSUPPLIERPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 送审到第三方审核供应商需要参数
                */
                class ModerationSupplierParam : public AbstractModel
                {
                public:
                    ModerationSupplierParam();
                    ~ModerationSupplierParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取供应审核商账号id，数美天御不为空，易盾为空
                     * @return AppID 供应审核商账号id，数美天御不为空，易盾为空
                     * 
                     */
                    std::string GetAppID() const;

                    /**
                     * 设置供应审核商账号id，数美天御不为空，易盾为空
                     * @param _appID 供应审核商账号id，数美天御不为空，易盾为空
                     * 
                     */
                    void SetAppID(const std::string& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取供应审核商秘钥id
                     * @return SecretId 供应审核商秘钥id
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置供应审核商秘钥id
                     * @param _secretId 供应审核商秘钥id
                     * 
                     */
                    void SetSecretId(const std::string& _secretId);

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取供应审核商秘钥key
                     * @return SecretKey 供应审核商秘钥key
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置供应审核商秘钥key
                     * @param _secretKey 供应审核商秘钥key
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取音频场景，策略id或者businessId
                     * @return AudioBizType 音频场景，策略id或者businessId
                     * 
                     */
                    std::string GetAudioBizType() const;

                    /**
                     * 设置音频场景，策略id或者businessId
                     * @param _audioBizType 音频场景，策略id或者businessId
                     * 
                     */
                    void SetAudioBizType(const std::string& _audioBizType);

                    /**
                     * 判断参数 AudioBizType 是否已赋值
                     * @return AudioBizType 是否已赋值
                     * 
                     */
                    bool AudioBizTypeHasBeenSet() const;

                    /**
                     * 获取图片场景，策略id或者businessId
                     * @return ImageBizType 图片场景，策略id或者businessId
                     * 
                     */
                    std::string GetImageBizType() const;

                    /**
                     * 设置图片场景，策略id或者businessId
                     * @param _imageBizType 图片场景，策略id或者businessId
                     * 
                     */
                    void SetImageBizType(const std::string& _imageBizType);

                    /**
                     * 判断参数 ImageBizType 是否已赋值
                     * @return ImageBizType 是否已赋值
                     * 
                     */
                    bool ImageBizTypeHasBeenSet() const;

                private:

                    /**
                     * 供应审核商账号id，数美天御不为空，易盾为空
                     */
                    std::string m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * 供应审核商秘钥id
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * 供应审核商秘钥key
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * 音频场景，策略id或者businessId
                     */
                    std::string m_audioBizType;
                    bool m_audioBizTypeHasBeenSet;

                    /**
                     * 图片场景，策略id或者businessId
                     */
                    std::string m_imageBizType;
                    bool m_imageBizTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MODERATIONSUPPLIERPARAM_H_
