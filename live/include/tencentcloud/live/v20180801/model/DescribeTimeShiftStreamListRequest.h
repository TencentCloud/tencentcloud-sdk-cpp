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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBETIMESHIFTSTREAMLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBETIMESHIFTSTREAMLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeTimeShiftStreamList请求参数结构体
                */
                class DescribeTimeShiftStreamListRequest : public AbstractModel
                {
                public:
                    DescribeTimeShiftStreamListRequest();
                    ~DescribeTimeShiftStreamListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询范围起始时间，Unix 时间戳。
                     * @return StartTime 查询范围起始时间，Unix 时间戳。
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置查询范围起始时间，Unix 时间戳。
                     * @param _startTime 查询范围起始时间，Unix 时间戳。
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
                     * 获取查询范围结束时间，Unix 时间戳。
                     * @return EndTime 查询范围结束时间，Unix 时间戳。
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置查询范围结束时间，Unix 时间戳。
                     * @param _endTime 查询范围结束时间，Unix 时间戳。
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
                     * 获取流名称。
                     * @return StreamName 流名称。
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置流名称。
                     * @param _streamName 流名称。
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取推流域名。
                     * @return Domain 推流域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置推流域名。
                     * @param _domain 推流域名。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取推流域名所属域名组。
                     * @return DomainGroup 推流域名所属域名组。
                     * 
                     */
                    std::string GetDomainGroup() const;

                    /**
                     * 设置推流域名所属域名组。
                     * @param _domainGroup 推流域名所属域名组。
                     * 
                     */
                    void SetDomainGroup(const std::string& _domainGroup);

                    /**
                     * 判断参数 DomainGroup 是否已赋值
                     * @return DomainGroup 是否已赋值
                     * 
                     */
                    bool DomainGroupHasBeenSet() const;

                    /**
                     * 获取用户指定要返回的最大结果数，取值范围[0,100]，不指定或者指定为0时，API 
默认值为100。指定超过100时，API 强制使用100。指定值为负数时，接口返回错误。
                     * @return PageSize 用户指定要返回的最大结果数，取值范围[0,100]，不指定或者指定为0时，API 
默认值为100。指定超过100时，API 强制使用100。指定值为负数时，接口返回错误。
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置用户指定要返回的最大结果数，取值范围[0,100]，不指定或者指定为0时，API 
默认值为100。指定超过100时，API 强制使用100。指定值为负数时，接口返回错误。
                     * @param _pageSize 用户指定要返回的最大结果数，取值范围[0,100]，不指定或者指定为0时，API 
默认值为100。指定超过100时，API 强制使用100。指定值为负数时，接口返回错误。
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取指定拉取的页码，不传时默认为1。
                     * @return PageNum 指定拉取的页码，不传时默认为1。
                     * 
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 设置指定拉取的页码，不传时默认为1。
                     * @param _pageNum 指定拉取的页码，不传时默认为1。
                     * 
                     */
                    void SetPageNum(const int64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                private:

                    /**
                     * 查询范围起始时间，Unix 时间戳。
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询范围结束时间，Unix 时间戳。
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 流名称。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * 推流域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 推流域名所属域名组。
                     */
                    std::string m_domainGroup;
                    bool m_domainGroupHasBeenSet;

                    /**
                     * 用户指定要返回的最大结果数，取值范围[0,100]，不指定或者指定为0时，API 
默认值为100。指定超过100时，API 强制使用100。指定值为负数时，接口返回错误。
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 指定拉取的页码，不传时默认为1。
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBETIMESHIFTSTREAMLISTREQUEST_H_
