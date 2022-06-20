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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DELIVERYCONFIGBINDGROUP_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DELIVERYCONFIGBINDGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/GroupInfo.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 描述投递配置项绑定的部署组
                */
                class DeliveryConfigBindGroup : public AbstractModel
                {
                public:
                    DeliveryConfigBindGroup();
                    ~DeliveryConfigBindGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置id
                     * @return ConfigId 配置id
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置配置id
                     * @param ConfigId 配置id
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取配置名
                     * @return ConfigName 配置名
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置配置名
                     * @param ConfigName 配置名
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     */
                    bool ConfigNameHasBeenSet() const;

                    /**
                     * 获取采集路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CollectPath 采集路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetCollectPath() const;

                    /**
                     * 设置采集路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CollectPath 采集路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCollectPath(const std::vector<std::string>& _collectPath);

                    /**
                     * 判断参数 CollectPath 是否已赋值
                     * @return CollectPath 是否已赋值
                     */
                    bool CollectPathHasBeenSet() const;

                    /**
                     * 获取关联部署组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Groups 关联部署组信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GroupInfo> GetGroups() const;

                    /**
                     * 设置关联部署组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Groups 关联部署组信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroups(const std::vector<GroupInfo>& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     */
                    bool GroupsHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 配置id
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 配置名
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * 采集路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_collectPath;
                    bool m_collectPathHasBeenSet;

                    /**
                     * 关联部署组信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GroupInfo> m_groups;
                    bool m_groupsHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DELIVERYCONFIGBINDGROUP_H_
