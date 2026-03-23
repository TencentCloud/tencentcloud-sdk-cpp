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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEMODELSRESPONSEVO_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEMODELSRESPONSEVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/DescribeModelResponseVO.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * 查询模型列表的响应
                */
                class DescribeModelsResponseVO : public AbstractModel
                {
                public:
                    DescribeModelsResponseVO();
                    ~DescribeModelsResponseVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取条目
                     * @return Total 条目
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置条目
                     * @param _total 条目
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取列表
                     * @return Items 列表
                     * 
                     */
                    std::vector<DescribeModelResponseVO> GetItems() const;

                    /**
                     * 设置列表
                     * @param _items 列表
                     * 
                     */
                    void SetItems(const std::vector<DescribeModelResponseVO>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 条目
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 列表
                     */
                    std::vector<DescribeModelResponseVO> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEMODELSRESPONSEVO_H_
