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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRALERTCOUNTFORCONTAINERRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRALERTCOUNTFORCONTAINERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/EdrContainerGlobalCount.h>
#include <tencentcloud/csip/v20221121/model/EdrContainerAlertCountItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeEdrAlertCountForContainer返回参数结构体
                */
                class DescribeEdrAlertCountForContainerResponse : public AbstractModel
                {
                public:
                    DescribeEdrAlertCountForContainerResponse();
                    ~DescribeEdrAlertCountForContainerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>全局模式返回（两个 ID 数组都为空时）；分组模式为 null</p>
                     * @return GlobalCount <p>全局模式返回（两个 ID 数组都为空时）；分组模式为 null</p>
                     * 
                     */
                    EdrContainerGlobalCount GetGlobalCount() const;

                    /**
                     * 判断参数 GlobalCount 是否已赋值
                     * @return GlobalCount 是否已赋值
                     * 
                     */
                    bool GlobalCountHasBeenSet() const;

                    /**
                     * 获取<p>分组模式返回（ContainerIds 或 ClusterIds 非空时）；空返回 []</p>
                     * @return Items <p>分组模式返回（ContainerIds 或 ClusterIds 非空时）；空返回 []</p>
                     * 
                     */
                    std::vector<EdrContainerAlertCountItem> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * <p>全局模式返回（两个 ID 数组都为空时）；分组模式为 null</p>
                     */
                    EdrContainerGlobalCount m_globalCount;
                    bool m_globalCountHasBeenSet;

                    /**
                     * <p>分组模式返回（ContainerIds 或 ClusterIds 非空时）；空返回 []</p>
                     */
                    std::vector<EdrContainerAlertCountItem> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRALERTCOUNTFORCONTAINERRESPONSE_H_
