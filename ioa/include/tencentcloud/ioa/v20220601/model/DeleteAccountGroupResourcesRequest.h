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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DELETEACCOUNTGROUPRESOURCESREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DELETEACCOUNTGROUPRESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/DeleteResourceData.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * DeleteAccountGroupResources请求参数结构体
                */
                class DeleteAccountGroupResourcesRequest : public AbstractModel
                {
                public:
                    DeleteAccountGroupResourcesRequest();
                    ~DeleteAccountGroupResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源集
                     * @return ResourceList 资源集
                     * 
                     */
                    std::vector<DeleteResourceData> GetResourceList() const;

                    /**
                     * 设置资源集
                     * @param _resourceList 资源集
                     * 
                     */
                    void SetResourceList(const std::vector<DeleteResourceData>& _resourceList);

                    /**
                     * 判断参数 ResourceList 是否已赋值
                     * @return ResourceList 是否已赋值
                     * 
                     */
                    bool ResourceListHasBeenSet() const;

                    /**
                     * 获取账户组Id(只支持32位)
                     * @return AccountGroupId 账户组Id(只支持32位)
                     * 
                     */
                    uint64_t GetAccountGroupId() const;

                    /**
                     * 设置账户组Id(只支持32位)
                     * @param _accountGroupId 账户组Id(只支持32位)
                     * 
                     */
                    void SetAccountGroupId(const uint64_t& _accountGroupId);

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                private:

                    /**
                     * 资源集
                     */
                    std::vector<DeleteResourceData> m_resourceList;
                    bool m_resourceListHasBeenSet;

                    /**
                     * 账户组Id(只支持32位)
                     */
                    uint64_t m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DELETEACCOUNTGROUPRESOURCESREQUEST_H_
