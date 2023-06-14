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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEDATAHUBTASKSREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEDATAHUBTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeDatahubTasks请求参数结构体
                */
                class DescribeDatahubTasksRequest : public AbstractModel
                {
                public:
                    DescribeDatahubTasksRequest();
                    ~DescribeDatahubTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取返回数量，默认为20，最大值为100
                     * @return Limit 返回数量，默认为20，最大值为100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100
                     * @param _limit 返回数量，默认为20，最大值为100
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
                     * 获取分页偏移量，默认为0
                     * @return Offset 分页偏移量，默认为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，默认为0
                     * @param _offset 分页偏移量，默认为0
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
                     * 获取过滤条件，按照 TaskName 过滤，支持模糊查询
                     * @return SearchWord 过滤条件，按照 TaskName 过滤，支持模糊查询
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置过滤条件，按照 TaskName 过滤，支持模糊查询
                     * @param _searchWord 过滤条件，按照 TaskName 过滤，支持模糊查询
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取转储的目标类型
                     * @return TargetType 转储的目标类型
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置转储的目标类型
                     * @param _targetType 转储的目标类型
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取任务类型，SOURCE数据接入，SINK数据流出
                     * @return TaskType 任务类型，SOURCE数据接入，SINK数据流出
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型，SOURCE数据接入，SINK数据流出
                     * @param _taskType 任务类型，SOURCE数据接入，SINK数据流出
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
                     * 获取转储的源类型
                     * @return SourceType 转储的源类型
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置转储的源类型
                     * @param _sourceType 转储的源类型
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取转储的资源
                     * @return Resource 转储的资源
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置转储的资源
                     * @param _resource 转储的资源
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                private:

                    /**
                     * 返回数量，默认为20，最大值为100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量，默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤条件，按照 TaskName 过滤，支持模糊查询
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 转储的目标类型
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 任务类型，SOURCE数据接入，SINK数据流出
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 转储的源类型
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 转储的资源
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEDATAHUBTASKSREQUEST_H_
