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
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置正脸或侧脸的消息
                     * @param Direction 正脸或侧脸的消息
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取Pitch
                     * @return Pitch Pitch
                     */
                    double GetPitch() const;

                    /**
                     * 设置Pitch
                     * @param Pitch Pitch
                     */
                    void SetPitch(const double& _pitch);

                    /**
                     * 判断参数 Pitch 是否已赋值
                     * @return Pitch 是否已赋值
                     */
                    bool PitchHasBeenSet() const;

                    /**
                     * 获取Roll
                     * @return Roll Roll
                     */
                    double GetRoll() const;

                    /**
                     * 设置Roll
                     * @param Roll Roll
                     */
                    void SetRoll(const double& _roll);

                    /**
                     * 判断参数 Roll 是否已赋值
                     * @return Roll 是否已赋值
                     */
                    bool RollHasBeenSet() const;

                    /**
                     * 获取角度信息选填
                     * @return Yaw 角度信息选填
                     */
                    double GetYaw() const;

                    /**
                     * 设置角度信息选填
                     * @param Yaw 角度信息选填
                     */
                    void SetYaw(const double& _yaw);

                    /**
                     * 判断参数 Yaw 是否已赋值
                     * @return Yaw 是否已赋值
                     */
                    bool YawHasBeenSet() const;

                private:

                    /**
                     * 正脸或侧脸的消息
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Pitch
                     */
                    double m_pitch;
                    bool m_pitchHasBeenSet;

                    /**
                     * Roll
                     */
                    double m_roll;
                    bool m_rollHasBeenSet;

                    /**
                     * 角度信息选填
                     */
                    double m_yaw;
                    bool m_yawHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_FACEPOSERESULT_H_
