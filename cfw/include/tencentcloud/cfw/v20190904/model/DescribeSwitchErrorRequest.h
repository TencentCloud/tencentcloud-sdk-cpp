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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESWITCHERRORREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESWITCHERRORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeSwitchError请求参数结构体
                */
                class DescribeSwitchErrorRequest : public AbstractModel
                {
                public:
                    DescribeSwitchErrorRequest();
                    ~DescribeSwitchErrorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取EDGE_FW : 互联网边界防火墙 , NDR: 流量分析，VPC_FW：VPC边界防火墙
                     * @return FwType EDGE_FW : 互联网边界防火墙 , NDR: 流量分析，VPC_FW：VPC边界防火墙
                     * 
                     */
                    std::string GetFwType() const;

                    /**
                     * 设置EDGE_FW : 互联网边界防火墙 , NDR: 流量分析，VPC_FW：VPC边界防火墙
                     * @param _fwType EDGE_FW : 互联网边界防火墙 , NDR: 流量分析，VPC_FW：VPC边界防火墙
                     * 
                     */
                    void SetFwType(const std::string& _fwType);

                    /**
                     * 判断参数 FwType 是否已赋值
                     * @return FwType 是否已赋值
                     * 
                     */
                    bool FwTypeHasBeenSet() const;

                private:

                    /**
                     * EDGE_FW : 互联网边界防火墙 , NDR: 流量分析，VPC_FW：VPC边界防火墙
                     */
                    std::string m_fwType;
                    bool m_fwTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESWITCHERRORREQUEST_H_
