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
                     * 获取业务系统名
                     * @return Name 业务系统名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置业务系统名
                     * @param _name 业务系统名
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
                     * 获取业务系统描述信息
                     * @return Description 业务系统描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置业务系统描述信息
                     * @param _description 业务系统描述信息
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Trace 数据保存时长（单位：天，默认存储时长为3天）
                     * @return TraceDuration Trace 数据保存时长（单位：天，默认存储时长为3天）
                     * 
                     */
                    int64_t GetTraceDuration() const;

                    /**
                     * 设置Trace 数据保存时长（单位：天，默认存储时长为3天）
                     * @param _traceDuration Trace 数据保存时长（单位：天，默认存储时长为3天）
                     * 
                     */
                    void SetTraceDuration(const int64_t& _traceDuration);

                    /**
                     * 判断参数 TraceDuration 是否已赋值
                     * @return TraceDuration 是否已赋值
                     * 
                     */
                    bool TraceDurationHasBeenSet() const;

                    /**
                     * 获取业务系统 Tag 列表
                     * @return Tags 业务系统 Tag 列表
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置业务系统 Tag 列表
                     * @param _tags 业务系统 Tag 列表
                     * 
                     */
                    void SetTags(const std::vector<ApmTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取业务系统上报额度值，默认赋值为0表示不限制上报额度，已废弃
                     * @return SpanDailyCounters 业务系统上报额度值，默认赋值为0表示不限制上报额度，已废弃
                     * 
                     */
                    uint64_t GetSpanDailyCounters() const;

                    /**
                     * 设置业务系统上报额度值，默认赋值为0表示不限制上报额度，已废弃
                     * @param _spanDailyCounters 业务系统上报额度值，默认赋值为0表示不限制上报额度，已废弃
                     * 
                     */
                    void SetSpanDailyCounters(const uint64_t& _spanDailyCounters);

                    /**
                     * 判断参数 SpanDailyCounters 是否已赋值
                     * @return SpanDailyCounters 是否已赋值
                     * 
                     */
                    bool SpanDailyCountersHasBeenSet() const;

                    /**
                     * 获取业务系统的计费模式（0=按量付费，1=预付费）
                     * @return PayMode 业务系统的计费模式（0=按量付费，1=预付费）
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置业务系统的计费模式（0=按量付费，1=预付费）
                     * @param _payMode 业务系统的计费模式（0=按量付费，1=预付费）
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
                     * 获取是否为免费版业务系统（0=付费版；1=TSF 受限免费版；2=免费版）
                     * @return Free 是否为免费版业务系统（0=付费版；1=TSF 受限免费版；2=免费版）
                     * 
                     */
                    int64_t GetFree() const;

                    /**
                     * 设置是否为免费版业务系统（0=付费版；1=TSF 受限免费版；2=免费版）
                     * @param _free 是否为免费版业务系统（0=付费版；1=TSF 受限免费版；2=免费版）
                     * 
                     */
                    void SetFree(const int64_t& _free);

                    /**
                     * 判断参数 Free 是否已赋值
                     * @return Free 是否已赋值
                     * 
                     */
                    bool FreeHasBeenSet() const;

                private:

                    /**
                     * 业务系统名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 业务系统描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Trace 数据保存时长（单位：天，默认存储时长为3天）
                     */
                    int64_t m_traceDuration;
                    bool m_traceDurationHasBeenSet;

                    /**
                     * 业务系统 Tag 列表
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 业务系统上报额度值，默认赋值为0表示不限制上报额度，已废弃
                     */
                    uint64_t m_spanDailyCounters;
                    bool m_spanDailyCountersHasBeenSet;

                    /**
                     * 业务系统的计费模式（0=按量付费，1=预付费）
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 是否为免费版业务系统（0=付费版；1=TSF 受限免费版；2=免费版）
                     */
                    int64_t m_free;
                    bool m_freeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_CREATEAPMINSTANCEREQUEST_H_
