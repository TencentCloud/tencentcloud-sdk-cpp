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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_DELETESHIELDINSTANCESREQUEST_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_DELETESHIELDINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * DeleteShieldInstances请求参数结构体
                */
                class DeleteShieldInstancesRequest : public AbstractModel
                {
                public:
                    DeleteShieldInstancesRequest();
                    ~DeleteShieldInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务唯一标识ItemId的列表
                     * @return ItemIds 任务唯一标识ItemId的列表
                     * 
                     */
                    std::vector<std::string> GetItemIds() const;

                    /**
                     * 设置任务唯一标识ItemId的列表
                     * @param _itemIds 任务唯一标识ItemId的列表
                     * 
                     */
                    void SetItemIds(const std::vector<std::string>& _itemIds);

                    /**
                     * 判断参数 ItemIds 是否已赋值
                     * @return ItemIds 是否已赋值
                     * 
                     */
                    bool ItemIdsHasBeenSet() const;

                private:

                    /**
                     * 任务唯一标识ItemId的列表
                     */
                    std::vector<std::string> m_itemIds;
                    bool m_itemIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_DELETESHIELDINSTANCESREQUEST_H_
