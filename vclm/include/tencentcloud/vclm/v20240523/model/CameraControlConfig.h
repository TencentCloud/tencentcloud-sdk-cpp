/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_CAMERACONTROLCONFIG_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_CAMERACONTROLCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * 指定摄像机在不同方向上的运动或变化
                */
                class CameraControlConfig : public AbstractModel
                {
                public:
                    CameraControlConfig();
                    ~CameraControlConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取水平运镜，控制摄像机在水平方向上的移动量（沿x轴平移）

取值范围：[-10, 10]，负值表示向左平移，正值表示向右平移
                     * @return Horizontal 水平运镜，控制摄像机在水平方向上的移动量（沿x轴平移）

取值范围：[-10, 10]，负值表示向左平移，正值表示向右平移
                     * 
                     */
                    double GetHorizontal() const;

                    /**
                     * 设置水平运镜，控制摄像机在水平方向上的移动量（沿x轴平移）

取值范围：[-10, 10]，负值表示向左平移，正值表示向右平移
                     * @param _horizontal 水平运镜，控制摄像机在水平方向上的移动量（沿x轴平移）

取值范围：[-10, 10]，负值表示向左平移，正值表示向右平移
                     * 
                     */
                    void SetHorizontal(const double& _horizontal);

                    /**
                     * 判断参数 Horizontal 是否已赋值
                     * @return Horizontal 是否已赋值
                     * 
                     */
                    bool HorizontalHasBeenSet() const;

                    /**
                     * 获取垂直运镜，控制摄像机在垂直方向上的移动量（沿y轴平移）

取值范围：[-10, 10]，负值表示向下平移，正值表示向上平移
                     * @return Vertical 垂直运镜，控制摄像机在垂直方向上的移动量（沿y轴平移）

取值范围：[-10, 10]，负值表示向下平移，正值表示向上平移
                     * 
                     */
                    double GetVertical() const;

                    /**
                     * 设置垂直运镜，控制摄像机在垂直方向上的移动量（沿y轴平移）

取值范围：[-10, 10]，负值表示向下平移，正值表示向上平移
                     * @param _vertical 垂直运镜，控制摄像机在垂直方向上的移动量（沿y轴平移）

取值范围：[-10, 10]，负值表示向下平移，正值表示向上平移
                     * 
                     */
                    void SetVertical(const double& _vertical);

                    /**
                     * 判断参数 Vertical 是否已赋值
                     * @return Vertical 是否已赋值
                     * 
                     */
                    bool VerticalHasBeenSet() const;

                    /**
                     * 获取水平摇镜，控制摄像机在水平面上的旋转量（绕y轴旋转）

取值范围：[-10, 10]，负值表示绕y轴向左旋转，正值表示绕y轴向右旋转
                     * @return Pan 水平摇镜，控制摄像机在水平面上的旋转量（绕y轴旋转）

取值范围：[-10, 10]，负值表示绕y轴向左旋转，正值表示绕y轴向右旋转
                     * 
                     */
                    double GetPan() const;

                    /**
                     * 设置水平摇镜，控制摄像机在水平面上的旋转量（绕y轴旋转）

取值范围：[-10, 10]，负值表示绕y轴向左旋转，正值表示绕y轴向右旋转
                     * @param _pan 水平摇镜，控制摄像机在水平面上的旋转量（绕y轴旋转）

取值范围：[-10, 10]，负值表示绕y轴向左旋转，正值表示绕y轴向右旋转
                     * 
                     */
                    void SetPan(const double& _pan);

                    /**
                     * 判断参数 Pan 是否已赋值
                     * @return Pan 是否已赋值
                     * 
                     */
                    bool PanHasBeenSet() const;

                    /**
                     * 获取垂直摇镜，控制摄像机在垂直面上的旋转量（沿x轴旋转）

取值范围：[-10, 10]，负值表示绕x轴向下旋转，正值表示绕x轴向上旋转
                     * @return Tilt 垂直摇镜，控制摄像机在垂直面上的旋转量（沿x轴旋转）

取值范围：[-10, 10]，负值表示绕x轴向下旋转，正值表示绕x轴向上旋转
                     * 
                     */
                    double GetTilt() const;

                    /**
                     * 设置垂直摇镜，控制摄像机在垂直面上的旋转量（沿x轴旋转）

取值范围：[-10, 10]，负值表示绕x轴向下旋转，正值表示绕x轴向上旋转
                     * @param _tilt 垂直摇镜，控制摄像机在垂直面上的旋转量（沿x轴旋转）

取值范围：[-10, 10]，负值表示绕x轴向下旋转，正值表示绕x轴向上旋转
                     * 
                     */
                    void SetTilt(const double& _tilt);

                    /**
                     * 判断参数 Tilt 是否已赋值
                     * @return Tilt 是否已赋值
                     * 
                     */
                    bool TiltHasBeenSet() const;

                    /**
                     * 获取旋转运镜，控制摄像机的滚动量（绕z轴旋转）

取值范围：[-10, 10]，负值表示绕z轴逆时针旋转，正值表示绕z轴顺时针旋转
                     * @return Roll 旋转运镜，控制摄像机的滚动量（绕z轴旋转）

取值范围：[-10, 10]，负值表示绕z轴逆时针旋转，正值表示绕z轴顺时针旋转
                     * 
                     */
                    double GetRoll() const;

                    /**
                     * 设置旋转运镜，控制摄像机的滚动量（绕z轴旋转）

取值范围：[-10, 10]，负值表示绕z轴逆时针旋转，正值表示绕z轴顺时针旋转
                     * @param _roll 旋转运镜，控制摄像机的滚动量（绕z轴旋转）

取值范围：[-10, 10]，负值表示绕z轴逆时针旋转，正值表示绕z轴顺时针旋转
                     * 
                     */
                    void SetRoll(const double& _roll);

                    /**
                     * 判断参数 Roll 是否已赋值
                     * @return Roll 是否已赋值
                     * 
                     */
                    bool RollHasBeenSet() const;

                    /**
                     * 获取变焦，控制摄像机的焦距变化，影响视野的远近

取值范围：[-10, 10]，负值表示焦距变长、视野范围变小，正值表示焦距变短、视野范围变大
                     * @return Zoom 变焦，控制摄像机的焦距变化，影响视野的远近

取值范围：[-10, 10]，负值表示焦距变长、视野范围变小，正值表示焦距变短、视野范围变大
                     * 
                     */
                    double GetZoom() const;

                    /**
                     * 设置变焦，控制摄像机的焦距变化，影响视野的远近

取值范围：[-10, 10]，负值表示焦距变长、视野范围变小，正值表示焦距变短、视野范围变大
                     * @param _zoom 变焦，控制摄像机的焦距变化，影响视野的远近

取值范围：[-10, 10]，负值表示焦距变长、视野范围变小，正值表示焦距变短、视野范围变大
                     * 
                     */
                    void SetZoom(const double& _zoom);

                    /**
                     * 判断参数 Zoom 是否已赋值
                     * @return Zoom 是否已赋值
                     * 
                     */
                    bool ZoomHasBeenSet() const;

                private:

                    /**
                     * 水平运镜，控制摄像机在水平方向上的移动量（沿x轴平移）

取值范围：[-10, 10]，负值表示向左平移，正值表示向右平移
                     */
                    double m_horizontal;
                    bool m_horizontalHasBeenSet;

                    /**
                     * 垂直运镜，控制摄像机在垂直方向上的移动量（沿y轴平移）

取值范围：[-10, 10]，负值表示向下平移，正值表示向上平移
                     */
                    double m_vertical;
                    bool m_verticalHasBeenSet;

                    /**
                     * 水平摇镜，控制摄像机在水平面上的旋转量（绕y轴旋转）

取值范围：[-10, 10]，负值表示绕y轴向左旋转，正值表示绕y轴向右旋转
                     */
                    double m_pan;
                    bool m_panHasBeenSet;

                    /**
                     * 垂直摇镜，控制摄像机在垂直面上的旋转量（沿x轴旋转）

取值范围：[-10, 10]，负值表示绕x轴向下旋转，正值表示绕x轴向上旋转
                     */
                    double m_tilt;
                    bool m_tiltHasBeenSet;

                    /**
                     * 旋转运镜，控制摄像机的滚动量（绕z轴旋转）

取值范围：[-10, 10]，负值表示绕z轴逆时针旋转，正值表示绕z轴顺时针旋转
                     */
                    double m_roll;
                    bool m_rollHasBeenSet;

                    /**
                     * 变焦，控制摄像机的焦距变化，影响视野的远近

取值范围：[-10, 10]，负值表示焦距变长、视野范围变小，正值表示焦距变短、视野范围变大
                     */
                    double m_zoom;
                    bool m_zoomHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_CAMERACONTROLCONFIG_H_
