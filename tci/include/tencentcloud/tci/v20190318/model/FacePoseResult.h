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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_FACEPOSERESULT_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_FACEPOSERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * FacePoseResult
                */
                class FacePoseResult : public AbstractModel
                {
                public:
                    FacePoseResult();
                    ~FacePoseResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取正脸或侧脸的消息
                     * @return Direction 正脸或侧脸的消息
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置正脸或侧脸的消息
                     * @param _direction 正脸或侧脸的消息
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取围绕Z轴旋转角度，俯仰角
                     * @return Pitch 围绕Z轴旋转角度，俯仰角
                     * 
                     */
                    double GetPitch() const;

                    /**
                     * 设置围绕Z轴旋转角度，俯仰角
                     * @param _pitch 围绕Z轴旋转角度，俯仰角
                     * 
                     */
                    void SetPitch(const double& _pitch);

                    /**
                     * 判断参数 Pitch 是否已赋值
                     * @return Pitch 是否已赋值
                     * 
                     */
                    bool PitchHasBeenSet() const;

                    /**
                     * 获取围绕X轴旋转角度，翻滚角
                     * @return Roll 围绕X轴旋转角度，翻滚角
                     * 
                     */
                    double GetRoll() const;

                    /**
                     * 设置围绕X轴旋转角度，翻滚角
                     * @param _roll 围绕X轴旋转角度，翻滚角
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
                     * 获取围绕Y轴旋转角度，偏航角
                     * @return Yaw 围绕Y轴旋转角度，偏航角
                     * 
                     */
                    double GetYaw() const;

                    /**
                     * 设置围绕Y轴旋转角度，偏航角
                     * @param _yaw 围绕Y轴旋转角度，偏航角
                     * 
                     */
                    void SetYaw(const double& _yaw);

                    /**
                     * 判断参数 Yaw 是否已赋值
                     * @return Yaw 是否已赋值
                     * 
                     */
                    bool YawHasBeenSet() const;

                private:

                    /**
                     * 正脸或侧脸的消息
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 围绕Z轴旋转角度，俯仰角
                     */
                    double m_pitch;
                    bool m_pitchHasBeenSet;

                    /**
                     * 围绕X轴旋转角度，翻滚角
                     */
                    double m_roll;
                    bool m_rollHasBeenSet;

                    /**
                     * 围绕Y轴旋转角度，偏航角
                     */
                    double m_yaw;
                    bool m_yawHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_FACEPOSERESULT_H_
