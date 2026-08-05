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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_QUERYMONITOROVERVIEWRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_QUERYMONITOROVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/OverviewItem.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * QueryMonitorOverview返回参数结构体
                */
                class QueryMonitorOverviewResponse : public AbstractModel
                {
                public:
                    QueryMonitorOverviewResponse();
                    ~QueryMonitorOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>概览数据项列表，每项对应一个请求的 ChartType</p>
                     * @return Items <p>概览数据项列表，每项对应一个请求的 ChartType</p>
                     * 
                     */
                    std::vector<OverviewItem> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * <p>概览数据项列表，每项对应一个请求的 ChartType</p>
                     */
                    std::vector<OverviewItem> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_QUERYMONITOROVERVIEWRESPONSE_H_
