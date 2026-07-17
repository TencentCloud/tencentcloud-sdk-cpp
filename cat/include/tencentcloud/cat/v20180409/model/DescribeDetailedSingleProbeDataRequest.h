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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEDETAILEDSINGLEPROBEDATAREQUEST_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEDETAILEDSINGLEPROBEDATAREQUEST_H_

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
                * DescribeDetailedSingleProbeData请求参数结构体
                */
                class DescribeDetailedSingleProbeDataRequest : public AbstractModel
                {
                public:
                    DescribeDetailedSingleProbeDataRequest();
                    ~DescribeDetailedSingleProbeDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>开始时间戳（毫秒级）</p>
                     * @return BeginTime <p>开始时间戳（毫秒级）</p>
                     * 
                     */
                    uint64_t GetBeginTime() const;

                    /**
                     * 设置<p>开始时间戳（毫秒级）</p>
                     * @param _beginTime <p>开始时间戳（毫秒级）</p>
                     * 
                     */
                    void SetBeginTime(const uint64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间戳（毫秒级）</p>
                     * @return EndTime <p>结束时间戳（毫秒级）</p>
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间戳（毫秒级）</p>
                     * @param _endTime <p>结束时间戳（毫秒级）</p>
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务类型<br>AnalyzeTaskType_Network：网络质量<br>AnalyzeTaskType_Browse：页面性能<br>AnalyzeTaskType_UploadDownload：文件传输（含文件上传、文件下载）<br>AnalyzeTaskType_Transport：端口性能<br>AnalyzeTaskType_MediaStream：音视频体验</p>
                     * @return TaskType <p>任务类型<br>AnalyzeTaskType_Network：网络质量<br>AnalyzeTaskType_Browse：页面性能<br>AnalyzeTaskType_UploadDownload：文件传输（含文件上传、文件下载）<br>AnalyzeTaskType_Transport：端口性能<br>AnalyzeTaskType_MediaStream：音视频体验</p>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>任务类型<br>AnalyzeTaskType_Network：网络质量<br>AnalyzeTaskType_Browse：页面性能<br>AnalyzeTaskType_UploadDownload：文件传输（含文件上传、文件下载）<br>AnalyzeTaskType_Transport：端口性能<br>AnalyzeTaskType_MediaStream：音视频体验</p>
                     * @param _taskType <p>任务类型<br>AnalyzeTaskType_Network：网络质量<br>AnalyzeTaskType_Browse：页面性能<br>AnalyzeTaskType_UploadDownload：文件传输（含文件上传、文件下载）<br>AnalyzeTaskType_Transport：端口性能<br>AnalyzeTaskType_MediaStream：音视频体验</p>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>待排序字段<br>可以填写 ProbeTime 拨测时间排序<br>也可填写SelectedFields 中的选中字段</p>
                     * @return SortField <p>待排序字段<br>可以填写 ProbeTime 拨测时间排序<br>也可填写SelectedFields 中的选中字段</p>
                     * 
                     */
                    std::string GetSortField() const;

                    /**
                     * 设置<p>待排序字段<br>可以填写 ProbeTime 拨测时间排序<br>也可填写SelectedFields 中的选中字段</p>
                     * @param _sortField <p>待排序字段<br>可以填写 ProbeTime 拨测时间排序<br>也可填写SelectedFields 中的选中字段</p>
                     * 
                     */
                    void SetSortField(const std::string& _sortField);

                    /**
                     * 判断参数 SortField 是否已赋值
                     * @return SortField 是否已赋值
                     * 
                     */
                    bool SortFieldHasBeenSet() const;

                    /**
                     * 获取<p>true表示升序</p>
                     * @return Ascending <p>true表示升序</p>
                     * 
                     */
                    bool GetAscending() const;

                    /**
                     * 设置<p>true表示升序</p>
                     * @param _ascending <p>true表示升序</p>
                     * 
                     */
                    void SetAscending(const bool& _ascending);

                    /**
                     * 判断参数 Ascending 是否已赋值
                     * @return Ascending 是否已赋值
                     * 
                     */
                    bool AscendingHasBeenSet() const;

                    /**
                     * 获取<p>选中字段，如ProbeTime、TransferTime、TransferSize等。</p>
                     * @return SelectedFields <p>选中字段，如ProbeTime、TransferTime、TransferSize等。</p>
                     * 
                     */
                    std::vector<std::string> GetSelectedFields() const;

                    /**
                     * 设置<p>选中字段，如ProbeTime、TransferTime、TransferSize等。</p>
                     * @param _selectedFields <p>选中字段，如ProbeTime、TransferTime、TransferSize等。</p>
                     * 
                     */
                    void SetSelectedFields(const std::vector<std::string>& _selectedFields);

                    /**
                     * 判断参数 SelectedFields 是否已赋值
                     * @return SelectedFields 是否已赋值
                     * 
                     */
                    bool SelectedFieldsHasBeenSet() const;

                    /**
                     * 获取<p>起始取数位置</p>
                     * @return Offset <p>起始取数位置</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>起始取数位置</p>
                     * @param _offset <p>起始取数位置</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>取数数量</p>
                     * @return Limit <p>取数数量</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>取数数量</p>
                     * @param _limit <p>取数数量</p>
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
                     * 获取<p>任务ID</p>
                     * @return TaskID <p>任务ID</p>
                     * 
                     */
                    std::vector<std::string> GetTaskID() const;

                    /**
                     * 设置<p>任务ID</p>
                     * @param _taskID <p>任务ID</p>
                     * 
                     */
                    void SetTaskID(const std::vector<std::string>& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                    /**
                     * 获取<p>拨测点运营商</p><p>这里实际按拨测结果中的运营商来填写即可</p><p>电信：中国电信<br>移动：中国移动<br>联通：中国联通</p>
                     * @return Operators <p>拨测点运营商</p><p>这里实际按拨测结果中的运营商来填写即可</p><p>电信：中国电信<br>移动：中国移动<br>联通：中国联通</p>
                     * 
                     */
                    std::vector<std::string> GetOperators() const;

                    /**
                     * 设置<p>拨测点运营商</p><p>这里实际按拨测结果中的运营商来填写即可</p><p>电信：中国电信<br>移动：中国移动<br>联通：中国联通</p>
                     * @param _operators <p>拨测点运营商</p><p>这里实际按拨测结果中的运营商来填写即可</p><p>电信：中国电信<br>移动：中国移动<br>联通：中国联通</p>
                     * 
                     */
                    void SetOperators(const std::vector<std::string>& _operators);

                    /**
                     * 判断参数 Operators 是否已赋值
                     * @return Operators 是否已赋值
                     * 
                     */
                    bool OperatorsHasBeenSet() const;

                    /**
                     * 获取<p>拨测点地区</p><p>这里实际按拨测结果中的地区来填写即可</p><p>国内一般是省级单位，如广东、广西、中国香港；直辖市则填北京、上海</p><p>境外一般是国家名，如澳大利亚、新加坡</p>
                     * @return Districts <p>拨测点地区</p><p>这里实际按拨测结果中的地区来填写即可</p><p>国内一般是省级单位，如广东、广西、中国香港；直辖市则填北京、上海</p><p>境外一般是国家名，如澳大利亚、新加坡</p>
                     * 
                     */
                    std::vector<std::string> GetDistricts() const;

                    /**
                     * 设置<p>拨测点地区</p><p>这里实际按拨测结果中的地区来填写即可</p><p>国内一般是省级单位，如广东、广西、中国香港；直辖市则填北京、上海</p><p>境外一般是国家名，如澳大利亚、新加坡</p>
                     * @param _districts <p>拨测点地区</p><p>这里实际按拨测结果中的地区来填写即可</p><p>国内一般是省级单位，如广东、广西、中国香港；直辖市则填北京、上海</p><p>境外一般是国家名，如澳大利亚、新加坡</p>
                     * 
                     */
                    void SetDistricts(const std::vector<std::string>& _districts);

                    /**
                     * 判断参数 Districts 是否已赋值
                     * @return Districts 是否已赋值
                     * 
                     */
                    bool DistrictsHasBeenSet() const;

                    /**
                     * 获取<p>错误类型</p>
                     * @return ErrorTypes <p>错误类型</p>
                     * 
                     */
                    std::vector<std::string> GetErrorTypes() const;

                    /**
                     * 设置<p>错误类型</p>
                     * @param _errorTypes <p>错误类型</p>
                     * 
                     */
                    void SetErrorTypes(const std::vector<std::string>& _errorTypes);

                    /**
                     * 判断参数 ErrorTypes 是否已赋值
                     * @return ErrorTypes 是否已赋值
                     * 
                     */
                    bool ErrorTypesHasBeenSet() const;

                    /**
                     * 获取<p>城市<br>这里实际按拨测结果中的城市来填写即可</p><p>示例：</p><p>深圳市<br>武汉市<br>首尔<br>多伦多</p>
                     * @return City <p>城市<br>这里实际按拨测结果中的城市来填写即可</p><p>示例：</p><p>深圳市<br>武汉市<br>首尔<br>多伦多</p>
                     * 
                     */
                    std::vector<std::string> GetCity() const;

                    /**
                     * 设置<p>城市<br>这里实际按拨测结果中的城市来填写即可</p><p>示例：</p><p>深圳市<br>武汉市<br>首尔<br>多伦多</p>
                     * @param _city <p>城市<br>这里实际按拨测结果中的城市来填写即可</p><p>示例：</p><p>深圳市<br>武汉市<br>首尔<br>多伦多</p>
                     * 
                     */
                    void SetCity(const std::vector<std::string>& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取<p>es scroll查询id</p>
                     * @return ScrollID <p>es scroll查询id</p>
                     * 
                     */
                    std::string GetScrollID() const;

                    /**
                     * 设置<p>es scroll查询id</p>
                     * @param _scrollID <p>es scroll查询id</p>
                     * 
                     */
                    void SetScrollID(const std::string& _scrollID);

                    /**
                     * 判断参数 ScrollID 是否已赋值
                     * @return ScrollID 是否已赋值
                     * 
                     */
                    bool ScrollIDHasBeenSet() const;

                    /**
                     * 获取<p>详情数据下载</p>
                     * @return QueryFlag <p>详情数据下载</p>
                     * 
                     */
                    std::string GetQueryFlag() const;

                    /**
                     * 设置<p>详情数据下载</p>
                     * @param _queryFlag <p>详情数据下载</p>
                     * 
                     */
                    void SetQueryFlag(const std::string& _queryFlag);

                    /**
                     * 判断参数 QueryFlag 是否已赋值
                     * @return QueryFlag 是否已赋值
                     * 
                     */
                    bool QueryFlagHasBeenSet() const;

                private:

                    /**
                     * <p>开始时间戳（毫秒级）</p>
                     */
                    uint64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>结束时间戳（毫秒级）</p>
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>任务类型<br>AnalyzeTaskType_Network：网络质量<br>AnalyzeTaskType_Browse：页面性能<br>AnalyzeTaskType_UploadDownload：文件传输（含文件上传、文件下载）<br>AnalyzeTaskType_Transport：端口性能<br>AnalyzeTaskType_MediaStream：音视频体验</p>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>待排序字段<br>可以填写 ProbeTime 拨测时间排序<br>也可填写SelectedFields 中的选中字段</p>
                     */
                    std::string m_sortField;
                    bool m_sortFieldHasBeenSet;

                    /**
                     * <p>true表示升序</p>
                     */
                    bool m_ascending;
                    bool m_ascendingHasBeenSet;

                    /**
                     * <p>选中字段，如ProbeTime、TransferTime、TransferSize等。</p>
                     */
                    std::vector<std::string> m_selectedFields;
                    bool m_selectedFieldsHasBeenSet;

                    /**
                     * <p>起始取数位置</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>取数数量</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>任务ID</p>
                     */
                    std::vector<std::string> m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * <p>拨测点运营商</p><p>这里实际按拨测结果中的运营商来填写即可</p><p>电信：中国电信<br>移动：中国移动<br>联通：中国联通</p>
                     */
                    std::vector<std::string> m_operators;
                    bool m_operatorsHasBeenSet;

                    /**
                     * <p>拨测点地区</p><p>这里实际按拨测结果中的地区来填写即可</p><p>国内一般是省级单位，如广东、广西、中国香港；直辖市则填北京、上海</p><p>境外一般是国家名，如澳大利亚、新加坡</p>
                     */
                    std::vector<std::string> m_districts;
                    bool m_districtsHasBeenSet;

                    /**
                     * <p>错误类型</p>
                     */
                    std::vector<std::string> m_errorTypes;
                    bool m_errorTypesHasBeenSet;

                    /**
                     * <p>城市<br>这里实际按拨测结果中的城市来填写即可</p><p>示例：</p><p>深圳市<br>武汉市<br>首尔<br>多伦多</p>
                     */
                    std::vector<std::string> m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * <p>es scroll查询id</p>
                     */
                    std::string m_scrollID;
                    bool m_scrollIDHasBeenSet;

                    /**
                     * <p>详情数据下载</p>
                     */
                    std::string m_queryFlag;
                    bool m_queryFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEDETAILEDSINGLEPROBEDATAREQUEST_H_
