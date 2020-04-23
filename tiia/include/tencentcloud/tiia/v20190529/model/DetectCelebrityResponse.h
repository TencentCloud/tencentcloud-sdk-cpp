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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_DETECTCELEBRITYRESPONSE_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_DETECTCELEBRITYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiia/v20190529/model/Face.h>
#include <tencentcloud/tiia/v20190529/model/Threshold.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * DetectCelebrity返回参数结构体
                */
                class DetectCelebrityResponse : public AbstractModel
                {
                public:
                    DetectCelebrityResponse();
                    ~DetectCelebrityResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取公众人物识别结果数组。如果检测不到人脸，返回为空；最多可以返回10个人脸识别结果。
                     * @return Faces 公众人物识别结果数组。如果检测不到人脸，返回为空；最多可以返回10个人脸识别结果。
                     */
                    std::vector<Face> GetFaces() const;

                    /**
                     * 判断参数 Faces 是否已赋值
                     * @return Faces 是否已赋值
                     */
                    bool FacesHasBeenSet() const;

                    /**
                     * 获取本服务在不同误识率水平下（将图片中的人物识别错误的比例）的推荐阈值，可以用于控制识别结果的精度。 
FalseRate1Percent, FalseRate5Permil, FalseRate1Permil分别代表误识率在百分之一、千分之五、千分之一情况下的推荐阈值。 
因为阈值会存在变动，请勿将此处输出的固定值处理，而是每次取值与confidence对比，来判断本次的识别结果是否可信。
 例如，如果您业务中可以接受的误识率是1%，则可以将所有confidence>=FalseRate1Percent的结论认为是正确的。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Threshold 本服务在不同误识率水平下（将图片中的人物识别错误的比例）的推荐阈值，可以用于控制识别结果的精度。 
FalseRate1Percent, FalseRate5Permil, FalseRate1Permil分别代表误识率在百分之一、千分之五、千分之一情况下的推荐阈值。 
因为阈值会存在变动，请勿将此处输出的固定值处理，而是每次取值与confidence对比，来判断本次的识别结果是否可信。
 例如，如果您业务中可以接受的误识率是1%，则可以将所有confidence>=FalseRate1Percent的结论认为是正确的。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Threshold GetThreshold() const;

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     */
                    bool ThresholdHasBeenSet() const;

                private:

                    /**
                     * 公众人物识别结果数组。如果检测不到人脸，返回为空；最多可以返回10个人脸识别结果。
                     */
                    std::vector<Face> m_faces;
                    bool m_facesHasBeenSet;

                    /**
                     * 本服务在不同误识率水平下（将图片中的人物识别错误的比例）的推荐阈值，可以用于控制识别结果的精度。 
FalseRate1Percent, FalseRate5Permil, FalseRate1Permil分别代表误识率在百分之一、千分之五、千分之一情况下的推荐阈值。 
因为阈值会存在变动，请勿将此处输出的固定值处理，而是每次取值与confidence对比，来判断本次的识别结果是否可信。
 例如，如果您业务中可以接受的误识率是1%，则可以将所有confidence>=FalseRate1Percent的结论认为是正确的。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Threshold m_threshold;
                    bool m_thresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_DETECTCELEBRITYRESPONSE_H_
