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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEIMAGEOPERATION_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEIMAGEOPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 视频编辑/合成任务 视频图像转换操作。
                */
                class ComposeImageOperation : public AbstractModel
                {
                public:
                    ComposeImageOperation();
                    ~ComposeImageOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型，取值有：
<li>Rotate：图像旋转。</li>
<li>Flip：图像翻转。</li>
                     * @return Type 类型，取值有：
<li>Rotate：图像旋转。</li>
<li>Flip：图像翻转。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型，取值有：
<li>Rotate：图像旋转。</li>
<li>Flip：图像翻转。</li>
                     * @param _type 类型，取值有：
<li>Rotate：图像旋转。</li>
<li>Flip：图像翻转。</li>
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
                     * 获取当 Type = Rotate 时有效。图像以中心点为原点进行旋转的角度，取值范围0~360。
                     * @return RotateAngle 当 Type = Rotate 时有效。图像以中心点为原点进行旋转的角度，取值范围0~360。
                     * 
                     */
                    double GetRotateAngle() const;

                    /**
                     * 设置当 Type = Rotate 时有效。图像以中心点为原点进行旋转的角度，取值范围0~360。
                     * @param _rotateAngle 当 Type = Rotate 时有效。图像以中心点为原点进行旋转的角度，取值范围0~360。
                     * 
                     */
                    void SetRotateAngle(const double& _rotateAngle);

                    /**
                     * 判断参数 RotateAngle 是否已赋值
                     * @return RotateAngle 是否已赋值
                     * 
                     */
                    bool RotateAngleHasBeenSet() const;

                    /**
                     * 获取当 Type = Flip 时有效。图像翻转动作，取值有： 
<li>Horizental：水平翻转，即左右镜像。</li>
<li>Vertical：垂直翻转，即上下镜像。</li>
                     * @return FlipType 当 Type = Flip 时有效。图像翻转动作，取值有： 
<li>Horizental：水平翻转，即左右镜像。</li>
<li>Vertical：垂直翻转，即上下镜像。</li>
                     * 
                     */
                    std::string GetFlipType() const;

                    /**
                     * 设置当 Type = Flip 时有效。图像翻转动作，取值有： 
<li>Horizental：水平翻转，即左右镜像。</li>
<li>Vertical：垂直翻转，即上下镜像。</li>
                     * @param _flipType 当 Type = Flip 时有效。图像翻转动作，取值有： 
<li>Horizental：水平翻转，即左右镜像。</li>
<li>Vertical：垂直翻转，即上下镜像。</li>
                     * 
                     */
                    void SetFlipType(const std::string& _flipType);

                    /**
                     * 判断参数 FlipType 是否已赋值
                     * @return FlipType 是否已赋值
                     * 
                     */
                    bool FlipTypeHasBeenSet() const;

                private:

                    /**
                     * 类型，取值有：
<li>Rotate：图像旋转。</li>
<li>Flip：图像翻转。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 当 Type = Rotate 时有效。图像以中心点为原点进行旋转的角度，取值范围0~360。
                     */
                    double m_rotateAngle;
                    bool m_rotateAngleHasBeenSet;

                    /**
                     * 当 Type = Flip 时有效。图像翻转动作，取值有： 
<li>Horizental：水平翻转，即左右镜像。</li>
<li>Vertical：垂直翻转，即上下镜像。</li>
                     */
                    std::string m_flipType;
                    bool m_flipTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEIMAGEOPERATION_H_
