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
                     * 获取<p>返回数量，默认为20，最大值为100 (超过100限制为100)</p>
                     * @return Limit <p>返回数量，默认为20，最大值为100 (超过100限制为100)</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为20，最大值为100 (超过100限制为100)</p>
                     * @param _limit <p>返回数量，默认为20，最大值为100 (超过100限制为100)</p>
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
                     * 获取<p>分页偏移量，默认为0</p>
                     * @return Offset <p>分页偏移量，默认为0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，默认为0</p>
                     * @param _offset <p>分页偏移量，默认为0</p>
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
                     * 获取<p>过滤条件，按照 TaskName 过滤，支持模糊查询</p>
                     * @return SearchWord <p>过滤条件，按照 TaskName 过滤，支持模糊查询</p>
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置<p>过滤条件，按照 TaskName 过滤，支持模糊查询</p>
                     * @param _searchWord <p>过滤条件，按照 TaskName 过滤，支持模糊查询</p>
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
                     * 获取<p>转储的目标类型</p>
                     * @return TargetType <p>转储的目标类型</p>
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置<p>转储的目标类型</p>
                     * @param _targetType <p>转储的目标类型</p>
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
                     * 获取<p>任务类型，SOURCE数据接入，SINK数据流出</p>
                     * @return TaskType <p>任务类型，SOURCE数据接入，SINK数据流出</p>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>任务类型，SOURCE数据接入，SINK数据流出</p>
                     * @param _taskType <p>任务类型，SOURCE数据接入，SINK数据流出</p>
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
                     * 获取<p>转储的源类型</p>
                     * @return SourceType <p>转储的源类型</p>
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置<p>转储的源类型</p>
                     * @param _sourceType <p>转储的源类型</p>
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
                     * 获取<p>转储的资源</p>
                     * @return Resource <p>转储的资源</p>
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置<p>转储的资源</p>
                     * @param _resource <p>转储的资源</p>
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
                     * <p>返回数量，默认为20，最大值为100 (超过100限制为100)</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页偏移量，默认为0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>过滤条件，按照 TaskName 过滤，支持模糊查询</p>
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * <p>转储的目标类型</p>
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * <p>任务类型，SOURCE数据接入，SINK数据流出</p>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>转储的源类型</p>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>转储的资源</p>
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEDATAHUBTASKSREQUEST_H_
