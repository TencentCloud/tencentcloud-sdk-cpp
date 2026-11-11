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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERBASELINEPOLICY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERBASELINEPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 集群基线策略
                */
                class ClusterBaselinePolicy : public AbstractModel
                {
                public:
                    ClusterBaselinePolicy();
                    ~ClusterBaselinePolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>基线策略 ID。</p>
                     * @return PolicyID <p>基线策略 ID。</p>
                     * 
                     */
                    uint64_t GetPolicyID() const;

                    /**
                     * 设置<p>基线策略 ID。</p>
                     * @param _policyID <p>基线策略 ID。</p>
                     * 
                     */
                    void SetPolicyID(const uint64_t& _policyID);

                    /**
                     * 判断参数 PolicyID 是否已赋值
                     * @return PolicyID 是否已赋值
                     * 
                     */
                    bool PolicyIDHasBeenSet() const;

                    /**
                     * 获取<p>基线策略名称。</p>
                     * @return PolicyName <p>基线策略名称。</p>
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置<p>基线策略名称。</p>
                     * @param _policyName <p>基线策略名称。</p>
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取<p>检测资产类型。<br>枚举值：<br>HOST：主机<br>CLUSTER：容器集群</p>
                     * @return CheckAssetType <p>检测资产类型。<br>枚举值：<br>HOST：主机<br>CLUSTER：容器集群</p>
                     * 
                     */
                    std::string GetCheckAssetType() const;

                    /**
                     * 设置<p>检测资产类型。<br>枚举值：<br>HOST：主机<br>CLUSTER：容器集群</p>
                     * @param _checkAssetType <p>检测资产类型。<br>枚举值：<br>HOST：主机<br>CLUSTER：容器集群</p>
                     * 
                     */
                    void SetCheckAssetType(const std::string& _checkAssetType);

                    /**
                     * 判断参数 CheckAssetType 是否已赋值
                     * @return CheckAssetType 是否已赋值
                     * 
                     */
                    bool CheckAssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>基线系统父分类 ID。</p>
                     * @return ParentCategoryID <p>基线系统父分类 ID。</p>
                     * 
                     */
                    uint64_t GetParentCategoryID() const;

                    /**
                     * 设置<p>基线系统父分类 ID。</p>
                     * @param _parentCategoryID <p>基线系统父分类 ID。</p>
                     * 
                     */
                    void SetParentCategoryID(const uint64_t& _parentCategoryID);

                    /**
                     * 判断参数 ParentCategoryID 是否已赋值
                     * @return ParentCategoryID 是否已赋值
                     * 
                     */
                    bool ParentCategoryIDHasBeenSet() const;

                    /**
                     * 获取<p>是否为系统基线策略。true 表示系统策略，false 表示自定义策略。</p>
                     * @return IsSystem <p>是否为系统基线策略。true 表示系统策略，false 表示自定义策略。</p>
                     * 
                     */
                    bool GetIsSystem() const;

                    /**
                     * 设置<p>是否为系统基线策略。true 表示系统策略，false 表示自定义策略。</p>
                     * @param _isSystem <p>是否为系统基线策略。true 表示系统策略，false 表示自定义策略。</p>
                     * 
                     */
                    void SetIsSystem(const bool& _isSystem);

                    /**
                     * 判断参数 IsSystem 是否已赋值
                     * @return IsSystem 是否已赋值
                     * 
                     */
                    bool IsSystemHasBeenSet() const;

                private:

                    /**
                     * <p>基线策略 ID。</p>
                     */
                    uint64_t m_policyID;
                    bool m_policyIDHasBeenSet;

                    /**
                     * <p>基线策略名称。</p>
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * <p>检测资产类型。<br>枚举值：<br>HOST：主机<br>CLUSTER：容器集群</p>
                     */
                    std::string m_checkAssetType;
                    bool m_checkAssetTypeHasBeenSet;

                    /**
                     * <p>基线系统父分类 ID。</p>
                     */
                    uint64_t m_parentCategoryID;
                    bool m_parentCategoryIDHasBeenSet;

                    /**
                     * <p>是否为系统基线策略。true 表示系统策略，false 表示自定义策略。</p>
                     */
                    bool m_isSystem;
                    bool m_isSystemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERBASELINEPOLICY_H_
