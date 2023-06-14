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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_POINT_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_POINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * 点信息
                */
                class Point : public AbstractModel
                {
                public:
                    Point();
                    ~Point() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取x坐标
                     * @return XCoordinate x坐标
                     * 
                     */
                    int64_t GetXCoordinate() const;

                    /**
                     * 设置x坐标
                     * @param _xCoordinate x坐标
                     * 
                     */
                    void SetXCoordinate(const int64_t& _xCoordinate);

                    /**
                     * 判断参数 XCoordinate 是否已赋值
                     * @return XCoordinate 是否已赋值
                     * 
                     */
                    bool XCoordinateHasBeenSet() const;

                    /**
                     * 获取y坐标
                     * @return YCoordinate y坐标
                     * 
                     */
                    int64_t GetYCoordinate() const;

                    /**
                     * 设置y坐标
                     * @param _yCoordinate y坐标
                     * 
                     */
                    void SetYCoordinate(const int64_t& _yCoordinate);

                    /**
                     * 判断参数 YCoordinate 是否已赋值
                     * @return YCoordinate 是否已赋值
                     * 
                     */
                    bool YCoordinateHasBeenSet() const;

                    /**
                     * 获取页码
                     * @return Page 页码
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置页码
                     * @param _page 页码
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                private:

                    /**
                     * x坐标
                     */
                    int64_t m_xCoordinate;
                    bool m_xCoordinateHasBeenSet;

                    /**
                     * y坐标
                     */
                    int64_t m_yCoordinate;
                    bool m_yCoordinateHasBeenSet;

                    /**
                     * 页码
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_POINT_H_
