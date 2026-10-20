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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEPROBETASKSREQUEST_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEPROBETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cat/v20180409/model/KeyValuePair.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * DescribeProbeTasks请求参数结构体
                */
                class DescribeProbeTasksRequest : public AbstractModel
                {
                public:
                    DescribeProbeTasksRequest();
                    ~DescribeProbeTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务 ID  列表</p>
                     * @return TaskIDs <p>任务 ID  列表</p>
                     * 
                     */
                    std::vector<std::string> GetTaskIDs() const;

                    /**
                     * 设置<p>任务 ID  列表</p>
                     * @param _taskIDs <p>任务 ID  列表</p>
                     * 
                     */
                    void SetTaskIDs(const std::vector<std::string>& _taskIDs);

                    /**
                     * 判断参数 TaskIDs 是否已赋值
                     * @return TaskIDs 是否已赋值
                     * 
                     */
                    bool TaskIDsHasBeenSet() const;

                    /**
                     * 获取<p>任务名</p>
                     * @return TaskName <p>任务名</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名</p>
                     * @param _taskName <p>任务名</p>
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取<p>拨测目标</p>
                     * @return TargetAddress <p>拨测目标</p>
                     * 
                     */
                    std::string GetTargetAddress() const;

                    /**
                     * 设置<p>拨测目标</p>
                     * @param _targetAddress <p>拨测目标</p>
                     * 
                     */
                    void SetTargetAddress(const std::string& _targetAddress);

                    /**
                     * 判断参数 TargetAddress 是否已赋值
                     * @return TargetAddress 是否已赋值
                     * 
                     */
                    bool TargetAddressHasBeenSet() const;

                    /**
                     * 获取<p>任务状态列表</p><li>1 = 创建中</li><li> 2 = 运行中 </li><li> 3 = 运行异常 </li><li> 4 = 暂停中 </li><li> 5 = 暂停异常 </li><li> 6 = 任务暂停 </li><li> 7 = 任务删除中 </li><li> 8 = 任务删除异常 </li><li> 9 = 任务删除</li><li> 10 = 定时任务暂停中 </li>
                     * @return TaskStatus <p>任务状态列表</p><li>1 = 创建中</li><li> 2 = 运行中 </li><li> 3 = 运行异常 </li><li> 4 = 暂停中 </li><li> 5 = 暂停异常 </li><li> 6 = 任务暂停 </li><li> 7 = 任务删除中 </li><li> 8 = 任务删除异常 </li><li> 9 = 任务删除</li><li> 10 = 定时任务暂停中 </li>
                     * 
                     */
                    std::vector<int64_t> GetTaskStatus() const;

                    /**
                     * 设置<p>任务状态列表</p><li>1 = 创建中</li><li> 2 = 运行中 </li><li> 3 = 运行异常 </li><li> 4 = 暂停中 </li><li> 5 = 暂停异常 </li><li> 6 = 任务暂停 </li><li> 7 = 任务删除中 </li><li> 8 = 任务删除异常 </li><li> 9 = 任务删除</li><li> 10 = 定时任务暂停中 </li>
                     * @param _taskStatus <p>任务状态列表</p><li>1 = 创建中</li><li> 2 = 运行中 </li><li> 3 = 运行异常 </li><li> 4 = 暂停中 </li><li> 5 = 暂停异常 </li><li> 6 = 任务暂停 </li><li> 7 = 任务删除中 </li><li> 8 = 任务删除异常 </li><li> 9 = 任务删除</li><li> 10 = 定时任务暂停中 </li>
                     * 
                     */
                    void SetTaskStatus(const std::vector<int64_t>& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取<p>偏移量，默认为0</p>
                     * @return Offset <p>偏移量，默认为0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认为0</p>
                     * @param _offset <p>偏移量，默认为0</p>
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
                     * 获取<p>返回数量，默认为20，最大值为100</p>
                     * @return Limit <p>返回数量，默认为20，最大值为100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为20，最大值为100</p>
                     * @param _limit <p>返回数量，默认为20，最大值为100</p>
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
                     * 获取<p>付费模式</p><li>1 = 试用版本</li><li> 2 = 付费版本 </li>
                     * @return PayMode <p>付费模式</p><li>1 = 试用版本</li><li> 2 = 付费版本 </li>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置<p>付费模式</p><li>1 = 试用版本</li><li> 2 = 付费版本 </li>
                     * @param _payMode <p>付费模式</p><li>1 = 试用版本</li><li> 2 = 付费版本 </li>
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>订单状态</p><li>1 = 正常</li><li> 2 = 欠费 </li>
                     * @return OrderState <p>订单状态</p><li>1 = 正常</li><li> 2 = 欠费 </li>
                     * 
                     */
                    int64_t GetOrderState() const;

                    /**
                     * 设置<p>订单状态</p><li>1 = 正常</li><li> 2 = 欠费 </li>
                     * @param _orderState <p>订单状态</p><li>1 = 正常</li><li> 2 = 欠费 </li>
                     * 
                     */
                    void SetOrderState(const int64_t& _orderState);

                    /**
                     * 判断参数 OrderState 是否已赋值
                     * @return OrderState 是否已赋值
                     * 
                     */
                    bool OrderStateHasBeenSet() const;

                    /**
                     * 获取<p>拨测类型</p><li>1 = 页面浏览</li><li> 2 =文件上传 </li><li> 3 = 文件下载</li><li> 4 = 端口性能 </li><li> 5 = 网络质量 </li><li> 6 =流媒体 </li><p>即使拨测只支持页面浏览，网络质量，文件下载</p>
                     * @return TaskType <p>拨测类型</p><li>1 = 页面浏览</li><li> 2 =文件上传 </li><li> 3 = 文件下载</li><li> 4 = 端口性能 </li><li> 5 = 网络质量 </li><li> 6 =流媒体 </li><p>即使拨测只支持页面浏览，网络质量，文件下载</p>
                     * 
                     */
                    std::vector<int64_t> GetTaskType() const;

                    /**
                     * 设置<p>拨测类型</p><li>1 = 页面浏览</li><li> 2 =文件上传 </li><li> 3 = 文件下载</li><li> 4 = 端口性能 </li><li> 5 = 网络质量 </li><li> 6 =流媒体 </li><p>即使拨测只支持页面浏览，网络质量，文件下载</p>
                     * @param _taskType <p>拨测类型</p><li>1 = 页面浏览</li><li> 2 =文件上传 </li><li> 3 = 文件下载</li><li> 4 = 端口性能 </li><li> 5 = 网络质量 </li><li> 6 =流媒体 </li><p>即使拨测只支持页面浏览，网络质量，文件下载</p>
                     * 
                     */
                    void SetTaskType(const std::vector<int64_t>& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>节点类型</p>
                     * @return TaskCategory <p>节点类型</p>
                     * 
                     */
                    std::vector<int64_t> GetTaskCategory() const;

                    /**
                     * 设置<p>节点类型</p>
                     * @param _taskCategory <p>节点类型</p>
                     * 
                     */
                    void SetTaskCategory(const std::vector<int64_t>& _taskCategory);

                    /**
                     * 判断参数 TaskCategory 是否已赋值
                     * @return TaskCategory 是否已赋值
                     * 
                     */
                    bool TaskCategoryHasBeenSet() const;

                    /**
                     * 获取<p>排序的列</p>
                     * @return OrderBy <p>排序的列</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>排序的列</p>
                     * @param _orderBy <p>排序的列</p>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取<p>是否正序</p>
                     * @return Ascend <p>是否正序</p>
                     * 
                     */
                    bool GetAscend() const;

                    /**
                     * 设置<p>是否正序</p>
                     * @param _ascend <p>是否正序</p>
                     * 
                     */
                    void SetAscend(const bool& _ascend);

                    /**
                     * 判断参数 Ascend 是否已赋值
                     * @return Ascend 是否已赋值
                     * 
                     */
                    bool AscendHasBeenSet() const;

                    /**
                     * 获取<p>资源标签值</p>
                     * @return TagFilters <p>资源标签值</p>
                     * 
                     */
                    std::vector<KeyValuePair> GetTagFilters() const;

                    /**
                     * 设置<p>资源标签值</p>
                     * @param _tagFilters <p>资源标签值</p>
                     * 
                     */
                    void SetTagFilters(const std::vector<KeyValuePair>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                private:

                    /**
                     * <p>任务 ID  列表</p>
                     */
                    std::vector<std::string> m_taskIDs;
                    bool m_taskIDsHasBeenSet;

                    /**
                     * <p>任务名</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>拨测目标</p>
                     */
                    std::string m_targetAddress;
                    bool m_targetAddressHasBeenSet;

                    /**
                     * <p>任务状态列表</p><li>1 = 创建中</li><li> 2 = 运行中 </li><li> 3 = 运行异常 </li><li> 4 = 暂停中 </li><li> 5 = 暂停异常 </li><li> 6 = 任务暂停 </li><li> 7 = 任务删除中 </li><li> 8 = 任务删除异常 </li><li> 9 = 任务删除</li><li> 10 = 定时任务暂停中 </li>
                     */
                    std::vector<int64_t> m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * <p>偏移量，默认为0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，默认为20，最大值为100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>付费模式</p><li>1 = 试用版本</li><li> 2 = 付费版本 </li>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>订单状态</p><li>1 = 正常</li><li> 2 = 欠费 </li>
                     */
                    int64_t m_orderState;
                    bool m_orderStateHasBeenSet;

                    /**
                     * <p>拨测类型</p><li>1 = 页面浏览</li><li> 2 =文件上传 </li><li> 3 = 文件下载</li><li> 4 = 端口性能 </li><li> 5 = 网络质量 </li><li> 6 =流媒体 </li><p>即使拨测只支持页面浏览，网络质量，文件下载</p>
                     */
                    std::vector<int64_t> m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>节点类型</p>
                     */
                    std::vector<int64_t> m_taskCategory;
                    bool m_taskCategoryHasBeenSet;

                    /**
                     * <p>排序的列</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>是否正序</p>
                     */
                    bool m_ascend;
                    bool m_ascendHasBeenSet;

                    /**
                     * <p>资源标签值</p>
                     */
                    std::vector<KeyValuePair> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEPROBETASKSREQUEST_H_
