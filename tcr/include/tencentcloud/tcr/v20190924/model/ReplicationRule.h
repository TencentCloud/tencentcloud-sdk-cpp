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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_REPLICATIONRULE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_REPLICATIONRULE_H_

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
                * 同步规则
                */
                class ReplicationRule : public AbstractModel
                {
                public:
                    ReplicationRule();
                    ~ReplicationRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取同步规则名称
                     * @return Name 同步规则名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置同步规则名称
                     * @param _name 同步规则名称
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
                     * 获取目标命名空间
                     * @return DestNamespace 目标命名空间
                     * 
                     */
                    std::string GetDestNamespace() const;

                    /**
                     * 设置目标命名空间
                     * @param _destNamespace 目标命名空间
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
                     * 获取是否覆盖
                     * @return Override 是否覆盖
                     * 
                     */
                    bool GetOverride() const;

                    /**
                     * 设置是否覆盖
                     * @param _override 是否覆盖
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
                     * 获取同步过滤条件
                     * @return Filters 同步过滤条件
                     * 
                     */
                    std::vector<ReplicationFilter> GetFilters() const;

                    /**
                     * 设置同步过滤条件
                     * @param _filters 同步过滤条件
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
                     * 获取是否同步删除事件
                     * @return Deletion 是否同步删除事件
                     * 
                     */
                    bool GetDeletion() const;

                    /**
                     * 设置是否同步删除事件
                     * @param _deletion 是否同步删除事件
                     * 
                     */
                    void SetDeletion(const bool& _deletion);

                    /**
                     * 判断参数 Deletion 是否已赋值
                     * @return Deletion 是否已赋值
                     * 
                     */
                    bool DeletionHasBeenSet() const;

                private:

                    /**
                     * 同步规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 目标命名空间
                     */
                    std::string m_destNamespace;
                    bool m_destNamespaceHasBeenSet;

                    /**
                     * 是否覆盖
                     */
                    bool m_override;
                    bool m_overrideHasBeenSet;

                    /**
                     * 同步过滤条件
                     */
                    std::vector<ReplicationFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 是否同步删除事件
                     */
                    bool m_deletion;
                    bool m_deletionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_REPLICATIONRULE_H_
