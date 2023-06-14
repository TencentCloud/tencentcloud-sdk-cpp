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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPJOBRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/SparkJobInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeSparkAppJob返回参数结构体
                */
                class DescribeSparkAppJobResponse : public AbstractModel
                {
                public:
                    DescribeSparkAppJobResponse();
                    ~DescribeSparkAppJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取spark作业详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Job spark作业详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SparkJobInfo GetJob() const;

                    /**
                     * 判断参数 Job 是否已赋值
                     * @return Job 是否已赋值
                     * 
                     */
                    bool JobHasBeenSet() const;

                    /**
                     * 获取查询的spark作业是否存在
                     * @return IsExists 查询的spark作业是否存在
                     * 
                     */
                    bool GetIsExists() const;

                    /**
                     * 判断参数 IsExists 是否已赋值
                     * @return IsExists 是否已赋值
                     * 
                     */
                    bool IsExistsHasBeenSet() const;

                private:

                    /**
                     * spark作业详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SparkJobInfo m_job;
                    bool m_jobHasBeenSet;

                    /**
                     * 查询的spark作业是否存在
                     */
                    bool m_isExists;
                    bool m_isExistsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPJOBRESPONSE_H_
