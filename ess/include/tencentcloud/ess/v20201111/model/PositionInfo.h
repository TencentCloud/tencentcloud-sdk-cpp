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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_POSITIONINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_POSITIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 坐标详情
                */
                class PositionInfo : public AbstractModel
                {
                public:
                    PositionInfo();
                    ~PositionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取PDF文件页X坐标位置,以PDF单页左上角为坐标原点
                     * @return X PDF文件页X坐标位置,以PDF单页左上角为坐标原点
                     * 
                     */
                    double GetX() const;

                    /**
                     * 设置PDF文件页X坐标位置,以PDF单页左上角为坐标原点
                     * @param _x PDF文件页X坐标位置,以PDF单页左上角为坐标原点
                     * 
                     */
                    void SetX(const double& _x);

                    /**
                     * 判断参数 X 是否已赋值
                     * @return X 是否已赋值
                     * 
                     */
                    bool XHasBeenSet() const;

                    /**
                     * 获取PDF文件页Y坐标位置,以PDF单页左上角为坐标原点
                     * @return Y PDF文件页Y坐标位置,以PDF单页左上角为坐标原点
                     * 
                     */
                    double GetY() const;

                    /**
                     * 设置PDF文件页Y坐标位置,以PDF单页左上角为坐标原点
                     * @param _y PDF文件页Y坐标位置,以PDF单页左上角为坐标原点
                     * 
                     */
                    void SetY(const double& _y);

                    /**
                     * 判断参数 Y 是否已赋值
                     * @return Y 是否已赋值
                     * 
                     */
                    bool YHasBeenSet() const;

                    /**
                     * 获取距离X坐标的宽度，用于在PDF文件进行画框。
                     * @return Width 距离X坐标的宽度，用于在PDF文件进行画框。
                     * 
                     */
                    double GetWidth() const;

                    /**
                     * 设置距离X坐标的宽度，用于在PDF文件进行画框。
                     * @param _width 距离X坐标的宽度，用于在PDF文件进行画框。
                     * 
                     */
                    void SetWidth(const double& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取距离Y坐标的高度，用于在PDF文件进行画框。
                     * @return Height 距离Y坐标的高度，用于在PDF文件进行画框。
                     * 
                     */
                    double GetHeight() const;

                    /**
                     * 设置距离Y坐标的高度，用于在PDF文件进行画框。
                     * @param _height 距离Y坐标的高度，用于在PDF文件进行画框。
                     * 
                     */
                    void SetHeight(const double& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取PDF文件页码索引，此值加1就是对应PDF文件的页码。
                     * @return PageIndex PDF文件页码索引，此值加1就是对应PDF文件的页码。
                     * 
                     */
                    int64_t GetPageIndex() const;

                    /**
                     * 设置PDF文件页码索引，此值加1就是对应PDF文件的页码。
                     * @param _pageIndex PDF文件页码索引，此值加1就是对应PDF文件的页码。
                     * 
                     */
                    void SetPageIndex(const int64_t& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     * 
                     */
                    bool PageIndexHasBeenSet() const;

                    /**
                     * 获取系统生成的唯一ID值
                     * @return Id 系统生成的唯一ID值
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置系统生成的唯一ID值
                     * @param _id 系统生成的唯一ID值
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * PDF文件页X坐标位置,以PDF单页左上角为坐标原点
                     */
                    double m_x;
                    bool m_xHasBeenSet;

                    /**
                     * PDF文件页Y坐标位置,以PDF单页左上角为坐标原点
                     */
                    double m_y;
                    bool m_yHasBeenSet;

                    /**
                     * 距离X坐标的宽度，用于在PDF文件进行画框。
                     */
                    double m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 距离Y坐标的高度，用于在PDF文件进行画框。
                     */
                    double m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * PDF文件页码索引，此值加1就是对应PDF文件的页码。
                     */
                    int64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * 系统生成的唯一ID值
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_POSITIONINFO_H_
