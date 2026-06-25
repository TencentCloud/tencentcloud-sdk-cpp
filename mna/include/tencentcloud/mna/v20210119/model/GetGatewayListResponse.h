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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETGATEWAYLISTRESPONSE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETGATEWAYLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mna/v20210119/model/GatewayInfo.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetGatewayList返回参数结构体
                */
                class GetGatewayListResponse : public AbstractModel
                {
                public:
                    GetGatewayListResponse();
                    ~GetGatewayListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取网关列表
                     * @return GatewayList 网关列表
                     * 
                     */
                    std::vector<GatewayInfo> GetGatewayList() const;

                    /**
                     * 判断参数 GatewayList 是否已赋值
                     * @return GatewayList 是否已赋值
                     * 
                     */
                    bool GatewayListHasBeenSet() const;

                    /**
                     * 获取总个数
                     * @return Total 总个数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 网关列表
                     */
                    std::vector<GatewayInfo> m_gatewayList;
                    bool m_gatewayListHasBeenSet;

                    /**
                     * 总个数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETGATEWAYLISTRESPONSE_H_
