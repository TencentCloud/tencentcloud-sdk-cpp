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

#ifndef TENCENTCLOUD_BMEIP_V20180625_MODEL_BINDEIPACLSREQUEST_H_
#define TENCENTCLOUD_BMEIP_V20180625_MODEL_BINDEIPACLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmeip/v20180625/model/EipAclMap.h>


namespace TencentCloud
{
    namespace Bmeip
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * BindEipAcls请求参数结构体
                */
                class BindEipAclsRequest : public AbstractModel
                {
                public:
                    BindEipAclsRequest();
                    ~BindEipAclsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待关联的 EIP 与 ACL关系列表
                     * @return EipIdAclIdList 待关联的 EIP 与 ACL关系列表
                     * 
                     */
                    std::vector<EipAclMap> GetEipIdAclIdList() const;

                    /**
                     * 设置待关联的 EIP 与 ACL关系列表
                     * @param _eipIdAclIdList 待关联的 EIP 与 ACL关系列表
                     * 
                     */
                    void SetEipIdAclIdList(const std::vector<EipAclMap>& _eipIdAclIdList);

                    /**
                     * 判断参数 EipIdAclIdList 是否已赋值
                     * @return EipIdAclIdList 是否已赋值
                     * 
                     */
                    bool EipIdAclIdListHasBeenSet() const;

                private:

                    /**
                     * 待关联的 EIP 与 ACL关系列表
                     */
                    std::vector<EipAclMap> m_eipIdAclIdList;
                    bool m_eipIdAclIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMEIP_V20180625_MODEL_BINDEIPACLSREQUEST_H_
