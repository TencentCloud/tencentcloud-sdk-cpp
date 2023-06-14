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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_HANDTRACKINGRESULT_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_HANDTRACKINGRESULT_H_

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
                * HandTrackingResult
                */
                class HandTrackingResult : public AbstractModel
                {
                public:
                    HandTrackingResult();
                    ~HandTrackingResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别结果
                     * @return Class 识别结果
                     * 
                     */
                    std::string GetClass() const;

                    /**
                     * 设置识别结果
                     * @param _class 识别结果
                     * 
                     */
                    void SetClass(const std::string& _class);

                    /**
                     * 判断参数 Class 是否已赋值
                     * @return Class 是否已赋值
                     * 
                     */
                    bool ClassHasBeenSet() const;

                    /**
                     * 获取置信度
                     * @return Confidence 置信度
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置置信度
                     * @param _confidence 置信度
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
                     * 获取识别结果高度
                     * @return Height 识别结果高度
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置识别结果高度
                     * @param _height 识别结果高度
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取识别结果左坐标
                     * @return Left 识别结果左坐标
                     * 
                     */
                    int64_t GetLeft() const;

                    /**
                     * 设置识别结果左坐标
                     * @param _left 识别结果左坐标
                     * 
                     */
                    void SetLeft(const int64_t& _left);

                    /**
                     * 判断参数 Left 是否已赋值
                     * @return Left 是否已赋值
                     * 
                     */
                    bool LeftHasBeenSet() const;

                    /**
                     * 获取识别结果顶坐标
                     * @return Top 识别结果顶坐标
                     * 
                     */
                    int64_t GetTop() const;

                    /**
                     * 设置识别结果顶坐标
                     * @param _top 识别结果顶坐标
                     * 
                     */
                    void SetTop(const int64_t& _top);

                    /**
                     * 判断参数 Top 是否已赋值
                     * @return Top 是否已赋值
                     * 
                     */
                    bool TopHasBeenSet() const;

                    /**
                     * 获取识别结果宽度
                     * @return Width 识别结果宽度
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置识别结果宽度
                     * @param _width 识别结果宽度
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                private:

                    /**
                     * 识别结果
                     */
                    std::string m_class;
                    bool m_classHasBeenSet;

                    /**
                     * 置信度
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 识别结果高度
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 识别结果左坐标
                     */
                    int64_t m_left;
                    bool m_leftHasBeenSet;

                    /**
                     * 识别结果顶坐标
                     */
                    int64_t m_top;
                    bool m_topHasBeenSet;

                    /**
                     * 识别结果宽度
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_HANDTRACKINGRESULT_H_
