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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_REDIRECTLOCALINFO_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_REDIRECTLOCALINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 本地重定向信息
                */
                class RedirectLocalInfo : public AbstractModel
                {
                public:
                    RedirectLocalInfo();
                    ~RedirectLocalInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标准输出重定向本地路径
                     * @return StdoutLocalPath 标准输出重定向本地路径
                     * 
                     */
                    std::string GetStdoutLocalPath() const;

                    /**
                     * 设置标准输出重定向本地路径
                     * @param _stdoutLocalPath 标准输出重定向本地路径
                     * 
                     */
                    void SetStdoutLocalPath(const std::string& _stdoutLocalPath);

                    /**
                     * 判断参数 StdoutLocalPath 是否已赋值
                     * @return StdoutLocalPath 是否已赋值
                     * 
                     */
                    bool StdoutLocalPathHasBeenSet() const;

                    /**
                     * 获取标准错误重定向本地路径
                     * @return StderrLocalPath 标准错误重定向本地路径
                     * 
                     */
                    std::string GetStderrLocalPath() const;

                    /**
                     * 设置标准错误重定向本地路径
                     * @param _stderrLocalPath 标准错误重定向本地路径
                     * 
                     */
                    void SetStderrLocalPath(const std::string& _stderrLocalPath);

                    /**
                     * 判断参数 StderrLocalPath 是否已赋值
                     * @return StderrLocalPath 是否已赋值
                     * 
                     */
                    bool StderrLocalPathHasBeenSet() const;

                    /**
                     * 获取标准输出重定向本地文件名，支持三个占位符${BATCH_JOB_ID}、${BATCH_TASK_NAME}、${BATCH_TASK_INSTANCE_INDEX}
                     * @return StdoutLocalFileName 标准输出重定向本地文件名，支持三个占位符${BATCH_JOB_ID}、${BATCH_TASK_NAME}、${BATCH_TASK_INSTANCE_INDEX}
                     * 
                     */
                    std::string GetStdoutLocalFileName() const;

                    /**
                     * 设置标准输出重定向本地文件名，支持三个占位符${BATCH_JOB_ID}、${BATCH_TASK_NAME}、${BATCH_TASK_INSTANCE_INDEX}
                     * @param _stdoutLocalFileName 标准输出重定向本地文件名，支持三个占位符${BATCH_JOB_ID}、${BATCH_TASK_NAME}、${BATCH_TASK_INSTANCE_INDEX}
                     * 
                     */
                    void SetStdoutLocalFileName(const std::string& _stdoutLocalFileName);

                    /**
                     * 判断参数 StdoutLocalFileName 是否已赋值
                     * @return StdoutLocalFileName 是否已赋值
                     * 
                     */
                    bool StdoutLocalFileNameHasBeenSet() const;

                    /**
                     * 获取标准错误重定向本地文件名，支持三个占位符${BATCH_JOB_ID}、${BATCH_TASK_NAME}、${BATCH_TASK_INSTANCE_INDEX}
                     * @return StderrLocalFileName 标准错误重定向本地文件名，支持三个占位符${BATCH_JOB_ID}、${BATCH_TASK_NAME}、${BATCH_TASK_INSTANCE_INDEX}
                     * 
                     */
                    std::string GetStderrLocalFileName() const;

                    /**
                     * 设置标准错误重定向本地文件名，支持三个占位符${BATCH_JOB_ID}、${BATCH_TASK_NAME}、${BATCH_TASK_INSTANCE_INDEX}
                     * @param _stderrLocalFileName 标准错误重定向本地文件名，支持三个占位符${BATCH_JOB_ID}、${BATCH_TASK_NAME}、${BATCH_TASK_INSTANCE_INDEX}
                     * 
                     */
                    void SetStderrLocalFileName(const std::string& _stderrLocalFileName);

                    /**
                     * 判断参数 StderrLocalFileName 是否已赋值
                     * @return StderrLocalFileName 是否已赋值
                     * 
                     */
                    bool StderrLocalFileNameHasBeenSet() const;

                private:

                    /**
                     * 标准输出重定向本地路径
                     */
                    std::string m_stdoutLocalPath;
                    bool m_stdoutLocalPathHasBeenSet;

                    /**
                     * 标准错误重定向本地路径
                     */
                    std::string m_stderrLocalPath;
                    bool m_stderrLocalPathHasBeenSet;

                    /**
                     * 标准输出重定向本地文件名，支持三个占位符${BATCH_JOB_ID}、${BATCH_TASK_NAME}、${BATCH_TASK_INSTANCE_INDEX}
                     */
                    std::string m_stdoutLocalFileName;
                    bool m_stdoutLocalFileNameHasBeenSet;

                    /**
                     * 标准错误重定向本地文件名，支持三个占位符${BATCH_JOB_ID}、${BATCH_TASK_NAME}、${BATCH_TASK_INSTANCE_INDEX}
                     */
                    std::string m_stderrLocalFileName;
                    bool m_stderrLocalFileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_REDIRECTLOCALINFO_H_
