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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ASSIGNIPV6CIDRBLOCKSRESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ASSIGNIPV6CIDRBLOCKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/ISPIPv6CidrBlock.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * AssignIpv6CidrBlocks返回参数结构体
                */
                class AssignIpv6CidrBlocksResponse : public AbstractModel
                {
                public:
                    AssignIpv6CidrBlocksResponse();
                    ~AssignIpv6CidrBlocksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取IPv6网段和所属运营商。	
                     * @return IPv6CidrBlockSet IPv6网段和所属运营商。	
                     * 
                     */
                    std::vector<ISPIPv6CidrBlock> GetIPv6CidrBlockSet() const;

                    /**
                     * 判断参数 IPv6CidrBlockSet 是否已赋值
                     * @return IPv6CidrBlockSet 是否已赋值
                     * 
                     */
                    bool IPv6CidrBlockSetHasBeenSet() const;

                private:

                    /**
                     * IPv6网段和所属运营商。	
                     */
                    std::vector<ISPIPv6CidrBlock> m_iPv6CidrBlockSet;
                    bool m_iPv6CidrBlockSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ASSIGNIPV6CIDRBLOCKSRESPONSE_H_
