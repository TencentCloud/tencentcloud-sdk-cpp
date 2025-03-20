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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKCLUSTERPODINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKCLUSTERPODINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 网络集群pod返回的结构体
                */
                class NetworkClusterPodInfo : public AbstractModel
                {
                public:
                    NetworkClusterPodInfo();
                    ~NetworkClusterPodInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取pod名字
                     * @return PodName pod名字
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置pod名字
                     * @param _podName pod名字
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取pod空间
                     * @return Namespace pod空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置pod空间
                     * @param _namespace pod空间
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
                     * 获取pod标签
                     * @return Labels pod标签
                     * 
                     */
                    std::string GetLabels() const;

                    /**
                     * 设置pod标签
                     * @param _labels pod标签
                     * 
                     */
                    void SetLabels(const std::string& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取pod类型
                     * @return WorkloadKind pod类型
                     * 
                     */
                    std::string GetWorkloadKind() const;

                    /**
                     * 设置pod类型
                     * @param _workloadKind pod类型
                     * 
                     */
                    void SetWorkloadKind(const std::string& _workloadKind);

                    /**
                     * 判断参数 WorkloadKind 是否已赋值
                     * @return WorkloadKind 是否已赋值
                     * 
                     */
                    bool WorkloadKindHasBeenSet() const;

                private:

                    /**
                     * pod名字
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * pod空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * pod标签
                     */
                    std::string m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * pod类型
                     */
                    std::string m_workloadKind;
                    bool m_workloadKindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKCLUSTERPODINFO_H_
