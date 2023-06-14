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

#ifndef TENCENTCLOUD_TICM_V20181127_MODEL_VIDEOMODERATIONREQUEST_H_
#define TENCENTCLOUD_TICM_V20181127_MODEL_VIDEOMODERATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ticm
    {
        namespace V20181127
        {
            namespace Model
            {
                /**
                * VideoModeration请求参数结构体
                */
                class VideoModerationRequest : public AbstractModel
                {
                public:
                    VideoModerationRequest();
                    ~VideoModerationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要审核的视频的URL地址
                     * @return VideoUrl 需要审核的视频的URL地址
                     * 
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置需要审核的视频的URL地址
                     * @param _videoUrl 需要审核的视频的URL地址
                     * 
                     */
                    void SetVideoUrl(const std::string& _videoUrl);

                    /**
                     * 判断参数 VideoUrl 是否已赋值
                     * @return VideoUrl 是否已赋值
                     * 
                     */
                    bool VideoUrlHasBeenSet() const;

                    /**
                     * 获取开发者标识
                     * @return DeveloperId 开发者标识
                     * 
                     */
                    std::string GetDeveloperId() const;

                    /**
                     * 设置开发者标识
                     * @param _developerId 开发者标识
                     * 
                     */
                    void SetDeveloperId(const std::string& _developerId);

                    /**
                     * 判断参数 DeveloperId 是否已赋值
                     * @return DeveloperId 是否已赋值
                     * 
                     */
                    bool DeveloperIdHasBeenSet() const;

                    /**
                     * 获取审核完成后回调地址
                     * @return CBUrl 审核完成后回调地址
                     * 
                     */
                    std::string GetCBUrl() const;

                    /**
                     * 设置审核完成后回调地址
                     * @param _cBUrl 审核完成后回调地址
                     * 
                     */
                    void SetCBUrl(const std::string& _cBUrl);

                    /**
                     * 判断参数 CBUrl 是否已赋值
                     * @return CBUrl 是否已赋值
                     * 
                     */
                    bool CBUrlHasBeenSet() const;

                    /**
                     * 获取透传字段，透传简单信息。
                     * @return Extra 透传字段，透传简单信息。
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置透传字段，透传简单信息。
                     * @param _extra 透传字段，透传简单信息。
                     * 
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                private:

                    /**
                     * 需要审核的视频的URL地址
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * 开发者标识
                     */
                    std::string m_developerId;
                    bool m_developerIdHasBeenSet;

                    /**
                     * 审核完成后回调地址
                     */
                    std::string m_cBUrl;
                    bool m_cBUrlHasBeenSet;

                    /**
                     * 透传字段，透传简单信息。
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TICM_V20181127_MODEL_VIDEOMODERATIONREQUEST_H_
