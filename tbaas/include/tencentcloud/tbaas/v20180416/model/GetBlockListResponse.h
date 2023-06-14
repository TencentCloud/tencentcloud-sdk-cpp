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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_GETBLOCKLISTRESPONSE_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_GETBLOCKLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tbaas/v20180416/model/Block.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetBlockList返回参数结构体
                */
                class GetBlockListResponse : public AbstractModel
                {
                public:
                    GetBlockListResponse();
                    ~GetBlockListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取区块数量
                     * @return TotalCount 区块数量
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取区块列表
                     * @return BlockList 区块列表
                     * 
                     */
                    std::vector<Block> GetBlockList() const;

                    /**
                     * 判断参数 BlockList 是否已赋值
                     * @return BlockList 是否已赋值
                     * 
                     */
                    bool BlockListHasBeenSet() const;

                private:

                    /**
                     * 区块数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 区块列表
                     */
                    std::vector<Block> m_blockList;
                    bool m_blockListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_GETBLOCKLISTRESPONSE_H_
