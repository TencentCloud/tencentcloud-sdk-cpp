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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_PPTERRSLIDE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_PPTERRSLIDE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/PPTErr.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * PPT错误页面列表
                */
                class PPTErrSlide : public AbstractModel
                {
                public:
                    PPTErrSlide();
                    ~PPTErrSlide() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取异常元素存在的页面，由页面类型+页码组成，页码类型包括：幻灯片、幻灯片母版、幻灯片布局等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Page 异常元素存在的页面，由页面类型+页码组成，页码类型包括：幻灯片、幻灯片母版、幻灯片布局等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPage() const;

                    /**
                     * 设置异常元素存在的页面，由页面类型+页码组成，页码类型包括：幻灯片、幻灯片母版、幻灯片布局等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _page 异常元素存在的页面，由页面类型+页码组成，页码类型包括：幻灯片、幻灯片母版、幻灯片布局等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPage(const std::string& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取错误元素列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Errs 错误元素列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PPTErr> GetErrs() const;

                    /**
                     * 设置错误元素列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errs 错误元素列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrs(const std::vector<PPTErr>& _errs);

                    /**
                     * 判断参数 Errs 是否已赋值
                     * @return Errs 是否已赋值
                     * 
                     */
                    bool ErrsHasBeenSet() const;

                private:

                    /**
                     * 异常元素存在的页面，由页面类型+页码组成，页码类型包括：幻灯片、幻灯片母版、幻灯片布局等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 错误元素列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PPTErr> m_errs;
                    bool m_errsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_PPTERRSLIDE_H_
