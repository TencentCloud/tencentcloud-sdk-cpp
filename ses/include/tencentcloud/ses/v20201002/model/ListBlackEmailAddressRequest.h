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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_LISTBLACKEMAILADDRESSREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_LISTBLACKEMAILADDRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * ListBlackEmailAddress请求参数结构体
                */
                class ListBlackEmailAddressRequest : public AbstractModel
                {
                public:
                    ListBlackEmailAddressRequest();
                    ~ListBlackEmailAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始日期
                     * @return StartDate 开始日期
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置开始日期
                     * @param StartDate 开始日期
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取结束日期
                     * @return EndDate 结束日期
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置结束日期
                     * @param EndDate 结束日期
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取规范，配合Offset使用
                     * @return Limit 规范，配合Offset使用
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置规范，配合Offset使用
                     * @param Limit 规范，配合Offset使用
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取规范，配合Limit使用
                     * @return Offset 规范，配合Limit使用
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置规范，配合Limit使用
                     * @param Offset 规范，配合Limit使用
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取可以指定邮箱进行查询
                     * @return EmailAddress 可以指定邮箱进行查询
                     */
                    std::string GetEmailAddress() const;

                    /**
                     * 设置可以指定邮箱进行查询
                     * @param EmailAddress 可以指定邮箱进行查询
                     */
                    void SetEmailAddress(const std::string& _emailAddress);

                    /**
                     * 判断参数 EmailAddress 是否已赋值
                     * @return EmailAddress 是否已赋值
                     */
                    bool EmailAddressHasBeenSet() const;

                    /**
                     * 获取可以指定任务ID进行查询
                     * @return TaskID 可以指定任务ID进行查询
                     */
                    std::string GetTaskID() const;

                    /**
                     * 设置可以指定任务ID进行查询
                     * @param TaskID 可以指定任务ID进行查询
                     */
                    void SetTaskID(const std::string& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     */
                    bool TaskIDHasBeenSet() const;

                private:

                    /**
                     * 开始日期
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 结束日期
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 规范，配合Offset使用
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 规范，配合Limit使用
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 可以指定邮箱进行查询
                     */
                    std::string m_emailAddress;
                    bool m_emailAddressHasBeenSet;

                    /**
                     * 可以指定任务ID进行查询
                     */
                    std::string m_taskID;
                    bool m_taskIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_LISTBLACKEMAILADDRESSREQUEST_H_