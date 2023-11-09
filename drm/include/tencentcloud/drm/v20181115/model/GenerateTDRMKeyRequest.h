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

#ifndef TENCENTCLOUD_DRM_V20181115_MODEL_GENERATETDRMKEYREQUEST_H_
#define TENCENTCLOUD_DRM_V20181115_MODEL_GENERATETDRMKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Drm
    {
        namespace V20181115
        {
            namespace Model
            {
                /**
                * GenerateTDRMKey请求参数结构体
                */
                class GenerateTDRMKeyRequest : public AbstractModel
                {
                public:
                    GenerateTDRMKeyRequest();
                    ~GenerateTDRMKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取使用的DRM方案类型，接口取值 NORMALAES 。
                     * @return DrmType 使用的DRM方案类型，接口取值 NORMALAES 。
                     * 
                     */
                    std::string GetDrmType() const;

                    /**
                     * 设置使用的DRM方案类型，接口取值 NORMALAES 。
                     * @param _drmType 使用的DRM方案类型，接口取值 NORMALAES 。
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
                     * 获取加密的track列表，接口取值 SD 。
                     * @return Tracks 加密的track列表，接口取值 SD 。
                     * 
                     */
                    std::vector<std::string> GetTracks() const;

                    /**
                     * 设置加密的track列表，接口取值 SD 。
                     * @param _tracks 加密的track列表，接口取值 SD 。
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
                     * 获取一个加密内容的唯一标识。
                     * @return ContentId 一个加密内容的唯一标识。
                     * 
                     */
                    std::string GetContentId() const;

                    /**
                     * 设置一个加密内容的唯一标识。
                     * @param _contentId 一个加密内容的唯一标识。
                     * 
                     */
                    void SetContentId(const std::string& _contentId);

                    /**
                     * 判断参数 ContentId 是否已赋值
                     * @return ContentId 是否已赋值
                     * 
                     */
                    bool ContentIdHasBeenSet() const;

                    /**
                     * 获取内容类型。接口取值 LiveVideo 。
                     * @return ContentType 内容类型。接口取值 LiveVideo 。
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置内容类型。接口取值 LiveVideo 。
                     * @param _contentType 内容类型。接口取值 LiveVideo 。
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                private:

                    /**
                     * 使用的DRM方案类型，接口取值 NORMALAES 。
                     */
                    std::string m_drmType;
                    bool m_drmTypeHasBeenSet;

                    /**
                     * 加密的track列表，接口取值 SD 。
                     */
                    std::vector<std::string> m_tracks;
                    bool m_tracksHasBeenSet;

                    /**
                     * 一个加密内容的唯一标识。
                     */
                    std::string m_contentId;
                    bool m_contentIdHasBeenSet;

                    /**
                     * 内容类型。接口取值 LiveVideo 。
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DRM_V20181115_MODEL_GENERATETDRMKEYREQUEST_H_
