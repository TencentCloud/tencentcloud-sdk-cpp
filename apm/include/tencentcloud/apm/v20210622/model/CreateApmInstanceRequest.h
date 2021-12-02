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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_CREATEAPMINSTANCEREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_CREATEAPMINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/ApmTag.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * CreateApmInstance请求参数结构体
                */
                class CreateApmInstanceRequest : public AbstractModel
                {
                public:
                    CreateApmInstanceRequest();
                    ~CreateApmInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例名
                     * @return Name 实例名
                     */
                    std::string GetName() const;

                    /**
                     * 设置实例名
                     * @param Name 实例名
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取实例描述信息
                     * @return Description 实例描述信息
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置实例描述信息
                     * @param Description 实例描述信息
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Trace数据保存时长
                     * @return TraceDuration Trace数据保存时长
                     */
                    int64_t GetTraceDuration() const;

                    /**
                     * 设置Trace数据保存时长
                     * @param TraceDuration Trace数据保存时长
                     */
                    void SetTraceDuration(const int64_t& _traceDuration);

                    /**
                     * 判断参数 TraceDuration 是否已赋值
                     * @return TraceDuration 是否已赋值
                     */
                    bool TraceDurationHasBeenSet() const;

                    /**
                     * 获取标签列表
                     * @return Tags 标签列表
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置标签列表
                     * @param Tags 标签列表
                     */
                    void SetTags(const std::vector<ApmTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取实例上报额度值
                     * @return SpanDailyCounters 实例上报额度值
                     */
                    uint64_t GetSpanDailyCounters() const;

                    /**
                     * 设置实例上报额度值
                     * @param SpanDailyCounters 实例上报额度值
                     */
                    void SetSpanDailyCounters(const uint64_t& _spanDailyCounters);

                    /**
                     * 判断参数 SpanDailyCounters 是否已赋值
                     * @return SpanDailyCounters 是否已赋值
                     */
                    bool SpanDailyCountersHasBeenSet() const;

                private:

                    /**
                     * 实例名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 实例描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Trace数据保存时长
                     */
                    int64_t m_traceDuration;
                    bool m_traceDurationHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 实例上报额度值
                     */
                    uint64_t m_spanDailyCounters;
                    bool m_spanDailyCountersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_CREATEAPMINSTANCEREQUEST_H_
