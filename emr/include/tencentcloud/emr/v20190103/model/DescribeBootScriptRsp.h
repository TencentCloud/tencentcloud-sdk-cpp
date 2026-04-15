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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEBOOTSCRIPTRSP_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEBOOTSCRIPTRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/PreExecuteFileSetting.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 引导脚本回包
                */
                class DescribeBootScriptRsp : public AbstractModel
                {
                public:
                    DescribeBootScriptRsp();
                    ~DescribeBootScriptRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源初始化结束自定义脚本文件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceAfter 资源初始化结束自定义脚本文件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PreExecuteFileSetting> GetResourceAfter() const;

                    /**
                     * 设置资源初始化结束自定义脚本文件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceAfter 资源初始化结束自定义脚本文件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceAfter(const std::vector<PreExecuteFileSetting>& _resourceAfter);

                    /**
                     * 判断参数 ResourceAfter 是否已赋值
                     * @return ResourceAfter 是否已赋值
                     * 
                     */
                    bool ResourceAfterHasBeenSet() const;

                    /**
                     * 获取集群启动前自定义脚本文件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterBefore 集群启动前自定义脚本文件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PreExecuteFileSetting> GetClusterBefore() const;

                    /**
                     * 设置集群启动前自定义脚本文件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterBefore 集群启动前自定义脚本文件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterBefore(const std::vector<PreExecuteFileSetting>& _clusterBefore);

                    /**
                     * 判断参数 ClusterBefore 是否已赋值
                     * @return ClusterBefore 是否已赋值
                     * 
                     */
                    bool ClusterBeforeHasBeenSet() const;

                    /**
                     * 获取集群启动后自定义脚本文件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterAfter 集群启动后自定义脚本文件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PreExecuteFileSetting> GetClusterAfter() const;

                    /**
                     * 设置集群启动后自定义脚本文件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterAfter 集群启动后自定义脚本文件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterAfter(const std::vector<PreExecuteFileSetting>& _clusterAfter);

                    /**
                     * 判断参数 ClusterAfter 是否已赋值
                     * @return ClusterAfter 是否已赋值
                     * 
                     */
                    bool ClusterAfterHasBeenSet() const;

                    /**
                     * 获取服务下线前自定义脚本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceBefore 服务下线前自定义脚本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PreExecuteFileSetting> GetServiceBefore() const;

                    /**
                     * 设置服务下线前自定义脚本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceBefore 服务下线前自定义脚本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceBefore(const std::vector<PreExecuteFileSetting>& _serviceBefore);

                    /**
                     * 判断参数 ServiceBefore 是否已赋值
                     * @return ServiceBefore 是否已赋值
                     * 
                     */
                    bool ServiceBeforeHasBeenSet() const;

                private:

                    /**
                     * 资源初始化结束自定义脚本文件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PreExecuteFileSetting> m_resourceAfter;
                    bool m_resourceAfterHasBeenSet;

                    /**
                     * 集群启动前自定义脚本文件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PreExecuteFileSetting> m_clusterBefore;
                    bool m_clusterBeforeHasBeenSet;

                    /**
                     * 集群启动后自定义脚本文件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PreExecuteFileSetting> m_clusterAfter;
                    bool m_clusterAfterHasBeenSet;

                    /**
                     * 服务下线前自定义脚本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PreExecuteFileSetting> m_serviceBefore;
                    bool m_serviceBeforeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEBOOTSCRIPTRSP_H_
