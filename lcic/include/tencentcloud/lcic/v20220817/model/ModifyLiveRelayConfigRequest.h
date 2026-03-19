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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYLIVERELAYCONFIGREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYLIVERELAYCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * ModifyLiveRelayConfig请求参数结构体
                */
                class ModifyLiveRelayConfigRequest : public AbstractModel
                {
                public:
                    ModifyLiveRelayConfigRequest();
                    ~ModifyLiveRelayConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>低代码互动课堂的SdkAppId</p>
                     * @return SdkAppId <p>低代码互动课堂的SdkAppId</p>
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置<p>低代码互动课堂的SdkAppId</p>
                     * @param _sdkAppId <p>低代码互动课堂的SdkAppId</p>
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取<p>房间ID</p>
                     * @return RoomId <p>房间ID</p>
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置<p>房间ID</p>
                     * @param _roomId <p>房间ID</p>
                     * 
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取<p>转推类型</p><p>枚举值：</p><ul><li>0： 单流</li><li>1： 混流</li></ul>
                     * @return RelayType <p>转推类型</p><p>枚举值：</p><ul><li>0： 单流</li><li>1： 混流</li></ul>
                     * 
                     */
                    uint64_t GetRelayType() const;

                    /**
                     * 设置<p>转推类型</p><p>枚举值：</p><ul><li>0： 单流</li><li>1： 混流</li></ul>
                     * @param _relayType <p>转推类型</p><p>枚举值：</p><ul><li>0： 单流</li><li>1： 混流</li></ul>
                     * 
                     */
                    void SetRelayType(const uint64_t& _relayType);

                    /**
                     * 判断参数 RelayType 是否已赋值
                     * @return RelayType 是否已赋值
                     * 
                     */
                    bool RelayTypeHasBeenSet() const;

                    /**
                     * 获取<p>转推URL</p>
                     * @return Urls <p>转推URL</p>
                     * 
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 设置<p>转推URL</p>
                     * @param _urls <p>转推URL</p>
                     * 
                     */
                    void SetUrls(const std::vector<std::string>& _urls);

                    /**
                     * 判断参数 Urls 是否已赋值
                     * @return Urls 是否已赋值
                     * 
                     */
                    bool UrlsHasBeenSet() const;

                    /**
                     * 获取<p>是否是腾讯云CDN（默认为0）</p><p>枚举值：</p><ul><li>0： 转推非腾讯CDN</li><li>1： 转推腾讯CDN</li></ul>
                     * @return IsTencentCdn <p>是否是腾讯云CDN（默认为0）</p><p>枚举值：</p><ul><li>0： 转推非腾讯CDN</li><li>1： 转推腾讯CDN</li></ul>
                     * 
                     */
                    uint64_t GetIsTencentCdn() const;

                    /**
                     * 设置<p>是否是腾讯云CDN（默认为0）</p><p>枚举值：</p><ul><li>0： 转推非腾讯CDN</li><li>1： 转推腾讯CDN</li></ul>
                     * @param _isTencentCdn <p>是否是腾讯云CDN（默认为0）</p><p>枚举值：</p><ul><li>0： 转推非腾讯CDN</li><li>1： 转推腾讯CDN</li></ul>
                     * 
                     */
                    void SetIsTencentCdn(const uint64_t& _isTencentCdn);

                    /**
                     * 判断参数 IsTencentCdn 是否已赋值
                     * @return IsTencentCdn 是否已赋值
                     * 
                     */
                    bool IsTencentCdnHasBeenSet() const;

                private:

                    /**
                     * <p>低代码互动课堂的SdkAppId</p>
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>房间ID</p>
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * <p>转推类型</p><p>枚举值：</p><ul><li>0： 单流</li><li>1： 混流</li></ul>
                     */
                    uint64_t m_relayType;
                    bool m_relayTypeHasBeenSet;

                    /**
                     * <p>转推URL</p>
                     */
                    std::vector<std::string> m_urls;
                    bool m_urlsHasBeenSet;

                    /**
                     * <p>是否是腾讯云CDN（默认为0）</p><p>枚举值：</p><ul><li>0： 转推非腾讯CDN</li><li>1： 转推腾讯CDN</li></ul>
                     */
                    uint64_t m_isTencentCdn;
                    bool m_isTencentCdnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_MODIFYLIVERELAYCONFIGREQUEST_H_
