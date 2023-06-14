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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SIMPLEHLSCLIPRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SIMPLEHLSCLIPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaMetaData.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * SimpleHlsClip返回参数结构体
                */
                class SimpleHlsClipResponse : public AbstractModel
                {
                public:
                    SimpleHlsClipResponse();
                    ~SimpleHlsClipResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取裁剪后的视频地址。
                     * @return Url 裁剪后的视频地址。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取裁剪后的视频元信息。目前`Size`，`Rotate`，`VideoDuration`，`AudioDuration` 几个字段暂时缺省，没有真实数据。
                     * @return MetaData 裁剪后的视频元信息。目前`Size`，`Rotate`，`VideoDuration`，`AudioDuration` 几个字段暂时缺省，没有真实数据。
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     * 
                     */
                    bool MetaDataHasBeenSet() const;

                    /**
                     * 获取剪辑固化后的视频的媒体文件的唯一标识。
                     * @return FileId 剪辑固化后的视频的媒体文件的唯一标识。
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
                     * 获取剪辑固化后的视频任务流 ID。
                     * @return TaskId 剪辑固化后的视频任务流 ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 裁剪后的视频地址。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 裁剪后的视频元信息。目前`Size`，`Rotate`，`VideoDuration`，`AudioDuration` 几个字段暂时缺省，没有真实数据。
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * 剪辑固化后的视频的媒体文件的唯一标识。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 剪辑固化后的视频任务流 ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SIMPLEHLSCLIPRESPONSE_H_
