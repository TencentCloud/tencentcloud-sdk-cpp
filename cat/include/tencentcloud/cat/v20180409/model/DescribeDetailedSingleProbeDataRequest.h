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
                     * 获取开始时间戳（毫秒级）
                     * @return BeginTime 开始时间戳（毫秒级）
                     * 
                     */
                    uint64_t GetBeginTime() const;

                    /**
                     * 设置开始时间戳（毫秒级）
                     * @param _beginTime 开始时间戳（毫秒级）
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
                     * 获取结束时间戳（毫秒级）
                     * @return EndTime 结束时间戳（毫秒级）
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置结束时间戳（毫秒级）
                     * @param _endTime 结束时间戳（毫秒级）
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
                     * 获取任务类型
AnalyzeTaskType_Network：网络质量
AnalyzeTaskType_Browse：页面性能
AnalyzeTaskType_UploadDownload：文件传输（含文件上传、文件下载）
AnalyzeTaskType_Transport：端口性能
AnalyzeTaskType_MediaStream：音视频体验
                     * @return TaskType 任务类型
AnalyzeTaskType_Network：网络质量
AnalyzeTaskType_Browse：页面性能
AnalyzeTaskType_UploadDownload：文件传输（含文件上传、文件下载）
AnalyzeTaskType_Transport：端口性能
AnalyzeTaskType_MediaStream：音视频体验
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型
AnalyzeTaskType_Network：网络质量
AnalyzeTaskType_Browse：页面性能
AnalyzeTaskType_UploadDownload：文件传输（含文件上传、文件下载）
AnalyzeTaskType_Transport：端口性能
AnalyzeTaskType_MediaStream：音视频体验
                     * @param _taskType 任务类型
AnalyzeTaskType_Network：网络质量
AnalyzeTaskType_Browse：页面性能
AnalyzeTaskType_UploadDownload：文件传输（含文件上传、文件下载）
AnalyzeTaskType_Transport：端口性能
AnalyzeTaskType_MediaStream：音视频体验
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
                     * 获取待排序字段
可以填写 ProbeTime 拨测时间排序
也可填写SelectedFields 中的选中字段
                     * @return SortField 待排序字段
可以填写 ProbeTime 拨测时间排序
也可填写SelectedFields 中的选中字段
                     * 
                     */
                    std::string GetSortField() const;

                    /**
                     * 设置待排序字段
可以填写 ProbeTime 拨测时间排序
也可填写SelectedFields 中的选中字段
                     * @param _sortField 待排序字段
可以填写 ProbeTime 拨测时间排序
也可填写SelectedFields 中的选中字段
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
                     * 获取true表示升序
                     * @return Ascending true表示升序
                     * 
                     */
                    bool GetAscending() const;

                    /**
                     * 设置true表示升序
                     * @param _ascending true表示升序
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
                     * 获取选中字段，如ProbeTime、TransferTime、TransferSize等。
                     * @return SelectedFields 选中字段，如ProbeTime、TransferTime、TransferSize等。
                     * 
                     */
                    std::vector<std::string> GetSelectedFields() const;

                    /**
                     * 设置选中字段，如ProbeTime、TransferTime、TransferSize等。
                     * @param _selectedFields 选中字段，如ProbeTime、TransferTime、TransferSize等。
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
                     * 获取起始取数位置
                     * @return Offset 起始取数位置
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置起始取数位置
                     * @param _offset 起始取数位置
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
                     * 获取取数数量
                     * @return Limit 取数数量
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置取数数量
                     * @param _limit 取数数量
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
                     * 获取任务ID
                     * @return TaskID 任务ID
                     * 
                     */
                    std::vector<std::string> GetTaskID() const;

                    /**
                     * 设置任务ID
                     * @param _taskID 任务ID
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
                     * 获取拨测点运营商
	
这里实际按拨测结果中的运营商来填写即可

电信：中国电信
移动：中国移动
联通：中国联通
                     * @return Operators 拨测点运营商
	
这里实际按拨测结果中的运营商来填写即可

电信：中国电信
移动：中国移动
联通：中国联通
                     * 
                     */
                    std::vector<std::string> GetOperators() const;

                    /**
                     * 设置拨测点运营商
	
这里实际按拨测结果中的运营商来填写即可

电信：中国电信
移动：中国移动
联通：中国联通
                     * @param _operators 拨测点运营商
	
这里实际按拨测结果中的运营商来填写即可

电信：中国电信
移动：中国移动
联通：中国联通
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
                     * 获取拨测点地区
	
这里实际按拨测结果中的地区来填写即可

国内一般是省级单位，如广东、广西、中国香港；直辖市则填北京、上海

境外一般是国家名，如澳大利亚、新加坡
                     * @return Districts 拨测点地区
	
这里实际按拨测结果中的地区来填写即可

国内一般是省级单位，如广东、广西、中国香港；直辖市则填北京、上海

境外一般是国家名，如澳大利亚、新加坡
                     * 
                     */
                    std::vector<std::string> GetDistricts() const;

                    /**
                     * 设置拨测点地区
	
这里实际按拨测结果中的地区来填写即可

国内一般是省级单位，如广东、广西、中国香港；直辖市则填北京、上海

境外一般是国家名，如澳大利亚、新加坡
                     * @param _districts 拨测点地区
	
这里实际按拨测结果中的地区来填写即可

国内一般是省级单位，如广东、广西、中国香港；直辖市则填北京、上海

境外一般是国家名，如澳大利亚、新加坡
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
                     * 获取错误类型
                     * @return ErrorTypes 错误类型
                     * 
                     */
                    std::vector<std::string> GetErrorTypes() const;

                    /**
                     * 设置错误类型
                     * @param _errorTypes 错误类型
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
                     * 获取城市
这里实际按拨测结果中的城市来填写即可

示例：

深圳市
武汉市
首尔
多伦多
                     * @return City 城市
这里实际按拨测结果中的城市来填写即可

示例：

深圳市
武汉市
首尔
多伦多
                     * 
                     */
                    std::vector<std::string> GetCity() const;

                    /**
                     * 设置城市
这里实际按拨测结果中的城市来填写即可

示例：

深圳市
武汉市
首尔
多伦多
                     * @param _city 城市
这里实际按拨测结果中的城市来填写即可

示例：

深圳市
武汉市
首尔
多伦多
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
                     * 获取es scroll查询id
                     * @return ScrollID es scroll查询id
                     * 
                     */
                    std::string GetScrollID() const;

                    /**
                     * 设置es scroll查询id
                     * @param _scrollID es scroll查询id
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
                     * 获取详情数据下载
                     * @return QueryFlag 详情数据下载
                     * 
                     */
                    std::string GetQueryFlag() const;

                    /**
                     * 设置详情数据下载
                     * @param _queryFlag 详情数据下载
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
                     * 开始时间戳（毫秒级）
                     */
                    uint64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 结束时间戳（毫秒级）
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务类型
AnalyzeTaskType_Network：网络质量
AnalyzeTaskType_Browse：页面性能
AnalyzeTaskType_UploadDownload：文件传输（含文件上传、文件下载）
AnalyzeTaskType_Transport：端口性能
AnalyzeTaskType_MediaStream：音视频体验
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 待排序字段
可以填写 ProbeTime 拨测时间排序
也可填写SelectedFields 中的选中字段
                     */
                    std::string m_sortField;
                    bool m_sortFieldHasBeenSet;

                    /**
                     * true表示升序
                     */
                    bool m_ascending;
                    bool m_ascendingHasBeenSet;

                    /**
                     * 选中字段，如ProbeTime、TransferTime、TransferSize等。
                     */
                    std::vector<std::string> m_selectedFields;
                    bool m_selectedFieldsHasBeenSet;

                    /**
                     * 起始取数位置
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 取数数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::vector<std::string> m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * 拨测点运营商
	
这里实际按拨测结果中的运营商来填写即可

电信：中国电信
移动：中国移动
联通：中国联通
                     */
                    std::vector<std::string> m_operators;
                    bool m_operatorsHasBeenSet;

                    /**
                     * 拨测点地区
	
这里实际按拨测结果中的地区来填写即可

国内一般是省级单位，如广东、广西、中国香港；直辖市则填北京、上海

境外一般是国家名，如澳大利亚、新加坡
                     */
                    std::vector<std::string> m_districts;
                    bool m_districtsHasBeenSet;

                    /**
                     * 错误类型
                     */
                    std::vector<std::string> m_errorTypes;
                    bool m_errorTypesHasBeenSet;

                    /**
                     * 城市
这里实际按拨测结果中的城市来填写即可

示例：

深圳市
武汉市
首尔
多伦多
                     */
                    std::vector<std::string> m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * es scroll查询id
                     */
                    std::string m_scrollID;
                    bool m_scrollIDHasBeenSet;

                    /**
                     * 详情数据下载
                     */
                    std::string m_queryFlag;
                    bool m_queryFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEDETAILEDSINGLEPROBEDATAREQUEST_H_
