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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CASTERLAYOUTINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CASTERLAYOUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/CasterLayoutParam.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 导播台布局参数。
                */
                class CasterLayoutInfo : public AbstractModel
                {
                public:
                    CasterLayoutInfo();
                    ~CasterLayoutInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>布局Index。</p>取值范围：[1, 1000]
                     * @return LayoutIndex <p>布局Index。</p>取值范围：[1, 1000]
                     * 
                     */
                    int64_t GetLayoutIndex() const;

                    /**
                     * 设置<p>布局Index。</p>取值范围：[1, 1000]
                     * @param _layoutIndex <p>布局Index。</p>取值范围：[1, 1000]
                     * 
                     */
                    void SetLayoutIndex(const int64_t& _layoutIndex);

                    /**
                     * 判断参数 LayoutIndex 是否已赋值
                     * @return LayoutIndex 是否已赋值
                     * 
                     */
                    bool LayoutIndexHasBeenSet() const;

                    /**
                     * 获取<p>布局模板Id。有效值[1，20，21，31，32，41]当使用布局模板时，无需LayoutParams参数，导播台将使用模板布局参数。</p>
                     * @return LayoutTemplateId <p>布局模板Id。有效值[1，20，21，31，32，41]当使用布局模板时，无需LayoutParams参数，导播台将使用模板布局参数。</p>
                     * 
                     */
                    int64_t GetLayoutTemplateId() const;

                    /**
                     * 设置<p>布局模板Id。有效值[1，20，21，31，32，41]当使用布局模板时，无需LayoutParams参数，导播台将使用模板布局参数。</p>
                     * @param _layoutTemplateId <p>布局模板Id。有效值[1，20，21，31，32，41]当使用布局模板时，无需LayoutParams参数，导播台将使用模板布局参数。</p>
                     * 
                     */
                    void SetLayoutTemplateId(const int64_t& _layoutTemplateId);

                    /**
                     * 判断参数 LayoutTemplateId 是否已赋值
                     * @return LayoutTemplateId 是否已赋值
                     * 
                     */
                    bool LayoutTemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>布局绑定的输入列表。按布局LayerId从小到大，按顺序排列。已有两个画面的布局为例，输入1对应LayerId为1，输入2对应的LayerId为2，该字段应该填入"1|2"。</p>
                     * @return InputIndexList <p>布局绑定的输入列表。按布局LayerId从小到大，按顺序排列。已有两个画面的布局为例，输入1对应LayerId为1，输入2对应的LayerId为2，该字段应该填入"1|2"。</p>
                     * 
                     */
                    std::string GetInputIndexList() const;

                    /**
                     * 设置<p>布局绑定的输入列表。按布局LayerId从小到大，按顺序排列。已有两个画面的布局为例，输入1对应LayerId为1，输入2对应的LayerId为2，该字段应该填入"1|2"。</p>
                     * @param _inputIndexList <p>布局绑定的输入列表。按布局LayerId从小到大，按顺序排列。已有两个画面的布局为例，输入1对应LayerId为1，输入2对应的LayerId为2，该字段应该填入"1|2"。</p>
                     * 
                     */
                    void SetInputIndexList(const std::string& _inputIndexList);

                    /**
                     * 判断参数 InputIndexList 是否已赋值
                     * @return InputIndexList 是否已赋值
                     * 
                     */
                    bool InputIndexListHasBeenSet() const;

                    /**
                     * 获取<p>详细的布局参数列表。</p>
                     * @return LayoutParams <p>详细的布局参数列表。</p>
                     * 
                     */
                    std::vector<CasterLayoutParam> GetLayoutParams() const;

                    /**
                     * 设置<p>详细的布局参数列表。</p>
                     * @param _layoutParams <p>详细的布局参数列表。</p>
                     * 
                     */
                    void SetLayoutParams(const std::vector<CasterLayoutParam>& _layoutParams);

                    /**
                     * 判断参数 LayoutParams 是否已赋值
                     * @return LayoutParams 是否已赋值
                     * 
                     */
                    bool LayoutParamsHasBeenSet() const;

                    /**
                     * 获取<p>布局输出的宽度，单位为像素。默认为1280像素。注：该值仅在画中画布局，且未设置PgmWidth时生效。</p>
                     * @return LayoutWidth <p>布局输出的宽度，单位为像素。默认为1280像素。注：该值仅在画中画布局，且未设置PgmWidth时生效。</p>
                     * 
                     */
                    uint64_t GetLayoutWidth() const;

                    /**
                     * 设置<p>布局输出的宽度，单位为像素。默认为1280像素。注：该值仅在画中画布局，且未设置PgmWidth时生效。</p>
                     * @param _layoutWidth <p>布局输出的宽度，单位为像素。默认为1280像素。注：该值仅在画中画布局，且未设置PgmWidth时生效。</p>
                     * 
                     */
                    void SetLayoutWidth(const uint64_t& _layoutWidth);

                    /**
                     * 判断参数 LayoutWidth 是否已赋值
                     * @return LayoutWidth 是否已赋值
                     * 
                     */
                    bool LayoutWidthHasBeenSet() const;

                    /**
                     * 获取<p>布局输出的高度，单位为像素。注：该参数仅在画中画布局，且未设置PgmHeight时生效。</p>
                     * @return LayoutHeight <p>布局输出的高度，单位为像素。注：该参数仅在画中画布局，且未设置PgmHeight时生效。</p>
                     * 
                     */
                    uint64_t GetLayoutHeight() const;

                    /**
                     * 设置<p>布局输出的高度，单位为像素。注：该参数仅在画中画布局，且未设置PgmHeight时生效。</p>
                     * @param _layoutHeight <p>布局输出的高度，单位为像素。注：该参数仅在画中画布局，且未设置PgmHeight时生效。</p>
                     * 
                     */
                    void SetLayoutHeight(const uint64_t& _layoutHeight);

                    /**
                     * 判断参数 LayoutHeight 是否已赋值
                     * @return LayoutHeight 是否已赋值
                     * 
                     */
                    bool LayoutHeightHasBeenSet() const;

                private:

                    /**
                     * <p>布局Index。</p>取值范围：[1, 1000]
                     */
                    int64_t m_layoutIndex;
                    bool m_layoutIndexHasBeenSet;

                    /**
                     * <p>布局模板Id。有效值[1，20，21，31，32，41]当使用布局模板时，无需LayoutParams参数，导播台将使用模板布局参数。</p>
                     */
                    int64_t m_layoutTemplateId;
                    bool m_layoutTemplateIdHasBeenSet;

                    /**
                     * <p>布局绑定的输入列表。按布局LayerId从小到大，按顺序排列。已有两个画面的布局为例，输入1对应LayerId为1，输入2对应的LayerId为2，该字段应该填入"1|2"。</p>
                     */
                    std::string m_inputIndexList;
                    bool m_inputIndexListHasBeenSet;

                    /**
                     * <p>详细的布局参数列表。</p>
                     */
                    std::vector<CasterLayoutParam> m_layoutParams;
                    bool m_layoutParamsHasBeenSet;

                    /**
                     * <p>布局输出的宽度，单位为像素。默认为1280像素。注：该值仅在画中画布局，且未设置PgmWidth时生效。</p>
                     */
                    uint64_t m_layoutWidth;
                    bool m_layoutWidthHasBeenSet;

                    /**
                     * <p>布局输出的高度，单位为像素。注：该参数仅在画中画布局，且未设置PgmHeight时生效。</p>
                     */
                    uint64_t m_layoutHeight;
                    bool m_layoutHeightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CASTERLAYOUTINFO_H_
