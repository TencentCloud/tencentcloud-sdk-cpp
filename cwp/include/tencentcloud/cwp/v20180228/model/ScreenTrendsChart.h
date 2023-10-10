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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCREENTRENDSCHART_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCREENTRENDSCHART_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 大屏攻防趋势图
                */
                class ScreenTrendsChart : public AbstractModel
                {
                public:
                    ScreenTrendsChart();
                    ~ScreenTrendsChart() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取X轴 时间
                     * @return X X轴 时间
                     * 
                     */
                    std::string GetX() const;

                    /**
                     * 设置X轴 时间
                     * @param _x X轴 时间
                     * 
                     */
                    void SetX(const std::string& _x);

                    /**
                     * 判断参数 X 是否已赋值
                     * @return X 是否已赋值
                     * 
                     */
                    bool XHasBeenSet() const;

                    /**
                     * 获取Y轴 数值
                     * @return Y Y轴 数值
                     * 
                     */
                    uint64_t GetY() const;

                    /**
                     * 设置Y轴 数值
                     * @param _y Y轴 数值
                     * 
                     */
                    void SetY(const uint64_t& _y);

                    /**
                     * 判断参数 Y 是否已赋值
                     * @return Y 是否已赋值
                     * 
                     */
                    bool YHasBeenSet() const;

                    /**
                     * 获取统计分类类型 值：防御次数，攻击次数
                     * @return Type 统计分类类型 值：防御次数，攻击次数
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置统计分类类型 值：防御次数，攻击次数
                     * @param _type 统计分类类型 值：防御次数，攻击次数
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * X轴 时间
                     */
                    std::string m_x;
                    bool m_xHasBeenSet;

                    /**
                     * Y轴 数值
                     */
                    uint64_t m_y;
                    bool m_yHasBeenSet;

                    /**
                     * 统计分类类型 值：防御次数，攻击次数
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCREENTRENDSCHART_H_
