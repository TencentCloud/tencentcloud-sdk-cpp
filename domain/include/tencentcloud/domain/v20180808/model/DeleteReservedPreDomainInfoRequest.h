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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DELETERESERVEDPREDOMAININFOREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DELETERESERVEDPREDOMAININFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DeleteReservedPreDomainInfo请求参数结构体
                */
                class DeleteReservedPreDomainInfoRequest : public AbstractModel
                {
                public:
                    DeleteReservedPreDomainInfoRequest();
                    ~DeleteReservedPreDomainInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源ID列表
                     * @return ResourceIdList 资源ID列表
                     * 
                     */
                    std::vector<std::string> GetResourceIdList() const;

                    /**
                     * 设置资源ID列表
                     * @param _resourceIdList 资源ID列表
                     * 
                     */
                    void SetResourceIdList(const std::vector<std::string>& _resourceIdList);

                    /**
                     * 判断参数 ResourceIdList 是否已赋值
                     * @return ResourceIdList 是否已赋值
                     * 
                     */
                    bool ResourceIdListHasBeenSet() const;

                private:

                    /**
                     * 资源ID列表
                     */
                    std::vector<std::string> m_resourceIdList;
                    bool m_resourceIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DELETERESERVEDPREDOMAININFOREQUEST_H_
