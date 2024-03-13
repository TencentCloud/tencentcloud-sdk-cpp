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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESCHEDULEDSQLINFOREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESCHEDULEDSQLINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Filter.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeScheduledSqlInfo请求参数结构体
                */
                class DescribeScheduledSqlInfoRequest : public AbstractModel
                {
                public:
                    DescribeScheduledSqlInfoRequest();
                    ~DescribeScheduledSqlInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页的偏移量，默认值为0。
                     * @return Offset 分页的偏移量，默认值为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页的偏移量，默认值为0。
                     * @param _offset 分页的偏移量，默认值为0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页单页限制数目，默认值为20，最大值100。
                     * @return Limit 分页单页限制数目，默认值为20，最大值100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页单页限制数目，默认值为20，最大值100。
                     * @param _limit 分页单页限制数目，默认值为20，最大值100。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取任务名称。
                     * @return Name 任务名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务名称。
                     * @param _name 任务名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取任务id。
                     * @return TaskId 任务id。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id。
                     * @param _taskId 任务id。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<li>srcTopicName按照【源日志主题名称】进行过滤，模糊匹配。类型：String。必选：否</li>
<li>dstTopicName按照【目标日志主题名称】进行过滤，模糊匹配。类型：String。必选：否</li>
<li>srcTopicId按照【源日志主题ID】进行过滤。类型：String。必选：否</li>
<li>dstTopicId按照【目标日志主题ID】进行过滤。类型：String。必选：否</li>
<li>bizType按照【主题类型】进行过滤，0：日志主题；1：指标主题。类型：String。必选：否</li>
<li>status按照【任务状态】进行过滤，1：运行；2：停止。类型：String。必选：否</li>
<li>taskName按照【任务名称】进行过滤，模糊匹配。类型：String。必选：否</li>
<li>taskId按照【任务ID】进行过滤，模糊匹配。类型：String。必选：否</li>

                     * @return Filters <li>srcTopicName按照【源日志主题名称】进行过滤，模糊匹配。类型：String。必选：否</li>
<li>dstTopicName按照【目标日志主题名称】进行过滤，模糊匹配。类型：String。必选：否</li>
<li>srcTopicId按照【源日志主题ID】进行过滤。类型：String。必选：否</li>
<li>dstTopicId按照【目标日志主题ID】进行过滤。类型：String。必选：否</li>
<li>bizType按照【主题类型】进行过滤，0：日志主题；1：指标主题。类型：String。必选：否</li>
<li>status按照【任务状态】进行过滤，1：运行；2：停止。类型：String。必选：否</li>
<li>taskName按照【任务名称】进行过滤，模糊匹配。类型：String。必选：否</li>
<li>taskId按照【任务ID】进行过滤，模糊匹配。类型：String。必选：否</li>

                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li>srcTopicName按照【源日志主题名称】进行过滤，模糊匹配。类型：String。必选：否</li>
<li>dstTopicName按照【目标日志主题名称】进行过滤，模糊匹配。类型：String。必选：否</li>
<li>srcTopicId按照【源日志主题ID】进行过滤。类型：String。必选：否</li>
<li>dstTopicId按照【目标日志主题ID】进行过滤。类型：String。必选：否</li>
<li>bizType按照【主题类型】进行过滤，0：日志主题；1：指标主题。类型：String。必选：否</li>
<li>status按照【任务状态】进行过滤，1：运行；2：停止。类型：String。必选：否</li>
<li>taskName按照【任务名称】进行过滤，模糊匹配。类型：String。必选：否</li>
<li>taskId按照【任务ID】进行过滤，模糊匹配。类型：String。必选：否</li>

                     * @param _filters <li>srcTopicName按照【源日志主题名称】进行过滤，模糊匹配。类型：String。必选：否</li>
<li>dstTopicName按照【目标日志主题名称】进行过滤，模糊匹配。类型：String。必选：否</li>
<li>srcTopicId按照【源日志主题ID】进行过滤。类型：String。必选：否</li>
<li>dstTopicId按照【目标日志主题ID】进行过滤。类型：String。必选：否</li>
<li>bizType按照【主题类型】进行过滤，0：日志主题；1：指标主题。类型：String。必选：否</li>
<li>status按照【任务状态】进行过滤，1：运行；2：停止。类型：String。必选：否</li>
<li>taskName按照【任务名称】进行过滤，模糊匹配。类型：String。必选：否</li>
<li>taskId按照【任务ID】进行过滤，模糊匹配。类型：String。必选：否</li>

                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 分页的偏移量，默认值为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页单页限制数目，默认值为20，最大值100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 任务名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 任务id。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <li>srcTopicName按照【源日志主题名称】进行过滤，模糊匹配。类型：String。必选：否</li>
<li>dstTopicName按照【目标日志主题名称】进行过滤，模糊匹配。类型：String。必选：否</li>
<li>srcTopicId按照【源日志主题ID】进行过滤。类型：String。必选：否</li>
<li>dstTopicId按照【目标日志主题ID】进行过滤。类型：String。必选：否</li>
<li>bizType按照【主题类型】进行过滤，0：日志主题；1：指标主题。类型：String。必选：否</li>
<li>status按照【任务状态】进行过滤，1：运行；2：停止。类型：String。必选：否</li>
<li>taskName按照【任务名称】进行过滤，模糊匹配。类型：String。必选：否</li>
<li>taskId按照【任务ID】进行过滤，模糊匹配。类型：String。必选：否</li>

                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBESCHEDULEDSQLINFOREQUEST_H_
