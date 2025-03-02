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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DETECTINFOVIDEODATA_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DETECTINFOVIDEODATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 视频认证结果
                */
                class DetectInfoVideoData : public AbstractModel
                {
                public:
                    DetectInfoVideoData();
                    ~DetectInfoVideoData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取活体视频的base64编码，mp4格式

注:`需进行base64解码获取活体视频文件`
                     * @return LiveNessVideo 活体视频的base64编码，mp4格式

注:`需进行base64解码获取活体视频文件`
                     * 
                     */
                    std::string GetLiveNessVideo() const;

                    /**
                     * 设置活体视频的base64编码，mp4格式

注:`需进行base64解码获取活体视频文件`
                     * @param _liveNessVideo 活体视频的base64编码，mp4格式

注:`需进行base64解码获取活体视频文件`
                     * 
                     */
                    void SetLiveNessVideo(const std::string& _liveNessVideo);

                    /**
                     * 判断参数 LiveNessVideo 是否已赋值
                     * @return LiveNessVideo 是否已赋值
                     * 
                     */
                    bool LiveNessVideoHasBeenSet() const;

                private:

                    /**
                     * 活体视频的base64编码，mp4格式

注:`需进行base64解码获取活体视频文件`
                     */
                    std::string m_liveNessVideo;
                    bool m_liveNessVideoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DETECTINFOVIDEODATA_H_
