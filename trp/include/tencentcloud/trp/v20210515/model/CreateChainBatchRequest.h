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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_CREATECHAINBATCHREQUEST_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_CREATECHAINBATCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/Chain.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * CreateChainBatch请求参数结构体
                */
                class CreateChainBatchRequest : public AbstractModel
                {
                public:
                    CreateChainBatchRequest();
                    ~CreateChainBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取企业ID
                     * @return CorpId 企业ID
                     * 
                     */
                    uint64_t GetCorpId() const;

                    /**
                     * 设置企业ID
                     * @param _corpId 企业ID
                     * 
                     */
                    void SetCorpId(const uint64_t& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     * 
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取溯源ID
                     * @return ChainList 溯源ID
                     * 
                     */
                    std::vector<Chain> GetChainList() const;

                    /**
                     * 设置溯源ID
                     * @param _chainList 溯源ID
                     * 
                     */
                    void SetChainList(const std::vector<Chain>& _chainList);

                    /**
                     * 判断参数 ChainList 是否已赋值
                     * @return ChainList 是否已赋值
                     * 
                     */
                    bool ChainListHasBeenSet() const;

                private:

                    /**
                     * 企业ID
                     */
                    uint64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 溯源ID
                     */
                    std::vector<Chain> m_chainList;
                    bool m_chainListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_CREATECHAINBATCHREQUEST_H_
