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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATESPARKAPPTASKREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATESPARKAPPTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateSparkAppTask请求参数结构体
                */
                class CreateSparkAppTaskRequest : public AbstractModel
                {
                public:
                    CreateSparkAppTaskRequest();
                    ~CreateSparkAppTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取spark作业名
                     * @return JobName spark作业名
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置spark作业名
                     * @param JobName spark作业名
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取spark作业的命令行参数，以空格分隔；一般用于周期性调用使用
                     * @return CmdArgs spark作业的命令行参数，以空格分隔；一般用于周期性调用使用
                     */
                    std::string GetCmdArgs() const;

                    /**
                     * 设置spark作业的命令行参数，以空格分隔；一般用于周期性调用使用
                     * @param CmdArgs spark作业的命令行参数，以空格分隔；一般用于周期性调用使用
                     */
                    void SetCmdArgs(const std::string& _cmdArgs);

                    /**
                     * 判断参数 CmdArgs 是否已赋值
                     * @return CmdArgs 是否已赋值
                     */
                    bool CmdArgsHasBeenSet() const;

                private:

                    /**
                     * spark作业名
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * spark作业的命令行参数，以空格分隔；一般用于周期性调用使用
                     */
                    std::string m_cmdArgs;
                    bool m_cmdArgsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATESPARKAPPTASKREQUEST_H_
