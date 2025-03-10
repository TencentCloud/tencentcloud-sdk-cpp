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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CLOUDSTORAGEAISERVICETASKVIDEOMETAINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CLOUDSTORAGEAISERVICETASKVIDEOMETAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 云存 AI 任务输出视频文件元数据
                */
                class CloudStorageAIServiceTaskVideoMetaInfo : public AbstractModel
                {
                public:
                    CloudStorageAIServiceTaskVideoMetaInfo();
                    ~CloudStorageAIServiceTaskVideoMetaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频对应的缩略图的文件名称（含扩展名）
                     * @return ThumbnailFileName 视频对应的缩略图的文件名称（含扩展名）
                     * 
                     */
                    std::string GetThumbnailFileName() const;

                    /**
                     * 设置视频对应的缩略图的文件名称（含扩展名）
                     * @param _thumbnailFileName 视频对应的缩略图的文件名称（含扩展名）
                     * 
                     */
                    void SetThumbnailFileName(const std::string& _thumbnailFileName);

                    /**
                     * 判断参数 ThumbnailFileName 是否已赋值
                     * @return ThumbnailFileName 是否已赋值
                     * 
                     */
                    bool ThumbnailFileNameHasBeenSet() const;

                    /**
                     * 获取视频时长（单位：毫秒）
                     * @return DurationMilliSeconds 视频时长（单位：毫秒）
                     * 
                     */
                    int64_t GetDurationMilliSeconds() const;

                    /**
                     * 设置视频时长（单位：毫秒）
                     * @param _durationMilliSeconds 视频时长（单位：毫秒）
                     * 
                     */
                    void SetDurationMilliSeconds(const int64_t& _durationMilliSeconds);

                    /**
                     * 判断参数 DurationMilliSeconds 是否已赋值
                     * @return DurationMilliSeconds 是否已赋值
                     * 
                     */
                    bool DurationMilliSecondsHasBeenSet() const;

                private:

                    /**
                     * 视频对应的缩略图的文件名称（含扩展名）
                     */
                    std::string m_thumbnailFileName;
                    bool m_thumbnailFileNameHasBeenSet;

                    /**
                     * 视频时长（单位：毫秒）
                     */
                    int64_t m_durationMilliSeconds;
                    bool m_durationMilliSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CLOUDSTORAGEAISERVICETASKVIDEOMETAINFO_H_
