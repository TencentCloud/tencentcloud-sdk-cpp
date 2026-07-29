/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDAPPVERSIONRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDAPPVERSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/StaticConfig.h>
#include <tencentcloud/tcb/v20180608/model/BuildStepStatus.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeCloudAppVersion返回参数结构体
                */
                class DescribeCloudAppVersionResponse : public AbstractModel
                {
                public:
                    DescribeCloudAppVersionResponse();
                    ~DescribeCloudAppVersionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>构建类型</p>
                     * @return BuildType <p>构建类型</p>
                     * 
                     */
                    std::string GetBuildType() const;

                    /**
                     * 判断参数 BuildType 是否已赋值
                     * @return BuildType 是否已赋值
                     * 
                     */
                    bool BuildTypeHasBeenSet() const;

                    /**
                     * 获取<p>构建Id</p>
                     * @return BuildId <p>构建Id</p>
                     * 
                     */
                    std::string GetBuildId() const;

                    /**
                     * 判断参数 BuildId 是否已赋值
                     * @return BuildId 是否已赋值
                     * 
                     */
                    bool BuildIdHasBeenSet() const;

                    /**
                     * 获取<p>构建状态</p>
                     * @return Status <p>构建状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>框架</p>
                     * @return Framework <p>框架</p>
                     * 
                     */
                    std::string GetFramework() const;

                    /**
                     * 判断参数 Framework 是否已赋值
                     * @return Framework 是否已赋值
                     * 
                     */
                    bool FrameworkHasBeenSet() const;

                    /**
                     * 获取<p>静态托管配置信息</p>
                     * @return StaticConfig <p>静态托管配置信息</p>
                     * 
                     */
                    StaticConfig GetStaticConfig() const;

                    /**
                     * 判断参数 StaticConfig 是否已赋值
                     * @return StaticConfig 是否已赋值
                     * 
                     */
                    bool StaticConfigHasBeenSet() const;

                    /**
                     * 获取<p>构建时间</p>
                     * @return BuildTime <p>构建时间</p>
                     * 
                     */
                    std::string GetBuildTime() const;

                    /**
                     * 判断参数 BuildTime 是否已赋值
                     * @return BuildTime 是否已赋值
                     * 
                     */
                    bool BuildTimeHasBeenSet() const;

                    /**
                     * 获取<p>[]BuildStepStatus 的 JSON 序列化</p>
                     * @return Steps <p>[]BuildStepStatus 的 JSON 序列化</p>
                     * 
                     */
                    std::vector<BuildStepStatus> GetSteps() const;

                    /**
                     * 判断参数 Steps 是否已赋值
                     * @return Steps 是否已赋值
                     * 
                     */
                    bool StepsHasBeenSet() const;

                private:

                    /**
                     * <p>构建类型</p>
                     */
                    std::string m_buildType;
                    bool m_buildTypeHasBeenSet;

                    /**
                     * <p>构建Id</p>
                     */
                    std::string m_buildId;
                    bool m_buildIdHasBeenSet;

                    /**
                     * <p>构建状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>框架</p>
                     */
                    std::string m_framework;
                    bool m_frameworkHasBeenSet;

                    /**
                     * <p>静态托管配置信息</p>
                     */
                    StaticConfig m_staticConfig;
                    bool m_staticConfigHasBeenSet;

                    /**
                     * <p>构建时间</p>
                     */
                    std::string m_buildTime;
                    bool m_buildTimeHasBeenSet;

                    /**
                     * <p>[]BuildStepStatus 的 JSON 序列化</p>
                     */
                    std::vector<BuildStepStatus> m_steps;
                    bool m_stepsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDAPPVERSIONRESPONSE_H_
