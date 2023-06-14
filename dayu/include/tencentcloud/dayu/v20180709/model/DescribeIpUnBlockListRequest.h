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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEIPUNBLOCKLISTREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEIPUNBLOCKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/Paging.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeIpUnBlockList请求参数结构体
                */
                class DescribeIpUnBlockListRequest : public AbstractModel
                {
                public:
                    DescribeIpUnBlockListRequest();
                    ~DescribeIpUnBlockListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间
                     * @return BeginTime 开始时间
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置开始时间
                     * @param _beginTime 开始时间
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取IP（不为空时，进行IP过滤）
                     * @return Ip IP（不为空时，进行IP过滤）
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP（不为空时，进行IP过滤）
                     * @param _ip IP（不为空时，进行IP过滤）
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取分页参数（不为空时，进行分页查询），此字段后面会弃用，请用Limit和Offset字段代替；
                     * @return Paging 分页参数（不为空时，进行分页查询），此字段后面会弃用，请用Limit和Offset字段代替；
                     * 
                     */
                    Paging GetPaging() const;

                    /**
                     * 设置分页参数（不为空时，进行分页查询），此字段后面会弃用，请用Limit和Offset字段代替；
                     * @param _paging 分页参数（不为空时，进行分页查询），此字段后面会弃用，请用Limit和Offset字段代替；
                     * 
                     */
                    void SetPaging(const Paging& _paging);

                    /**
                     * 判断参数 Paging 是否已赋值
                     * @return Paging 是否已赋值
                     * 
                     */
                    bool PagingHasBeenSet() const;

                    /**
                     * 获取一页条数，填0表示不分页
                     * @return Limit 一页条数，填0表示不分页
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置一页条数，填0表示不分页
                     * @param _limit 一页条数，填0表示不分页
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
                     * 获取页起始偏移，取值为(页码-1)*一页条数
                     * @return Offset 页起始偏移，取值为(页码-1)*一页条数
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置页起始偏移，取值为(页码-1)*一页条数
                     * @param _offset 页起始偏移，取值为(页码-1)*一页条数
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
                     * 开始时间
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * IP（不为空时，进行IP过滤）
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 分页参数（不为空时，进行分页查询），此字段后面会弃用，请用Limit和Offset字段代替；
                     */
                    Paging m_paging;
                    bool m_pagingHasBeenSet;

                    /**
                     * 一页条数，填0表示不分页
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 页起始偏移，取值为(页码-1)*一页条数
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEIPUNBLOCKLISTREQUEST_H_
