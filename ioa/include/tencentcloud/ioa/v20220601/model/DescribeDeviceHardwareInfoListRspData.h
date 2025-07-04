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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICEHARDWAREINFOLISTRSPDATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICEHARDWAREINFOLISTRSPDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/Paging.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDeviceHardwareInfoItem.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 终端硬件信息列表响应详情
                */
                class DescribeDeviceHardwareInfoListRspData : public AbstractModel
                {
                public:
                    DescribeDeviceHardwareInfoListRspData();
                    ~DescribeDeviceHardwareInfoListRspData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分页数据
                     * @return Page 分页数据
                     * 
                     */
                    Paging GetPage() const;

                    /**
                     * 设置分页数据
                     * @param _page 分页数据
                     * 
                     */
                    void SetPage(const Paging& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取终端硬件信息数据数组
                     * @return Items 终端硬件信息数据数组
                     * 
                     */
                    std::vector<DescribeDeviceHardwareInfoItem> GetItems() const;

                    /**
                     * 设置终端硬件信息数据数组
                     * @param _items 终端硬件信息数据数组
                     * 
                     */
                    void SetItems(const std::vector<DescribeDeviceHardwareInfoItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 分页数据
                     */
                    Paging m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 终端硬件信息数据数组
                     */
                    std::vector<DescribeDeviceHardwareInfoItem> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICEHARDWAREINFOLISTRSPDATA_H_
