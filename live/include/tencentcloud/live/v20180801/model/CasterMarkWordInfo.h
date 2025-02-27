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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CASTERMARKWORDINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CASTERMARKWORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 导播台文字水印配置。
                */
                class CasterMarkWordInfo : public AbstractModel
                {
                public:
                    CasterMarkWordInfo();
                    ~CasterMarkWordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文字水印Index。
                     * @return MarkWordIndex 文字水印Index。
                     * 
                     */
                    int64_t GetMarkWordIndex() const;

                    /**
                     * 设置文字水印Index。
                     * @param _markWordIndex 文字水印Index。
                     * 
                     */
                    void SetMarkWordIndex(const int64_t& _markWordIndex);

                    /**
                     * 判断参数 MarkWordIndex 是否已赋值
                     * @return MarkWordIndex 是否已赋值
                     * 
                     */
                    bool MarkWordIndexHasBeenSet() const;

                    /**
                     * 获取文字水印内容。
                     * @return MarkWordText 文字水印内容。
                     * 
                     */
                    std::string GetMarkWordText() const;

                    /**
                     * 设置文字水印内容。
                     * @param _markWordText 文字水印内容。
                     * 
                     */
                    void SetMarkWordText(const std::string& _markWordText);

                    /**
                     * 判断参数 MarkWordText 是否已赋值
                     * @return MarkWordText 是否已赋值
                     * 
                     */
                    bool MarkWordTextHasBeenSet() const;

                    /**
                     * 获取文字水印的字号。
范围[16, 60]
                     * @return MarkWordFontSize 文字水印的字号。
范围[16, 60]
                     * 
                     */
                    uint64_t GetMarkWordFontSize() const;

                    /**
                     * 设置文字水印的字号。
范围[16, 60]
                     * @param _markWordFontSize 文字水印的字号。
范围[16, 60]
                     * 
                     */
                    void SetMarkWordFontSize(const uint64_t& _markWordFontSize);

                    /**
                     * 判断参数 MarkWordFontSize 是否已赋值
                     * @return MarkWordFontSize 是否已赋值
                     * 
                     */
                    bool MarkWordFontSizeHasBeenSet() const;

                    /**
                     * 获取文字水印的颜色，值为HEX颜色代码
                     * @return MarkWordFontColor 文字水印的颜色，值为HEX颜色代码
                     * 
                     */
                    std::string GetMarkWordFontColor() const;

                    /**
                     * 设置文字水印的颜色，值为HEX颜色代码
                     * @param _markWordFontColor 文字水印的颜色，值为HEX颜色代码
                     * 
                     */
                    void SetMarkWordFontColor(const std::string& _markWordFontColor);

                    /**
                     * 判断参数 MarkWordFontColor 是否已赋值
                     * @return MarkWordFontColor 是否已赋值
                     * 
                     */
                    bool MarkWordFontColorHasBeenSet() const;

                    /**
                     * 获取文字水印的字体类型。
范围[1,2]。
1. 宋体
2. 黑体
                     * @return MarkWordFontType 文字水印的字体类型。
范围[1,2]。
1. 宋体
2. 黑体
                     * 
                     */
                    uint64_t GetMarkWordFontType() const;

                    /**
                     * 设置文字水印的字体类型。
范围[1,2]。
1. 宋体
2. 黑体
                     * @param _markWordFontType 文字水印的字体类型。
范围[1,2]。
1. 宋体
2. 黑体
                     * 
                     */
                    void SetMarkWordFontType(const uint64_t& _markWordFontType);

                    /**
                     * 判断参数 MarkWordFontType 是否已赋值
                     * @return MarkWordFontType 是否已赋值
                     * 
                     */
                    bool MarkWordFontTypeHasBeenSet() const;

                    /**
                     * 获取文字水印的x坐标位置，单位百分比。
范围[0.0, 1.0]

                     * @return MarkWordLocationX 文字水印的x坐标位置，单位百分比。
范围[0.0, 1.0]

                     * 
                     */
                    double GetMarkWordLocationX() const;

                    /**
                     * 设置文字水印的x坐标位置，单位百分比。
范围[0.0, 1.0]

                     * @param _markWordLocationX 文字水印的x坐标位置，单位百分比。
范围[0.0, 1.0]

                     * 
                     */
                    void SetMarkWordLocationX(const double& _markWordLocationX);

                    /**
                     * 判断参数 MarkWordLocationX 是否已赋值
                     * @return MarkWordLocationX 是否已赋值
                     * 
                     */
                    bool MarkWordLocationXHasBeenSet() const;

                    /**
                     * 获取文字水印的Y坐标位置，单位百分比。
范围[0.0, 1.0]

                     * @return MarkWordLocationY 文字水印的Y坐标位置，单位百分比。
范围[0.0, 1.0]

                     * 
                     */
                    double GetMarkWordLocationY() const;

                    /**
                     * 设置文字水印的Y坐标位置，单位百分比。
范围[0.0, 1.0]

                     * @param _markWordLocationY 文字水印的Y坐标位置，单位百分比。
范围[0.0, 1.0]

                     * 
                     */
                    void SetMarkWordLocationY(const double& _markWordLocationY);

                    /**
                     * 判断参数 MarkWordLocationY 是否已赋值
                     * @return MarkWordLocationY 是否已赋值
                     * 
                     */
                    bool MarkWordLocationYHasBeenSet() const;

                    /**
                     * 获取是否开启文字跑马灯功能。
默认为false。
                     * @return MarkWordRollEnable 是否开启文字跑马灯功能。
默认为false。
                     * 
                     */
                    bool GetMarkWordRollEnable() const;

                    /**
                     * 设置是否开启文字跑马灯功能。
默认为false。
                     * @param _markWordRollEnable 是否开启文字跑马灯功能。
默认为false。
                     * 
                     */
                    void SetMarkWordRollEnable(const bool& _markWordRollEnable);

                    /**
                     * 判断参数 MarkWordRollEnable 是否已赋值
                     * @return MarkWordRollEnable 是否已赋值
                     * 
                     */
                    bool MarkWordRollEnableHasBeenSet() const;

                    /**
                     * 获取跑马灯文字显示一遍的时间，单位为秒。
默认为5s。
范围[5, 600]。
                     * @return MarkWordRollOnceTime 跑马灯文字显示一遍的时间，单位为秒。
默认为5s。
范围[5, 600]。
                     * 
                     */
                    uint64_t GetMarkWordRollOnceTime() const;

                    /**
                     * 设置跑马灯文字显示一遍的时间，单位为秒。
默认为5s。
范围[5, 600]。
                     * @param _markWordRollOnceTime 跑马灯文字显示一遍的时间，单位为秒。
默认为5s。
范围[5, 600]。
                     * 
                     */
                    void SetMarkWordRollOnceTime(const uint64_t& _markWordRollOnceTime);

                    /**
                     * 判断参数 MarkWordRollOnceTime 是否已赋值
                     * @return MarkWordRollOnceTime 是否已赋值
                     * 
                     */
                    bool MarkWordRollOnceTimeHasBeenSet() const;

                    /**
                     * 获取跑马灯文字的方向。
默认值为0。
范围[0,1]。
0 从左到右
1 从右到左
                     * @return MarkWordRollDirection 跑马灯文字的方向。
默认值为0。
范围[0,1]。
0 从左到右
1 从右到左
                     * 
                     */
                    int64_t GetMarkWordRollDirection() const;

                    /**
                     * 设置跑马灯文字的方向。
默认值为0。
范围[0,1]。
0 从左到右
1 从右到左
                     * @param _markWordRollDirection 跑马灯文字的方向。
默认值为0。
范围[0,1]。
0 从左到右
1 从右到左
                     * 
                     */
                    void SetMarkWordRollDirection(const int64_t& _markWordRollDirection);

                    /**
                     * 判断参数 MarkWordRollDirection 是否已赋值
                     * @return MarkWordRollDirection 是否已赋值
                     * 
                     */
                    bool MarkWordRollDirectionHasBeenSet() const;

                    /**
                     * 获取跑马灯文字显示的起始x坐标，单位百分比。
范围[0.0, 1.0]
                     * @return MarkWordRollStartLocationX 跑马灯文字显示的起始x坐标，单位百分比。
范围[0.0, 1.0]
                     * 
                     */
                    double GetMarkWordRollStartLocationX() const;

                    /**
                     * 设置跑马灯文字显示的起始x坐标，单位百分比。
范围[0.0, 1.0]
                     * @param _markWordRollStartLocationX 跑马灯文字显示的起始x坐标，单位百分比。
范围[0.0, 1.0]
                     * 
                     */
                    void SetMarkWordRollStartLocationX(const double& _markWordRollStartLocationX);

                    /**
                     * 判断参数 MarkWordRollStartLocationX 是否已赋值
                     * @return MarkWordRollStartLocationX 是否已赋值
                     * 
                     */
                    bool MarkWordRollStartLocationXHasBeenSet() const;

                    /**
                     * 获取跑马灯文字显示的截止x坐标，单位百分比。
范围[0.0, 1.0]
                     * @return MarkWordRollEndLocationX 跑马灯文字显示的截止x坐标，单位百分比。
范围[0.0, 1.0]
                     * 
                     */
                    double GetMarkWordRollEndLocationX() const;

                    /**
                     * 设置跑马灯文字显示的截止x坐标，单位百分比。
范围[0.0, 1.0]
                     * @param _markWordRollEndLocationX 跑马灯文字显示的截止x坐标，单位百分比。
范围[0.0, 1.0]
                     * 
                     */
                    void SetMarkWordRollEndLocationX(const double& _markWordRollEndLocationX);

                    /**
                     * 判断参数 MarkWordRollEndLocationX 是否已赋值
                     * @return MarkWordRollEndLocationX 是否已赋值
                     * 
                     */
                    bool MarkWordRollEndLocationXHasBeenSet() const;

                private:

                    /**
                     * 文字水印Index。
                     */
                    int64_t m_markWordIndex;
                    bool m_markWordIndexHasBeenSet;

                    /**
                     * 文字水印内容。
                     */
                    std::string m_markWordText;
                    bool m_markWordTextHasBeenSet;

                    /**
                     * 文字水印的字号。
范围[16, 60]
                     */
                    uint64_t m_markWordFontSize;
                    bool m_markWordFontSizeHasBeenSet;

                    /**
                     * 文字水印的颜色，值为HEX颜色代码
                     */
                    std::string m_markWordFontColor;
                    bool m_markWordFontColorHasBeenSet;

                    /**
                     * 文字水印的字体类型。
范围[1,2]。
1. 宋体
2. 黑体
                     */
                    uint64_t m_markWordFontType;
                    bool m_markWordFontTypeHasBeenSet;

                    /**
                     * 文字水印的x坐标位置，单位百分比。
范围[0.0, 1.0]

                     */
                    double m_markWordLocationX;
                    bool m_markWordLocationXHasBeenSet;

                    /**
                     * 文字水印的Y坐标位置，单位百分比。
范围[0.0, 1.0]

                     */
                    double m_markWordLocationY;
                    bool m_markWordLocationYHasBeenSet;

                    /**
                     * 是否开启文字跑马灯功能。
默认为false。
                     */
                    bool m_markWordRollEnable;
                    bool m_markWordRollEnableHasBeenSet;

                    /**
                     * 跑马灯文字显示一遍的时间，单位为秒。
默认为5s。
范围[5, 600]。
                     */
                    uint64_t m_markWordRollOnceTime;
                    bool m_markWordRollOnceTimeHasBeenSet;

                    /**
                     * 跑马灯文字的方向。
默认值为0。
范围[0,1]。
0 从左到右
1 从右到左
                     */
                    int64_t m_markWordRollDirection;
                    bool m_markWordRollDirectionHasBeenSet;

                    /**
                     * 跑马灯文字显示的起始x坐标，单位百分比。
范围[0.0, 1.0]
                     */
                    double m_markWordRollStartLocationX;
                    bool m_markWordRollStartLocationXHasBeenSet;

                    /**
                     * 跑马灯文字显示的截止x坐标，单位百分比。
范围[0.0, 1.0]
                     */
                    double m_markWordRollEndLocationX;
                    bool m_markWordRollEndLocationXHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CASTERMARKWORDINFO_H_
