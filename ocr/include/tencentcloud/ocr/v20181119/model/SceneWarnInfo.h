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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_SCENEWARNINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_SCENEWARNINFO_H_

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
                * 用于风险提示和表示不同场景下的风险程度
                */
                class SceneWarnInfo : public AbstractModel
                {
                public:
                    SceneWarnInfo();
                    ~SceneWarnInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否存在该提示</p>
                     * @return IsWarn <p>是否存在该提示</p>
                     * 
                     */
                    bool GetIsWarn() const;

                    /**
                     * 设置<p>是否存在该提示</p>
                     * @param _isWarn <p>是否存在该提示</p>
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
                     * 获取<p>风险程度（0-1）</p>
                     * @return RiskConfidence <p>风险程度（0-1）</p>
                     * 
                     */
                    double GetRiskConfidence() const;

                    /**
                     * 设置<p>风险程度（0-1）</p>
                     * @param _riskConfidence <p>风险程度（0-1）</p>
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
                     * 获取<p>提示位置四点坐标，仅部分提示类型支持返回提示位置坐标</p>
                     * @return Polygon <p>提示位置四点坐标，仅部分提示类型支持返回提示位置坐标</p>
                     * 
                     */
                    std::vector<Polygon> GetPolygon() const;

                    /**
                     * 设置<p>提示位置四点坐标，仅部分提示类型支持返回提示位置坐标</p>
                     * @param _polygon <p>提示位置四点坐标，仅部分提示类型支持返回提示位置坐标</p>
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
                     * <p>是否存在该提示</p>
                     */
                    bool m_isWarn;
                    bool m_isWarnHasBeenSet;

                    /**
                     * <p>风险程度（0-1）</p>
                     */
                    double m_riskConfidence;
                    bool m_riskConfidenceHasBeenSet;

                    /**
                     * <p>提示位置四点坐标，仅部分提示类型支持返回提示位置坐标</p>
                     */
                    std::vector<Polygon> m_polygon;
                    bool m_polygonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_SCENEWARNINFO_H_
