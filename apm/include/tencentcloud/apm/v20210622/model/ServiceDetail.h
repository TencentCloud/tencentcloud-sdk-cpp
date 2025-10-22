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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_SERVICEDETAIL_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_SERVICEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/ApmTag.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 应用详细信息
                */
                class ServiceDetail : public AbstractModel
                {
                public:
                    ServiceDetail();
                    ~ServiceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceID 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceID() const;

                    /**
                     * 设置应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceID 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceID(const std::string& _serviceID);

                    /**
                     * 判断参数 ServiceID 是否已赋值
                     * @return ServiceID 是否已赋值
                     * 
                     */
                    bool ServiceIDHasBeenSet() const;

                    /**
                     * 获取业务系统ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceKey 业务系统ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置业务系统ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceKey 业务系统ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceKey(const std::string& _instanceKey);

                    /**
                     * 判断参数 InstanceKey 是否已赋值
                     * @return InstanceKey 是否已赋值
                     * 
                     */
                    bool InstanceKeyHasBeenSet() const;

                    /**
                     * 获取用户appid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppID 用户appid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置用户appid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appID 用户appid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppID(const int64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUIN 主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateUIN() const;

                    /**
                     * 设置主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createUIN 主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateUIN(const std::string& _createUIN);

                    /**
                     * 判断参数 CreateUIN 是否已赋值
                     * @return CreateUIN 是否已赋值
                     * 
                     */
                    bool CreateUINHasBeenSet() const;

                    /**
                     * 获取应用名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceName 应用名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置应用名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceName 应用名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取应用描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceDescription 应用描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceDescription() const;

                    /**
                     * 设置应用描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceDescription 应用描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceDescription(const std::string& _serviceDescription);

                    /**
                     * 判断参数 ServiceDescription 是否已赋值
                     * @return ServiceDescription 是否已赋值
                     * 
                     */
                    bool ServiceDescriptionHasBeenSet() const;

                    /**
                     * 获取地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<ApmTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取业务系统名称
                     * @return InstanceName 业务系统名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置业务系统名称
                     * @param _instanceName 业务系统名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                private:

                    /**
                     * 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceID;
                    bool m_serviceIDHasBeenSet;

                    /**
                     * 业务系统ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * 用户appid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * 主账号uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createUIN;
                    bool m_createUINHasBeenSet;

                    /**
                     * 应用名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 应用描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceDescription;
                    bool m_serviceDescriptionHasBeenSet;

                    /**
                     * 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 业务系统名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_SERVICEDETAIL_H_
