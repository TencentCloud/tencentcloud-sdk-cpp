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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_CONFIG_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_CONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ump/v20200918/model/Point.h>
#include <tencentcloud/ump/v20200918/model/Polygon.h>
#include <tencentcloud/ump/v20200918/model/ZoneArea.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * 摄像头配置
                */
                class Config : public AbstractModel
                {
                public:
                    Config();
                    ~Config() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取摄像头厂商:
H: 海康
D: 大华
Y: 英飞拓
L: 联纵
                     * @return CameraProducer 摄像头厂商:
H: 海康
D: 大华
Y: 英飞拓
L: 联纵
                     * 
                     */
                    std::string GetCameraProducer() const;

                    /**
                     * 设置摄像头厂商:
H: 海康
D: 大华
Y: 英飞拓
L: 联纵
                     * @param _cameraProducer 摄像头厂商:
H: 海康
D: 大华
Y: 英飞拓
L: 联纵
                     * 
                     */
                    void SetCameraProducer(const std::string& _cameraProducer);

                    /**
                     * 判断参数 CameraProducer 是否已赋值
                     * @return CameraProducer 是否已赋值
                     * 
                     */
                    bool CameraProducerHasBeenSet() const;

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
                     * 获取摄像头帧率
                     * @return Fps 摄像头帧率
                     * 
                     */
                    int64_t GetFps() const;

                    /**
                     * 设置摄像头帧率
                     * @param _fps 摄像头帧率
                     * 
                     */
                    void SetFps(const int64_t& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                    /**
                     * 获取解码帧率
                     * @return DecodeFps 解码帧率
                     * 
                     */
                    int64_t GetDecodeFps() const;

                    /**
                     * 设置解码帧率
                     * @param _decodeFps 解码帧率
                     * 
                     */
                    void SetDecodeFps(const int64_t& _decodeFps);

                    /**
                     * 判断参数 DecodeFps 是否已赋值
                     * @return DecodeFps 是否已赋值
                     * 
                     */
                    bool DecodeFpsHasBeenSet() const;

                    /**
                     * 获取是否做客流计算:
0: 否
1: 是
                     * @return PassengerFlow 是否做客流计算:
0: 否
1: 是
                     * 
                     */
                    int64_t GetPassengerFlow() const;

                    /**
                     * 设置是否做客流计算:
0: 否
1: 是
                     * @param _passengerFlow 是否做客流计算:
0: 否
1: 是
                     * 
                     */
                    void SetPassengerFlow(const int64_t& _passengerFlow);

                    /**
                     * 判断参数 PassengerFlow 是否已赋值
                     * @return PassengerFlow 是否已赋值
                     * 
                     */
                    bool PassengerFlowHasBeenSet() const;

                    /**
                     * 获取是否打开人脸曝光:
0: 关闭
1: 开启
                     * @return FaceExpose 是否打开人脸曝光:
0: 关闭
1: 开启
                     * 
                     */
                    int64_t GetFaceExpose() const;

                    /**
                     * 设置是否打开人脸曝光:
0: 关闭
1: 开启
                     * @param _faceExpose 是否打开人脸曝光:
0: 关闭
1: 开启
                     * 
                     */
                    void SetFaceExpose(const int64_t& _faceExpose);

                    /**
                     * 判断参数 FaceExpose 是否已赋值
                     * @return FaceExpose 是否已赋值
                     * 
                     */
                    bool FaceExposeHasBeenSet() const;

                    /**
                     * 获取门线标注
                     * @return MallArea 门线标注
                     * 
                     */
                    std::vector<Point> GetMallArea() const;

                    /**
                     * 设置门线标注
                     * @param _mallArea 门线标注
                     * 
                     */
                    void SetMallArea(const std::vector<Point>& _mallArea);

                    /**
                     * 判断参数 MallArea 是否已赋值
                     * @return MallArea 是否已赋值
                     * 
                     */
                    bool MallAreaHasBeenSet() const;

                    /**
                     * 获取店门标注
                     * @return ShopArea 店门标注
                     * 
                     */
                    std::vector<Point> GetShopArea() const;

                    /**
                     * 设置店门标注
                     * @param _shopArea 店门标注
                     * 
                     */
                    void SetShopArea(const std::vector<Point>& _shopArea);

                    /**
                     * 判断参数 ShopArea 是否已赋值
                     * @return ShopArea 是否已赋值
                     * 
                     */
                    bool ShopAreaHasBeenSet() const;

                    /**
                     * 获取检测区标注
                     * @return TrackAreas 检测区标注
                     * 
                     */
                    std::vector<Polygon> GetTrackAreas() const;

                    /**
                     * 设置检测区标注
                     * @param _trackAreas 检测区标注
                     * 
                     */
                    void SetTrackAreas(const std::vector<Polygon>& _trackAreas);

                    /**
                     * 判断参数 TrackAreas 是否已赋值
                     * @return TrackAreas 是否已赋值
                     * 
                     */
                    bool TrackAreasHasBeenSet() const;

                    /**
                     * 获取点位列表（品类区）
                     * @return Zones 点位列表（品类区）
                     * 
                     */
                    std::vector<ZoneArea> GetZones() const;

                    /**
                     * 设置点位列表（品类区）
                     * @param _zones 点位列表（品类区）
                     * 
                     */
                    void SetZones(const std::vector<ZoneArea>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                private:

                    /**
                     * 摄像头厂商:
H: 海康
D: 大华
Y: 英飞拓
L: 联纵
                     */
                    std::string m_cameraProducer;
                    bool m_cameraProducerHasBeenSet;

                    /**
                     * rtsp 地址
                     */
                    std::string m_rTSP;
                    bool m_rTSPHasBeenSet;

                    /**
                     * 摄像头帧率
                     */
                    int64_t m_fps;
                    bool m_fpsHasBeenSet;

                    /**
                     * 解码帧率
                     */
                    int64_t m_decodeFps;
                    bool m_decodeFpsHasBeenSet;

                    /**
                     * 是否做客流计算:
0: 否
1: 是
                     */
                    int64_t m_passengerFlow;
                    bool m_passengerFlowHasBeenSet;

                    /**
                     * 是否打开人脸曝光:
0: 关闭
1: 开启
                     */
                    int64_t m_faceExpose;
                    bool m_faceExposeHasBeenSet;

                    /**
                     * 门线标注
                     */
                    std::vector<Point> m_mallArea;
                    bool m_mallAreaHasBeenSet;

                    /**
                     * 店门标注
                     */
                    std::vector<Point> m_shopArea;
                    bool m_shopAreaHasBeenSet;

                    /**
                     * 检测区标注
                     */
                    std::vector<Polygon> m_trackAreas;
                    bool m_trackAreasHasBeenSet;

                    /**
                     * 点位列表（品类区）
                     */
                    std::vector<ZoneArea> m_zones;
                    bool m_zonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_CONFIG_H_
