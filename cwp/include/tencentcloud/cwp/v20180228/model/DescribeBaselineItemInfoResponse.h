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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEITEMINFORESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEITEMINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/BaselineItemInfo.h>
#include <tencentcloud/cwp/v20180228/model/BaselineItemsCategory.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeBaselineItemInfo返回参数结构体
                */
                class DescribeBaselineItemInfoResponse : public AbstractModel
                {
                public:
                    DescribeBaselineItemInfoResponse();
                    ~DescribeBaselineItemInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取结果列表
                     * @return List 结果列表
                     * 
                     */
                    std::vector<BaselineItemInfo> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取总条目数
                     * @return Total 总条目数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取基线分类列表
                     * @return CategoryList 基线分类列表
                     * 
                     */
                    std::vector<BaselineItemsCategory> GetCategoryList() const;

                    /**
                     * 判断参数 CategoryList 是否已赋值
                     * @return CategoryList 是否已赋值
                     * 
                     */
                    bool CategoryListHasBeenSet() const;

                private:

                    /**
                     * 结果列表
                     */
                    std::vector<BaselineItemInfo> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * 总条目数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 基线分类列表
                     */
                    std::vector<BaselineItemsCategory> m_categoryList;
                    bool m_categoryListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEITEMINFORESPONSE_H_
