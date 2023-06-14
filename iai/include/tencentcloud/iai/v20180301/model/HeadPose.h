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

#ifndef TENCENTCLOUD_IAI_V20180301_MODEL_HEADPOSE_H_
#define TENCENTCLOUD_IAI_V20180301_MODEL_HEADPOSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 姿态信息
                */
                class HeadPose : public AbstractModel
                {
                public:
                    HeadPose();
                    ~HeadPose() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取上下偏移[-30,30]。
                     * @return Pitch 上下偏移[-30,30]。
                     * 
                     */
                    int64_t GetPitch() const;

                    /**
                     * 设置上下偏移[-30,30]。
                     * @param _pitch 上下偏移[-30,30]。
                     * 
                     */
                    void SetPitch(const int64_t& _pitch);

                    /**
                     * 判断参数 Pitch 是否已赋值
                     * @return Pitch 是否已赋值
                     * 
                     */
                    bool PitchHasBeenSet() const;

                    /**
                     * 获取左右偏移[-30,30]。
                     * @return Yaw 左右偏移[-30,30]。
                     * 
                     */
                    int64_t GetYaw() const;

                    /**
                     * 设置左右偏移[-30,30]。
                     * @param _yaw 左右偏移[-30,30]。
                     * 
                     */
                    void SetYaw(const int64_t& _yaw);

                    /**
                     * 判断参数 Yaw 是否已赋值
                     * @return Yaw 是否已赋值
                     * 
                     */
                    bool YawHasBeenSet() const;

                    /**
                     * 获取平面旋转[-180,180]。
                     * @return Roll 平面旋转[-180,180]。
                     * 
                     */
                    int64_t GetRoll() const;

                    /**
                     * 设置平面旋转[-180,180]。
                     * @param _roll 平面旋转[-180,180]。
                     * 
                     */
                    void SetRoll(const int64_t& _roll);

                    /**
                     * 判断参数 Roll 是否已赋值
                     * @return Roll 是否已赋值
                     * 
                     */
                    bool RollHasBeenSet() const;

                private:

                    /**
                     * 上下偏移[-30,30]。
                     */
                    int64_t m_pitch;
                    bool m_pitchHasBeenSet;

                    /**
                     * 左右偏移[-30,30]。
                     */
                    int64_t m_yaw;
                    bool m_yawHasBeenSet;

                    /**
                     * 平面旋转[-180,180]。
                     */
                    int64_t m_roll;
                    bool m_rollHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_HEADPOSE_H_
