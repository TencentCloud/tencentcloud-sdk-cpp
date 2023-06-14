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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_CAMERACONFIG_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_CAMERACONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ump/v20200918/model/Config.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * 摄像头配置信息
                */
                class CameraConfig : public AbstractModel
                {
                public:
                    CameraConfig();
                    ~CameraConfig() = default;
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
                     * 获取楼层ID
                     * @return FloorId 楼层ID
                     * 
                     */
                    int64_t GetFloorId() const;

                    /**
                     * 设置楼层ID
                     * @param _floorId 楼层ID
                     * 
                     */
                    void SetFloorId(const int64_t& _floorId);

                    /**
                     * 判断参数 FloorId 是否已赋值
                     * @return FloorId 是否已赋值
                     * 
                     */
                    bool FloorIdHasBeenSet() const;

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
                     * 获取摄像头Mac
                     * @return CameraMac 摄像头Mac
                     * 
                     */
                    std::string GetCameraMac() const;

                    /**
                     * 设置摄像头Mac
                     * @param _cameraMac 摄像头Mac
                     * 
                     */
                    void SetCameraMac(const std::string& _cameraMac);

                    /**
                     * 判断参数 CameraMac 是否已赋值
                     * @return CameraMac 是否已赋值
                     * 
                     */
                    bool CameraMacHasBeenSet() const;

                    /**
                     * 获取摄像头类型:
1: 码流机
2: AI相机
                     * @return CameraType 摄像头类型:
1: 码流机
2: AI相机
                     * 
                     */
                    int64_t GetCameraType() const;

                    /**
                     * 设置摄像头类型:
1: 码流机
2: AI相机
                     * @param _cameraType 摄像头类型:
1: 码流机
2: AI相机
                     * 
                     */
                    void SetCameraType(const int64_t& _cameraType);

                    /**
                     * 判断参数 CameraType 是否已赋值
                     * @return CameraType 是否已赋值
                     * 
                     */
                    bool CameraTypeHasBeenSet() const;

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
                     * 获取摄像头是否启用:
0: 下线
1: 启用
                     * @return CameraState 摄像头是否启用:
0: 下线
1: 启用
                     * 
                     */
                    int64_t GetCameraState() const;

                    /**
                     * 设置摄像头是否启用:
0: 下线
1: 启用
                     * @param _cameraState 摄像头是否启用:
0: 下线
1: 启用
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
                     * 获取点位类型:
1: 场门
3: 层门
5: 特殊区域
7: 门店
8: 补位
10: 开放式门店
11: 品类区
12: 公共区
                     * @return ZoneType 点位类型:
1: 场门
3: 层门
5: 特殊区域
7: 门店
8: 补位
10: 开放式门店
11: 品类区
12: 公共区
                     * 
                     */
                    int64_t GetZoneType() const;

                    /**
                     * 设置点位类型:
1: 场门
3: 层门
5: 特殊区域
7: 门店
8: 补位
10: 开放式门店
11: 品类区
12: 公共区
                     * @param _zoneType 点位类型:
1: 场门
3: 层门
5: 特殊区域
7: 门店
8: 补位
10: 开放式门店
11: 品类区
12: 公共区
                     * 
                     */
                    void SetZoneType(const int64_t& _zoneType);

                    /**
                     * 判断参数 ZoneType 是否已赋值
                     * @return ZoneType 是否已赋值
                     * 
                     */
                    bool ZoneTypeHasBeenSet() const;

                    /**
                     * 获取配置
                     * @return Config 配置
                     * 
                     */
                    Config GetConfig() const;

                    /**
                     * 设置配置
                     * @param _config 配置
                     * 
                     */
                    void SetConfig(const Config& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取宽
                     * @return Width 宽
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置宽
                     * @param _width 宽
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
                     * 获取高
                     * @return Height 高
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置高
                     * @param _height 高
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
                     * 楼层ID
                     */
                    int64_t m_floorId;
                    bool m_floorIdHasBeenSet;

                    /**
                     * 摄像头ID
                     */
                    uint64_t m_cameraId;
                    bool m_cameraIdHasBeenSet;

                    /**
                     * 摄像头IP
                     */
                    std::string m_cameraIp;
                    bool m_cameraIpHasBeenSet;

                    /**
                     * 摄像头Mac
                     */
                    std::string m_cameraMac;
                    bool m_cameraMacHasBeenSet;

                    /**
                     * 摄像头类型:
1: 码流机
2: AI相机
                     */
                    int64_t m_cameraType;
                    bool m_cameraTypeHasBeenSet;

                    /**
                     * 摄像头功能:
1: 人脸
2: 人体
                     */
                    int64_t m_cameraFeature;
                    bool m_cameraFeatureHasBeenSet;

                    /**
                     * 摄像头是否启用:
0: 下线
1: 启用
                     */
                    int64_t m_cameraState;
                    bool m_cameraStateHasBeenSet;

                    /**
                     * 点位ID
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 点位类型:
1: 场门
3: 层门
5: 特殊区域
7: 门店
8: 补位
10: 开放式门店
11: 品类区
12: 公共区
                     */
                    int64_t m_zoneType;
                    bool m_zoneTypeHasBeenSet;

                    /**
                     * 配置
                     */
                    Config m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 宽
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 高
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_CAMERACONFIG_H_
