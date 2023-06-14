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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_SNAPSHOTCONFIG_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_SNAPSHOTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 域名解析快照配置
                */
                class SnapshotConfig : public AbstractModel
                {
                public:
                    SnapshotConfig();
                    ~SnapshotConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置类型：空字符串-不备份，half_hour-每半小时，hourly-每小时，daily-每天，monthly-每月
                     * @return Config 配置类型：空字符串-不备份，half_hour-每半小时，hourly-每小时，daily-每天，monthly-每月
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置配置类型：空字符串-不备份，half_hour-每半小时，hourly-每小时，daily-每天，monthly-每月
                     * @param _config 配置类型：空字符串-不备份，half_hour-每半小时，hourly-每小时，daily-每天，monthly-每月
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取添加时间
                     * @return CreatedOn 添加时间
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置添加时间
                     * @param _createdOn 添加时间
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取所属域名 ID
                     * @return DomainId 所属域名 ID
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置所属域名 ID
                     * @param _domainId 所属域名 ID
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取配置 ID
                     * @return Id 配置 ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置配置 ID
                     * @param _id 配置 ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取快照数量
                     * @return SnapshotCount 快照数量
                     * 
                     */
                    uint64_t GetSnapshotCount() const;

                    /**
                     * 设置快照数量
                     * @param _snapshotCount 快照数量
                     * 
                     */
                    void SetSnapshotCount(const uint64_t& _snapshotCount);

                    /**
                     * 判断参数 SnapshotCount 是否已赋值
                     * @return SnapshotCount 是否已赋值
                     * 
                     */
                    bool SnapshotCountHasBeenSet() const;

                    /**
                     * 获取状态：enable-启用，disable-禁用
                     * @return Status 状态：enable-启用，disable-禁用
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态：enable-启用，disable-禁用
                     * @param _status 状态：enable-启用，disable-禁用
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdatedOn 更新时间
                     * 
                     */
                    std::string GetUpdatedOn() const;

                    /**
                     * 设置更新时间
                     * @param _updatedOn 更新时间
                     * 
                     */
                    void SetUpdatedOn(const std::string& _updatedOn);

                    /**
                     * 判断参数 UpdatedOn 是否已赋值
                     * @return UpdatedOn 是否已赋值
                     * 
                     */
                    bool UpdatedOnHasBeenSet() const;

                private:

                    /**
                     * 配置类型：空字符串-不备份，half_hour-每半小时，hourly-每小时，daily-每天，monthly-每月
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 添加时间
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 所属域名 ID
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 配置 ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 快照数量
                     */
                    uint64_t m_snapshotCount;
                    bool m_snapshotCountHasBeenSet;

                    /**
                     * 状态：enable-启用，disable-禁用
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_SNAPSHOTCONFIG_H_
