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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CHECKLIST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CHECKLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 合同审查清单
                */
                class Checklist : public AbstractModel
                {
                public:
                    Checklist();
                    ~Checklist() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取审查清单id
                     * @return Id 审查清单id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置审查清单id
                     * @param _id 审查清单id
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
                     * 获取审查清单名称
                     * @return Name 审查清单名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置审查清单名称
                     * @param _name 审查清单名称
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
                     * 获取审查点数量
                     * @return Count 审查点数量
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置审查点数量
                     * @param _count 审查点数量
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取启用状态
                     * @return Enabled 启用状态
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置启用状态
                     * @param _enabled 启用状态
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取修改人
                     * @return Updater 修改人
                     * 
                     */
                    std::string GetUpdater() const;

                    /**
                     * 设置修改人
                     * @param _updater 修改人
                     * 
                     */
                    void SetUpdater(const std::string& _updater);

                    /**
                     * 判断参数 Updater 是否已赋值
                     * @return Updater 是否已赋值
                     * 
                     */
                    bool UpdaterHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifiedOn 修改时间
                     * 
                     */
                    int64_t GetModifiedOn() const;

                    /**
                     * 设置修改时间
                     * @param _modifiedOn 修改时间
                     * 
                     */
                    void SetModifiedOn(const int64_t& _modifiedOn);

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     * 
                     */
                    bool ModifiedOnHasBeenSet() const;

                    /**
                     * 获取是否官方清单
                     * @return Official 是否官方清单
                     * 
                     */
                    bool GetOfficial() const;

                    /**
                     * 设置是否官方清单
                     * @param _official 是否官方清单
                     * 
                     */
                    void SetOfficial(const bool& _official);

                    /**
                     * 判断参数 Official 是否已赋值
                     * @return Official 是否已赋值
                     * 
                     */
                    bool OfficialHasBeenSet() const;

                    /**
                     * 获取配置状态，[0(未配置), 1(已配置)]
                     * @return ConfigStatus 配置状态，[0(未配置), 1(已配置)]
                     * 
                     */
                    int64_t GetConfigStatus() const;

                    /**
                     * 设置配置状态，[0(未配置), 1(已配置)]
                     * @param _configStatus 配置状态，[0(未配置), 1(已配置)]
                     * 
                     */
                    void SetConfigStatus(const int64_t& _configStatus);

                    /**
                     * 判断参数 ConfigStatus 是否已赋值
                     * @return ConfigStatus 是否已赋值
                     * 
                     */
                    bool ConfigStatusHasBeenSet() const;

                private:

                    /**
                     * 审查清单id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 审查清单名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 审查点数量
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 启用状态
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 修改人
                     */
                    std::string m_updater;
                    bool m_updaterHasBeenSet;

                    /**
                     * 修改时间
                     */
                    int64_t m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                    /**
                     * 是否官方清单
                     */
                    bool m_official;
                    bool m_officialHasBeenSet;

                    /**
                     * 配置状态，[0(未配置), 1(已配置)]
                     */
                    int64_t m_configStatus;
                    bool m_configStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CHECKLIST_H_
