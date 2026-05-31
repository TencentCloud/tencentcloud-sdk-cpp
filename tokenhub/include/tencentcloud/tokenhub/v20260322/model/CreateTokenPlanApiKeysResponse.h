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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATETOKENPLANAPIKEYSRESPONSE_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATETOKENPLANAPIKEYSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/CreateApiKeysResultItem.h>
#include <tencentcloud/tokenhub/v20260322/model/BatchCreateFailedItem.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * CreateTokenPlanApiKeys返回参数结构体
                */
                class CreateTokenPlanApiKeysResponse : public AbstractModel
                {
                public:
                    CreateTokenPlanApiKeysResponse();
                    ~CreateTokenPlanApiKeysResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取成功创建的项列表。
                     * @return Items 成功创建的项列表。
                     * 
                     */
                    std::vector<CreateApiKeysResultItem> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取创建失败的项列表。
                     * @return FailedItems 创建失败的项列表。
                     * 
                     */
                    std::vector<BatchCreateFailedItem> GetFailedItems() const;

                    /**
                     * 判断参数 FailedItems 是否已赋值
                     * @return FailedItems 是否已赋值
                     * 
                     */
                    bool FailedItemsHasBeenSet() const;

                private:

                    /**
                     * 成功创建的项列表。
                     */
                    std::vector<CreateApiKeysResultItem> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 创建失败的项列表。
                     */
                    std::vector<BatchCreateFailedItem> m_failedItems;
                    bool m_failedItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATETOKENPLANAPIKEYSRESPONSE_H_
