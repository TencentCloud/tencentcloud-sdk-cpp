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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_INITIALIZEDISKSREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_INITIALIZEDISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * InitializeDisks请求参数结构体
                */
                class InitializeDisksRequest : public AbstractModel
                {
                public:
                    InitializeDisksRequest();
                    ~InitializeDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待重新初始化的云硬盘ID列表，可以通过[DescribeDisks](/document/product/362/16315)接口查询， 单次初始化限制20块以内
                     * @return DiskIds 待重新初始化的云硬盘ID列表，可以通过[DescribeDisks](/document/product/362/16315)接口查询， 单次初始化限制20块以内
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置待重新初始化的云硬盘ID列表，可以通过[DescribeDisks](/document/product/362/16315)接口查询， 单次初始化限制20块以内
                     * @param _diskIds 待重新初始化的云硬盘ID列表，可以通过[DescribeDisks](/document/product/362/16315)接口查询， 单次初始化限制20块以内
                     * 
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     * 
                     */
                    bool DiskIdsHasBeenSet() const;

                private:

                    /**
                     * 待重新初始化的云硬盘ID列表，可以通过[DescribeDisks](/document/product/362/16315)接口查询， 单次初始化限制20块以内
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_INITIALIZEDISKSREQUEST_H_
