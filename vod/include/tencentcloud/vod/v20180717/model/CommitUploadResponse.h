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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_COMMITUPLOADRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_COMMITUPLOADRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CommitUpload返回参数结构体
                */
                class CommitUploadResponse : public AbstractModel
                {
                public:
                    CommitUploadResponse();
                    ~CommitUploadResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>媒体文件的唯一标识。</p>
                     * @return FileId <p>媒体文件的唯一标识。</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取<p>媒体播放地址。</p>
                     * @return MediaUrl <p>媒体播放地址。</p>
                     * 
                     */
                    std::string GetMediaUrl() const;

                    /**
                     * 判断参数 MediaUrl 是否已赋值
                     * @return MediaUrl 是否已赋值
                     * 
                     */
                    bool MediaUrlHasBeenSet() const;

                    /**
                     * 获取<p>媒体封面地址。</p>
                     * @return CoverUrl <p>媒体封面地址。</p>
                     * 
                     */
                    std::string GetCoverUrl() const;

                    /**
                     * 判断参数 CoverUrl 是否已赋值
                     * @return CoverUrl 是否已赋值
                     * 
                     */
                    bool CoverUrlHasBeenSet() const;

                private:

                    /**
                     * <p>媒体文件的唯一标识。</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>媒体播放地址。</p>
                     */
                    std::string m_mediaUrl;
                    bool m_mediaUrlHasBeenSet;

                    /**
                     * <p>媒体封面地址。</p>
                     */
                    std::string m_coverUrl;
                    bool m_coverUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COMMITUPLOADRESPONSE_H_
