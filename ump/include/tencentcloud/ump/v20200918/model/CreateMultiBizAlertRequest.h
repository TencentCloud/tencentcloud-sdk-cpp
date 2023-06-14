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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_CREATEMULTIBIZALERTREQUEST_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_CREATEMULTIBIZALERTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ump/v20200918/model/MultiBizWarning.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * CreateMultiBizAlert请求参数结构体
                */
                class CreateMultiBizAlertRequest : public AbstractModel
                {
                public:
                    CreateMultiBizAlertRequest();
                    ~CreateMultiBizAlertRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取点位ID
                     * @return ZoneId 点位ID
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置点位ID
                     * @param _zoneId 点位ID
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

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
                     * 获取时间戳，毫秒
                     * @return CaptureTime 时间戳，毫秒
                     * 
                     */
                    uint64_t GetCaptureTime() const;

                    /**
                     * 设置时间戳，毫秒
                     * @param _captureTime 时间戳，毫秒
                     * 
                     */
                    void SetCaptureTime(const uint64_t& _captureTime);

                    /**
                     * 判断参数 CaptureTime 是否已赋值
                     * @return CaptureTime 是否已赋值
                     * 
                     */
                    bool CaptureTimeHasBeenSet() const;

                    /**
                     * 获取状态: 
1: 侵占
2: 消失
3: 即侵占又消失
                     * @return State 状态: 
1: 侵占
2: 消失
3: 即侵占又消失
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置状态: 
1: 侵占
2: 消失
3: 即侵占又消失
                     * @param _state 状态: 
1: 侵占
2: 消失
3: 即侵占又消失
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取图片base64字符串
                     * @return Image 图片base64字符串
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置图片base64字符串
                     * @param _image 图片base64字符串
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
                     * 获取告警列表
                     * @return Warnings 告警列表
                     * 
                     */
                    std::vector<MultiBizWarning> GetWarnings() const;

                    /**
                     * 设置告警列表
                     * @param _warnings 告警列表
                     * 
                     */
                    void SetWarnings(const std::vector<MultiBizWarning>& _warnings);

                    /**
                     * 判断参数 Warnings 是否已赋值
                     * @return Warnings 是否已赋值
                     * 
                     */
                    bool WarningsHasBeenSet() const;

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
                     * 点位ID
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 摄像头ID
                     */
                    uint64_t m_cameraId;
                    bool m_cameraIdHasBeenSet;

                    /**
                     * 时间戳，毫秒
                     */
                    uint64_t m_captureTime;
                    bool m_captureTimeHasBeenSet;

                    /**
                     * 状态: 
1: 侵占
2: 消失
3: 即侵占又消失
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 图片base64字符串
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 告警列表
                     */
                    std::vector<MultiBizWarning> m_warnings;
                    bool m_warningsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_CREATEMULTIBIZALERTREQUEST_H_
