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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCANTASKDETAILSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCANTASKDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeScanTaskDetails请求参数结构体
                */
                class DescribeScanTaskDetailsRequest : public AbstractModel
                {
                public:
                    DescribeScanTaskDetailsRequest();
                    ~DescribeScanTaskDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块类型 当前提供 Malware 木马 , Vul 漏洞 , Baseline 基线
                     * @return ModuleType 模块类型 当前提供 Malware 木马 , Vul 漏洞 , Baseline 基线
                     * 
                     */
                    std::string GetModuleType() const;

                    /**
                     * 设置模块类型 当前提供 Malware 木马 , Vul 漏洞 , Baseline 基线
                     * @param _moduleType 模块类型 当前提供 Malware 木马 , Vul 漏洞 , Baseline 基线
                     * 
                     */
                    void SetModuleType(const std::string& _moduleType);

                    /**
                     * 判断参数 ModuleType 是否已赋值
                     * @return ModuleType 是否已赋值
                     * 
                     */
                    bool ModuleTypeHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取过滤参数
                     * @return Filters 过滤参数
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置过滤参数
                     * @param _filters 过滤参数
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取需要返回的数量，最大值为100
                     * @return Limit 需要返回的数量，最大值为100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置需要返回的数量，最大值为100
                     * @param _limit 需要返回的数量，最大值为100
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
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 模块类型 当前提供 Malware 木马 , Vul 漏洞 , Baseline 基线
                     */
                    std::string m_moduleType;
                    bool m_moduleTypeHasBeenSet;

                    /**
                     * 任务ID
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 过滤参数
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 需要返回的数量，最大值为100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESCANTASKDETAILSREQUEST_H_
