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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_TASKFILTER_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_TASKFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 任务筛选条件结构体
                */
                class TaskFilter : public AbstractModel
                {
                public:
                    TaskFilter();
                    ~TaskFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒资文件类型
                     * @return MediaTypeSet 媒资文件类型
                     * 
                     */
                    std::vector<int64_t> GetMediaTypeSet() const;

                    /**
                     * 设置媒资文件类型
                     * @param _mediaTypeSet 媒资文件类型
                     * 
                     */
                    void SetMediaTypeSet(const std::vector<int64_t>& _mediaTypeSet);

                    /**
                     * 判断参数 MediaTypeSet 是否已赋值
                     * @return MediaTypeSet 是否已赋值
                     * 
                     */
                    bool MediaTypeSetHasBeenSet() const;

                    /**
                     * 获取待筛选的任务状态列表
                     * @return TaskStatusSet 待筛选的任务状态列表
                     * 
                     */
                    std::vector<int64_t> GetTaskStatusSet() const;

                    /**
                     * 设置待筛选的任务状态列表
                     * @param _taskStatusSet 待筛选的任务状态列表
                     * 
                     */
                    void SetTaskStatusSet(const std::vector<int64_t>& _taskStatusSet);

                    /**
                     * 判断参数 TaskStatusSet 是否已赋值
                     * @return TaskStatusSet 是否已赋值
                     * 
                     */
                    bool TaskStatusSetHasBeenSet() const;

                    /**
                     * 获取待筛选的任务名称数组
                     * @return TaskNameSet 待筛选的任务名称数组
                     * 
                     */
                    std::vector<std::string> GetTaskNameSet() const;

                    /**
                     * 设置待筛选的任务名称数组
                     * @param _taskNameSet 待筛选的任务名称数组
                     * 
                     */
                    void SetTaskNameSet(const std::vector<std::string>& _taskNameSet);

                    /**
                     * 判断参数 TaskNameSet 是否已赋值
                     * @return TaskNameSet 是否已赋值
                     * 
                     */
                    bool TaskNameSetHasBeenSet() const;

                    /**
                     * 获取TaskId数组
                     * @return TaskIdSet TaskId数组
                     * 
                     */
                    std::vector<std::string> GetTaskIdSet() const;

                    /**
                     * 设置TaskId数组
                     * @param _taskIdSet TaskId数组
                     * 
                     */
                    void SetTaskIdSet(const std::vector<std::string>& _taskIdSet);

                    /**
                     * 判断参数 TaskIdSet 是否已赋值
                     * @return TaskIdSet 是否已赋值
                     * 
                     */
                    bool TaskIdSetHasBeenSet() const;

                    /**
                     * 获取媒资文件名数组
                     * @return MediaNameSet 媒资文件名数组
                     * 
                     */
                    std::vector<std::string> GetMediaNameSet() const;

                    /**
                     * 设置媒资文件名数组
                     * @param _mediaNameSet 媒资文件名数组
                     * 
                     */
                    void SetMediaNameSet(const std::vector<std::string>& _mediaNameSet);

                    /**
                     * 判断参数 MediaNameSet 是否已赋值
                     * @return MediaNameSet 是否已赋值
                     * 
                     */
                    bool MediaNameSetHasBeenSet() const;

                    /**
                     * 获取媒资语言类型
                     * @return MediaLangSet 媒资语言类型
                     * 
                     */
                    std::vector<int64_t> GetMediaLangSet() const;

                    /**
                     * 设置媒资语言类型
                     * @param _mediaLangSet 媒资语言类型
                     * 
                     */
                    void SetMediaLangSet(const std::vector<int64_t>& _mediaLangSet);

                    /**
                     * 判断参数 MediaLangSet 是否已赋值
                     * @return MediaLangSet 是否已赋值
                     * 
                     */
                    bool MediaLangSetHasBeenSet() const;

                    /**
                     * 获取媒资素材一级类型
                     * @return MediaLabelSet 媒资素材一级类型
                     * 
                     */
                    std::vector<int64_t> GetMediaLabelSet() const;

                    /**
                     * 设置媒资素材一级类型
                     * @param _mediaLabelSet 媒资素材一级类型
                     * 
                     */
                    void SetMediaLabelSet(const std::vector<int64_t>& _mediaLabelSet);

                    /**
                     * 判断参数 MediaLabelSet 是否已赋值
                     * @return MediaLabelSet 是否已赋值
                     * 
                     */
                    bool MediaLabelSetHasBeenSet() const;

                    /**
                     * 获取媒资自定义标签数组
                     * @return LabelSet 媒资自定义标签数组
                     * 
                     */
                    std::vector<std::string> GetLabelSet() const;

                    /**
                     * 设置媒资自定义标签数组
                     * @param _labelSet 媒资自定义标签数组
                     * 
                     */
                    void SetLabelSet(const std::vector<std::string>& _labelSet);

                    /**
                     * 判断参数 LabelSet 是否已赋值
                     * @return LabelSet 是否已赋值
                     * 
                     */
                    bool LabelSetHasBeenSet() const;

                private:

                    /**
                     * 媒资文件类型
                     */
                    std::vector<int64_t> m_mediaTypeSet;
                    bool m_mediaTypeSetHasBeenSet;

                    /**
                     * 待筛选的任务状态列表
                     */
                    std::vector<int64_t> m_taskStatusSet;
                    bool m_taskStatusSetHasBeenSet;

                    /**
                     * 待筛选的任务名称数组
                     */
                    std::vector<std::string> m_taskNameSet;
                    bool m_taskNameSetHasBeenSet;

                    /**
                     * TaskId数组
                     */
                    std::vector<std::string> m_taskIdSet;
                    bool m_taskIdSetHasBeenSet;

                    /**
                     * 媒资文件名数组
                     */
                    std::vector<std::string> m_mediaNameSet;
                    bool m_mediaNameSetHasBeenSet;

                    /**
                     * 媒资语言类型
                     */
                    std::vector<int64_t> m_mediaLangSet;
                    bool m_mediaLangSetHasBeenSet;

                    /**
                     * 媒资素材一级类型
                     */
                    std::vector<int64_t> m_mediaLabelSet;
                    bool m_mediaLabelSetHasBeenSet;

                    /**
                     * 媒资自定义标签数组
                     */
                    std::vector<std::string> m_labelSet;
                    bool m_labelSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_TASKFILTER_H_
