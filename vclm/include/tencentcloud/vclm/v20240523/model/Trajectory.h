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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_TRAJECTORY_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_TRAJECTORY_H_

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
                * 运动轨迹坐标序列
                */
                class Trajectory : public AbstractModel
                {
                public:
                    Trajectory();
                    ~Trajectory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取轨迹点横坐标（在像素二维坐标系下，以输入图片image左下为原点的像素坐标）
                     * @return X 轨迹点横坐标（在像素二维坐标系下，以输入图片image左下为原点的像素坐标）
                     * 
                     */
                    int64_t GetX() const;

                    /**
                     * 设置轨迹点横坐标（在像素二维坐标系下，以输入图片image左下为原点的像素坐标）
                     * @param _x 轨迹点横坐标（在像素二维坐标系下，以输入图片image左下为原点的像素坐标）
                     * 
                     */
                    void SetX(const int64_t& _x);

                    /**
                     * 判断参数 X 是否已赋值
                     * @return X 是否已赋值
                     * 
                     */
                    bool XHasBeenSet() const;

                    /**
                     * 获取轨迹点纵坐标（在像素二维坐标系下，以输入图片image左下为原点的像素坐标）
                     * @return Y 轨迹点纵坐标（在像素二维坐标系下，以输入图片image左下为原点的像素坐标）
                     * 
                     */
                    int64_t GetY() const;

                    /**
                     * 设置轨迹点纵坐标（在像素二维坐标系下，以输入图片image左下为原点的像素坐标）
                     * @param _y 轨迹点纵坐标（在像素二维坐标系下，以输入图片image左下为原点的像素坐标）
                     * 
                     */
                    void SetY(const int64_t& _y);

                    /**
                     * 判断参数 Y 是否已赋值
                     * @return Y 是否已赋值
                     * 
                     */
                    bool YHasBeenSet() const;

                private:

                    /**
                     * 轨迹点横坐标（在像素二维坐标系下，以输入图片image左下为原点的像素坐标）
                     */
                    int64_t m_x;
                    bool m_xHasBeenSet;

                    /**
                     * 轨迹点纵坐标（在像素二维坐标系下，以输入图片image左下为原点的像素坐标）
                     */
                    int64_t m_y;
                    bool m_yHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_TRAJECTORY_H_
