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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DELETEAIMODELREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DELETEAIMODELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/DeleteModelItem.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DeleteAIModel请求参数结构体
                */
                class DeleteAIModelRequest : public AbstractModel
                {
                public:
                    DeleteAIModelRequest();
                    ~DeleteAIModelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>TCR实例ID</p>
                     * @return RegistryId <p>TCR实例ID</p>
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置<p>TCR实例ID</p>
                     * @param _registryId <p>TCR实例ID</p>
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取<p>模型删除</p>
                     * @return Items <p>模型删除</p>
                     * 
                     */
                    std::vector<DeleteModelItem> GetItems() const;

                    /**
                     * 设置<p>模型删除</p>
                     * @param _items <p>模型删除</p>
                     * 
                     */
                    void SetItems(const std::vector<DeleteModelItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * <p>TCR实例ID</p>
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * <p>模型删除</p>
                     */
                    std::vector<DeleteModelItem> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DELETEAIMODELREQUEST_H_
