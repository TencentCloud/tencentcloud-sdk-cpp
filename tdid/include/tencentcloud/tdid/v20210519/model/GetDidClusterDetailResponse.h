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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETDIDCLUSTERDETAILRESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETDIDCLUSTERDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * GetDidClusterDetail返回参数结构体
                */
                class GetDidClusterDetailResponse : public AbstractModel
                {
                public:
                    GetDidClusterDetailResponse();
                    ~GetDidClusterDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取网络ID
                     * @return ClusterId 网络ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取组织名称
                     * @return ConsortiumName 组织名称
                     */
                    std::string GetConsortiumName() const;

                    /**
                     * 判断参数 ConsortiumName 是否已赋值
                     * @return ConsortiumName 是否已赋值
                     */
                    bool ConsortiumNameHasBeenSet() const;

                    /**
                     * 获取区块链组织名称
                     * @return ChainAgency 区块链组织名称
                     */
                    std::string GetChainAgency() const;

                    /**
                     * 判断参数 ChainAgency 是否已赋值
                     * @return ChainAgency 是否已赋值
                     */
                    bool ChainAgencyHasBeenSet() const;

                private:

                    /**
                     * 网络ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 组织名称
                     */
                    std::string m_consortiumName;
                    bool m_consortiumNameHasBeenSet;

                    /**
                     * 区块链组织名称
                     */
                    std::string m_chainAgency;
                    bool m_chainAgencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETDIDCLUSTERDETAILRESPONSE_H_
