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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_EGRESSGATEWAY_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_EGRESSGATEWAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcm/v20210413/model/WorkloadConfig.h>
#include <tencentcloud/tcm/v20210413/model/EgressGatewayStatus.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * Egress配置
                */
                class EgressGateway : public AbstractModel
                {
                public:
                    EgressGateway();
                    ~EgressGateway() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Egress名称
                     * @return Name Egress名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Egress名称
                     * @param _name Egress名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取所在的Namespace
                     * @return Namespace 所在的Namespace
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置所在的Namespace
                     * @param _namespace 所在的Namespace
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取工作负载配置
                     * @return Workload 工作负载配置
                     * 
                     */
                    WorkloadConfig GetWorkload() const;

                    /**
                     * 设置工作负载配置
                     * @param _workload 工作负载配置
                     * 
                     */
                    void SetWorkload(const WorkloadConfig& _workload);

                    /**
                     * 判断参数 Workload 是否已赋值
                     * @return Workload 是否已赋值
                     * 
                     */
                    bool WorkloadHasBeenSet() const;

                    /**
                     * 获取工作负载的状态
                     * @return Status 工作负载的状态
                     * 
                     */
                    EgressGatewayStatus GetStatus() const;

                    /**
                     * 设置工作负载的状态
                     * @param _status 工作负载的状态
                     * 
                     */
                    void SetStatus(const EgressGatewayStatus& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Egress名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 所在的Namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 工作负载配置
                     */
                    WorkloadConfig m_workload;
                    bool m_workloadHasBeenSet;

                    /**
                     * 工作负载的状态
                     */
                    EgressGatewayStatus m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_EGRESSGATEWAY_H_
