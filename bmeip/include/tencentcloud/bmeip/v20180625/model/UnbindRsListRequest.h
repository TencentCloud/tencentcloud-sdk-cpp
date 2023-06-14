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

#ifndef TENCENTCLOUD_BMEIP_V20180625_MODEL_UNBINDRSLISTREQUEST_H_
#define TENCENTCLOUD_BMEIP_V20180625_MODEL_UNBINDRSLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmeip/v20180625/model/EipRsMap.h>


namespace TencentCloud
{
    namespace Bmeip
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * UnbindRsList请求参数结构体
                */
                class UnbindRsListRequest : public AbstractModel
                {
                public:
                    UnbindRsListRequest();
                    ~UnbindRsListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取物理机绑定的EIP列表
                     * @return EipRsList 物理机绑定的EIP列表
                     * 
                     */
                    std::vector<EipRsMap> GetEipRsList() const;

                    /**
                     * 设置物理机绑定的EIP列表
                     * @param _eipRsList 物理机绑定的EIP列表
                     * 
                     */
                    void SetEipRsList(const std::vector<EipRsMap>& _eipRsList);

                    /**
                     * 判断参数 EipRsList 是否已赋值
                     * @return EipRsList 是否已赋值
                     * 
                     */
                    bool EipRsListHasBeenSet() const;

                private:

                    /**
                     * 物理机绑定的EIP列表
                     */
                    std::vector<EipRsMap> m_eipRsList;
                    bool m_eipRsListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMEIP_V20180625_MODEL_UNBINDRSLISTREQUEST_H_
