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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPTOOLACLLISTRESULT_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPTOOLACLLISTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/AIGWMCPToolACLItem.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * AI 网关 mcp server 下所有 tool 的 ACL 状态
                */
                class AIGWMCPToolACLListResult : public AbstractModel
                {
                public:
                    AIGWMCPToolACLListResult();
                    ~AIGWMCPToolACLListResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>黑白名单鉴权类型</p><p>枚举值：</p><ul><li>None： 不鉴权</li><li>Allow： 白名单</li><li>Deny： 黑名单</li></ul>
                     * @return ACLType <p>黑白名单鉴权类型</p><p>枚举值：</p><ul><li>None： 不鉴权</li><li>Allow： 白名单</li><li>Deny： 黑名单</li></ul>
                     * 
                     */
                    std::string GetACLType() const;

                    /**
                     * 设置<p>黑白名单鉴权类型</p><p>枚举值：</p><ul><li>None： 不鉴权</li><li>Allow： 白名单</li><li>Deny： 黑名单</li></ul>
                     * @param _aCLType <p>黑白名单鉴权类型</p><p>枚举值：</p><ul><li>None： 不鉴权</li><li>Allow： 白名单</li><li>Deny： 黑名单</li></ul>
                     * 
                     */
                    void SetACLType(const std::string& _aCLType);

                    /**
                     * 判断参数 ACLType 是否已赋值
                     * @return ACLType 是否已赋值
                     * 
                     */
                    bool ACLTypeHasBeenSet() const;

                    /**
                     * 获取<p>数据列表</p>
                     * @return DataList <p>数据列表</p>
                     * 
                     */
                    std::vector<AIGWMCPToolACLItem> GetDataList() const;

                    /**
                     * 设置<p>数据列表</p>
                     * @param _dataList <p>数据列表</p>
                     * 
                     */
                    void SetDataList(const std::vector<AIGWMCPToolACLItem>& _dataList);

                    /**
                     * 判断参数 DataList 是否已赋值
                     * @return DataList 是否已赋值
                     * 
                     */
                    bool DataListHasBeenSet() const;

                    /**
                     * 获取<p>计数</p>
                     * @return TotalCount <p>计数</p>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置<p>计数</p>
                     * @param _totalCount <p>计数</p>
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
                     * <p>黑白名单鉴权类型</p><p>枚举值：</p><ul><li>None： 不鉴权</li><li>Allow： 白名单</li><li>Deny： 黑名单</li></ul>
                     */
                    std::string m_aCLType;
                    bool m_aCLTypeHasBeenSet;

                    /**
                     * <p>数据列表</p>
                     */
                    std::vector<AIGWMCPToolACLItem> m_dataList;
                    bool m_dataListHasBeenSet;

                    /**
                     * <p>计数</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWMCPTOOLACLLISTRESULT_H_
