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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBEAIGWCUSTOMGUARDRAILHITSRESULT_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBEAIGWCUSTOMGUARDRAILHITSRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/CustomGuardrailHit.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 查询自定义安全护栏命中记录结果
                */
                class DescribeAIGWCustomGuardrailHitsResult : public AbstractModel
                {
                public:
                    DescribeAIGWCustomGuardrailHitsResult();
                    ~DescribeAIGWCustomGuardrailHitsResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>时间范围和过滤条件内匹配的审核日志总数，分页前统计；不再限定为最多 1000 条。日志异常条目可能无法解析为 Hits。</p>
                     * @return TotalCount <p>时间范围和过滤条件内匹配的审核日志总数，分页前统计；不再限定为最多 1000 条。日志异常条目可能无法解析为 Hits。</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置<p>时间范围和过滤条件内匹配的审核日志总数，分页前统计；不再限定为最多 1000 条。日志异常条目可能无法解析为 Hits。</p>
                     * @param _totalCount <p>时间范围和过滤条件内匹配的审核日志总数，分页前统计；不再限定为最多 1000 条。日志异常条目可能无法解析为 Hits。</p>
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>当前页审核记录，按时间倒序；同一业务请求的多次送审会产生多条记录，不能直接把条数当业务请求数。</p>
                     * @return Hits <p>当前页审核记录，按时间倒序；同一业务请求的多次送审会产生多条记录，不能直接把条数当业务请求数。</p>
                     * 
                     */
                    std::vector<CustomGuardrailHit> GetHits() const;

                    /**
                     * 设置<p>当前页审核记录，按时间倒序；同一业务请求的多次送审会产生多条记录，不能直接把条数当业务请求数。</p>
                     * @param _hits <p>当前页审核记录，按时间倒序；同一业务请求的多次送审会产生多条记录，不能直接把条数当业务请求数。</p>
                     * 
                     */
                    void SetHits(const std::vector<CustomGuardrailHit>& _hits);

                    /**
                     * 判断参数 Hits 是否已赋值
                     * @return Hits 是否已赋值
                     * 
                     */
                    bool HitsHasBeenSet() const;

                    /**
                     * 获取<p>兼容字段，当前分页查询返回 false；用 Offset、Limit、TotalCount 翻页。1000 条限制只适用于导出接口。</p>
                     * @return Truncated <p>兼容字段，当前分页查询返回 false；用 Offset、Limit、TotalCount 翻页。1000 条限制只适用于导出接口。</p>
                     * 
                     */
                    bool GetTruncated() const;

                    /**
                     * 设置<p>兼容字段，当前分页查询返回 false；用 Offset、Limit、TotalCount 翻页。1000 条限制只适用于导出接口。</p>
                     * @param _truncated <p>兼容字段，当前分页查询返回 false；用 Offset、Limit、TotalCount 翻页。1000 条限制只适用于导出接口。</p>
                     * 
                     */
                    void SetTruncated(const bool& _truncated);

                    /**
                     * 判断参数 Truncated 是否已赋值
                     * @return Truncated 是否已赋值
                     * 
                     */
                    bool TruncatedHasBeenSet() const;

                private:

                    /**
                     * <p>时间范围和过滤条件内匹配的审核日志总数，分页前统计；不再限定为最多 1000 条。日志异常条目可能无法解析为 Hits。</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>当前页审核记录，按时间倒序；同一业务请求的多次送审会产生多条记录，不能直接把条数当业务请求数。</p>
                     */
                    std::vector<CustomGuardrailHit> m_hits;
                    bool m_hitsHasBeenSet;

                    /**
                     * <p>兼容字段，当前分页查询返回 false；用 Offset、Limit、TotalCount 翻页。1000 条限制只适用于导出接口。</p>
                     */
                    bool m_truncated;
                    bool m_truncatedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_DESCRIBEAIGWCUSTOMGUARDRAILHITSRESULT_H_
