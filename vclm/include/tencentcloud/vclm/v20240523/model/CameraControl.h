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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_CAMERACONTROL_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_CAMERACONTROL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vclm/v20240523/model/CameraControlConfig.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * 控制摄像机运动的协议
                */
                class CameraControl : public AbstractModel
                {
                public:
                    CameraControl();
                    ~CameraControl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取枚举值：“simple”, “down_back”, “forward_up”, “right_turn_forward”, “left_turn_forward”
simple：简单运镜，此类型下可在"config"中六选一进行运镜
down_back：镜头下压并后退 -> 下移拉远，此类型下config参数无需填写
forward_up：镜头前进并上仰 -> 推进上移，此类型下config参数无需填写
right_turn_forward：先右旋转后前进 -> 右旋推进，此类型下config参数无需填写
left_turn_forward：先左旋并前进 -> 左旋推进，此类型下config参数无需填写
                     * @return Type 枚举值：“simple”, “down_back”, “forward_up”, “right_turn_forward”, “left_turn_forward”
simple：简单运镜，此类型下可在"config"中六选一进行运镜
down_back：镜头下压并后退 -> 下移拉远，此类型下config参数无需填写
forward_up：镜头前进并上仰 -> 推进上移，此类型下config参数无需填写
right_turn_forward：先右旋转后前进 -> 右旋推进，此类型下config参数无需填写
left_turn_forward：先左旋并前进 -> 左旋推进，此类型下config参数无需填写
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置枚举值：“simple”, “down_back”, “forward_up”, “right_turn_forward”, “left_turn_forward”
simple：简单运镜，此类型下可在"config"中六选一进行运镜
down_back：镜头下压并后退 -> 下移拉远，此类型下config参数无需填写
forward_up：镜头前进并上仰 -> 推进上移，此类型下config参数无需填写
right_turn_forward：先右旋转后前进 -> 右旋推进，此类型下config参数无需填写
left_turn_forward：先左旋并前进 -> 左旋推进，此类型下config参数无需填写
                     * @param _type 枚举值：“simple”, “down_back”, “forward_up”, “right_turn_forward”, “left_turn_forward”
simple：简单运镜，此类型下可在"config"中六选一进行运镜
down_back：镜头下压并后退 -> 下移拉远，此类型下config参数无需填写
forward_up：镜头前进并上仰 -> 推进上移，此类型下config参数无需填写
right_turn_forward：先右旋转后前进 -> 右旋推进，此类型下config参数无需填写
left_turn_forward：先左旋并前进 -> 左旋推进，此类型下config参数无需填写
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取包含六个字段，用于指定摄像机在不同方向上的运动或变化。
- 当运镜类型指定simple时必填，指定其他类型时不填
- 参数6选1，即只能有一个参数不为0，其余参数为0
                     * @return Config 包含六个字段，用于指定摄像机在不同方向上的运动或变化。
- 当运镜类型指定simple时必填，指定其他类型时不填
- 参数6选1，即只能有一个参数不为0，其余参数为0
                     * 
                     */
                    CameraControlConfig GetConfig() const;

                    /**
                     * 设置包含六个字段，用于指定摄像机在不同方向上的运动或变化。
- 当运镜类型指定simple时必填，指定其他类型时不填
- 参数6选1，即只能有一个参数不为0，其余参数为0
                     * @param _config 包含六个字段，用于指定摄像机在不同方向上的运动或变化。
- 当运镜类型指定simple时必填，指定其他类型时不填
- 参数6选1，即只能有一个参数不为0，其余参数为0
                     * 
                     */
                    void SetConfig(const CameraControlConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * 枚举值：“simple”, “down_back”, “forward_up”, “right_turn_forward”, “left_turn_forward”
simple：简单运镜，此类型下可在"config"中六选一进行运镜
down_back：镜头下压并后退 -> 下移拉远，此类型下config参数无需填写
forward_up：镜头前进并上仰 -> 推进上移，此类型下config参数无需填写
right_turn_forward：先右旋转后前进 -> 右旋推进，此类型下config参数无需填写
left_turn_forward：先左旋并前进 -> 左旋推进，此类型下config参数无需填写
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 包含六个字段，用于指定摄像机在不同方向上的运动或变化。
- 当运镜类型指定simple时必填，指定其他类型时不填
- 参数6选1，即只能有一个参数不为0，其余参数为0
                     */
                    CameraControlConfig m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_CAMERACONTROL_H_
