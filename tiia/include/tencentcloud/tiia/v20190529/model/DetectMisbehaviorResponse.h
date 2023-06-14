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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_DETECTMISBEHAVIORRESPONSE_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_DETECTMISBEHAVIORRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * DetectMisbehavior返回参数结构体
                */
                class DetectMisbehaviorResponse : public AbstractModel
                {
                public:
                    DetectMisbehaviorResponse();
                    ~DetectMisbehaviorResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取对于图片中包含不良行为的置信度，取值[0,1]，一般超过0.5则表明可能包含不良行为内容；
                     * @return Confidence 对于图片中包含不良行为的置信度，取值[0,1]，一般超过0.5则表明可能包含不良行为内容；
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取图像中最可能包含的不良行为类别，包括赌博、打架斗殴、吸毒等。
                     * @return Type 图像中最可能包含的不良行为类别，包括赌博、打架斗殴、吸毒等。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 对于图片中包含不良行为的置信度，取值[0,1]，一般超过0.5则表明可能包含不良行为内容；
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 图像中最可能包含的不良行为类别，包括赌博、打架斗殴、吸毒等。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_DETECTMISBEHAVIORRESPONSE_H_
