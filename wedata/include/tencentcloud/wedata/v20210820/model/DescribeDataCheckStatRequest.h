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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATACHECKSTATREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATACHECKSTATREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeDataCheckStat请求参数结构体
                */
                class DescribeDataCheckStatRequest : public AbstractModel
                {
                public:
                    DescribeDataCheckStatRequest();
                    ~DescribeDataCheckStatRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取开始时间，时间戳到秒
                     * @return BeginDate 开始时间，时间戳到秒
                     * 
                     */
                    std::string GetBeginDate() const;

                    /**
                     * 设置开始时间，时间戳到秒
                     * @param _beginDate 开始时间，时间戳到秒
                     * 
                     */
                    void SetBeginDate(const std::string& _beginDate);

                    /**
                     * 判断参数 BeginDate 是否已赋值
                     * @return BeginDate 是否已赋值
                     * 
                     */
                    bool BeginDateHasBeenSet() const;

                    /**
                     * 获取结束时间，时间戳到秒
                     * @return EndDate 结束时间，时间戳到秒
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置结束时间，时间戳到秒
                     * @param _endDate 结束时间，时间戳到秒
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 开始时间，时间戳到秒
                     */
                    std::string m_beginDate;
                    bool m_beginDateHasBeenSet;

                    /**
                     * 结束时间，时间戳到秒
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATACHECKSTATREQUEST_H_
