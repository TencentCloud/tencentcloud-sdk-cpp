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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICECHILDGROUPSRSPDATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICECHILDGROUPSRSPDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/DeviceGroupDetail.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 查询设备组子分组详情响应结构
                */
                class DescribeDeviceChildGroupsRspData : public AbstractModel
                {
                public:
                    DescribeDeviceChildGroupsRspData();
                    ~DescribeDeviceChildGroupsRspData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取返回的数组列表
                     * @return Items 返回的数组列表
                     * 
                     */
                    std::vector<DeviceGroupDetail> GetItems() const;

                    /**
                     * 设置返回的数组列表
                     * @param _items 返回的数组列表
                     * 
                     */
                    void SetItems(const std::vector<DeviceGroupDetail>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 返回的数组列表
                     */
                    std::vector<DeviceGroupDetail> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDEVICECHILDGROUPSRSPDATA_H_
