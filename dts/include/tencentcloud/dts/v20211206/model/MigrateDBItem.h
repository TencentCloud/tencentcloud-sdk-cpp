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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MIGRATEDBITEM_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MIGRATEDBITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 查询迁移实例列表的实例对象
                */
                class MigrateDBItem : public AbstractModel
                {
                public:
                    MigrateDBItem();
                    ~MigrateDBItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例Vip
                     * @return Vip 实例Vip
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置实例Vip
                     * @param _vip 实例Vip
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取实例Vport
                     * @return Vport 实例Vport
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置实例Vport
                     * @param _vport 实例Vport
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取是否可以作为迁移对象，1-可以，0-不可以
                     * @return Usable 是否可以作为迁移对象，1-可以，0-不可以
                     * 
                     */
                    int64_t GetUsable() const;

                    /**
                     * 设置是否可以作为迁移对象，1-可以，0-不可以
                     * @param _usable 是否可以作为迁移对象，1-可以，0-不可以
                     * 
                     */
                    void SetUsable(const int64_t& _usable);

                    /**
                     * 判断参数 Usable 是否已赋值
                     * @return Usable 是否已赋值
                     * 
                     */
                    bool UsableHasBeenSet() const;

                    /**
                     * 获取不可以作为迁移对象的原因
                     * @return Hint 不可以作为迁移对象的原因
                     * 
                     */
                    std::string GetHint() const;

                    /**
                     * 设置不可以作为迁移对象的原因
                     * @param _hint 不可以作为迁移对象的原因
                     * 
                     */
                    void SetHint(const std::string& _hint);

                    /**
                     * 判断参数 Hint 是否已赋值
                     * @return Hint 是否已赋值
                     * 
                     */
                    bool HintHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例Vip
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 实例Vport
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 是否可以作为迁移对象，1-可以，0-不可以
                     */
                    int64_t m_usable;
                    bool m_usableHasBeenSet;

                    /**
                     * 不可以作为迁移对象的原因
                     */
                    std::string m_hint;
                    bool m_hintHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MIGRATEDBITEM_H_
