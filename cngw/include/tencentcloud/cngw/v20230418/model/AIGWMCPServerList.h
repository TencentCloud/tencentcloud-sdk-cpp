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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPSERVERLIST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPSERVERLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/AIGWMCPServer.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * MCP Server 列表
                */
                class AIGWMCPServerList : public AbstractModel
                {
                public:
                    AIGWMCPServerList();
                    ~AIGWMCPServerList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>总数</p>
                     * @return TotalCount <p>总数</p>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置<p>总数</p>
                     * @param _totalCount <p>总数</p>
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>mcp server 数据列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataList <p>mcp server 数据列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AIGWMCPServer> GetDataList() const;

                    /**
                     * 设置<p>mcp server 数据列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataList <p>mcp server 数据列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataList(const std::vector<AIGWMCPServer>& _dataList);

                    /**
                     * 判断参数 DataList 是否已赋值
                     * @return DataList 是否已赋值
                     * 
                     */
                    bool DataListHasBeenSet() const;

                private:

                    /**
                     * <p>总数</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>mcp server 数据列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AIGWMCPServer> m_dataList;
                    bool m_dataListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPSERVERLIST_H_
