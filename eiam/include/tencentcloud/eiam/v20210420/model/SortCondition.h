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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_SORTCONDITION_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_SORTCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * 排序条件。
                */
                class SortCondition : public AbstractModel
                {
                public:
                    SortCondition();
                    ~SortCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取排序属性。
                     * @return SortKey 排序属性。
                     * 
                     */
                    std::string GetSortKey() const;

                    /**
                     * 设置排序属性。
                     * @param _sortKey 排序属性。
                     * 
                     */
                    void SetSortKey(const std::string& _sortKey);

                    /**
                     * 判断参数 SortKey 是否已赋值
                     * @return SortKey 是否已赋值
                     * 
                     */
                    bool SortKeyHasBeenSet() const;

                    /**
                     * 获取排序顺序，ASC为正向排序，DESC为反向排序。
                     * @return SortOrder 排序顺序，ASC为正向排序，DESC为反向排序。
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置排序顺序，ASC为正向排序，DESC为反向排序。
                     * @param _sortOrder 排序顺序，ASC为正向排序，DESC为反向排序。
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                private:

                    /**
                     * 排序属性。
                     */
                    std::string m_sortKey;
                    bool m_sortKeyHasBeenSet;

                    /**
                     * 排序顺序，ASC为正向排序，DESC为反向排序。
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_SORTCONDITION_H_
