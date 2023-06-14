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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_SERVERPROCESSE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_SERVERPROCESSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 游戏服务进程
                */
                class ServerProcesse : public AbstractModel
                {
                public:
                    ServerProcesse();
                    ~ServerProcesse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取并发执行数量，所有进程并发执行总数最小值1，最大值50
                     * @return ConcurrentExecutions 并发执行数量，所有进程并发执行总数最小值1，最大值50
                     * 
                     */
                    uint64_t GetConcurrentExecutions() const;

                    /**
                     * 设置并发执行数量，所有进程并发执行总数最小值1，最大值50
                     * @param _concurrentExecutions 并发执行数量，所有进程并发执行总数最小值1，最大值50
                     * 
                     */
                    void SetConcurrentExecutions(const uint64_t& _concurrentExecutions);

                    /**
                     * 判断参数 ConcurrentExecutions 是否已赋值
                     * @return ConcurrentExecutions 是否已赋值
                     * 
                     */
                    bool ConcurrentExecutionsHasBeenSet() const;

                    /**
                     * 获取启动路径：Linux路径/local/game/ 或WIndows路径C:\game\，最小长度1，最大长度1024
                     * @return LaunchPath 启动路径：Linux路径/local/game/ 或WIndows路径C:\game\，最小长度1，最大长度1024
                     * 
                     */
                    std::string GetLaunchPath() const;

                    /**
                     * 设置启动路径：Linux路径/local/game/ 或WIndows路径C:\game\，最小长度1，最大长度1024
                     * @param _launchPath 启动路径：Linux路径/local/game/ 或WIndows路径C:\game\，最小长度1，最大长度1024
                     * 
                     */
                    void SetLaunchPath(const std::string& _launchPath);

                    /**
                     * 判断参数 LaunchPath 是否已赋值
                     * @return LaunchPath 是否已赋值
                     * 
                     */
                    bool LaunchPathHasBeenSet() const;

                    /**
                     * 获取启动参数，最小长度0，最大长度1024
                     * @return Parameters 启动参数，最小长度0，最大长度1024
                     * 
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置启动参数，最小长度0，最大长度1024
                     * @param _parameters 启动参数，最小长度0，最大长度1024
                     * 
                     */
                    void SetParameters(const std::string& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     * 
                     */
                    bool ParametersHasBeenSet() const;

                private:

                    /**
                     * 并发执行数量，所有进程并发执行总数最小值1，最大值50
                     */
                    uint64_t m_concurrentExecutions;
                    bool m_concurrentExecutionsHasBeenSet;

                    /**
                     * 启动路径：Linux路径/local/game/ 或WIndows路径C:\game\，最小长度1，最大长度1024
                     */
                    std::string m_launchPath;
                    bool m_launchPathHasBeenSet;

                    /**
                     * 启动参数，最小长度0，最大长度1024
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_SERVERPROCESSE_H_
