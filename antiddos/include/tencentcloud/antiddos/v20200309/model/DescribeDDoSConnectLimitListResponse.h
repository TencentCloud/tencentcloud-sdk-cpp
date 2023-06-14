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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEDDOSCONNECTLIMITLISTRESPONSE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEDDOSCONNECTLIMITLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/ConnectLimitRelation.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeDDoSConnectLimitList返回参数结构体
                */
                class DescribeDDoSConnectLimitListResponse : public AbstractModel
                {
                public:
                    DescribeDDoSConnectLimitListResponse();
                    ~DescribeDDoSConnectLimitListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取连接抑制配置总数
                     * @return Total 连接抑制配置总数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取连接抑制配置详情信息
                     * @return ConfigList 连接抑制配置详情信息
                     * 
                     */
                    std::vector<ConnectLimitRelation> GetConfigList() const;

                    /**
                     * 判断参数 ConfigList 是否已赋值
                     * @return ConfigList 是否已赋值
                     * 
                     */
                    bool ConfigListHasBeenSet() const;

                private:

                    /**
                     * 连接抑制配置总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 连接抑制配置详情信息
                     */
                    std::vector<ConnectLimitRelation> m_configList;
                    bool m_configListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEDDOSCONNECTLIMITLISTRESPONSE_H_
