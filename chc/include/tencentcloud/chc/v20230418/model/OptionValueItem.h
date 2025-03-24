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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_OPTIONVALUEITEM_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_OPTIONVALUEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 型号选项下拉框中的选项值
                */
                class OptionValueItem : public AbstractModel
                {
                public:
                    OptionValueItem();
                    ~OptionValueItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取选项的值
                     * @return OptionValue 选项的值
                     * 
                     */
                    std::string GetOptionValue() const;

                    /**
                     * 设置选项的值
                     * @param _optionValue 选项的值
                     * 
                     */
                    void SetOptionValue(const std::string& _optionValue);

                    /**
                     * 判断参数 OptionValue 是否已赋值
                     * @return OptionValue 是否已赋值
                     * 
                     */
                    bool OptionValueHasBeenSet() const;

                    /**
                     * 获取是否默认选中
                     * @return Selected 是否默认选中
                     * 
                     */
                    bool GetSelected() const;

                    /**
                     * 设置是否默认选中
                     * @param _selected 是否默认选中
                     * 
                     */
                    void SetSelected(const bool& _selected);

                    /**
                     * 判断参数 Selected 是否已赋值
                     * @return Selected 是否已赋值
                     * 
                     */
                    bool SelectedHasBeenSet() const;

                private:

                    /**
                     * 选项的值
                     */
                    std::string m_optionValue;
                    bool m_optionValueHasBeenSet;

                    /**
                     * 是否默认选中
                     */
                    bool m_selected;
                    bool m_selectedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_OPTIONVALUEITEM_H_
