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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_THIRDPARTYDRMINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_THIRDPARTYDRMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/SPEKEDrm.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 第三方Drm 加密信息。
                */
                class ThirdPartyDrmInfo : public AbstractModel
                {
                public:
                    ThirdPartyDrmInfo();
                    ~ThirdPartyDrmInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>加密类型：</p><ul><li>FairPlay：只能用于HLS，切片格式只能是mp4</li><li>Widevine：可以用于HLS和DASH，切片格式只能是mp4</li><li>PlayReady：可以用于HLS和DASH，切片格式只能是mp4</li><li>Widevine+FairPlay，PlayReady+FairPlay，Widevine PlayReady FairPlay组合: 只能用于HLS，切片格式只能是mp4</li><li>Widevine PlayReady组合: 可用于HLS、MPEG-DASH，切片格式只能是mp4</li></ul>
                     * @return DrmTypes <p>加密类型：</p><ul><li>FairPlay：只能用于HLS，切片格式只能是mp4</li><li>Widevine：可以用于HLS和DASH，切片格式只能是mp4</li><li>PlayReady：可以用于HLS和DASH，切片格式只能是mp4</li><li>Widevine+FairPlay，PlayReady+FairPlay，Widevine PlayReady FairPlay组合: 只能用于HLS，切片格式只能是mp4</li><li>Widevine PlayReady组合: 可用于HLS、MPEG-DASH，切片格式只能是mp4</li></ul>
                     * 
                     */
                    std::vector<std::string> GetDrmTypes() const;

                    /**
                     * 设置<p>加密类型：</p><ul><li>FairPlay：只能用于HLS，切片格式只能是mp4</li><li>Widevine：可以用于HLS和DASH，切片格式只能是mp4</li><li>PlayReady：可以用于HLS和DASH，切片格式只能是mp4</li><li>Widevine+FairPlay，PlayReady+FairPlay，Widevine PlayReady FairPlay组合: 只能用于HLS，切片格式只能是mp4</li><li>Widevine PlayReady组合: 可用于HLS、MPEG-DASH，切片格式只能是mp4</li></ul>
                     * @param _drmTypes <p>加密类型：</p><ul><li>FairPlay：只能用于HLS，切片格式只能是mp4</li><li>Widevine：可以用于HLS和DASH，切片格式只能是mp4</li><li>PlayReady：可以用于HLS和DASH，切片格式只能是mp4</li><li>Widevine+FairPlay，PlayReady+FairPlay，Widevine PlayReady FairPlay组合: 只能用于HLS，切片格式只能是mp4</li><li>Widevine PlayReady组合: 可用于HLS、MPEG-DASH，切片格式只能是mp4</li></ul>
                     * 
                     */
                    void SetDrmTypes(const std::vector<std::string>& _drmTypes);

                    /**
                     * 判断参数 DrmTypes 是否已赋值
                     * @return DrmTypes 是否已赋值
                     * 
                     */
                    bool DrmTypesHasBeenSet() const;

                    /**
                     * 获取<p>第三方DRM厂商信息。</p>
                     * @return SPEKEDrm <p>第三方DRM厂商信息。</p>
                     * 
                     */
                    SPEKEDrm GetSPEKEDrm() const;

                    /**
                     * 设置<p>第三方DRM厂商信息。</p>
                     * @param _sPEKEDrm <p>第三方DRM厂商信息。</p>
                     * 
                     */
                    void SetSPEKEDrm(const SPEKEDrm& _sPEKEDrm);

                    /**
                     * 判断参数 SPEKEDrm 是否已赋值
                     * @return SPEKEDrm 是否已赋值
                     * 
                     */
                    bool SPEKEDrmHasBeenSet() const;

                private:

                    /**
                     * <p>加密类型：</p><ul><li>FairPlay：只能用于HLS，切片格式只能是mp4</li><li>Widevine：可以用于HLS和DASH，切片格式只能是mp4</li><li>PlayReady：可以用于HLS和DASH，切片格式只能是mp4</li><li>Widevine+FairPlay，PlayReady+FairPlay，Widevine PlayReady FairPlay组合: 只能用于HLS，切片格式只能是mp4</li><li>Widevine PlayReady组合: 可用于HLS、MPEG-DASH，切片格式只能是mp4</li></ul>
                     */
                    std::vector<std::string> m_drmTypes;
                    bool m_drmTypesHasBeenSet;

                    /**
                     * <p>第三方DRM厂商信息。</p>
                     */
                    SPEKEDrm m_sPEKEDrm;
                    bool m_sPEKEDrmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_THIRDPARTYDRMINFO_H_
