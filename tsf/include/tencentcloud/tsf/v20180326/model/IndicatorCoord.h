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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_INDICATORCOORD_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_INDICATORCOORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 监控指标坐标
                */
                class IndicatorCoord : public AbstractModel
                {
                public:
                    IndicatorCoord();
                    ~IndicatorCoord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标横坐标值
                     * @return CoordX 指标横坐标值
                     * 
                     */
                    std::string GetCoordX() const;

                    /**
                     * 设置指标横坐标值
                     * @param _coordX 指标横坐标值
                     * 
                     */
                    void SetCoordX(const std::string& _coordX);

                    /**
                     * 判断参数 CoordX 是否已赋值
                     * @return CoordX 是否已赋值
                     * 
                     */
                    bool CoordXHasBeenSet() const;

                    /**
                     * 获取指标纵坐标值
                     * @return CoordY 指标纵坐标值
                     * 
                     */
                    std::string GetCoordY() const;

                    /**
                     * 设置指标纵坐标值
                     * @param _coordY 指标纵坐标值
                     * 
                     */
                    void SetCoordY(const std::string& _coordY);

                    /**
                     * 判断参数 CoordY 是否已赋值
                     * @return CoordY 是否已赋值
                     * 
                     */
                    bool CoordYHasBeenSet() const;

                    /**
                     * 获取指标标签，用于标识附加信息
                     * @return CoordTag 指标标签，用于标识附加信息
                     * 
                     */
                    std::string GetCoordTag() const;

                    /**
                     * 设置指标标签，用于标识附加信息
                     * @param _coordTag 指标标签，用于标识附加信息
                     * 
                     */
                    void SetCoordTag(const std::string& _coordTag);

                    /**
                     * 判断参数 CoordTag 是否已赋值
                     * @return CoordTag 是否已赋值
                     * 
                     */
                    bool CoordTagHasBeenSet() const;

                private:

                    /**
                     * 指标横坐标值
                     */
                    std::string m_coordX;
                    bool m_coordXHasBeenSet;

                    /**
                     * 指标纵坐标值
                     */
                    std::string m_coordY;
                    bool m_coordYHasBeenSet;

                    /**
                     * 指标标签，用于标识附加信息
                     */
                    std::string m_coordTag;
                    bool m_coordTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_INDICATORCOORD_H_
