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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYRABBITMQVIPINSTANCEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYRABBITMQVIPINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Tag.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * ModifyRabbitMQVipInstance请求参数结构体
                */
                class ModifyRabbitMQVipInstanceRequest : public AbstractModel
                {
                public:
                    ModifyRabbitMQVipInstanceRequest();
                    ~ModifyRabbitMQVipInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param _instanceId 实例Id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取集群名称，不填则不修改。非空字符串时必须 3-64 个字符，只能包含数字、字母、“-”和“_”
                     * @return ClusterName 集群名称，不填则不修改。非空字符串时必须 3-64 个字符，只能包含数字、字母、“-”和“_”
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称，不填则不修改。非空字符串时必须 3-64 个字符，只能包含数字、字母、“-”和“_”
                     * @param _clusterName 集群名称，不填则不修改。非空字符串时必须 3-64 个字符，只能包含数字、字母、“-”和“_”
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取备注，不填则不修改
                     * @return Remark 备注，不填则不修改
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注，不填则不修改
                     * @param _remark 备注，不填则不修改
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取是否开启删除保护，不填则不修改
                     * @return EnableDeletionProtection 是否开启删除保护，不填则不修改
                     * 
                     */
                    bool GetEnableDeletionProtection() const;

                    /**
                     * 设置是否开启删除保护，不填则不修改
                     * @param _enableDeletionProtection 是否开启删除保护，不填则不修改
                     * 
                     */
                    void SetEnableDeletionProtection(const bool& _enableDeletionProtection);

                    /**
                     * 判断参数 EnableDeletionProtection 是否已赋值
                     * @return EnableDeletionProtection 是否已赋值
                     * 
                     */
                    bool EnableDeletionProtectionHasBeenSet() const;

                    /**
                     * 获取是否删除所有标签，默认为false
                     * @return RemoveAllTags 是否删除所有标签，默认为false
                     * 
                     */
                    bool GetRemoveAllTags() const;

                    /**
                     * 设置是否删除所有标签，默认为false
                     * @param _removeAllTags 是否删除所有标签，默认为false
                     * 
                     */
                    void SetRemoveAllTags(const bool& _removeAllTags);

                    /**
                     * 判断参数 RemoveAllTags 是否已赋值
                     * @return RemoveAllTags 是否已赋值
                     * 
                     */
                    bool RemoveAllTagsHasBeenSet() const;

                    /**
                     * 获取修改实例的标签信息，全量标签信息，非增量
                     * @return Tags 修改实例的标签信息，全量标签信息，非增量
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置修改实例的标签信息，全量标签信息，非增量
                     * @param _tags 修改实例的标签信息，全量标签信息，非增量
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取是否开启集群风险提示
                     * @return EnableRiskWarning 是否开启集群风险提示
                     * 
                     */
                    bool GetEnableRiskWarning() const;

                    /**
                     * 设置是否开启集群风险提示
                     * @param _enableRiskWarning 是否开启集群风险提示
                     * 
                     */
                    void SetEnableRiskWarning(const bool& _enableRiskWarning);

                    /**
                     * 判断参数 EnableRiskWarning 是否已赋值
                     * @return EnableRiskWarning 是否已赋值
                     * 
                     */
                    bool EnableRiskWarningHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 集群名称，不填则不修改。非空字符串时必须 3-64 个字符，只能包含数字、字母、“-”和“_”
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 备注，不填则不修改
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 是否开启删除保护，不填则不修改
                     */
                    bool m_enableDeletionProtection;
                    bool m_enableDeletionProtectionHasBeenSet;

                    /**
                     * 是否删除所有标签，默认为false
                     */
                    bool m_removeAllTags;
                    bool m_removeAllTagsHasBeenSet;

                    /**
                     * 修改实例的标签信息，全量标签信息，非增量
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 是否开启集群风险提示
                     */
                    bool m_enableRiskWarning;
                    bool m_enableRiskWarningHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYRABBITMQVIPINSTANCEREQUEST_H_
