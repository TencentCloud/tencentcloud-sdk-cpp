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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEEMRAPPLICATIONSTATICSRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEEMRAPPLICATIONSTATICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ApplicationStatics.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeEmrApplicationStatics返回参数结构体
                */
                class DescribeEmrApplicationStaticsResponse : public AbstractModel
                {
                public:
                    DescribeEmrApplicationStaticsResponse();
                    ~DescribeEmrApplicationStaticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取作业统计信息
                     * @return Statics 作业统计信息
                     * 
                     */
                    std::vector<ApplicationStatics> GetStatics() const;

                    /**
                     * 判断参数 Statics 是否已赋值
                     * @return Statics 是否已赋值
                     * 
                     */
                    bool StaticsHasBeenSet() const;

                    /**
                     * 获取总数
                     * @return TotalCount 总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取可选择的队列名
                     * @return Queues 可选择的队列名
                     * 
                     */
                    std::vector<std::string> GetQueues() const;

                    /**
                     * 判断参数 Queues 是否已赋值
                     * @return Queues 是否已赋值
                     * 
                     */
                    bool QueuesHasBeenSet() const;

                    /**
                     * 获取可选择的用户名
                     * @return Users 可选择的用户名
                     * 
                     */
                    std::vector<std::string> GetUsers() const;

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                    /**
                     * 获取可选择的作业类型
                     * @return ApplicationTypes 可选择的作业类型
                     * 
                     */
                    std::vector<std::string> GetApplicationTypes() const;

                    /**
                     * 判断参数 ApplicationTypes 是否已赋值
                     * @return ApplicationTypes 是否已赋值
                     * 
                     */
                    bool ApplicationTypesHasBeenSet() const;

                private:

                    /**
                     * 作业统计信息
                     */
                    std::vector<ApplicationStatics> m_statics;
                    bool m_staticsHasBeenSet;

                    /**
                     * 总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 可选择的队列名
                     */
                    std::vector<std::string> m_queues;
                    bool m_queuesHasBeenSet;

                    /**
                     * 可选择的用户名
                     */
                    std::vector<std::string> m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * 可选择的作业类型
                     */
                    std::vector<std::string> m_applicationTypes;
                    bool m_applicationTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEEMRAPPLICATIONSTATICSRESPONSE_H_
