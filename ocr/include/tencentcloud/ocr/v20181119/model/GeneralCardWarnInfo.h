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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_GENERALCARDWARNINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_GENERALCARDWARNINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Polygon.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 通用卡证鉴伪告警信息
                */
                class GeneralCardWarnInfo : public AbstractModel
                {
                public:
                    GeneralCardWarnInfo();
                    ~GeneralCardWarnInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否存在该告警
                     * @return IsWarn 是否存在该告警
                     * 
                     */
                    bool GetIsWarn() const;

                    /**
                     * 设置是否存在该告警
                     * @param _isWarn 是否存在该告警
                     * 
                     */
                    void SetIsWarn(const bool& _isWarn);

                    /**
                     * 判断参数 IsWarn 是否已赋值
                     * @return IsWarn 是否已赋值
                     * 
                     */
                    bool IsWarnHasBeenSet() const;

                    /**
                     * 获取风险程度
                     * @return RiskConfidence 风险程度
                     * 
                     */
                    double GetRiskConfidence() const;

                    /**
                     * 设置风险程度
                     * @param _riskConfidence 风险程度
                     * 
                     */
                    void SetRiskConfidence(const double& _riskConfidence);

                    /**
                     * 判断参数 RiskConfidence 是否已赋值
                     * @return RiskConfidence 是否已赋值
                     * 
                     */
                    bool RiskConfidenceHasBeenSet() const;

                    /**
                     * 获取告警位置四点坐标
                     * @return Polygon 告警位置四点坐标
                     * 
                     */
                    std::vector<Polygon> GetPolygon() const;

                    /**
                     * 设置告警位置四点坐标
                     * @param _polygon 告警位置四点坐标
                     * 
                     */
                    void SetPolygon(const std::vector<Polygon>& _polygon);

                    /**
                     * 判断参数 Polygon 是否已赋值
                     * @return Polygon 是否已赋值
                     * 
                     */
                    bool PolygonHasBeenSet() const;

                private:

                    /**
                     * 是否存在该告警
                     */
                    bool m_isWarn;
                    bool m_isWarnHasBeenSet;

                    /**
                     * 风险程度
                     */
                    double m_riskConfidence;
                    bool m_riskConfidenceHasBeenSet;

                    /**
                     * 告警位置四点坐标
                     */
                    std::vector<Polygon> m_polygon;
                    bool m_polygonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_GENERALCARDWARNINFO_H_
