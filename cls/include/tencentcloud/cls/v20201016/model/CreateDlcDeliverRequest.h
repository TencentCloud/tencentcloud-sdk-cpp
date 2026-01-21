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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDLCDELIVERREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDLCDELIVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/DlcInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateDlcDeliver请求参数结构体
                */
                class CreateDlcDeliverRequest : public AbstractModel
                {
                public:
                    CreateDlcDeliverRequest();
                    ~CreateDlcDeliverRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>日志主题id。</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     * @return TopicId <p>日志主题id。</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>日志主题id。</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     * @param _topicId <p>日志主题id。</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
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
                     * 获取<p>名称：长度不超过64字符，以字母开头，接受0-9,a-z,A-Z, _,-,中文字符。</p>
                     * @return Name <p>名称：长度不超过64字符，以字母开头，接受0-9,a-z,A-Z, _,-,中文字符。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称：长度不超过64字符，以字母开头，接受0-9,a-z,A-Z, _,-,中文字符。</p>
                     * @param _name <p>名称：长度不超过64字符，以字母开头，接受0-9,a-z,A-Z, _,-,中文字符。</p>
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
                     * 获取<p>投递类型。0:批投递,1:实时投递</p>
                     * @return DeliverType <p>投递类型。0:批投递,1:实时投递</p>
                     * 
                     */
                    uint64_t GetDeliverType() const;

                    /**
                     * 设置<p>投递类型。0:批投递,1:实时投递</p>
                     * @param _deliverType <p>投递类型。0:批投递,1:实时投递</p>
                     * 
                     */
                    void SetDeliverType(const uint64_t& _deliverType);

                    /**
                     * 判断参数 DeliverType 是否已赋值
                     * @return DeliverType 是否已赋值
                     * 
                     */
                    bool DeliverTypeHasBeenSet() const;

                    /**
                     * 获取<p>投递时间范围的开始时间</p>
                     * @return StartTime <p>投递时间范围的开始时间</p>
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置<p>投递时间范围的开始时间</p>
                     * @param _startTime <p>投递时间范围的开始时间</p>
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>dlc配置信息</p>
                     * @return DlcInfo <p>dlc配置信息</p>
                     * 
                     */
                    DlcInfo GetDlcInfo() const;

                    /**
                     * 设置<p>dlc配置信息</p>
                     * @param _dlcInfo <p>dlc配置信息</p>
                     * 
                     */
                    void SetDlcInfo(const DlcInfo& _dlcInfo);

                    /**
                     * 判断参数 DlcInfo 是否已赋值
                     * @return DlcInfo 是否已赋值
                     * 
                     */
                    bool DlcInfoHasBeenSet() const;

                    /**
                     * 获取<p>投递文件大小,单位MB。 DeliverType=0时必填，范围 5&lt;= MaxSize &lt;= 256。</p>
                     * @return MaxSize <p>投递文件大小,单位MB。 DeliverType=0时必填，范围 5&lt;= MaxSize &lt;= 256。</p>
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置<p>投递文件大小,单位MB。 DeliverType=0时必填，范围 5&lt;= MaxSize &lt;= 256。</p>
                     * @param _maxSize <p>投递文件大小,单位MB。 DeliverType=0时必填，范围 5&lt;= MaxSize &lt;= 256。</p>
                     * 
                     */
                    void SetMaxSize(const uint64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取<p>投递间隔，单位秒。 DeliverType=0时必填，范围 300&lt;= Interval &lt;=900。</p>
                     * @return Interval <p>投递间隔，单位秒。 DeliverType=0时必填，范围 300&lt;= Interval &lt;=900。</p>
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置<p>投递间隔，单位秒。 DeliverType=0时必填，范围 300&lt;= Interval &lt;=900。</p>
                     * @param _interval <p>投递间隔，单位秒。 DeliverType=0时必填，范围 300&lt;= Interval &lt;=900。</p>
                     * 
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取<p>投递时间范围的结束时间。 如果为空，则表示不限时。EndTime不为空时，需要大于StartTime。</p>
                     * @return EndTime <p>投递时间范围的结束时间。 如果为空，则表示不限时。EndTime不为空时，需要大于StartTime。</p>
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置<p>投递时间范围的结束时间。 如果为空，则表示不限时。EndTime不为空时，需要大于StartTime。</p>
                     * @param _endTime <p>投递时间范围的结束时间。 如果为空，则表示不限时。EndTime不为空时，需要大于StartTime。</p>
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启投递服务日志。1关闭，2开启。默认开启</p>
                     * @return HasServicesLog <p>是否开启投递服务日志。1关闭，2开启。默认开启</p>
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置<p>是否开启投递服务日志。1关闭，2开启。默认开启</p>
                     * @param _hasServicesLog <p>是否开启投递服务日志。1关闭，2开启。默认开启</p>
                     * 
                     */
                    void SetHasServicesLog(const uint64_t& _hasServicesLog);

                    /**
                     * 判断参数 HasServicesLog 是否已赋值
                     * @return HasServicesLog 是否已赋值
                     * 
                     */
                    bool HasServicesLogHasBeenSet() const;

                private:

                    /**
                     * <p>日志主题id。</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>名称：长度不超过64字符，以字母开头，接受0-9,a-z,A-Z, _,-,中文字符。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>投递类型。0:批投递,1:实时投递</p>
                     */
                    uint64_t m_deliverType;
                    bool m_deliverTypeHasBeenSet;

                    /**
                     * <p>投递时间范围的开始时间</p>
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>dlc配置信息</p>
                     */
                    DlcInfo m_dlcInfo;
                    bool m_dlcInfoHasBeenSet;

                    /**
                     * <p>投递文件大小,单位MB。 DeliverType=0时必填，范围 5&lt;= MaxSize &lt;= 256。</p>
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * <p>投递间隔，单位秒。 DeliverType=0时必填，范围 300&lt;= Interval &lt;=900。</p>
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>投递时间范围的结束时间。 如果为空，则表示不限时。EndTime不为空时，需要大于StartTime。</p>
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>是否开启投递服务日志。1关闭，2开启。默认开启</p>
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEDLCDELIVERREQUEST_H_
