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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBESPANTREEBYIDREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBESPANTREEBYIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/Filter.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeSpanTreeByID请求参数结构体
                */
                class DescribeSpanTreeByIDRequest : public AbstractModel
                {
                public:
                    DescribeSpanTreeByIDRequest();
                    ~DescribeSpanTreeByIDRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>业务系统 ID</p>
                     * @return InstanceId <p>业务系统 ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>业务系统 ID</p>
                     * @param _instanceId <p>业务系统 ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>TraceID</p>
                     * @return Filters <p>TraceID</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>TraceID</p>
                     * @param _filters <p>TraceID</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>Span查询开始时间戳（单位:秒）</p>
                     * @return StartTime <p>Span查询开始时间戳（单位:秒）</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>Span查询开始时间戳（单位:秒）</p>
                     * @param _startTime <p>Span查询开始时间戳（单位:秒）</p>
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Span查询结束时间戳（单位:秒）</p>
                     * @return EndTime <p>Span查询结束时间戳（单位:秒）</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>Span查询结束时间戳（单位:秒）</p>
                     * @param _endTime <p>Span查询结束时间戳（单位:秒）</p>
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>代表请求的是否为完整瀑布图</p>
                     * @return IsFold <p>代表请求的是否为完整瀑布图</p>
                     * 
                     */
                    bool GetIsFold() const;

                    /**
                     * 设置<p>代表请求的是否为完整瀑布图</p>
                     * @param _isFold <p>代表请求的是否为完整瀑布图</p>
                     * 
                     */
                    void SetIsFold(const bool& _isFold);

                    /**
                     * 判断参数 IsFold 是否已赋值
                     * @return IsFold 是否已赋值
                     * 
                     */
                    bool IsFoldHasBeenSet() const;

                    /**
                     * 获取<p>开启关键调用视图</p>
                     * @return EntrySpanSelected <p>开启关键调用视图</p>
                     * 
                     */
                    bool GetEntrySpanSelected() const;

                    /**
                     * 设置<p>开启关键调用视图</p>
                     * @param _entrySpanSelected <p>开启关键调用视图</p>
                     * 
                     */
                    void SetEntrySpanSelected(const bool& _entrySpanSelected);

                    /**
                     * 判断参数 EntrySpanSelected 是否已赋值
                     * @return EntrySpanSelected 是否已赋值
                     * 
                     */
                    bool EntrySpanSelectedHasBeenSet() const;

                    /**
                     * 获取<p>关注的SpanId</p>
                     * @return FocusSpanId <p>关注的SpanId</p>
                     * 
                     */
                    std::string GetFocusSpanId() const;

                    /**
                     * 设置<p>关注的SpanId</p>
                     * @param _focusSpanId <p>关注的SpanId</p>
                     * 
                     */
                    void SetFocusSpanId(const std::string& _focusSpanId);

                    /**
                     * 判断参数 FocusSpanId 是否已赋值
                     * @return FocusSpanId 是否已赋值
                     * 
                     */
                    bool FocusSpanIdHasBeenSet() const;

                    /**
                     * 获取<p>过滤视图的Tag列表</p>
                     * @return FilterViewTagKeyList <p>过滤视图的Tag列表</p>
                     * 
                     */
                    std::vector<std::string> GetFilterViewTagKeyList() const;

                    /**
                     * 设置<p>过滤视图的Tag列表</p>
                     * @param _filterViewTagKeyList <p>过滤视图的Tag列表</p>
                     * 
                     */
                    void SetFilterViewTagKeyList(const std::vector<std::string>& _filterViewTagKeyList);

                    /**
                     * 判断参数 FilterViewTagKeyList 是否已赋值
                     * @return FilterViewTagKeyList 是否已赋值
                     * 
                     */
                    bool FilterViewTagKeyListHasBeenSet() const;

                    /**
                     * 获取<p>是否开启云资源关联</p>
                     * @return EnableResourceLink <p>是否开启云资源关联</p>
                     * 
                     */
                    bool GetEnableResourceLink() const;

                    /**
                     * 设置<p>是否开启云资源关联</p>
                     * @param _enableResourceLink <p>是否开启云资源关联</p>
                     * 
                     */
                    void SetEnableResourceLink(const bool& _enableResourceLink);

                    /**
                     * 判断参数 EnableResourceLink 是否已赋值
                     * @return EnableResourceLink 是否已赋值
                     * 
                     */
                    bool EnableResourceLinkHasBeenSet() const;

                private:

                    /**
                     * <p>业务系统 ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>TraceID</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Span查询开始时间戳（单位:秒）</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Span查询结束时间戳（单位:秒）</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>代表请求的是否为完整瀑布图</p>
                     */
                    bool m_isFold;
                    bool m_isFoldHasBeenSet;

                    /**
                     * <p>开启关键调用视图</p>
                     */
                    bool m_entrySpanSelected;
                    bool m_entrySpanSelectedHasBeenSet;

                    /**
                     * <p>关注的SpanId</p>
                     */
                    std::string m_focusSpanId;
                    bool m_focusSpanIdHasBeenSet;

                    /**
                     * <p>过滤视图的Tag列表</p>
                     */
                    std::vector<std::string> m_filterViewTagKeyList;
                    bool m_filterViewTagKeyListHasBeenSet;

                    /**
                     * <p>是否开启云资源关联</p>
                     */
                    bool m_enableResourceLink;
                    bool m_enableResourceLinkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBESPANTREEBYIDREQUEST_H_
