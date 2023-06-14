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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_DELETERESOURCEGROUPREQUEST_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_DELETERESOURCEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * DeleteResourceGroup请求参数结构体
                */
                class DeleteResourceGroupRequest : public AbstractModel
                {
                public:
                    DeleteResourceGroupRequest();
                    ~DeleteResourceGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要删除的资源组 ID
                     * @return ResourceGroupId 要删除的资源组 ID
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置要删除的资源组 ID
                     * @param _resourceGroupId 要删除的资源组 ID
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                private:

                    /**
                     * 要删除的资源组 ID
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_DELETERESOURCEGROUPREQUEST_H_
