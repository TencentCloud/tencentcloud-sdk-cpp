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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_STUDENTBODYMOVEMENTRESULT_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_STUDENTBODYMOVEMENTRESULT_H_

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
                * 学生肢体动作结果
                */
                class StudentBodyMovementResult : public AbstractModel
                {
                public:
                    StudentBodyMovementResult();
                    ~StudentBodyMovementResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取置信度（已废弃）
                     * @return Confidence 置信度（已废弃）
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置置信度（已废弃）
                     * @param _confidence 置信度（已废弃）
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
                     * 获取举手识别结果置信度
                     * @return HandupConfidence 举手识别结果置信度
                     * 
                     */
                    double GetHandupConfidence() const;

                    /**
                     * 设置举手识别结果置信度
                     * @param _handupConfidence 举手识别结果置信度
                     * 
                     */
                    void SetHandupConfidence(const double& _handupConfidence);

                    /**
                     * 判断参数 HandupConfidence 是否已赋值
                     * @return HandupConfidence 是否已赋值
                     * 
                     */
                    bool HandupConfidenceHasBeenSet() const;

                    /**
                     * 获取举手识别结果，包含举手（handup）和未举手（nothandup）
                     * @return HandupStatus 举手识别结果，包含举手（handup）和未举手（nothandup）
                     * 
                     */
                    std::string GetHandupStatus() const;

                    /**
                     * 设置举手识别结果，包含举手（handup）和未举手（nothandup）
                     * @param _handupStatus 举手识别结果，包含举手（handup）和未举手（nothandup）
                     * 
                     */
                    void SetHandupStatus(const std::string& _handupStatus);

                    /**
                     * 判断参数 HandupStatus 是否已赋值
                     * @return HandupStatus 是否已赋值
                     * 
                     */
                    bool HandupStatusHasBeenSet() const;

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
                     * 获取动作识别结果（已废弃）
                     * @return Movements 动作识别结果（已废弃）
                     * 
                     */
                    std::string GetMovements() const;

                    /**
                     * 设置动作识别结果（已废弃）
                     * @param _movements 动作识别结果（已废弃）
                     * 
                     */
                    void SetMovements(const std::string& _movements);

                    /**
                     * 判断参数 Movements 是否已赋值
                     * @return Movements 是否已赋值
                     * 
                     */
                    bool MovementsHasBeenSet() const;

                    /**
                     * 获取站立识别结果置信度
                     * @return StandConfidence 站立识别结果置信度
                     * 
                     */
                    double GetStandConfidence() const;

                    /**
                     * 设置站立识别结果置信度
                     * @param _standConfidence 站立识别结果置信度
                     * 
                     */
                    void SetStandConfidence(const double& _standConfidence);

                    /**
                     * 判断参数 StandConfidence 是否已赋值
                     * @return StandConfidence 是否已赋值
                     * 
                     */
                    bool StandConfidenceHasBeenSet() const;

                    /**
                     * 获取站立识别结果，包含站立（stand）和坐着（sit）
                     * @return StandStatus 站立识别结果，包含站立（stand）和坐着（sit）
                     * 
                     */
                    std::string GetStandStatus() const;

                    /**
                     * 设置站立识别结果，包含站立（stand）和坐着（sit）
                     * @param _standStatus 站立识别结果，包含站立（stand）和坐着（sit）
                     * 
                     */
                    void SetStandStatus(const std::string& _standStatus);

                    /**
                     * 判断参数 StandStatus 是否已赋值
                     * @return StandStatus 是否已赋值
                     * 
                     */
                    bool StandStatusHasBeenSet() const;

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
                     * 置信度（已废弃）
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 举手识别结果置信度
                     */
                    double m_handupConfidence;
                    bool m_handupConfidenceHasBeenSet;

                    /**
                     * 举手识别结果，包含举手（handup）和未举手（nothandup）
                     */
                    std::string m_handupStatus;
                    bool m_handupStatusHasBeenSet;

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
                     * 动作识别结果（已废弃）
                     */
                    std::string m_movements;
                    bool m_movementsHasBeenSet;

                    /**
                     * 站立识别结果置信度
                     */
                    double m_standConfidence;
                    bool m_standConfidenceHasBeenSet;

                    /**
                     * 站立识别结果，包含站立（stand）和坐着（sit）
                     */
                    std::string m_standStatus;
                    bool m_standStatusHasBeenSet;

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

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_STUDENTBODYMOVEMENTRESULT_H_
