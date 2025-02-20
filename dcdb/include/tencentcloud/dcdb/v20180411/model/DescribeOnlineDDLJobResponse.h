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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEONLINEDDLJOBRESPONSE_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEONLINEDDLJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/DDLDetail.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeOnlineDDLJob返回参数结构体
                */
                class DescribeOnlineDDLJobResponse : public AbstractModel
                {
                public:
                    DescribeOnlineDDLJobResponse();
                    ~DescribeOnlineDDLJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务状态。0：成功；1：失败；大于1：进行中
                     * @return Status 任务状态。0：成功；1：失败；大于1：进行中
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务进度百分比
                     * @return Process 任务进度百分比
                     * 
                     */
                    int64_t GetProcess() const;

                    /**
                     * 判断参数 Process 是否已赋值
                     * @return Process 是否已赋值
                     * 
                     */
                    bool ProcessHasBeenSet() const;

                    /**
                     * 获取错误信息或提示信息
                     * @return ErrorMessage 错误信息或提示信息
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取各分片DDL执行详情
                     * @return DDLDetails 各分片DDL执行详情
                     * 
                     */
                    std::vector<DDLDetail> GetDDLDetails() const;

                    /**
                     * 判断参数 DDLDetails 是否已赋值
                     * @return DDLDetails 是否已赋值
                     * 
                     */
                    bool DDLDetailsHasBeenSet() const;

                private:

                    /**
                     * 任务状态。0：成功；1：失败；大于1：进行中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务进度百分比
                     */
                    int64_t m_process;
                    bool m_processHasBeenSet;

                    /**
                     * 错误信息或提示信息
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 各分片DDL执行详情
                     */
                    std::vector<DDLDetail> m_dDLDetails;
                    bool m_dDLDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEONLINEDDLJOBRESPONSE_H_
