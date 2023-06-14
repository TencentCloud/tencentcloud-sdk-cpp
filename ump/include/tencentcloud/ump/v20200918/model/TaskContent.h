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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_TASKCONTENT_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_TASKCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * 任务内容
                */
                class TaskContent : public AbstractModel
                {
                public:
                    TaskContent();
                    ~TaskContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取摄像头ID
                     * @return CameraId 摄像头ID
                     * 
                     */
                    uint64_t GetCameraId() const;

                    /**
                     * 设置摄像头ID
                     * @param _cameraId 摄像头ID
                     * 
                     */
                    void SetCameraId(const uint64_t& _cameraId);

                    /**
                     * 判断参数 CameraId 是否已赋值
                     * @return CameraId 是否已赋值
                     * 
                     */
                    bool CameraIdHasBeenSet() const;

                    /**
                     * 获取rtsp 地址
                     * @return RTSP rtsp 地址
                     * 
                     */
                    std::string GetRTSP() const;

                    /**
                     * 设置rtsp 地址
                     * @param _rTSP rtsp 地址
                     * 
                     */
                    void SetRTSP(const std::string& _rTSP);

                    /**
                     * 判断参数 RTSP 是否已赋值
                     * @return RTSP 是否已赋值
                     * 
                     */
                    bool RTSPHasBeenSet() const;

                    /**
                     * 获取图片上传地址
                     * @return Url 图片上传地址
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置图片上传地址
                     * @param _url 图片上传地址
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 摄像头ID
                     */
                    uint64_t m_cameraId;
                    bool m_cameraIdHasBeenSet;

                    /**
                     * rtsp 地址
                     */
                    std::string m_rTSP;
                    bool m_rTSPHasBeenSet;

                    /**
                     * 图片上传地址
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_TASKCONTENT_H_
