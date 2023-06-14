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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TASKOUTPUTMEDIAINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TASKOUTPUTMEDIAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaBasicInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 视频处理任务的输出媒体文件信息
                */
                class TaskOutputMediaInfo : public AbstractModel
                {
                public:
                    TaskOutputMediaInfo();
                    ~TaskOutputMediaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒体文件 ID。
                     * @return FileId 媒体文件 ID。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置媒体文件 ID。
                     * @param _fileId 媒体文件 ID。
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取转拉完成后生成的媒体文件基础信息。
                     * @return MediaBasicInfo 转拉完成后生成的媒体文件基础信息。
                     * 
                     */
                    MediaBasicInfo GetMediaBasicInfo() const;

                    /**
                     * 设置转拉完成后生成的媒体文件基础信息。
                     * @param _mediaBasicInfo 转拉完成后生成的媒体文件基础信息。
                     * 
                     */
                    void SetMediaBasicInfo(const MediaBasicInfo& _mediaBasicInfo);

                    /**
                     * 判断参数 MediaBasicInfo 是否已赋值
                     * @return MediaBasicInfo 是否已赋值
                     * 
                     */
                    bool MediaBasicInfoHasBeenSet() const;

                private:

                    /**
                     * 媒体文件 ID。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 转拉完成后生成的媒体文件基础信息。
                     */
                    MediaBasicInfo m_mediaBasicInfo;
                    bool m_mediaBasicInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TASKOUTPUTMEDIAINFO_H_
