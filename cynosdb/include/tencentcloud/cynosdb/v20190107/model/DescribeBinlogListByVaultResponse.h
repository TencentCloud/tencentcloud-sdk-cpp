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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBINLOGLISTBYVAULTRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBINLOGLISTBYVAULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeBinlogListByVaultItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeBinlogListByVault返回参数结构体
                */
                class DescribeBinlogListByVaultResponse : public AbstractModel
                {
                public:
                    DescribeBinlogListByVaultResponse();
                    ~DescribeBinlogListByVaultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数量
                     * @return TotalCount 总数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Binlog文件列表
                     * @return BinlogList Binlog文件列表
                     * 
                     */
                    std::vector<DescribeBinlogListByVaultItem> GetBinlogList() const;

                    /**
                     * 判断参数 BinlogList 是否已赋值
                     * @return BinlogList 是否已赋值
                     * 
                     */
                    bool BinlogListHasBeenSet() const;

                private:

                    /**
                     * 总数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Binlog文件列表
                     */
                    std::vector<DescribeBinlogListByVaultItem> m_binlogList;
                    bool m_binlogListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBINLOGLISTBYVAULTRESPONSE_H_
