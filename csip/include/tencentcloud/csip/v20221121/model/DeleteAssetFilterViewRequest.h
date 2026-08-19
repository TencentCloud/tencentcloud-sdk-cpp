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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEASSETFILTERVIEWREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEASSETFILTERVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DeleteAssetFilterView请求参数结构体
                */
                class DeleteAssetFilterViewRequest : public AbstractModel
                {
                public:
                    DeleteAssetFilterViewRequest();
                    ~DeleteAssetFilterViewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资产搜索视图ID
                     * @return ViewID 资产搜索视图ID
                     * 
                     */
                    uint64_t GetViewID() const;

                    /**
                     * 设置资产搜索视图ID
                     * @param _viewID 资产搜索视图ID
                     * 
                     */
                    void SetViewID(const uint64_t& _viewID);

                    /**
                     * 判断参数 ViewID 是否已赋值
                     * @return ViewID 是否已赋值
                     * 
                     */
                    bool ViewIDHasBeenSet() const;

                private:

                    /**
                     * 资产搜索视图ID
                     */
                    uint64_t m_viewID;
                    bool m_viewIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEASSETFILTERVIEWREQUEST_H_
