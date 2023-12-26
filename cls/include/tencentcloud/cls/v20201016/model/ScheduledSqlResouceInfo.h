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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SCHEDULEDSQLRESOUCEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SCHEDULEDSQLRESOUCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/MetricLabel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ScheduledSql的资源信息
                */
                class ScheduledSqlResouceInfo : public AbstractModel
                {
                public:
                    ScheduledSqlResouceInfo();
                    ~ScheduledSqlResouceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目标主题id
                     * @return TopicId 目标主题id
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置目标主题id
                     * @param _topicId 目标主题id
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取主题的地域信息
                     * @return Region 主题的地域信息
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置主题的地域信息
                     * @param _region 主题的地域信息
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取主题类型：0为日志主题，1为指标主题
                     * @return BizType 主题类型：0为日志主题，1为指标主题
                     * 
                     */
                    int64_t GetBizType() const;

                    /**
                     * 设置主题类型：0为日志主题，1为指标主题
                     * @param _bizType 主题类型：0为日志主题，1为指标主题
                     * 
                     */
                    void SetBizType(const int64_t& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取指标名称。当BizType为1时，MetricName需要填写
                     * @return MetricName 指标名称。当BizType为1时，MetricName需要填写
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名称。当BizType为1时，MetricName需要填写
                     * @param _metricName 指标名称。当BizType为1时，MetricName需要填写
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取指标名称
BizType为1时，优先使用MetricNames字段多指标只能填充到MetricNames字段，单指标建议填充到MetricName字段
                     * @return MetricNames 指标名称
BizType为1时，优先使用MetricNames字段多指标只能填充到MetricNames字段，单指标建议填充到MetricName字段
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置指标名称
BizType为1时，优先使用MetricNames字段多指标只能填充到MetricNames字段，单指标建议填充到MetricName字段
                     * @param _metricNames 指标名称
BizType为1时，优先使用MetricNames字段多指标只能填充到MetricNames字段，单指标建议填充到MetricName字段
                     * 
                     */
                    void SetMetricNames(const std::vector<std::string>& _metricNames);

                    /**
                     * 判断参数 MetricNames 是否已赋值
                     * @return MetricNames 是否已赋值
                     * 
                     */
                    bool MetricNamesHasBeenSet() const;

                    /**
                     * 获取指标维度，不接受时间类型。
                     * @return MetricLabels 指标维度，不接受时间类型。
                     * 
                     */
                    std::vector<std::string> GetMetricLabels() const;

                    /**
                     * 设置指标维度，不接受时间类型。
                     * @param _metricLabels 指标维度，不接受时间类型。
                     * 
                     */
                    void SetMetricLabels(const std::vector<std::string>& _metricLabels);

                    /**
                     * 判断参数 MetricLabels 是否已赋值
                     * @return MetricLabels 是否已赋值
                     * 
                     */
                    bool MetricLabelsHasBeenSet() const;

                    /**
                     * 获取指标时间戳，默认值为SQL查询时间范围的左侧时间点，您也可以指定其他字段（类型为uinx时间、TimeStamp，精度毫秒）为指标时间戳。
                     * @return CustomTime 指标时间戳，默认值为SQL查询时间范围的左侧时间点，您也可以指定其他字段（类型为uinx时间、TimeStamp，精度毫秒）为指标时间戳。
                     * 
                     */
                    std::string GetCustomTime() const;

                    /**
                     * 设置指标时间戳，默认值为SQL查询时间范围的左侧时间点，您也可以指定其他字段（类型为uinx时间、TimeStamp，精度毫秒）为指标时间戳。
                     * @param _customTime 指标时间戳，默认值为SQL查询时间范围的左侧时间点，您也可以指定其他字段（类型为uinx时间、TimeStamp，精度毫秒）为指标时间戳。
                     * 
                     */
                    void SetCustomTime(const std::string& _customTime);

                    /**
                     * 判断参数 CustomTime 是否已赋值
                     * @return CustomTime 是否已赋值
                     * 
                     */
                    bool CustomTimeHasBeenSet() const;

                    /**
                     * 获取除了MetricLabels，您还可以使用该参数，为指标补充静态的维度。
维度名以字母或下划线开头，后面可以跟字母、数字或下划线，长度小于等于1024 字节
                     * @return CustomMetricLabels 除了MetricLabels，您还可以使用该参数，为指标补充静态的维度。
维度名以字母或下划线开头，后面可以跟字母、数字或下划线，长度小于等于1024 字节
                     * 
                     */
                    std::vector<MetricLabel> GetCustomMetricLabels() const;

                    /**
                     * 设置除了MetricLabels，您还可以使用该参数，为指标补充静态的维度。
维度名以字母或下划线开头，后面可以跟字母、数字或下划线，长度小于等于1024 字节
                     * @param _customMetricLabels 除了MetricLabels，您还可以使用该参数，为指标补充静态的维度。
维度名以字母或下划线开头，后面可以跟字母、数字或下划线，长度小于等于1024 字节
                     * 
                     */
                    void SetCustomMetricLabels(const std::vector<MetricLabel>& _customMetricLabels);

                    /**
                     * 判断参数 CustomMetricLabels 是否已赋值
                     * @return CustomMetricLabels 是否已赋值
                     * 
                     */
                    bool CustomMetricLabelsHasBeenSet() const;

                private:

                    /**
                     * 目标主题id
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 主题的地域信息
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 主题类型：0为日志主题，1为指标主题
                     */
                    int64_t m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 指标名称。当BizType为1时，MetricName需要填写
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 指标名称
BizType为1时，优先使用MetricNames字段多指标只能填充到MetricNames字段，单指标建议填充到MetricName字段
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * 指标维度，不接受时间类型。
                     */
                    std::vector<std::string> m_metricLabels;
                    bool m_metricLabelsHasBeenSet;

                    /**
                     * 指标时间戳，默认值为SQL查询时间范围的左侧时间点，您也可以指定其他字段（类型为uinx时间、TimeStamp，精度毫秒）为指标时间戳。
                     */
                    std::string m_customTime;
                    bool m_customTimeHasBeenSet;

                    /**
                     * 除了MetricLabels，您还可以使用该参数，为指标补充静态的维度。
维度名以字母或下划线开头，后面可以跟字母、数字或下划线，长度小于等于1024 字节
                     */
                    std::vector<MetricLabel> m_customMetricLabels;
                    bool m_customMetricLabelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SCHEDULEDSQLRESOUCEINFO_H_
