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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEGROUPLISTREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEGROUPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * DescribeGroupList请求参数结构体
                */
                class DescribeGroupListRequest : public AbstractModel
                {
                public:
                    DescribeGroupListRequest();
                    ~DescribeGroupListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取低代码平台应用ID
                     * @return SdkAppId 低代码平台应用ID
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置低代码平台应用ID
                     * @param _sdkAppId 低代码平台应用ID
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取分页查询当前页数，默认从1开始递增。
                     * @return Page 分页查询当前页数，默认从1开始递增。
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置分页查询当前页数，默认从1开始递增。
                     * @param _page 分页查询当前页数，默认从1开始递增。
                     * 
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取每页数据量，默认20，最大1000。
                     * @return Limit 每页数据量，默认20，最大1000。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页数据量，默认20，最大1000。
                     * @param _limit 每页数据量，默认20，最大1000。
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
                     * 获取主讲人ID筛选群组，与MemberId有且只有一个,都传时以此字段获取
                     * @return TeacherId 主讲人ID筛选群组，与MemberId有且只有一个,都传时以此字段获取
                     * 
                     */
                    std::string GetTeacherId() const;

                    /**
                     * 设置主讲人ID筛选群组，与MemberId有且只有一个,都传时以此字段获取
                     * @param _teacherId 主讲人ID筛选群组，与MemberId有且只有一个,都传时以此字段获取
                     * 
                     */
                    void SetTeacherId(const std::string& _teacherId);

                    /**
                     * 判断参数 TeacherId 是否已赋值
                     * @return TeacherId 是否已赋值
                     * 
                     */
                    bool TeacherIdHasBeenSet() const;

                    /**
                     * 获取成员ID刷选群组，与TeacherId有且只有一个
                     * @return MemberId 成员ID刷选群组，与TeacherId有且只有一个
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置成员ID刷选群组，与TeacherId有且只有一个
                     * @param _memberId 成员ID刷选群组，与TeacherId有且只有一个
                     * 
                     */
                    void SetMemberId(const std::string& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * 低代码平台应用ID
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 分页查询当前页数，默认从1开始递增。
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 每页数据量，默认20，最大1000。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 主讲人ID筛选群组，与MemberId有且只有一个,都传时以此字段获取
                     */
                    std::string m_teacherId;
                    bool m_teacherIdHasBeenSet;

                    /**
                     * 成员ID刷选群组，与TeacherId有且只有一个
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEGROUPLISTREQUEST_H_
