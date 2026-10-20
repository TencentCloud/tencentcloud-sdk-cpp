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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DELIVERYSTRATEGYITEM_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DELIVERYSTRATEGYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 数据
                */
                class DeliveryStrategyItem : public AbstractModel
                {
                public:
                    DeliveryStrategyItem();
                    ~DeliveryStrategyItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>策略名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>策略名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>策略名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>策略名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>转发方式 0:syslog, 2:kafka, 3:http(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>转发方式 0:syslog, 2:kafka, 3:http(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>转发方式 0:syslog, 2:kafka, 3:http(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>转发方式 0:syslog, 2:kafka, 3:http(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>转发日志类型列表 身份安全:&quot;040201000000&quot;,资源访问日志:&quot;040203000000&quot;,客户端操作日志:&quot;040202000000&quot;,终端安全日志:&quot;040205000000&quot;,终端管控日志:&quot;040206000000&quot;,终端合规日志:&quot;040207000000&quot;,license授权日志:&quot;040212000000&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogTypes <p>转发日志类型列表 身份安全:&quot;040201000000&quot;,资源访问日志:&quot;040203000000&quot;,客户端操作日志:&quot;040202000000&quot;,终端安全日志:&quot;040205000000&quot;,终端管控日志:&quot;040206000000&quot;,终端合规日志:&quot;040207000000&quot;,license授权日志:&quot;040212000000&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetLogTypes() const;

                    /**
                     * 设置<p>转发日志类型列表 身份安全:&quot;040201000000&quot;,资源访问日志:&quot;040203000000&quot;,客户端操作日志:&quot;040202000000&quot;,终端安全日志:&quot;040205000000&quot;,终端管控日志:&quot;040206000000&quot;,终端合规日志:&quot;040207000000&quot;,license授权日志:&quot;040212000000&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logTypes <p>转发日志类型列表 身份安全:&quot;040201000000&quot;,资源访问日志:&quot;040203000000&quot;,客户端操作日志:&quot;040202000000&quot;,终端安全日志:&quot;040205000000&quot;,终端管控日志:&quot;040206000000&quot;,终端合规日志:&quot;040207000000&quot;,license授权日志:&quot;040212000000&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogTypes(const std::vector<std::string>& _logTypes);

                    /**
                     * 判断参数 LogTypes 是否已赋值
                     * @return LogTypes 是否已赋值
                     * 
                     */
                    bool LogTypesHasBeenSet() const;

                    /**
                     * 获取<p>转发配置服务器名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigName <p>转发配置服务器名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置<p>转发配置服务器名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configName <p>转发配置服务器名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     * 
                     */
                    bool ConfigNameHasBeenSet() const;

                    /**
                     * 获取<p>策略描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>策略描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>策略描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>策略描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>转发策略id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ID <p>转发策略id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>转发策略id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iD <p>转发策略id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>转发服务器id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigId <p>转发服务器id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetConfigId() const;

                    /**
                     * 设置<p>转发服务器id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configId <p>转发服务器id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigId(const uint64_t& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                private:

                    /**
                     * <p>策略名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>转发方式 0:syslog, 2:kafka, 3:http(只支持32位)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>转发日志类型列表 身份安全:&quot;040201000000&quot;,资源访问日志:&quot;040203000000&quot;,客户端操作日志:&quot;040202000000&quot;,终端安全日志:&quot;040205000000&quot;,终端管控日志:&quot;040206000000&quot;,终端合规日志:&quot;040207000000&quot;,license授权日志:&quot;040212000000&quot;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_logTypes;
                    bool m_logTypesHasBeenSet;

                    /**
                     * <p>转发配置服务器名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * <p>策略描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>转发策略id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>转发服务器id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_configId;
                    bool m_configIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DELIVERYSTRATEGYITEM_H_
