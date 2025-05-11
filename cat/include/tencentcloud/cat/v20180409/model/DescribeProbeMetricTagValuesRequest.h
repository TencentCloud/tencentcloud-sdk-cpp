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
                     * 获取分析任务类型，支持以下几种类型：
AnalyzeTaskType_Network：网络质量
AnalyzeTaskType_Browse：页面性能 
AnalyzeTaskType_Transport：端口性能
AnalyzeTaskType_UploadDownload：文件传输
AnalyzeTaskType_MediaStream：音视频体验

                     * @return AnalyzeTaskType 分析任务类型，支持以下几种类型：
AnalyzeTaskType_Network：网络质量
AnalyzeTaskType_Browse：页面性能 
AnalyzeTaskType_Transport：端口性能
AnalyzeTaskType_UploadDownload：文件传输
AnalyzeTaskType_MediaStream：音视频体验

                     * 
                     */
                    std::string GetAnalyzeTaskType() const;

                    /**
                     * 设置分析任务类型，支持以下几种类型：
AnalyzeTaskType_Network：网络质量
AnalyzeTaskType_Browse：页面性能 
AnalyzeTaskType_Transport：端口性能
AnalyzeTaskType_UploadDownload：文件传输
AnalyzeTaskType_MediaStream：音视频体验

                     * @param _analyzeTaskType 分析任务类型，支持以下几种类型：
AnalyzeTaskType_Network：网络质量
AnalyzeTaskType_Browse：页面性能 
AnalyzeTaskType_Transport：端口性能
AnalyzeTaskType_UploadDownload：文件传输
AnalyzeTaskType_MediaStream：音视频体验

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
                     * 获取维度标签值，参考：
host：任务域名
errorInfo：状态类型
area：拨测点地区
operator：拨测点运营商
taskId：任务ID
                     * @return Key 维度标签值，参考：
host：任务域名
errorInfo：状态类型
area：拨测点地区
operator：拨测点运营商
taskId：任务ID
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置维度标签值，参考：
host：任务域名
errorInfo：状态类型
area：拨测点地区
operator：拨测点运营商
taskId：任务ID
                     * @param _key 维度标签值，参考：
host：任务域名
errorInfo：状态类型
area：拨测点地区
operator：拨测点运营商
taskId：任务ID
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
                     * 获取过滤条件，可以传单个过滤条件也可以拼接多个参数，支持正则匹配
                     * @return Filter 过滤条件，可以传单个过滤条件也可以拼接多个参数，支持正则匹配
                     * 
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置过滤条件，可以传单个过滤条件也可以拼接多个参数，支持正则匹配
                     * @param _filter 过滤条件，可以传单个过滤条件也可以拼接多个参数，支持正则匹配
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
                     * 获取过滤条件数组
                     * @return Filters 过滤条件数组
                     * 
                     */
                    std::vector<std::string> GetFilters() const;

                    /**
                     * 设置过滤条件数组
                     * @param _filters 过滤条件数组
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
                     * 获取时间范围
                     * @return TimeRange 时间范围
                     * 
                     */
                    std::string GetTimeRange() const;

                    /**
                     * 设置时间范围
                     * @param _timeRange 时间范围
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
                     * 分析任务类型，支持以下几种类型：
AnalyzeTaskType_Network：网络质量
AnalyzeTaskType_Browse：页面性能 
AnalyzeTaskType_Transport：端口性能
AnalyzeTaskType_UploadDownload：文件传输
AnalyzeTaskType_MediaStream：音视频体验

                     */
                    std::string m_analyzeTaskType;
                    bool m_analyzeTaskTypeHasBeenSet;

                    /**
                     * 维度标签值，参考：
host：任务域名
errorInfo：状态类型
area：拨测点地区
operator：拨测点运营商
taskId：任务ID
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 过滤条件，可以传单个过滤条件也可以拼接多个参数，支持正则匹配
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 过滤条件数组
                     */
                    std::vector<std::string> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 时间范围
                     */
                    std::string m_timeRange;
                    bool m_timeRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEPROBEMETRICTAGVALUESREQUEST_H_
