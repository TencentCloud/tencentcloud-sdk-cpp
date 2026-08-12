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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYREPLICATIONRULE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYREPLICATIONRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/ReplicationFilter.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 修改同步规则参数，用于 ModifyReplication 接口更新已有的实例同步规则配置。
                */
                class ModifyReplicationRule : public AbstractModel
                {
                public:
                    ModifyReplicationRule();
                    ~ModifyReplicationRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>目标命名空间</p>
                     * @return DestNamespace <p>目标命名空间</p>
                     * 
                     */
                    std::string GetDestNamespace() const;

                    /**
                     * 设置<p>目标命名空间</p>
                     * @param _destNamespace <p>目标命名空间</p>
                     * 
                     */
                    void SetDestNamespace(const std::string& _destNamespace);

                    /**
                     * 判断参数 DestNamespace 是否已赋值
                     * @return DestNamespace 是否已赋值
                     * 
                     */
                    bool DestNamespaceHasBeenSet() const;

                    /**
                     * 获取<p>是否覆盖</p>
                     * @return Override <p>是否覆盖</p>
                     * 
                     */
                    bool GetOverride() const;

                    /**
                     * 设置<p>是否覆盖</p>
                     * @param _override <p>是否覆盖</p>
                     * 
                     */
                    void SetOverride(const bool& _override);

                    /**
                     * 判断参数 Override 是否已赋值
                     * @return Override 是否已赋值
                     * 
                     */
                    bool OverrideHasBeenSet() const;

                    /**
                     * 获取<p>是否同步删除事件</p>
                     * @return Deletion <p>是否同步删除事件</p>
                     * 
                     */
                    bool GetDeletion() const;

                    /**
                     * 设置<p>是否同步删除事件</p>
                     * @param _deletion <p>是否同步删除事件</p>
                     * 
                     */
                    void SetDeletion(const bool& _deletion);

                    /**
                     * 判断参数 Deletion 是否已赋值
                     * @return Deletion 是否已赋值
                     * 
                     */
                    bool DeletionHasBeenSet() const;

                    /**
                     * 获取<p>过滤同步条件</p>
                     * @return Filters <p>过滤同步条件</p>
                     * 
                     */
                    std::vector<ReplicationFilter> GetFilters() const;

                    /**
                     * 设置<p>过滤同步条件</p>
                     * @param _filters <p>过滤同步条件</p>
                     * 
                     */
                    void SetFilters(const std::vector<ReplicationFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>是否开启规则</p>
                     * @return Enabled <p>是否开启规则</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>是否开启规则</p>
                     * @param _enabled <p>是否开启规则</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * <p>目标命名空间</p>
                     */
                    std::string m_destNamespace;
                    bool m_destNamespaceHasBeenSet;

                    /**
                     * <p>是否覆盖</p>
                     */
                    bool m_override;
                    bool m_overrideHasBeenSet;

                    /**
                     * <p>是否同步删除事件</p>
                     */
                    bool m_deletion;
                    bool m_deletionHasBeenSet;

                    /**
                     * <p>过滤同步条件</p>
                     */
                    std::vector<ReplicationFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>是否开启规则</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYREPLICATIONRULE_H_
