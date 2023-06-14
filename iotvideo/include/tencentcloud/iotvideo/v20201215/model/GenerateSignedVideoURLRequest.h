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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_GENERATESIGNEDVIDEOURLREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_GENERATESIGNEDVIDEOURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20201215
        {
            namespace Model
            {
                /**
                * GenerateSignedVideoURL请求参数结构体
                */
                class GenerateSignedVideoURLRequest : public AbstractModel
                {
                public:
                    GenerateSignedVideoURLRequest();
                    ~GenerateSignedVideoURLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取视频播放原始URL地址
                     * @return VideoURL 视频播放原始URL地址
                     * 
                     */
                    std::string GetVideoURL() const;

                    /**
                     * 设置视频播放原始URL地址
                     * @param _videoURL 视频播放原始URL地址
                     * 
                     */
                    void SetVideoURL(const std::string& _videoURL);

                    /**
                     * 判断参数 VideoURL 是否已赋值
                     * @return VideoURL 是否已赋值
                     * 
                     */
                    bool VideoURLHasBeenSet() const;

                    /**
                     * 获取播放链接过期时间
                     * @return ExpireTime 播放链接过期时间
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置播放链接过期时间
                     * @param _expireTime 播放链接过期时间
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 视频播放原始URL地址
                     */
                    std::string m_videoURL;
                    bool m_videoURLHasBeenSet;

                    /**
                     * 播放链接过期时间
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_GENERATESIGNEDVIDEOURLREQUEST_H_
