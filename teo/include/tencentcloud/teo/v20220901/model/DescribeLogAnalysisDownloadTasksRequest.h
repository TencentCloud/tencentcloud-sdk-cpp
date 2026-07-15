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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGANALYSISDOWNLOADTASKSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGANALYSISDOWNLOADTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AdvancedFilter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeLogAnalysisDownloadTasks请求参数结构体
                */
                class DescribeLogAnalysisDownloadTasksRequest : public AbstractModel
                {
                public:
                    DescribeLogAnalysisDownloadTasksRequest();
                    ~DescribeLogAnalysisDownloadTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>站点 ID。</p>
                     * @return ZoneId <p>站点 ID。</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>站点 ID。</p>
                     * @param _zoneId <p>站点 ID。</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>数据归属地区，可选值： <ul><li>mainland：中国大陆境内；</li> <li>overseas：全球（不含中国大陆）。</li></ul> 注意：若站点服务区域为“全球可用区”，获取全部数据需要分别查询 mainland 和 overseas 的数据。</p>
                     * @return Area <p>数据归属地区，可选值： <ul><li>mainland：中国大陆境内；</li> <li>overseas：全球（不含中国大陆）。</li></ul> 注意：若站点服务区域为“全球可用区”，获取全部数据需要分别查询 mainland 和 overseas 的数据。</p>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>数据归属地区，可选值： <ul><li>mainland：中国大陆境内；</li> <li>overseas：全球（不含中国大陆）。</li></ul> 注意：若站点服务区域为“全球可用区”，获取全部数据需要分别查询 mainland 和 overseas 的数据。</p>
                     * @param _area <p>数据归属地区，可选值： <ul><li>mainland：中国大陆境内；</li> <li>overseas：全球（不含中国大陆）。</li></ul> 注意：若站点服务区域为“全球可用区”，获取全部数据需要分别查询 mainland 和 overseas 的数据。</p>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取<p>日志类型，可选值：<ul><li> l7-access-logs：七层访问日志；</li><li>web-attack：托管规则日志。</li></ul>默认为 l7-access-logs 。</p>
                     * @return LogType <p>日志类型，可选值：<ul><li> l7-access-logs：七层访问日志；</li><li>web-attack：托管规则日志。</li></ul>默认为 l7-access-logs 。</p>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>日志类型，可选值：<ul><li> l7-access-logs：七层访问日志；</li><li>web-attack：托管规则日志。</li></ul>默认为 l7-access-logs 。</p>
                     * @param _logType <p>日志类型，可选值：<ul><li> l7-access-logs：七层访问日志；</li><li>web-attack：托管规则日志。</li></ul>默认为 l7-access-logs 。</p>
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件，Filters.Values 的上限为 20。详细的过滤条件如下：<ul><li>task-id：按照日志下载任务 ID进行过滤，可选值参考 CreateLogAnalysisDownloadTask 接口返回的 TaskId。</li></ul></p><p>取值参考：CreateLogAnalysisDownloadTask</p>
                     * @return Filters <p>过滤条件，Filters.Values 的上限为 20。详细的过滤条件如下：<ul><li>task-id：按照日志下载任务 ID进行过滤，可选值参考 CreateLogAnalysisDownloadTask 接口返回的 TaskId。</li></ul></p><p>取值参考：CreateLogAnalysisDownloadTask</p>
                     * 
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件，Filters.Values 的上限为 20。详细的过滤条件如下：<ul><li>task-id：按照日志下载任务 ID进行过滤，可选值参考 CreateLogAnalysisDownloadTask 接口返回的 TaskId。</li></ul></p><p>取值参考：CreateLogAnalysisDownloadTask</p>
                     * @param _filters <p>过滤条件，Filters.Values 的上限为 20。详细的过滤条件如下：<ul><li>task-id：按照日志下载任务 ID进行过滤，可选值参考 CreateLogAnalysisDownloadTask 接口返回的 TaskId。</li></ul></p><p>取值参考：CreateLogAnalysisDownloadTask</p>
                     * 
                     */
                    void SetFilters(const std::vector<AdvancedFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>分页查询限制数目，默认值：20，最大值 100。</p>
                     * @return Limit <p>分页查询限制数目，默认值：20，最大值 100。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页查询限制数目，默认值：20，最大值 100。</p>
                     * @param _limit <p>分页查询限制数目，默认值：20，最大值 100。</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>分页查询偏移量，默认为 0。</p>
                     * @return Offset <p>分页查询偏移量，默认为 0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页查询偏移量，默认为 0。</p>
                     * @param _offset <p>分页查询偏移量，默认为 0。</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>站点 ID。</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>数据归属地区，可选值： <ul><li>mainland：中国大陆境内；</li> <li>overseas：全球（不含中国大陆）。</li></ul> 注意：若站点服务区域为“全球可用区”，获取全部数据需要分别查询 mainland 和 overseas 的数据。</p>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>日志类型，可选值：<ul><li> l7-access-logs：七层访问日志；</li><li>web-attack：托管规则日志。</li></ul>默认为 l7-access-logs 。</p>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>过滤条件，Filters.Values 的上限为 20。详细的过滤条件如下：<ul><li>task-id：按照日志下载任务 ID进行过滤，可选值参考 CreateLogAnalysisDownloadTask 接口返回的 TaskId。</li></ul></p><p>取值参考：CreateLogAnalysisDownloadTask</p>
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>分页查询限制数目，默认值：20，最大值 100。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页查询偏移量，默认为 0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGANALYSISDOWNLOADTASKSREQUEST_H_
