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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_VISIONDETECTEDOBJECT_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_VISIONDETECTEDOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 目标检测算法检测到的目标详情
                */
                class VisionDetectedObject : public AbstractModel
                {
                public:
                    VisionDetectedObject();
                    ~VisionDetectedObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目标出现的媒体时间戳（以图片为输入时始终取值 0）
                     * @return Time 目标出现的媒体时间戳（以图片为输入时始终取值 0）
                     * 
                     */
                    double GetTime() const;

                    /**
                     * 设置目标出现的媒体时间戳（以图片为输入时始终取值 0）
                     * @param _time 目标出现的媒体时间戳（以图片为输入时始终取值 0）
                     * 
                     */
                    void SetTime(const double& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取目标类别名
                     * @return ClassName 目标类别名
                     * 
                     */
                    std::string GetClassName() const;

                    /**
                     * 设置目标类别名
                     * @param _className 目标类别名
                     * 
                     */
                    void SetClassName(const std::string& _className);

                    /**
                     * 判断参数 ClassName 是否已赋值
                     * @return ClassName 是否已赋值
                     * 
                     */
                    bool ClassNameHasBeenSet() const;

                    /**
                     * 获取目标边界框（坐标顺序为 x1, y1, x2, y2）
                     * @return BoundingBox 目标边界框（坐标顺序为 x1, y1, x2, y2）
                     * 
                     */
                    std::vector<double> GetBoundingBox() const;

                    /**
                     * 设置目标边界框（坐标顺序为 x1, y1, x2, y2）
                     * @param _boundingBox 目标边界框（坐标顺序为 x1, y1, x2, y2）
                     * 
                     */
                    void SetBoundingBox(const std::vector<double>& _boundingBox);

                    /**
                     * 判断参数 BoundingBox 是否已赋值
                     * @return BoundingBox 是否已赋值
                     * 
                     */
                    bool BoundingBoxHasBeenSet() const;

                    /**
                     * 获取置信度（取值范围 0.0 至 1.0）
                     * @return Confidence 置信度（取值范围 0.0 至 1.0）
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置置信度（取值范围 0.0 至 1.0）
                     * @param _confidence 置信度（取值范围 0.0 至 1.0）
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                private:

                    /**
                     * 目标出现的媒体时间戳（以图片为输入时始终取值 0）
                     */
                    double m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 目标类别名
                     */
                    std::string m_className;
                    bool m_classNameHasBeenSet;

                    /**
                     * 目标边界框（坐标顺序为 x1, y1, x2, y2）
                     */
                    std::vector<double> m_boundingBox;
                    bool m_boundingBoxHasBeenSet;

                    /**
                     * 置信度（取值范围 0.0 至 1.0）
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_VISIONDETECTEDOBJECT_H_
