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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_BOOTSTRAPACTION_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_BOOTSTRAPACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 引导脚本
                */
                class BootstrapAction : public AbstractModel
                {
                public:
                    BootstrapAction();
                    ~BootstrapAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取脚本位置，支持cos上的文件，且只支持https协议。
                     * @return Path 脚本位置，支持cos上的文件，且只支持https协议。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置脚本位置，支持cos上的文件，且只支持https协议。
                     * @param _path 脚本位置，支持cos上的文件，且只支持https协议。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取执行时间。
resourceAfter 表示在机器资源申请成功后执行。
clusterBefore 表示在集群初始化前执行。
clusterAfter 表示在集群初始化后执行。
                     * @return WhenRun 执行时间。
resourceAfter 表示在机器资源申请成功后执行。
clusterBefore 表示在集群初始化前执行。
clusterAfter 表示在集群初始化后执行。
                     * 
                     */
                    std::string GetWhenRun() const;

                    /**
                     * 设置执行时间。
resourceAfter 表示在机器资源申请成功后执行。
clusterBefore 表示在集群初始化前执行。
clusterAfter 表示在集群初始化后执行。
                     * @param _whenRun 执行时间。
resourceAfter 表示在机器资源申请成功后执行。
clusterBefore 表示在集群初始化前执行。
clusterAfter 表示在集群初始化后执行。
                     * 
                     */
                    void SetWhenRun(const std::string& _whenRun);

                    /**
                     * 判断参数 WhenRun 是否已赋值
                     * @return WhenRun 是否已赋值
                     * 
                     */
                    bool WhenRunHasBeenSet() const;

                    /**
                     * 获取脚本参数
                     * @return Args 脚本参数
                     * 
                     */
                    std::vector<std::string> GetArgs() const;

                    /**
                     * 设置脚本参数
                     * @param _args 脚本参数
                     * 
                     */
                    void SetArgs(const std::vector<std::string>& _args);

                    /**
                     * 判断参数 Args 是否已赋值
                     * @return Args 是否已赋值
                     * 
                     */
                    bool ArgsHasBeenSet() const;

                private:

                    /**
                     * 脚本位置，支持cos上的文件，且只支持https协议。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 执行时间。
resourceAfter 表示在机器资源申请成功后执行。
clusterBefore 表示在集群初始化前执行。
clusterAfter 表示在集群初始化后执行。
                     */
                    std::string m_whenRun;
                    bool m_whenRunHasBeenSet;

                    /**
                     * 脚本参数
                     */
                    std::vector<std::string> m_args;
                    bool m_argsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_BOOTSTRAPACTION_H_
