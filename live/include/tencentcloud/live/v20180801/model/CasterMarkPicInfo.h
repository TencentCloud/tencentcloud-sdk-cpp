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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CASTERMARKPICINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CASTERMARKPICINFO_H_

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
                * 导播台水印信息。
                */
                class CasterMarkPicInfo : public AbstractModel
                {
                public:
                    CasterMarkPicInfo();
                    ~CasterMarkPicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取水印图片Index。
                     * @return MarkPicIndex 水印图片Index。
                     * 
                     */
                    int64_t GetMarkPicIndex() const;

                    /**
                     * 设置水印图片Index。
                     * @param _markPicIndex 水印图片Index。
                     * 
                     */
                    void SetMarkPicIndex(const int64_t& _markPicIndex);

                    /**
                     * 判断参数 MarkPicIndex 是否已赋值
                     * @return MarkPicIndex 是否已赋值
                     * 
                     */
                    bool MarkPicIndexHasBeenSet() const;

                    /**
                     * 获取注：该字段已废弃。
                     * @return MarkPicId 注：该字段已废弃。
                     * 
                     */
                    int64_t GetMarkPicId() const;

                    /**
                     * 设置注：该字段已废弃。
                     * @param _markPicId 注：该字段已废弃。
                     * 
                     */
                    void SetMarkPicId(const int64_t& _markPicId);

                    /**
                     * 判断参数 MarkPicId 是否已赋值
                     * @return MarkPicId 是否已赋值
                     * 
                     */
                    bool MarkPicIdHasBeenSet() const;

                    /**
                     * 获取水印图片在输出时的宽度。
当该值为大于1的整数值时，单位为像素，允许范围[1,1920]。 
当该值为小于1大于0的小数时，单位为百分比，表示水印在最终画面上所占的比例值。
                     * @return MarkPicWidth 水印图片在输出时的宽度。
当该值为大于1的整数值时，单位为像素，允许范围[1,1920]。 
当该值为小于1大于0的小数时，单位为百分比，表示水印在最终画面上所占的比例值。
                     * 
                     */
                    double GetMarkPicWidth() const;

                    /**
                     * 设置水印图片在输出时的宽度。
当该值为大于1的整数值时，单位为像素，允许范围[1,1920]。 
当该值为小于1大于0的小数时，单位为百分比，表示水印在最终画面上所占的比例值。
                     * @param _markPicWidth 水印图片在输出时的宽度。
当该值为大于1的整数值时，单位为像素，允许范围[1,1920]。 
当该值为小于1大于0的小数时，单位为百分比，表示水印在最终画面上所占的比例值。
                     * 
                     */
                    void SetMarkPicWidth(const double& _markPicWidth);

                    /**
                     * 判断参数 MarkPicWidth 是否已赋值
                     * @return MarkPicWidth 是否已赋值
                     * 
                     */
                    bool MarkPicWidthHasBeenSet() const;

                    /**
                     * 获取水印图片在输出时的高度。
当该值为大于1的整数值时，单位为像素，允许范围[1,1080]。 
当该值为小于1大于0的小数时，单位为百分比，表示水印在输出上所占的比例值。
                     * @return MarkPicHeight 水印图片在输出时的高度。
当该值为大于1的整数值时，单位为像素，允许范围[1,1080]。 
当该值为小于1大于0的小数时，单位为百分比，表示水印在输出上所占的比例值。
                     * 
                     */
                    double GetMarkPicHeight() const;

                    /**
                     * 设置水印图片在输出时的高度。
当该值为大于1的整数值时，单位为像素，允许范围[1,1080]。 
当该值为小于1大于0的小数时，单位为百分比，表示水印在输出上所占的比例值。
                     * @param _markPicHeight 水印图片在输出时的高度。
当该值为大于1的整数值时，单位为像素，允许范围[1,1080]。 
当该值为小于1大于0的小数时，单位为百分比，表示水印在输出上所占的比例值。
                     * 
                     */
                    void SetMarkPicHeight(const double& _markPicHeight);

                    /**
                     * 判断参数 MarkPicHeight 是否已赋值
                     * @return MarkPicHeight 是否已赋值
                     * 
                     */
                    bool MarkPicHeightHasBeenSet() const;

                    /**
                     * 获取水印图片在输出时的X轴坐标。
当该值为大于1的整数值时，单位为像素，允许范围[1,1920]。 
当该值为小于1大于0的小数时，单位为百分比，表示水印在最终画面上x坐标所占的比例值。
                     * @return MarkPicLocationX 水印图片在输出时的X轴坐标。
当该值为大于1的整数值时，单位为像素，允许范围[1,1920]。 
当该值为小于1大于0的小数时，单位为百分比，表示水印在最终画面上x坐标所占的比例值。
                     * 
                     */
                    double GetMarkPicLocationX() const;

                    /**
                     * 设置水印图片在输出时的X轴坐标。
当该值为大于1的整数值时，单位为像素，允许范围[1,1920]。 
当该值为小于1大于0的小数时，单位为百分比，表示水印在最终画面上x坐标所占的比例值。
                     * @param _markPicLocationX 水印图片在输出时的X轴坐标。
当该值为大于1的整数值时，单位为像素，允许范围[1,1920]。 
当该值为小于1大于0的小数时，单位为百分比，表示水印在最终画面上x坐标所占的比例值。
                     * 
                     */
                    void SetMarkPicLocationX(const double& _markPicLocationX);

                    /**
                     * 判断参数 MarkPicLocationX 是否已赋值
                     * @return MarkPicLocationX 是否已赋值
                     * 
                     */
                    bool MarkPicLocationXHasBeenSet() const;

                    /**
                     * 获取水印图片在输出时的Y坐标。
当该值为大于1的整数值时，单位为像素，允许范围[1,1080]。 
当该值为小于1大于0的小数时，单位为百分比，表示水印在最终画面Y坐标上所占的比例值。
                     * @return MarkPicLocationY 水印图片在输出时的Y坐标。
当该值为大于1的整数值时，单位为像素，允许范围[1,1080]。 
当该值为小于1大于0的小数时，单位为百分比，表示水印在最终画面Y坐标上所占的比例值。
                     * 
                     */
                    double GetMarkPicLocationY() const;

                    /**
                     * 设置水印图片在输出时的Y坐标。
当该值为大于1的整数值时，单位为像素，允许范围[1,1080]。 
当该值为小于1大于0的小数时，单位为百分比，表示水印在最终画面Y坐标上所占的比例值。
                     * @param _markPicLocationY 水印图片在输出时的Y坐标。
当该值为大于1的整数值时，单位为像素，允许范围[1,1080]。 
当该值为小于1大于0的小数时，单位为百分比，表示水印在最终画面Y坐标上所占的比例值。
                     * 
                     */
                    void SetMarkPicLocationY(const double& _markPicLocationY);

                    /**
                     * 判断参数 MarkPicLocationY 是否已赋值
                     * @return MarkPicLocationY 是否已赋值
                     * 
                     */
                    bool MarkPicLocationYHasBeenSet() const;

                    /**
                     * 获取水印地址。
最大长度256字符，且url需以jpg、jpeg、png、bmp、gif后缀结尾。
                     * @return MarkPicUrl 水印地址。
最大长度256字符，且url需以jpg、jpeg、png、bmp、gif后缀结尾。
                     * 
                     */
                    std::string GetMarkPicUrl() const;

                    /**
                     * 设置水印地址。
最大长度256字符，且url需以jpg、jpeg、png、bmp、gif后缀结尾。
                     * @param _markPicUrl 水印地址。
最大长度256字符，且url需以jpg、jpeg、png、bmp、gif后缀结尾。
                     * 
                     */
                    void SetMarkPicUrl(const std::string& _markPicUrl);

                    /**
                     * 判断参数 MarkPicUrl 是否已赋值
                     * @return MarkPicUrl 是否已赋值
                     * 
                     */
                    bool MarkPicUrlHasBeenSet() const;

                    /**
                     * 获取水印描述。
最大允许长度为256。
                     * @return Description 水印描述。
最大允许长度为256。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置水印描述。
最大允许长度为256。
                     * @param _description 水印描述。
最大允许长度为256。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取是否启用了等比例缩放。
注：该字段仅做状态保存，无实际效果。
                     * @return IsEqualProportion 是否启用了等比例缩放。
注：该字段仅做状态保存，无实际效果。
                     * 
                     */
                    bool GetIsEqualProportion() const;

                    /**
                     * 设置是否启用了等比例缩放。
注：该字段仅做状态保存，无实际效果。
                     * @param _isEqualProportion 是否启用了等比例缩放。
注：该字段仅做状态保存，无实际效果。
                     * 
                     */
                    void SetIsEqualProportion(const bool& _isEqualProportion);

                    /**
                     * 判断参数 IsEqualProportion 是否已赋值
                     * @return IsEqualProportion 是否已赋值
                     * 
                     */
                    bool IsEqualProportionHasBeenSet() const;

                private:

                    /**
                     * 水印图片Index。
                     */
                    int64_t m_markPicIndex;
                    bool m_markPicIndexHasBeenSet;

                    /**
                     * 注：该字段已废弃。
                     */
                    int64_t m_markPicId;
                    bool m_markPicIdHasBeenSet;

                    /**
                     * 水印图片在输出时的宽度。
当该值为大于1的整数值时，单位为像素，允许范围[1,1920]。 
当该值为小于1大于0的小数时，单位为百分比，表示水印在最终画面上所占的比例值。
                     */
                    double m_markPicWidth;
                    bool m_markPicWidthHasBeenSet;

                    /**
                     * 水印图片在输出时的高度。
当该值为大于1的整数值时，单位为像素，允许范围[1,1080]。 
当该值为小于1大于0的小数时，单位为百分比，表示水印在输出上所占的比例值。
                     */
                    double m_markPicHeight;
                    bool m_markPicHeightHasBeenSet;

                    /**
                     * 水印图片在输出时的X轴坐标。
当该值为大于1的整数值时，单位为像素，允许范围[1,1920]。 
当该值为小于1大于0的小数时，单位为百分比，表示水印在最终画面上x坐标所占的比例值。
                     */
                    double m_markPicLocationX;
                    bool m_markPicLocationXHasBeenSet;

                    /**
                     * 水印图片在输出时的Y坐标。
当该值为大于1的整数值时，单位为像素，允许范围[1,1080]。 
当该值为小于1大于0的小数时，单位为百分比，表示水印在最终画面Y坐标上所占的比例值。
                     */
                    double m_markPicLocationY;
                    bool m_markPicLocationYHasBeenSet;

                    /**
                     * 水印地址。
最大长度256字符，且url需以jpg、jpeg、png、bmp、gif后缀结尾。
                     */
                    std::string m_markPicUrl;
                    bool m_markPicUrlHasBeenSet;

                    /**
                     * 水印描述。
最大允许长度为256。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 是否启用了等比例缩放。
注：该字段仅做状态保存，无实际效果。
                     */
                    bool m_isEqualProportion;
                    bool m_isEqualProportionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CASTERMARKPICINFO_H_
