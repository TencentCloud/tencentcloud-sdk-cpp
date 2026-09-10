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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPTOOLVERSIONLIST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPTOOLVERSIONLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/AIGWMCPToolVersion.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 分页查询返回的mcp tool version列表
                */
                class AIGWMCPToolVersionList : public AbstractModel
                {
                public:
                    AIGWMCPToolVersionList();
                    ~AIGWMCPToolVersionList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>mcp. tool 版本详情</p>
                     * @return MCPToolVersions <p>mcp. tool 版本详情</p>
                     * 
                     */
                    std::vector<AIGWMCPToolVersion> GetMCPToolVersions() const;

                    /**
                     * 设置<p>mcp. tool 版本详情</p>
                     * @param _mCPToolVersions <p>mcp. tool 版本详情</p>
                     * 
                     */
                    void SetMCPToolVersions(const std::vector<AIGWMCPToolVersion>& _mCPToolVersions);

                    /**
                     * 判断参数 MCPToolVersions 是否已赋值
                     * @return MCPToolVersions 是否已赋值
                     * 
                     */
                    bool MCPToolVersionsHasBeenSet() const;

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

                private:

                    /**
                     * <p>mcp. tool 版本详情</p>
                     */
                    std::vector<AIGWMCPToolVersion> m_mCPToolVersions;
                    bool m_mCPToolVersionsHasBeenSet;

                    /**
                     * <p>总数</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPTOOLVERSIONLIST_H_
