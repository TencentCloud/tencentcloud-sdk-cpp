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

#ifndef TENCENTCLOUD_IIR_V20200417_MODEL_LOCATION_H_
#define TENCENTCLOUD_IIR_V20200417_MODEL_LOCATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iir
    {
        namespace V20200417
        {
            namespace Model
            {
                /**
                * 检测到的主体在图片中的矩形框位置（四个顶点坐标）
                */
                class Location : public AbstractModel
                {
                public:
                    Location();
                    ~Location() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取位置矩形框的左上角横坐标
                     * @return XMin 位置矩形框的左上角横坐标
                     * 
                     */
                    int64_t GetXMin() const;

                    /**
                     * 设置位置矩形框的左上角横坐标
                     * @param _xMin 位置矩形框的左上角横坐标
                     * 
                     */
                    void SetXMin(const int64_t& _xMin);

                    /**
                     * 判断参数 XMin 是否已赋值
                     * @return XMin 是否已赋值
                     * 
                     */
                    bool XMinHasBeenSet() const;

                    /**
                     * 获取位置矩形框的左上角纵坐标
                     * @return YMin 位置矩形框的左上角纵坐标
                     * 
                     */
                    int64_t GetYMin() const;

                    /**
                     * 设置位置矩形框的左上角纵坐标
                     * @param _yMin 位置矩形框的左上角纵坐标
                     * 
                     */
                    void SetYMin(const int64_t& _yMin);

                    /**
                     * 判断参数 YMin 是否已赋值
                     * @return YMin 是否已赋值
                     * 
                     */
                    bool YMinHasBeenSet() const;

                    /**
                     * 获取位置矩形框的右下角横坐标
                     * @return XMax 位置矩形框的右下角横坐标
                     * 
                     */
                    int64_t GetXMax() const;

                    /**
                     * 设置位置矩形框的右下角横坐标
                     * @param _xMax 位置矩形框的右下角横坐标
                     * 
                     */
                    void SetXMax(const int64_t& _xMax);

                    /**
                     * 判断参数 XMax 是否已赋值
                     * @return XMax 是否已赋值
                     * 
                     */
                    bool XMaxHasBeenSet() const;

                    /**
                     * 获取位置矩形框的右下角纵坐标
                     * @return YMax 位置矩形框的右下角纵坐标
                     * 
                     */
                    int64_t GetYMax() const;

                    /**
                     * 设置位置矩形框的右下角纵坐标
                     * @param _yMax 位置矩形框的右下角纵坐标
                     * 
                     */
                    void SetYMax(const int64_t& _yMax);

                    /**
                     * 判断参数 YMax 是否已赋值
                     * @return YMax 是否已赋值
                     * 
                     */
                    bool YMaxHasBeenSet() const;

                private:

                    /**
                     * 位置矩形框的左上角横坐标
                     */
                    int64_t m_xMin;
                    bool m_xMinHasBeenSet;

                    /**
                     * 位置矩形框的左上角纵坐标
                     */
                    int64_t m_yMin;
                    bool m_yMinHasBeenSet;

                    /**
                     * 位置矩形框的右下角横坐标
                     */
                    int64_t m_xMax;
                    bool m_xMaxHasBeenSet;

                    /**
                     * 位置矩形框的右下角纵坐标
                     */
                    int64_t m_yMax;
                    bool m_yMaxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IIR_V20200417_MODEL_LOCATION_H_
