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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEUPGRADEPRECHECKRESULTITEM_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEUPGRADEPRECHECKRESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 节点升级检查项结果
                */
                class InstanceUpgradePreCheckResultItem : public AbstractModel
                {
                public:
                    InstanceUpgradePreCheckResultItem();
                    ~InstanceUpgradePreCheckResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作负载的命名空间
                     * @return Namespace 工作负载的命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置工作负载的命名空间
                     * @param _namespace 工作负载的命名空间
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
                     * 获取工作负载类型
                     * @return WorkLoadKind 工作负载类型
                     * 
                     */
                    std::string GetWorkLoadKind() const;

                    /**
                     * 设置工作负载类型
                     * @param _workLoadKind 工作负载类型
                     * 
                     */
                    void SetWorkLoadKind(const std::string& _workLoadKind);

                    /**
                     * 判断参数 WorkLoadKind 是否已赋值
                     * @return WorkLoadKind 是否已赋值
                     * 
                     */
                    bool WorkLoadKindHasBeenSet() const;

                    /**
                     * 获取工作负载名称
                     * @return WorkLoadName 工作负载名称
                     * 
                     */
                    std::string GetWorkLoadName() const;

                    /**
                     * 设置工作负载名称
                     * @param _workLoadName 工作负载名称
                     * 
                     */
                    void SetWorkLoadName(const std::string& _workLoadName);

                    /**
                     * 判断参数 WorkLoadName 是否已赋值
                     * @return WorkLoadName 是否已赋值
                     * 
                     */
                    bool WorkLoadNameHasBeenSet() const;

                    /**
                     * 获取驱逐节点前工作负载running的pod数目
                     * @return Before 驱逐节点前工作负载running的pod数目
                     * 
                     */
                    uint64_t GetBefore() const;

                    /**
                     * 设置驱逐节点前工作负载running的pod数目
                     * @param _before 驱逐节点前工作负载running的pod数目
                     * 
                     */
                    void SetBefore(const uint64_t& _before);

                    /**
                     * 判断参数 Before 是否已赋值
                     * @return Before 是否已赋值
                     * 
                     */
                    bool BeforeHasBeenSet() const;

                    /**
                     * 获取驱逐节点后工作负载running的pod数目
                     * @return After 驱逐节点后工作负载running的pod数目
                     * 
                     */
                    uint64_t GetAfter() const;

                    /**
                     * 设置驱逐节点后工作负载running的pod数目
                     * @param _after 驱逐节点后工作负载running的pod数目
                     * 
                     */
                    void SetAfter(const uint64_t& _after);

                    /**
                     * 判断参数 After 是否已赋值
                     * @return After 是否已赋值
                     * 
                     */
                    bool AfterHasBeenSet() const;

                    /**
                     * 获取工作负载在本节点上的pod列表
                     * @return Pods 工作负载在本节点上的pod列表
                     * 
                     */
                    std::vector<std::string> GetPods() const;

                    /**
                     * 设置工作负载在本节点上的pod列表
                     * @param _pods 工作负载在本节点上的pod列表
                     * 
                     */
                    void SetPods(const std::vector<std::string>& _pods);

                    /**
                     * 判断参数 Pods 是否已赋值
                     * @return Pods 是否已赋值
                     * 
                     */
                    bool PodsHasBeenSet() const;

                private:

                    /**
                     * 工作负载的命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 工作负载类型
                     */
                    std::string m_workLoadKind;
                    bool m_workLoadKindHasBeenSet;

                    /**
                     * 工作负载名称
                     */
                    std::string m_workLoadName;
                    bool m_workLoadNameHasBeenSet;

                    /**
                     * 驱逐节点前工作负载running的pod数目
                     */
                    uint64_t m_before;
                    bool m_beforeHasBeenSet;

                    /**
                     * 驱逐节点后工作负载running的pod数目
                     */
                    uint64_t m_after;
                    bool m_afterHasBeenSet;

                    /**
                     * 工作负载在本节点上的pod列表
                     */
                    std::vector<std::string> m_pods;
                    bool m_podsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_INSTANCEUPGRADEPRECHECKRESULTITEM_H_
