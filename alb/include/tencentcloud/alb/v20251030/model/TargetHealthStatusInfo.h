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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_TARGETHEALTHSTATUSINFO_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_TARGETHEALTHSTATUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 服务健康状态信息
                */
                class TargetHealthStatusInfo : public AbstractModel
                {
                public:
                    TargetHealthStatusInfo();
                    ~TargetHealthStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取后端服务健康状态。DescribeListenerHealthStatus 仅返回非健康后端时，该值为 UnHealthy。
                     * @return Status 后端服务健康状态。DescribeListenerHealthStatus 仅返回非健康后端时，该值为 UnHealthy。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置后端服务健康状态。DescribeListenerHealthStatus 仅返回非健康后端时，该值为 UnHealthy。
                     * @param _status 后端服务健康状态。DescribeListenerHealthStatus 仅返回非健康后端时，该值为 UnHealthy。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取后端服务实例 ID，CVM 实例格式为 ins- 后接 8 位字母数字。
                     * @return TargetId 后端服务实例 ID，CVM 实例格式为 ins- 后接 8 位字母数字。
                     * 
                     */
                    std::string GetTargetId() const;

                    /**
                     * 设置后端服务实例 ID，CVM 实例格式为 ins- 后接 8 位字母数字。
                     * @param _targetId 后端服务实例 ID，CVM 实例格式为 ins- 后接 8 位字母数字。
                     * 
                     */
                    void SetTargetId(const std::string& _targetId);

                    /**
                     * 判断参数 TargetId 是否已赋值
                     * @return TargetId 是否已赋值
                     * 
                     */
                    bool TargetIdHasBeenSet() const;

                    /**
                     * 获取后端目标服务IP。
                     * @return TargetIp 后端目标服务IP。
                     * 
                     */
                    std::string GetTargetIp() const;

                    /**
                     * 设置后端目标服务IP。
                     * @param _targetIp 后端目标服务IP。
                     * 
                     */
                    void SetTargetIp(const std::string& _targetIp);

                    /**
                     * 判断参数 TargetIp 是否已赋值
                     * @return TargetIp 是否已赋值
                     * 
                     */
                    bool TargetIpHasBeenSet() const;

                    /**
                     * 获取后端服务器端口。
                     * @return TargetPort 后端服务器端口。
                     * 
                     */
                    uint64_t GetTargetPort() const;

                    /**
                     * 设置后端服务器端口。
                     * @param _targetPort 后端服务器端口。
                     * 
                     */
                    void SetTargetPort(const uint64_t& _targetPort);

                    /**
                     * 判断参数 TargetPort 是否已赋值
                     * @return TargetPort 是否已赋值
                     * 
                     */
                    bool TargetPortHasBeenSet() const;

                private:

                    /**
                     * 后端服务健康状态。DescribeListenerHealthStatus 仅返回非健康后端时，该值为 UnHealthy。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 后端服务实例 ID，CVM 实例格式为 ins- 后接 8 位字母数字。
                     */
                    std::string m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * 后端目标服务IP。
                     */
                    std::string m_targetIp;
                    bool m_targetIpHasBeenSet;

                    /**
                     * 后端服务器端口。
                     */
                    uint64_t m_targetPort;
                    bool m_targetPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_TARGETHEALTHSTATUSINFO_H_
