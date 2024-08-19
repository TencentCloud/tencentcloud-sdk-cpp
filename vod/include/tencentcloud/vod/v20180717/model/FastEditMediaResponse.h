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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_FASTEDITMEDIARESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_FASTEDITMEDIARESPONSE_H_

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
                * FastEditMedia返回参数结构体
                */
                class FastEditMediaResponse : public AbstractModel
                {
                public:
                    FastEditMediaResponse();
                    ~FastEditMediaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取快速编辑后的视频的媒体文件的唯一标识。
                     * @return FileId 快速编辑后的视频的媒体文件的唯一标识。
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
                     * 获取快速编辑后的媒体播放地址。
                     * @return Url 快速编辑后的媒体播放地址。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 快速编辑后的视频的媒体文件的唯一标识。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 快速编辑后的媒体播放地址。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FASTEDITMEDIARESPONSE_H_
