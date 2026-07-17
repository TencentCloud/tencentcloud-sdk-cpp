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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_OPERATEINFERENCESERVICEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_OPERATEINFERENCESERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * OperateInferenceService请求参数结构体
                */
                class OperateInferenceServiceRequest : public AbstractModel
                {
                public:
                    OperateInferenceServiceRequest();
                    ~OperateInferenceServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点ID。
                     * @return ZoneId 站点ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点ID。
                     * @param _zoneId 站点ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取推理服务 ID。
                     * @return ServiceId 推理服务 ID。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置推理服务 ID。
                     * @param _serviceId 推理服务 ID。
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取操作类型，包含以下几种：<li>Stop：停止；</li><li>Resume：启动；</li><li>Delete：删除。</li>
                     * @return Operation 操作类型，包含以下几种：<li>Stop：停止；</li><li>Resume：启动；</li><li>Delete：删除。</li>
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作类型，包含以下几种：<li>Stop：停止；</li><li>Resume：启动；</li><li>Delete：删除。</li>
                     * @param _operation 操作类型，包含以下几种：<li>Stop：停止；</li><li>Resume：启动；</li><li>Delete：删除。</li>
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                private:

                    /**
                     * 站点ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 推理服务 ID。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 操作类型，包含以下几种：<li>Stop：停止；</li><li>Resume：启动；</li><li>Delete：删除。</li>
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_OPERATEINFERENCESERVICEREQUEST_H_
