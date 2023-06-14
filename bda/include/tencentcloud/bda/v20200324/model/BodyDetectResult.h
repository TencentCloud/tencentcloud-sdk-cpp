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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_BODYDETECTRESULT_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_BODYDETECTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bda/v20200324/model/BodyRect.h>
#include <tencentcloud/bda/v20200324/model/BodyAttributeInfo.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 图中检测出来的人体框。
                */
                class BodyDetectResult : public AbstractModel
                {
                public:
                    BodyDetectResult();
                    ~BodyDetectResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检测出的人体置信度。 
误识率百分之十对应的阈值是0.14；误识率百分之五对应的阈值是0.32；误识率百分之二对应的阈值是0.62；误识率百分之一对应的阈值是0.81。 
通常情况建议使用阈值0.32，可适用大多数情况。
                     * @return Confidence 检测出的人体置信度。 
误识率百分之十对应的阈值是0.14；误识率百分之五对应的阈值是0.32；误识率百分之二对应的阈值是0.62；误识率百分之一对应的阈值是0.81。 
通常情况建议使用阈值0.32，可适用大多数情况。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置检测出的人体置信度。 
误识率百分之十对应的阈值是0.14；误识率百分之五对应的阈值是0.32；误识率百分之二对应的阈值是0.62；误识率百分之一对应的阈值是0.81。 
通常情况建议使用阈值0.32，可适用大多数情况。
                     * @param _confidence 检测出的人体置信度。 
误识率百分之十对应的阈值是0.14；误识率百分之五对应的阈值是0.32；误识率百分之二对应的阈值是0.62；误识率百分之一对应的阈值是0.81。 
通常情况建议使用阈值0.32，可适用大多数情况。
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取图中检测出来的人体框
                     * @return BodyRect 图中检测出来的人体框
                     * 
                     */
                    BodyRect GetBodyRect() const;

                    /**
                     * 设置图中检测出来的人体框
                     * @param _bodyRect 图中检测出来的人体框
                     * 
                     */
                    void SetBodyRect(const BodyRect& _bodyRect);

                    /**
                     * 判断参数 BodyRect 是否已赋值
                     * @return BodyRect 是否已赋值
                     * 
                     */
                    bool BodyRectHasBeenSet() const;

                    /**
                     * 获取图中检测出的人体属性信息。
                     * @return BodyAttributeInfo 图中检测出的人体属性信息。
                     * 
                     */
                    BodyAttributeInfo GetBodyAttributeInfo() const;

                    /**
                     * 设置图中检测出的人体属性信息。
                     * @param _bodyAttributeInfo 图中检测出的人体属性信息。
                     * 
                     */
                    void SetBodyAttributeInfo(const BodyAttributeInfo& _bodyAttributeInfo);

                    /**
                     * 判断参数 BodyAttributeInfo 是否已赋值
                     * @return BodyAttributeInfo 是否已赋值
                     * 
                     */
                    bool BodyAttributeInfoHasBeenSet() const;

                private:

                    /**
                     * 检测出的人体置信度。 
误识率百分之十对应的阈值是0.14；误识率百分之五对应的阈值是0.32；误识率百分之二对应的阈值是0.62；误识率百分之一对应的阈值是0.81。 
通常情况建议使用阈值0.32，可适用大多数情况。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 图中检测出来的人体框
                     */
                    BodyRect m_bodyRect;
                    bool m_bodyRectHasBeenSet;

                    /**
                     * 图中检测出的人体属性信息。
                     */
                    BodyAttributeInfo m_bodyAttributeInfo;
                    bool m_bodyAttributeInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_BODYDETECTRESULT_H_
