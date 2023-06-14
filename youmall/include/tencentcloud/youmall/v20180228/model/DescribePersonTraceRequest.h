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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEPERSONTRACEREQUEST_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEPERSONTRACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribePersonTrace请求参数结构体
                */
                class DescribePersonTraceRequest : public AbstractModel
                {
                public:
                    DescribePersonTraceRequest();
                    ~DescribePersonTraceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取卖场编码
                     * @return MallId 卖场编码
                     * 
                     */
                    std::string GetMallId() const;

                    /**
                     * 设置卖场编码
                     * @param _mallId 卖场编码
                     * 
                     */
                    void SetMallId(const std::string& _mallId);

                    /**
                     * 判断参数 MallId 是否已赋值
                     * @return MallId 是否已赋值
                     * 
                     */
                    bool MallIdHasBeenSet() const;

                    /**
                     * 获取客户编码
                     * @return PersonId 客户编码
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置客户编码
                     * @param _personId 客户编码
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取查询开始时间
                     * @return StartTime 查询开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询开始时间
                     * @param _startTime 查询开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取查询结束时间
                     * @return EndTime 查询结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间
                     * @param _endTime 查询结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 卖场编码
                     */
                    std::string m_mallId;
                    bool m_mallIdHasBeenSet;

                    /**
                     * 客户编码
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 查询开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEPERSONTRACEREQUEST_H_
