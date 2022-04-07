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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDATATRANSFORMREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDATATRANSFORMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DataTransformResouceInfo.h>
#include <tencentcloud/cls/v20201016/model/PreviewLogStatistic.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateDataTransform请求参数结构体
                */
                class CreateDataTransformRequest : public AbstractModel
                {
                public:
                    CreateDataTransformRequest();
                    ~CreateDataTransformRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取函数类型. DSL:1 SQL:2
                     * @return FuncType 函数类型. DSL:1 SQL:2
                     */
                    int64_t GetFuncType() const;

                    /**
                     * 设置函数类型. DSL:1 SQL:2
                     * @param FuncType 函数类型. DSL:1 SQL:2
                     */
                    void SetFuncType(const int64_t& _funcType);

                    /**
                     * 判断参数 FuncType 是否已赋值
                     * @return FuncType 是否已赋值
                     */
                    bool FuncTypeHasBeenSet() const;

                    /**
                     * 获取源日志主题
                     * @return SrcTopicId 源日志主题
                     */
                    std::string GetSrcTopicId() const;

                    /**
                     * 设置源日志主题
                     * @param SrcTopicId 源日志主题
                     */
                    void SetSrcTopicId(const std::string& _srcTopicId);

                    /**
                     * 判断参数 SrcTopicId 是否已赋值
                     * @return SrcTopicId 是否已赋值
                     */
                    bool SrcTopicIdHasBeenSet() const;

                    /**
                     * 获取加工任务名称
                     * @return Name 加工任务名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置加工任务名称
                     * @param Name 加工任务名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取加工逻辑函数
                     * @return EtlContent 加工逻辑函数
                     */
                    std::string GetEtlContent() const;

                    /**
                     * 设置加工逻辑函数
                     * @param EtlContent 加工逻辑函数
                     */
                    void SetEtlContent(const std::string& _etlContent);

                    /**
                     * 判断参数 EtlContent 是否已赋值
                     * @return EtlContent 是否已赋值
                     */
                    bool EtlContentHasBeenSet() const;

                    /**
                     * 获取加工任务目的topic_id以及别名
                     * @return DstResources 加工任务目的topic_id以及别名
                     */
                    std::vector<DataTransformResouceInfo> GetDstResources() const;

                    /**
                     * 设置加工任务目的topic_id以及别名
                     * @param DstResources 加工任务目的topic_id以及别名
                     */
                    void SetDstResources(const std::vector<DataTransformResouceInfo>& _dstResources);

                    /**
                     * 判断参数 DstResources 是否已赋值
                     * @return DstResources 是否已赋值
                     */
                    bool DstResourcesHasBeenSet() const;

                    /**
                     * 获取任务类型.  以SrcTopicId为数据源建立预览任务:1，以PreviewLogStatistics为数据源建立预览任务:2  真实任务:3
                     * @return TaskType 任务类型.  以SrcTopicId为数据源建立预览任务:1，以PreviewLogStatistics为数据源建立预览任务:2  真实任务:3
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置任务类型.  以SrcTopicId为数据源建立预览任务:1，以PreviewLogStatistics为数据源建立预览任务:2  真实任务:3
                     * @param TaskType 任务类型.  以SrcTopicId为数据源建立预览任务:1，以PreviewLogStatistics为数据源建立预览任务:2  真实任务:3
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取任务启动状态.   默认为1，正常开启,  2关闭
                     * @return EnableFlag 任务启动状态.   默认为1，正常开启,  2关闭
                     */
                    int64_t GetEnableFlag() const;

                    /**
                     * 设置任务启动状态.   默认为1，正常开启,  2关闭
                     * @param EnableFlag 任务启动状态.   默认为1，正常开启,  2关闭
                     */
                    void SetEnableFlag(const int64_t& _enableFlag);

                    /**
                     * 判断参数 EnableFlag 是否已赋值
                     * @return EnableFlag 是否已赋值
                     */
                    bool EnableFlagHasBeenSet() const;

                    /**
                     * 获取测试数据
                     * @return PreviewLogStatistics 测试数据
                     */
                    std::vector<PreviewLogStatistic> GetPreviewLogStatistics() const;

                    /**
                     * 设置测试数据
                     * @param PreviewLogStatistics 测试数据
                     */
                    void SetPreviewLogStatistics(const std::vector<PreviewLogStatistic>& _previewLogStatistics);

                    /**
                     * 判断参数 PreviewLogStatistics 是否已赋值
                     * @return PreviewLogStatistics 是否已赋值
                     */
                    bool PreviewLogStatisticsHasBeenSet() const;

                private:

                    /**
                     * 函数类型. DSL:1 SQL:2
                     */
                    int64_t m_funcType;
                    bool m_funcTypeHasBeenSet;

                    /**
                     * 源日志主题
                     */
                    std::string m_srcTopicId;
                    bool m_srcTopicIdHasBeenSet;

                    /**
                     * 加工任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 加工逻辑函数
                     */
                    std::string m_etlContent;
                    bool m_etlContentHasBeenSet;

                    /**
                     * 加工任务目的topic_id以及别名
                     */
                    std::vector<DataTransformResouceInfo> m_dstResources;
                    bool m_dstResourcesHasBeenSet;

                    /**
                     * 任务类型.  以SrcTopicId为数据源建立预览任务:1，以PreviewLogStatistics为数据源建立预览任务:2  真实任务:3
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务启动状态.   默认为1，正常开启,  2关闭
                     */
                    int64_t m_enableFlag;
                    bool m_enableFlagHasBeenSet;

                    /**
                     * 测试数据
                     */
                    std::vector<PreviewLogStatistic> m_previewLogStatistics;
                    bool m_previewLogStatisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDATATRANSFORMREQUEST_H_
