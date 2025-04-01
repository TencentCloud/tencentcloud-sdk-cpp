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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_VIDEOLIST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_VIDEOLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * 原视频流参数列表
                */
                class VideoList : public AbstractModel
                {
                public:
                    VideoList();
                    ~VideoList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取设备id
                     * @return DeviceId 设备id
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备id
                     * @param _deviceId 设备id
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取流id
                     * @return VideoStreamId 流id
                     * 
                     */
                    int64_t GetVideoStreamId() const;

                    /**
                     * 设置流id
                     * @param _videoStreamId 流id
                     * 
                     */
                    void SetVideoStreamId(const int64_t& _videoStreamId);

                    /**
                     * 判断参数 VideoStreamId 是否已赋值
                     * @return VideoStreamId 是否已赋值
                     * 
                     */
                    bool VideoStreamIdHasBeenSet() const;

                    /**
                     * 获取子画面在输出时的宽度，单位为像素值，不填默认为0。
                     * @return Width 子画面在输出时的宽度，单位为像素值，不填默认为0。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置子画面在输出时的宽度，单位为像素值，不填默认为0。
                     * @param _width 子画面在输出时的宽度，单位为像素值，不填默认为0。
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取子画面在输出时的高度，单位为像素值，不填默认为0。
                     * @return Height 子画面在输出时的高度，单位为像素值，不填默认为0。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置子画面在输出时的高度，单位为像素值，不填默认为0。
                     * @param _height 子画面在输出时的高度，单位为像素值，不填默认为0。
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 设备id
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 流id
                     */
                    int64_t m_videoStreamId;
                    bool m_videoStreamIdHasBeenSet;

                    /**
                     * 子画面在输出时的宽度，单位为像素值，不填默认为0。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 子画面在输出时的高度，单位为像素值，不填默认为0。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_VIDEOLIST_H_
