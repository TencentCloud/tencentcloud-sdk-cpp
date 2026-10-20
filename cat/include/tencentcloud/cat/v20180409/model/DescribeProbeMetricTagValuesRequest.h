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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEPROBEMETRICTAGVALUESREQUEST_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEPROBEMETRICTAGVALUESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * DescribeProbeMetricTagValues请求参数结构体
                */
                class DescribeProbeMetricTagValuesRequest : public AbstractModel
                {
                public:
                    DescribeProbeMetricTagValuesRequest();
                    ~DescribeProbeMetricTagValuesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>分析任务类型，支持以下几种类型：<br>AnalyzeTaskType_Network：网络质量<br>AnalyzeTaskType_Browse：页面性能<br>AnalyzeTaskType_Transport：端口性能<br>AnalyzeTaskType_UploadDownload：文件传输<br>AnalyzeTaskType_MediaStream：音视频体验</p>
                     * @return AnalyzeTaskType <p>分析任务类型，支持以下几种类型：<br>AnalyzeTaskType_Network：网络质量<br>AnalyzeTaskType_Browse：页面性能<br>AnalyzeTaskType_Transport：端口性能<br>AnalyzeTaskType_UploadDownload：文件传输<br>AnalyzeTaskType_MediaStream：音视频体验</p>
                     * 
                     */
                    std::string GetAnalyzeTaskType() const;

                    /**
                     * 设置<p>分析任务类型，支持以下几种类型：<br>AnalyzeTaskType_Network：网络质量<br>AnalyzeTaskType_Browse：页面性能<br>AnalyzeTaskType_Transport：端口性能<br>AnalyzeTaskType_UploadDownload：文件传输<br>AnalyzeTaskType_MediaStream：音视频体验</p>
                     * @param _analyzeTaskType <p>分析任务类型，支持以下几种类型：<br>AnalyzeTaskType_Network：网络质量<br>AnalyzeTaskType_Browse：页面性能<br>AnalyzeTaskType_Transport：端口性能<br>AnalyzeTaskType_UploadDownload：文件传输<br>AnalyzeTaskType_MediaStream：音视频体验</p>
                     * 
                     */
                    void SetAnalyzeTaskType(const std::string& _analyzeTaskType);

                    /**
                     * 判断参数 AnalyzeTaskType 是否已赋值
                     * @return AnalyzeTaskType 是否已赋值
                     * 
                     */
                    bool AnalyzeTaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>维度标签值，参考：<br>host：任务域名<br>errorInfo：状态类型<br>area：拨测点地区<br>operator：拨测点运营商<br>taskId：任务ID</p>
                     * @return Key <p>维度标签值，参考：<br>host：任务域名<br>errorInfo：状态类型<br>area：拨测点地区<br>operator：拨测点运营商<br>taskId：任务ID</p>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>维度标签值，参考：<br>host：任务域名<br>errorInfo：状态类型<br>area：拨测点地区<br>operator：拨测点运营商<br>taskId：任务ID</p>
                     * @param _key <p>维度标签值，参考：<br>host：任务域名<br>errorInfo：状态类型<br>area：拨测点地区<br>operator：拨测点运营商<br>taskId：任务ID</p>
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件，可以传单个过滤条件也可以拼接多个参数，支持正则匹配</p>
                     * @return Filter <p>过滤条件，可以传单个过滤条件也可以拼接多个参数，支持正则匹配</p>
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置<p>过滤条件，可以传单个过滤条件也可以拼接多个参数，支持正则匹配</p>
                     * @param _filter <p>过滤条件，可以传单个过滤条件也可以拼接多个参数，支持正则匹配</p>
                     * 
                     */
                    void SetFilter(const std::string& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件数组</p>
                     * @return Filters <p>过滤条件数组</p>
                     * 
                     */
                    std::vector<std::string> GetFilters() const;

                    /**
                     * 设置<p>过滤条件数组</p>
                     * @param _filters <p>过滤条件数组</p>
                     * 
                     */
                    void SetFilters(const std::vector<std::string>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>时间范围</p>
                     * @return TimeRange <p>时间范围</p>
                     * 
                     */
                    std::string GetTimeRange() const;

                    /**
                     * 设置<p>时间范围</p>
                     * @param _timeRange <p>时间范围</p>
                     * 
                     */
                    void SetTimeRange(const std::string& _timeRange);

                    /**
                     * 判断参数 TimeRange 是否已赋值
                     * @return TimeRange 是否已赋值
                     * 
                     */
                    bool TimeRangeHasBeenSet() const;

                private:

                    /**
                     * <p>分析任务类型，支持以下几种类型：<br>AnalyzeTaskType_Network：网络质量<br>AnalyzeTaskType_Browse：页面性能<br>AnalyzeTaskType_Transport：端口性能<br>AnalyzeTaskType_UploadDownload：文件传输<br>AnalyzeTaskType_MediaStream：音视频体验</p>
                     */
                    std::string m_analyzeTaskType;
                    bool m_analyzeTaskTypeHasBeenSet;

                    /**
                     * <p>维度标签值，参考：<br>host：任务域名<br>errorInfo：状态类型<br>area：拨测点地区<br>operator：拨测点运营商<br>taskId：任务ID</p>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>过滤条件，可以传单个过滤条件也可以拼接多个参数，支持正则匹配</p>
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>过滤条件数组</p>
                     */
                    std::vector<std::string> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>时间范围</p>
                     */
                    std::string m_timeRange;
                    bool m_timeRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEPROBEMETRICTAGVALUESREQUEST_H_
