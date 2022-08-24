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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REMOVEWATERMARKTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REMOVEWATERMARKTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 智能去除水印任务的输出。
                */
                class RemoveWaterMarkTaskOutput : public AbstractModel
                {
                public:
                    RemoveWaterMarkTaskOutput();
                    ~RemoveWaterMarkTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频 ID。
                     * @return FileId 视频 ID。
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置视频 ID。
                     * @param FileId 视频 ID。
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取元信息。包括大小、时长、视频流信息、音频流信息等。
                     * @return MetaData 元信息。包括大小、时长、视频流信息、音频流信息等。
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置元信息。包括大小、时长、视频流信息、音频流信息等。
                     * @param MetaData 元信息。包括大小、时长、视频流信息、音频流信息等。
                     */
                    void SetMetaData(const MediaMetaData& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     */
                    bool MetaDataHasBeenSet() const;

                private:

                    /**
                     * 视频 ID。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 元信息。包括大小、时长、视频流信息、音频流信息等。
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REMOVEWATERMARKTASKOUTPUT_H_
