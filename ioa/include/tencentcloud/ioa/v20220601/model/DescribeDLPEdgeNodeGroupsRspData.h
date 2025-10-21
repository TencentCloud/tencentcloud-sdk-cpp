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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDLPEDGENODEGROUPSRSPDATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDLPEDGENODEGROUPSRSPDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDLPEdgeNodeGroupsRspItem.h>
#include <tencentcloud/ioa/v20220601/model/Paging.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 业务响应数据
                */
                class DescribeDLPEdgeNodeGroupsRspData : public AbstractModel
                {
                public:
                    DescribeDLPEdgeNodeGroupsRspData();
                    ~DescribeDLPEdgeNodeGroupsRspData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分组信息
                     * @return Items 分组信息
                     * 
                     */
                    std::vector<DescribeDLPEdgeNodeGroupsRspItem> GetItems() const;

                    /**
                     * 设置分组信息
                     * @param _items 分组信息
                     * 
                     */
                    void SetItems(const std::vector<DescribeDLPEdgeNodeGroupsRspItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取分页信息
                     * @return Page 分页信息
                     * 
                     */
                    Paging GetPage() const;

                    /**
                     * 设置分页信息
                     * @param _page 分页信息
                     * 
                     */
                    void SetPage(const Paging& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                private:

                    /**
                     * 分组信息
                     */
                    std::vector<DescribeDLPEdgeNodeGroupsRspItem> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 分页信息
                     */
                    Paging m_page;
                    bool m_pageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDLPEDGENODEGROUPSRSPDATA_H_
