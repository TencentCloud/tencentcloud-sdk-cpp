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

#ifndef TENCENTCLOUD_DRM_V20181115_MODEL_CREATELICENSEREQUEST_H_
#define TENCENTCLOUD_DRM_V20181115_MODEL_CREATELICENSEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/drm/v20181115/model/PlaybackPolicy.h>


namespace TencentCloud
{
    namespace Drm
    {
        namespace V20181115
        {
            namespace Model
            {
                /**
                * CreateLicense请求参数结构体
                */
                class CreateLicenseRequest : public AbstractModel
                {
                public:
                    CreateLicenseRequest();
                    ~CreateLicenseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DRM方案类型，接口取值：WIDEVINE，FAIRPLAY。
                     * @return DrmType DRM方案类型，接口取值：WIDEVINE，FAIRPLAY。
                     * 
                     */
                    std::string GetDrmType() const;

                    /**
                     * 设置DRM方案类型，接口取值：WIDEVINE，FAIRPLAY。
                     * @param _drmType DRM方案类型，接口取值：WIDEVINE，FAIRPLAY。
                     * 
                     */
                    void SetDrmType(const std::string& _drmType);

                    /**
                     * 判断参数 DrmType 是否已赋值
                     * @return DrmType 是否已赋值
                     * 
                     */
                    bool DrmTypeHasBeenSet() const;

                    /**
                     * 获取Base64编码的终端设备License Request数据。
                     * @return LicenseRequest Base64编码的终端设备License Request数据。
                     * 
                     */
                    std::string GetLicenseRequest() const;

                    /**
                     * 设置Base64编码的终端设备License Request数据。
                     * @param _licenseRequest Base64编码的终端设备License Request数据。
                     * 
                     */
                    void SetLicenseRequest(const std::string& _licenseRequest);

                    /**
                     * 判断参数 LicenseRequest 是否已赋值
                     * @return LicenseRequest 是否已赋值
                     * 
                     */
                    bool LicenseRequestHasBeenSet() const;

                    /**
                     * 获取内容类型，接口取值：VodVideo,LiveVideo。
                     * @return ContentType 内容类型，接口取值：VodVideo,LiveVideo。
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置内容类型，接口取值：VodVideo,LiveVideo。
                     * @param _contentType 内容类型，接口取值：VodVideo,LiveVideo。
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取授权播放的Track列表。
该值为空时，默认授权所有track播放。
                     * @return Tracks 授权播放的Track列表。
该值为空时，默认授权所有track播放。
                     * 
                     */
                    std::vector<std::string> GetTracks() const;

                    /**
                     * 设置授权播放的Track列表。
该值为空时，默认授权所有track播放。
                     * @param _tracks 授权播放的Track列表。
该值为空时，默认授权所有track播放。
                     * 
                     */
                    void SetTracks(const std::vector<std::string>& _tracks);

                    /**
                     * 判断参数 Tracks 是否已赋值
                     * @return Tracks 是否已赋值
                     * 
                     */
                    bool TracksHasBeenSet() const;

                    /**
                     * 获取播放策略参数。
                     * @return PlaybackPolicy 播放策略参数。
                     * 
                     */
                    PlaybackPolicy GetPlaybackPolicy() const;

                    /**
                     * 设置播放策略参数。
                     * @param _playbackPolicy 播放策略参数。
                     * 
                     */
                    void SetPlaybackPolicy(const PlaybackPolicy& _playbackPolicy);

                    /**
                     * 判断参数 PlaybackPolicy 是否已赋值
                     * @return PlaybackPolicy 是否已赋值
                     * 
                     */
                    bool PlaybackPolicyHasBeenSet() const;

                    /**
                     * 获取Widevine安全级别，接口取值[L1, L2, L3]。
安全级别定义参考Widevine安全级别定义。
                     * @return WidevineSecurityLevel Widevine安全级别，接口取值[L1, L2, L3]。
安全级别定义参考Widevine安全级别定义。
                     * 
                     */
                    std::string GetWidevineSecurityLevel() const;

                    /**
                     * 设置Widevine安全级别，接口取值[L1, L2, L3]。
安全级别定义参考Widevine安全级别定义。
                     * @param _widevineSecurityLevel Widevine安全级别，接口取值[L1, L2, L3]。
安全级别定义参考Widevine安全级别定义。
                     * 
                     */
                    void SetWidevineSecurityLevel(const std::string& _widevineSecurityLevel);

                    /**
                     * 判断参数 WidevineSecurityLevel 是否已赋值
                     * @return WidevineSecurityLevel 是否已赋值
                     * 
                     */
                    bool WidevineSecurityLevelHasBeenSet() const;

                private:

                    /**
                     * DRM方案类型，接口取值：WIDEVINE，FAIRPLAY。
                     */
                    std::string m_drmType;
                    bool m_drmTypeHasBeenSet;

                    /**
                     * Base64编码的终端设备License Request数据。
                     */
                    std::string m_licenseRequest;
                    bool m_licenseRequestHasBeenSet;

                    /**
                     * 内容类型，接口取值：VodVideo,LiveVideo。
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * 授权播放的Track列表。
该值为空时，默认授权所有track播放。
                     */
                    std::vector<std::string> m_tracks;
                    bool m_tracksHasBeenSet;

                    /**
                     * 播放策略参数。
                     */
                    PlaybackPolicy m_playbackPolicy;
                    bool m_playbackPolicyHasBeenSet;

                    /**
                     * Widevine安全级别，接口取值[L1, L2, L3]。
安全级别定义参考Widevine安全级别定义。
                     */
                    std::string m_widevineSecurityLevel;
                    bool m_widevineSecurityLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DRM_V20181115_MODEL_CREATELICENSEREQUEST_H_
