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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_MODIFYTRACINGCONFIGREQUEST_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_MODIFYTRACINGCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcm/v20210413/model/APM.h>
#include <tencentcloud/tcm/v20210413/model/TracingZipkin.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * ModifyTracingConfig请求参数结构体
                */
                class ModifyTracingConfigRequest : public AbstractModel
                {
                public:
                    ModifyTracingConfigRequest();
                    ~ModifyTracingConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取mesh名字
                     * @return MeshId mesh名字
                     * 
                     */
                    std::string GetMeshId() const;

                    /**
                     * 设置mesh名字
                     * @param _meshId mesh名字
                     * 
                     */
                    void SetMeshId(const std::string& _meshId);

                    /**
                     * 判断参数 MeshId 是否已赋值
                     * @return MeshId 是否已赋值
                     * 
                     */
                    bool MeshIdHasBeenSet() const;

                    /**
                     * 获取是否启用调用跟踪
                     * @return Enable 是否启用调用跟踪
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置是否启用调用跟踪
                     * @param _enable 是否启用调用跟踪
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取腾讯云 APM 服务相关参数
                     * @return APM 腾讯云 APM 服务相关参数
                     * 
                     */
                    APM GetAPM() const;

                    /**
                     * 设置腾讯云 APM 服务相关参数
                     * @param _aPM 腾讯云 APM 服务相关参数
                     * 
                     */
                    void SetAPM(const APM& _aPM);

                    /**
                     * 判断参数 APM 是否已赋值
                     * @return APM 是否已赋值
                     * 
                     */
                    bool APMHasBeenSet() const;

                    /**
                     * 获取调用跟踪采样值
                     * @return Sampling 调用跟踪采样值
                     * 
                     */
                    double GetSampling() const;

                    /**
                     * 设置调用跟踪采样值
                     * @param _sampling 调用跟踪采样值
                     * 
                     */
                    void SetSampling(const double& _sampling);

                    /**
                     * 判断参数 Sampling 是否已赋值
                     * @return Sampling 是否已赋值
                     * 
                     */
                    bool SamplingHasBeenSet() const;

                    /**
                     * 获取调用追踪Zipkin相关配置
                     * @return Zipkin 调用追踪Zipkin相关配置
                     * 
                     */
                    TracingZipkin GetZipkin() const;

                    /**
                     * 设置调用追踪Zipkin相关配置
                     * @param _zipkin 调用追踪Zipkin相关配置
                     * 
                     */
                    void SetZipkin(const TracingZipkin& _zipkin);

                    /**
                     * 判断参数 Zipkin 是否已赋值
                     * @return Zipkin 是否已赋值
                     * 
                     */
                    bool ZipkinHasBeenSet() const;

                private:

                    /**
                     * mesh名字
                     */
                    std::string m_meshId;
                    bool m_meshIdHasBeenSet;

                    /**
                     * 是否启用调用跟踪
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 腾讯云 APM 服务相关参数
                     */
                    APM m_aPM;
                    bool m_aPMHasBeenSet;

                    /**
                     * 调用跟踪采样值
                     */
                    double m_sampling;
                    bool m_samplingHasBeenSet;

                    /**
                     * 调用追踪Zipkin相关配置
                     */
                    TracingZipkin m_zipkin;
                    bool m_zipkinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_MODIFYTRACINGCONFIGREQUEST_H_
