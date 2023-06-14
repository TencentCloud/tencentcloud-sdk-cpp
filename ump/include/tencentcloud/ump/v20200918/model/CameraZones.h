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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_CAMERAZONES_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_CAMERAZONES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ump/v20200918/model/BunkZone.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * 摄像头包含简单的点位信息
                */
                class CameraZones : public AbstractModel
                {
                public:
                    CameraZones();
                    ~CameraZones() = default;
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
                     * 获取摄像头名称
                     * @return CameraName 摄像头名称
                     * 
                     */
                    std::string GetCameraName() const;

                    /**
                     * 设置摄像头名称
                     * @param _cameraName 摄像头名称
                     * 
                     */
                    void SetCameraName(const std::string& _cameraName);

                    /**
                     * 判断参数 CameraName 是否已赋值
                     * @return CameraName 是否已赋值
                     * 
                     */
                    bool CameraNameHasBeenSet() const;

                    /**
                     * 获取摄像头功能:
1: 人脸
2: 人体
                     * @return CameraFeature 摄像头功能:
1: 人脸
2: 人体
                     * 
                     */
                    int64_t GetCameraFeature() const;

                    /**
                     * 设置摄像头功能:
1: 人脸
2: 人体
                     * @param _cameraFeature 摄像头功能:
1: 人脸
2: 人体
                     * 
                     */
                    void SetCameraFeature(const int64_t& _cameraFeature);

                    /**
                     * 判断参数 CameraFeature 是否已赋值
                     * @return CameraFeature 是否已赋值
                     * 
                     */
                    bool CameraFeatureHasBeenSet() const;

                    /**
                     * 获取摄像头IP
                     * @return CameraIp 摄像头IP
                     * 
                     */
                    std::string GetCameraIp() const;

                    /**
                     * 设置摄像头IP
                     * @param _cameraIp 摄像头IP
                     * 
                     */
                    void SetCameraIp(const std::string& _cameraIp);

                    /**
                     * 判断参数 CameraIp 是否已赋值
                     * @return CameraIp 是否已赋值
                     * 
                     */
                    bool CameraIpHasBeenSet() const;

                    /**
                     * 获取摄像头状态:
0: 异常 (不再使用)
1: 正常 (不再使用)
10: 初始化
11: 未知状态 (因服务内部错误产生)
12: 网络异常
13: 未授权
14: 相机App异常
15: 相机取流异常
16: 正常
                     * @return CameraState 摄像头状态:
0: 异常 (不再使用)
1: 正常 (不再使用)
10: 初始化
11: 未知状态 (因服务内部错误产生)
12: 网络异常
13: 未授权
14: 相机App异常
15: 相机取流异常
16: 正常
                     * 
                     */
                    int64_t GetCameraState() const;

                    /**
                     * 设置摄像头状态:
0: 异常 (不再使用)
1: 正常 (不再使用)
10: 初始化
11: 未知状态 (因服务内部错误产生)
12: 网络异常
13: 未授权
14: 相机App异常
15: 相机取流异常
16: 正常
                     * @param _cameraState 摄像头状态:
0: 异常 (不再使用)
1: 正常 (不再使用)
10: 初始化
11: 未知状态 (因服务内部错误产生)
12: 网络异常
13: 未授权
14: 相机App异常
15: 相机取流异常
16: 正常
                     * 
                     */
                    void SetCameraState(const int64_t& _cameraState);

                    /**
                     * 判断参数 CameraState 是否已赋值
                     * @return CameraState 是否已赋值
                     * 
                     */
                    bool CameraStateHasBeenSet() const;

                    /**
                     * 获取点位列表
                     * @return Zones 点位列表
                     * 
                     */
                    std::vector<BunkZone> GetZones() const;

                    /**
                     * 设置点位列表
                     * @param _zones 点位列表
                     * 
                     */
                    void SetZones(const std::vector<BunkZone>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取像素:
130W(1280*960)
200W(1920*1080)
400W(2560*1440)
                     * @return Pixel 像素:
130W(1280*960)
200W(1920*1080)
400W(2560*1440)
                     * 
                     */
                    std::string GetPixel() const;

                    /**
                     * 设置像素:
130W(1280*960)
200W(1920*1080)
400W(2560*1440)
                     * @param _pixel 像素:
130W(1280*960)
200W(1920*1080)
400W(2560*1440)
                     * 
                     */
                    void SetPixel(const std::string& _pixel);

                    /**
                     * 判断参数 Pixel 是否已赋值
                     * @return Pixel 是否已赋值
                     * 
                     */
                    bool PixelHasBeenSet() const;

                    /**
                     * 获取相机Rtsp地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RTSP 相机Rtsp地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRTSP() const;

                    /**
                     * 设置相机Rtsp地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rTSP 相机Rtsp地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRTSP(const std::string& _rTSP);

                    /**
                     * 判断参数 RTSP 是否已赋值
                     * @return RTSP 是否已赋值
                     * 
                     */
                    bool RTSPHasBeenSet() const;

                private:

                    /**
                     * 摄像头ID
                     */
                    uint64_t m_cameraId;
                    bool m_cameraIdHasBeenSet;

                    /**
                     * 摄像头名称
                     */
                    std::string m_cameraName;
                    bool m_cameraNameHasBeenSet;

                    /**
                     * 摄像头功能:
1: 人脸
2: 人体
                     */
                    int64_t m_cameraFeature;
                    bool m_cameraFeatureHasBeenSet;

                    /**
                     * 摄像头IP
                     */
                    std::string m_cameraIp;
                    bool m_cameraIpHasBeenSet;

                    /**
                     * 摄像头状态:
0: 异常 (不再使用)
1: 正常 (不再使用)
10: 初始化
11: 未知状态 (因服务内部错误产生)
12: 网络异常
13: 未授权
14: 相机App异常
15: 相机取流异常
16: 正常
                     */
                    int64_t m_cameraState;
                    bool m_cameraStateHasBeenSet;

                    /**
                     * 点位列表
                     */
                    std::vector<BunkZone> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * 像素:
130W(1280*960)
200W(1920*1080)
400W(2560*1440)
                     */
                    std::string m_pixel;
                    bool m_pixelHasBeenSet;

                    /**
                     * 相机Rtsp地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rTSP;
                    bool m_rTSPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_CAMERAZONES_H_
