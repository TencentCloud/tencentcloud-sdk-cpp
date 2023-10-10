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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCREENEVENTSCNT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCREENEVENTSCNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/ScreenNameValue.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 统计入侵检测
                */
                class ScreenEventsCnt : public AbstractModel
                {
                public:
                    ScreenEventsCnt();
                    ~ScreenEventsCnt() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取展示内容：待处理风险总数，影响资产总数
                     * @return Title 展示内容：待处理风险总数，影响资产总数
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置展示内容：待处理风险总数，影响资产总数
                     * @param _title 展示内容：待处理风险总数，影响资产总数
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取事件总数
                     * @return Total 事件总数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 设置事件总数
                     * @param _total 事件总数
                     * 
                     */
                    void SetTotal(const uint64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取name 具体展示内容类型： 攻击事件, 潜在风险, 失陷资产, 潜在风险资产
Value: 事件统计数
                     * @return Category name 具体展示内容类型： 攻击事件, 潜在风险, 失陷资产, 潜在风险资产
Value: 事件统计数
                     * 
                     */
                    std::vector<ScreenNameValue> GetCategory() const;

                    /**
                     * 设置name 具体展示内容类型： 攻击事件, 潜在风险, 失陷资产, 潜在风险资产
Value: 事件统计数
                     * @param _category name 具体展示内容类型： 攻击事件, 潜在风险, 失陷资产, 潜在风险资产
Value: 事件统计数
                     * 
                     */
                    void SetCategory(const std::vector<ScreenNameValue>& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                private:

                    /**
                     * 展示内容：待处理风险总数，影响资产总数
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 事件总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * name 具体展示内容类型： 攻击事件, 潜在风险, 失陷资产, 潜在风险资产
Value: 事件统计数
                     */
                    std::vector<ScreenNameValue> m_category;
                    bool m_categoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCREENEVENTSCNT_H_
