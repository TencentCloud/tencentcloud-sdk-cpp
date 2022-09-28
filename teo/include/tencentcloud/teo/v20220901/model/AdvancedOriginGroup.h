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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ADVANCEDORIGINGROUP_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ADVANCEDORIGINGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginGroupCondition.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 高级回源配置
                */
                class AdvancedOriginGroup : public AbstractModel
                {
                public:
                    AdvancedOriginGroup();
                    ~AdvancedOriginGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取高级回源配置的匹配条件。其中相同的Target只能出现一次。
                     * @return OriginGroupConditions 高级回源配置的匹配条件。其中相同的Target只能出现一次。
                     */
                    std::vector<OriginGroupCondition> GetOriginGroupConditions() const;

                    /**
                     * 设置高级回源配置的匹配条件。其中相同的Target只能出现一次。
                     * @param OriginGroupConditions 高级回源配置的匹配条件。其中相同的Target只能出现一次。
                     */
                    void SetOriginGroupConditions(const std::vector<OriginGroupCondition>& _originGroupConditions);

                    /**
                     * 判断参数 OriginGroupConditions 是否已赋值
                     * @return OriginGroupConditions 是否已赋值
                     */
                    bool OriginGroupConditionsHasBeenSet() const;

                    /**
                     * 获取主源站组ID。
                     * @return OriginGroupId 主源站组ID。
                     */
                    std::string GetOriginGroupId() const;

                    /**
                     * 设置主源站组ID。
                     * @param OriginGroupId 主源站组ID。
                     */
                    void SetOriginGroupId(const std::string& _originGroupId);

                    /**
                     * 判断参数 OriginGroupId 是否已赋值
                     * @return OriginGroupId 是否已赋值
                     */
                    bool OriginGroupIdHasBeenSet() const;

                    /**
                     * 获取备用源站组ID。
                     * @return BackupOriginGroupId 备用源站组ID。
                     */
                    std::string GetBackupOriginGroupId() const;

                    /**
                     * 设置备用源站组ID。
                     * @param BackupOriginGroupId 备用源站组ID。
                     */
                    void SetBackupOriginGroupId(const std::string& _backupOriginGroupId);

                    /**
                     * 判断参数 BackupOriginGroupId 是否已赋值
                     * @return BackupOriginGroupId 是否已赋值
                     */
                    bool BackupOriginGroupIdHasBeenSet() const;

                private:

                    /**
                     * 高级回源配置的匹配条件。其中相同的Target只能出现一次。
                     */
                    std::vector<OriginGroupCondition> m_originGroupConditions;
                    bool m_originGroupConditionsHasBeenSet;

                    /**
                     * 主源站组ID。
                     */
                    std::string m_originGroupId;
                    bool m_originGroupIdHasBeenSet;

                    /**
                     * 备用源站组ID。
                     */
                    std::string m_backupOriginGroupId;
                    bool m_backupOriginGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ADVANCEDORIGINGROUP_H_
