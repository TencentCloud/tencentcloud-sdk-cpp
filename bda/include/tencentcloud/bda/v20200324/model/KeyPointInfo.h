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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_KEYPOINTINFO_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_KEYPOINTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 人体关键点信息
                */
                class KeyPointInfo : public AbstractModel
                {
                public:
                    KeyPointInfo();
                    ~KeyPointInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取代表不同位置的人体关键点信息，返回值为以下集合中的一个 [头部,颈部,右肩,右肘,右腕,左肩,左肘,左腕,右髋,右膝,右踝,左髋,左膝,左踝]
                     * @return KeyPointType 代表不同位置的人体关键点信息，返回值为以下集合中的一个 [头部,颈部,右肩,右肘,右腕,左肩,左肘,左腕,右髋,右膝,右踝,左髋,左膝,左踝]
                     * 
                     */
                    std::string GetKeyPointType() const;

                    /**
                     * 设置代表不同位置的人体关键点信息，返回值为以下集合中的一个 [头部,颈部,右肩,右肘,右腕,左肩,左肘,左腕,右髋,右膝,右踝,左髋,左膝,左踝]
                     * @param _keyPointType 代表不同位置的人体关键点信息，返回值为以下集合中的一个 [头部,颈部,右肩,右肘,右腕,左肩,左肘,左腕,右髋,右膝,右踝,左髋,左膝,左踝]
                     * 
                     */
                    void SetKeyPointType(const std::string& _keyPointType);

                    /**
                     * 判断参数 KeyPointType 是否已赋值
                     * @return KeyPointType 是否已赋值
                     * 
                     */
                    bool KeyPointTypeHasBeenSet() const;

                    /**
                     * 获取人体关键点横坐标
                     * @return X 人体关键点横坐标
                     * 
                     */
                    double GetX() const;

                    /**
                     * 设置人体关键点横坐标
                     * @param _x 人体关键点横坐标
                     * 
                     */
                    void SetX(const double& _x);

                    /**
                     * 判断参数 X 是否已赋值
                     * @return X 是否已赋值
                     * 
                     */
                    bool XHasBeenSet() const;

                    /**
                     * 获取人体关键点纵坐标
                     * @return Y 人体关键点纵坐标
                     * 
                     */
                    double GetY() const;

                    /**
                     * 设置人体关键点纵坐标
                     * @param _y 人体关键点纵坐标
                     * 
                     */
                    void SetY(const double& _y);

                    /**
                     * 判断参数 Y 是否已赋值
                     * @return Y 是否已赋值
                     * 
                     */
                    bool YHasBeenSet() const;

                    /**
                     * 获取关键点坐标置信度，分数取值在0-1之间，阈值建议为0.25，小于0.25认为在图中无人体关键点。
                     * @return BodyScore 关键点坐标置信度，分数取值在0-1之间，阈值建议为0.25，小于0.25认为在图中无人体关键点。
                     * 
                     */
                    double GetBodyScore() const;

                    /**
                     * 设置关键点坐标置信度，分数取值在0-1之间，阈值建议为0.25，小于0.25认为在图中无人体关键点。
                     * @param _bodyScore 关键点坐标置信度，分数取值在0-1之间，阈值建议为0.25，小于0.25认为在图中无人体关键点。
                     * 
                     */
                    void SetBodyScore(const double& _bodyScore);

                    /**
                     * 判断参数 BodyScore 是否已赋值
                     * @return BodyScore 是否已赋值
                     * 
                     */
                    bool BodyScoreHasBeenSet() const;

                private:

                    /**
                     * 代表不同位置的人体关键点信息，返回值为以下集合中的一个 [头部,颈部,右肩,右肘,右腕,左肩,左肘,左腕,右髋,右膝,右踝,左髋,左膝,左踝]
                     */
                    std::string m_keyPointType;
                    bool m_keyPointTypeHasBeenSet;

                    /**
                     * 人体关键点横坐标
                     */
                    double m_x;
                    bool m_xHasBeenSet;

                    /**
                     * 人体关键点纵坐标
                     */
                    double m_y;
                    bool m_yHasBeenSet;

                    /**
                     * 关键点坐标置信度，分数取值在0-1之间，阈值建议为0.25，小于0.25认为在图中无人体关键点。
                     */
                    double m_bodyScore;
                    bool m_bodyScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_KEYPOINTINFO_H_
