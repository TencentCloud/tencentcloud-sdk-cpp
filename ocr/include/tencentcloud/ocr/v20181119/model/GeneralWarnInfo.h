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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_GENERALWARNINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_GENERALWARNINFO_H_

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
                * 通用告警详情
                */
                class GeneralWarnInfo : public AbstractModel
                {
                public:
                    GeneralWarnInfo();
                    ~GeneralWarnInfo() = default;
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

                    /**
                     * 获取特殊判定，支持包括

Finger：由手指导致的不完整，仅在不完整告警中返回
                     * @return SpecificMatter 特殊判定，支持包括

Finger：由手指导致的不完整，仅在不完整告警中返回
                     * 
                     */
                    std::string GetSpecificMatter() const;

                    /**
                     * 设置特殊判定，支持包括

Finger：由手指导致的不完整，仅在不完整告警中返回
                     * @param _specificMatter 特殊判定，支持包括

Finger：由手指导致的不完整，仅在不完整告警中返回
                     * 
                     */
                    void SetSpecificMatter(const std::string& _specificMatter);

                    /**
                     * 判断参数 SpecificMatter 是否已赋值
                     * @return SpecificMatter 是否已赋值
                     * 
                     */
                    bool SpecificMatterHasBeenSet() const;

                private:

                    /**
                     * 是否存在该告警
                     */
                    bool m_isWarn;
                    bool m_isWarnHasBeenSet;

                    /**
                     * 告警位置四点坐标
                     */
                    std::vector<Polygon> m_polygon;
                    bool m_polygonHasBeenSet;

                    /**
                     * 特殊判定，支持包括

Finger：由手指导致的不完整，仅在不完整告警中返回
                     */
                    std::string m_specificMatter;
                    bool m_specificMatterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_GENERALWARNINFO_H_
