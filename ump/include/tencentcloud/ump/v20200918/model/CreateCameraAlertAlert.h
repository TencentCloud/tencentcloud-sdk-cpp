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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_CREATECAMERAALERTALERT_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_CREATECAMERAALERTALERT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ump/v20200918/model/CreateCameraAlertsMoveAlert.h>
#include <tencentcloud/ump/v20200918/model/CreateCameraAlertsCoverAlert.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * 告警信息
                */
                class CreateCameraAlertAlert : public AbstractModel
                {
                public:
                    CreateCameraAlertAlert();
                    ~CreateCameraAlertAlert() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集团编码
                     * @return GroupCode 集团编码
                     * 
                     */
                    std::string GetGroupCode() const;

                    /**
                     * 设置集团编码
                     * @param _groupCode 集团编码
                     * 
                     */
                    void SetGroupCode(const std::string& _groupCode);

                    /**
                     * 判断参数 GroupCode 是否已赋值
                     * @return GroupCode 是否已赋值
                     * 
                     */
                    bool GroupCodeHasBeenSet() const;

                    /**
                     * 获取广场ID
                     * @return MallId 广场ID
                     * 
                     */
                    uint64_t GetMallId() const;

                    /**
                     * 设置广场ID
                     * @param _mallId 广场ID
                     * 
                     */
                    void SetMallId(const uint64_t& _mallId);

                    /**
                     * 判断参数 MallId 是否已赋值
                     * @return MallId 是否已赋值
                     * 
                     */
                    bool MallIdHasBeenSet() const;

                    /**
                     * 获取相机ID
                     * @return CameraId 相机ID
                     * 
                     */
                    uint64_t GetCameraId() const;

                    /**
                     * 设置相机ID
                     * @param _cameraId 相机ID
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
                     * 获取时间戳,ms,默认为告警请求到达时间
                     * @return CaptureTime 时间戳,ms,默认为告警请求到达时间
                     * 
                     */
                    int64_t GetCaptureTime() const;

                    /**
                     * 设置时间戳,ms,默认为告警请求到达时间
                     * @param _captureTime 时间戳,ms,默认为告警请求到达时间
                     * 
                     */
                    void SetCaptureTime(const int64_t& _captureTime);

                    /**
                     * 判断参数 CaptureTime 是否已赋值
                     * @return CaptureTime 是否已赋值
                     * 
                     */
                    bool CaptureTimeHasBeenSet() const;

                    /**
                     * 获取图片base64编码
                     * @return Image 图片base64编码
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置图片base64编码
                     * @param _image 图片base64编码
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取移动告警
                     * @return MoveAlert 移动告警
                     * 
                     */
                    CreateCameraAlertsMoveAlert GetMoveAlert() const;

                    /**
                     * 设置移动告警
                     * @param _moveAlert 移动告警
                     * 
                     */
                    void SetMoveAlert(const CreateCameraAlertsMoveAlert& _moveAlert);

                    /**
                     * 判断参数 MoveAlert 是否已赋值
                     * @return MoveAlert 是否已赋值
                     * 
                     */
                    bool MoveAlertHasBeenSet() const;

                    /**
                     * 获取遮挡告警
                     * @return CoverAlert 遮挡告警
                     * 
                     */
                    CreateCameraAlertsCoverAlert GetCoverAlert() const;

                    /**
                     * 设置遮挡告警
                     * @param _coverAlert 遮挡告警
                     * 
                     */
                    void SetCoverAlert(const CreateCameraAlertsCoverAlert& _coverAlert);

                    /**
                     * 判断参数 CoverAlert 是否已赋值
                     * @return CoverAlert 是否已赋值
                     * 
                     */
                    bool CoverAlertHasBeenSet() const;

                private:

                    /**
                     * 集团编码
                     */
                    std::string m_groupCode;
                    bool m_groupCodeHasBeenSet;

                    /**
                     * 广场ID
                     */
                    uint64_t m_mallId;
                    bool m_mallIdHasBeenSet;

                    /**
                     * 相机ID
                     */
                    uint64_t m_cameraId;
                    bool m_cameraIdHasBeenSet;

                    /**
                     * 时间戳,ms,默认为告警请求到达时间
                     */
                    int64_t m_captureTime;
                    bool m_captureTimeHasBeenSet;

                    /**
                     * 图片base64编码
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 移动告警
                     */
                    CreateCameraAlertsMoveAlert m_moveAlert;
                    bool m_moveAlertHasBeenSet;

                    /**
                     * 遮挡告警
                     */
                    CreateCameraAlertsCoverAlert m_coverAlert;
                    bool m_coverAlertHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_CREATECAMERAALERTALERT_H_
