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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_SELECTEDRANGE_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_SELECTEDRANGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcm/v20210413/model/SelectedItems.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * 被选中的范围
                */
                class SelectedRange : public AbstractModel
                {
                public:
                    SelectedRange();
                    ~SelectedRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取选中的项目详细内容
                     * @return Items 选中的项目详细内容
                     * 
                     */
                    std::vector<SelectedItems> GetItems() const;

                    /**
                     * 设置选中的项目详细内容
                     * @param _items 选中的项目详细内容
                     * 
                     */
                    void SetItems(const std::vector<SelectedItems>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取是否全选
                     * @return All 是否全选
                     * 
                     */
                    bool GetAll() const;

                    /**
                     * 设置是否全选
                     * @param _all 是否全选
                     * 
                     */
                    void SetAll(const bool& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * 
                     */
                    bool AllHasBeenSet() const;

                private:

                    /**
                     * 选中的项目详细内容
                     */
                    std::vector<SelectedItems> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 是否全选
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_SELECTEDRANGE_H_
