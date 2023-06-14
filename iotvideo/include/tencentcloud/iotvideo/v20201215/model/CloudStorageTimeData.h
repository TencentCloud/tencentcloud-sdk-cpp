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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_CLOUDSTORAGETIMEDATA_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_CLOUDSTORAGETIMEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideo/v20201215/model/CloudStorageTimeInfo.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20201215
        {
            namespace Model
            {
                /**
                * 云存时间轴接口返回数据
                */
                class CloudStorageTimeData : public AbstractModel
                {
                public:
                    CloudStorageTimeData();
                    ~CloudStorageTimeData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云存时间轴信息列表
                     * @return TimeList 云存时间轴信息列表
                     * 
                     */
                    std::vector<CloudStorageTimeInfo> GetTimeList() const;

                    /**
                     * 设置云存时间轴信息列表
                     * @param _timeList 云存时间轴信息列表
                     * 
                     */
                    void SetTimeList(const std::vector<CloudStorageTimeInfo>& _timeList);

                    /**
                     * 判断参数 TimeList 是否已赋值
                     * @return TimeList 是否已赋值
                     * 
                     */
                    bool TimeListHasBeenSet() const;

                    /**
                     * 获取播放地址
                     * @return VideoURL 播放地址
                     * 
                     */
                    std::string GetVideoURL() const;

                    /**
                     * 设置播放地址
                     * @param _videoURL 播放地址
                     * 
                     */
                    void SetVideoURL(const std::string& _videoURL);

                    /**
                     * 判断参数 VideoURL 是否已赋值
                     * @return VideoURL 是否已赋值
                     * 
                     */
                    bool VideoURLHasBeenSet() const;

                private:

                    /**
                     * 云存时间轴信息列表
                     */
                    std::vector<CloudStorageTimeInfo> m_timeList;
                    bool m_timeListHasBeenSet;

                    /**
                     * 播放地址
                     */
                    std::string m_videoURL;
                    bool m_videoURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_CLOUDSTORAGETIMEDATA_H_
