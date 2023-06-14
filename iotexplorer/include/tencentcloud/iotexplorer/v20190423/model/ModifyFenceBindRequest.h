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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYFENCEBINDREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYFENCEBINDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/FenceBindProductItem.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * ModifyFenceBind请求参数结构体
                */
                class ModifyFenceBindRequest : public AbstractModel
                {
                public:
                    ModifyFenceBindRequest();
                    ~ModifyFenceBindRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取围栏Id
                     * @return FenceId 围栏Id
                     * 
                     */
                    int64_t GetFenceId() const;

                    /**
                     * 设置围栏Id
                     * @param _fenceId 围栏Id
                     * 
                     */
                    void SetFenceId(const int64_t& _fenceId);

                    /**
                     * 判断参数 FenceId 是否已赋值
                     * @return FenceId 是否已赋值
                     * 
                     */
                    bool FenceIdHasBeenSet() const;

                    /**
                     * 获取围栏绑定的产品列表
                     * @return Items 围栏绑定的产品列表
                     * 
                     */
                    std::vector<FenceBindProductItem> GetItems() const;

                    /**
                     * 设置围栏绑定的产品列表
                     * @param _items 围栏绑定的产品列表
                     * 
                     */
                    void SetItems(const std::vector<FenceBindProductItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 围栏Id
                     */
                    int64_t m_fenceId;
                    bool m_fenceIdHasBeenSet;

                    /**
                     * 围栏绑定的产品列表
                     */
                    std::vector<FenceBindProductItem> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYFENCEBINDREQUEST_H_
