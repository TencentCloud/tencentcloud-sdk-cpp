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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_SPANTREEVIEW_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_SPANTREEVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/ChartData.h>
#include <tencentcloud/apm/v20210622/model/TraceOverview.h>
#include <tencentcloud/apm/v20210622/model/TagValues.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 树形结构
                */
                class SpanTreeView : public AbstractModel
                {
                public:
                    SpanTreeView();
                    ~SpanTreeView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取树结构json串
                     * @return TreeData 树结构json串
                     * 
                     */
                    std::string GetTreeData() const;

                    /**
                     * 设置树结构json串
                     * @param _treeData 树结构json串
                     * 
                     */
                    void SetTreeData(const std::string& _treeData);

                    /**
                     * 判断参数 TreeData 是否已赋值
                     * @return TreeData 是否已赋值
                     * 
                     */
                    bool TreeDataHasBeenSet() const;

                    /**
                     * 获取列表
                     * @return ChartData 列表
                     * 
                     */
                    ChartData GetChartData() const;

                    /**
                     * 设置列表
                     * @param _chartData 列表
                     * 
                     */
                    void SetChartData(const ChartData& _chartData);

                    /**
                     * 判断参数 ChartData 是否已赋值
                     * @return ChartData 是否已赋值
                     * 
                     */
                    bool ChartDataHasBeenSet() const;

                    /**
                     * 获取Trace概览信息
                     * @return TraceOverview Trace概览信息
                     * 
                     */
                    TraceOverview GetTraceOverview() const;

                    /**
                     * 设置Trace概览信息
                     * @param _traceOverview Trace概览信息
                     * 
                     */
                    void SetTraceOverview(const TraceOverview& _traceOverview);

                    /**
                     * 判断参数 TraceOverview 是否已赋值
                     * @return TraceOverview 是否已赋值
                     * 
                     */
                    bool TraceOverviewHasBeenSet() const;

                    /**
                     * 获取压缩编码后的树结构json串
                     * @return CompressedTreeData 压缩编码后的树结构json串
                     * 
                     */
                    std::string GetCompressedTreeData() const;

                    /**
                     * 设置压缩编码后的树结构json串
                     * @param _compressedTreeData 压缩编码后的树结构json串
                     * 
                     */
                    void SetCompressedTreeData(const std::string& _compressedTreeData);

                    /**
                     * 判断参数 CompressedTreeData 是否已赋值
                     * @return CompressedTreeData 是否已赋值
                     * 
                     */
                    bool CompressedTreeDataHasBeenSet() const;

                    /**
                     * 获取整条链路的 span 数量是否超过限制
                     * @return CntExceeded 整条链路的 span 数量是否超过限制
                     * 
                     */
                    bool GetCntExceeded() const;

                    /**
                     * 设置整条链路的 span 数量是否超过限制
                     * @param _cntExceeded 整条链路的 span 数量是否超过限制
                     * 
                     */
                    void SetCntExceeded(const bool& _cntExceeded);

                    /**
                     * 判断参数 CntExceeded 是否已赋值
                     * @return CntExceeded 是否已赋值
                     * 
                     */
                    bool CntExceededHasBeenSet() const;

                    /**
                     * 获取是否有内部查询超时
                     * @return QueryTimeout 是否有内部查询超时
                     * 
                     */
                    bool GetQueryTimeout() const;

                    /**
                     * 设置是否有内部查询超时
                     * @param _queryTimeout 是否有内部查询超时
                     * 
                     */
                    void SetQueryTimeout(const bool& _queryTimeout);

                    /**
                     * 判断参数 QueryTimeout 是否已赋值
                     * @return QueryTimeout 是否已赋值
                     * 
                     */
                    bool QueryTimeoutHasBeenSet() const;

                    /**
                     * 获取链路中 span 总数量
                     * @return SpanTotalCnt 链路中 span 总数量
                     * 
                     */
                    int64_t GetSpanTotalCnt() const;

                    /**
                     * 设置链路中 span 总数量
                     * @param _spanTotalCnt 链路中 span 总数量
                     * 
                     */
                    void SetSpanTotalCnt(const int64_t& _spanTotalCnt);

                    /**
                     * 判断参数 SpanTotalCnt 是否已赋值
                     * @return SpanTotalCnt 是否已赋值
                     * 
                     */
                    bool SpanTotalCntHasBeenSet() const;

                    /**
                     * 获取过滤视图的标签值列表
                     * @return FilterViewTagValues 过滤视图的标签值列表
                     * 
                     */
                    std::vector<TagValues> GetFilterViewTagValues() const;

                    /**
                     * 设置过滤视图的标签值列表
                     * @param _filterViewTagValues 过滤视图的标签值列表
                     * 
                     */
                    void SetFilterViewTagValues(const std::vector<TagValues>& _filterViewTagValues);

                    /**
                     * 判断参数 FilterViewTagValues 是否已赋值
                     * @return FilterViewTagValues 是否已赋值
                     * 
                     */
                    bool FilterViewTagValuesHasBeenSet() const;

                private:

                    /**
                     * 树结构json串
                     */
                    std::string m_treeData;
                    bool m_treeDataHasBeenSet;

                    /**
                     * 列表
                     */
                    ChartData m_chartData;
                    bool m_chartDataHasBeenSet;

                    /**
                     * Trace概览信息
                     */
                    TraceOverview m_traceOverview;
                    bool m_traceOverviewHasBeenSet;

                    /**
                     * 压缩编码后的树结构json串
                     */
                    std::string m_compressedTreeData;
                    bool m_compressedTreeDataHasBeenSet;

                    /**
                     * 整条链路的 span 数量是否超过限制
                     */
                    bool m_cntExceeded;
                    bool m_cntExceededHasBeenSet;

                    /**
                     * 是否有内部查询超时
                     */
                    bool m_queryTimeout;
                    bool m_queryTimeoutHasBeenSet;

                    /**
                     * 链路中 span 总数量
                     */
                    int64_t m_spanTotalCnt;
                    bool m_spanTotalCntHasBeenSet;

                    /**
                     * 过滤视图的标签值列表
                     */
                    std::vector<TagValues> m_filterViewTagValues;
                    bool m_filterViewTagValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_SPANTREEVIEW_H_
