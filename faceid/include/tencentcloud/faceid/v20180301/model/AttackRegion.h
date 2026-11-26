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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_ATTACKREGION_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_ATTACKREGION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/Point.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 命中的攻击区域列表
                */
                class AttackRegion : public AbstractModel
                {
                public:
                    AttackRegion();
                    ~AttackRegion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>攻击区域的四点坐标，固定为轴对齐矩形，按 左上 → 右上 → 右下 → 左下 顺时针顺序排列。单位为像素，坐标原点为图像左上角。数组长度固定为 4。</p>
                     * @return Polygon <p>攻击区域的四点坐标，固定为轴对齐矩形，按 左上 → 右上 → 右下 → 左下 顺时针顺序排列。单位为像素，坐标原点为图像左上角。数组长度固定为 4。</p>
                     * 
                     */
                    std::vector<Point> GetPolygon() const;

                    /**
                     * 设置<p>攻击区域的四点坐标，固定为轴对齐矩形，按 左上 → 右上 → 右下 → 左下 顺时针顺序排列。单位为像素，坐标原点为图像左上角。数组长度固定为 4。</p>
                     * @param _polygon <p>攻击区域的四点坐标，固定为轴对齐矩形，按 左上 → 右上 → 右下 → 左下 顺时针顺序排列。单位为像素，坐标原点为图像左上角。数组长度固定为 4。</p>
                     * 
                     */
                    void SetPolygon(const std::vector<Point>& _polygon);

                    /**
                     * 判断参数 Polygon 是否已赋值
                     * @return Polygon 是否已赋值
                     * 
                     */
                    bool PolygonHasBeenSet() const;

                    /**
                     * 获取<p>攻击描述，对该区域命中的可疑特征进行详细说明。</p>
                     * @return Description <p>攻击描述，对该区域命中的可疑特征进行详细说明。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>攻击描述，对该区域命中的可疑特征进行详细说明。</p>
                     * @param _description <p>攻击描述，对该区域命中的可疑特征进行详细说明。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>攻击区域的四点坐标，固定为轴对齐矩形，按 左上 → 右上 → 右下 → 左下 顺时针顺序排列。单位为像素，坐标原点为图像左上角。数组长度固定为 4。</p>
                     */
                    std::vector<Point> m_polygon;
                    bool m_polygonHasBeenSet;

                    /**
                     * <p>攻击描述，对该区域命中的可疑特征进行详细说明。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_ATTACKREGION_H_
