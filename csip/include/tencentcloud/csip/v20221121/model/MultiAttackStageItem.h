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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MULTIATTACKSTAGEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MULTIATTACKSTAGEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 告警对应的多攻击阶段
                */
                class MultiAttackStageItem : public AbstractModel
                {
                public:
                    MultiAttackStageItem();
                    ~MultiAttackStageItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>表id</p>
                     * @return Id <p>表id</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>表id</p>
                     * @param _id <p>表id</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>APPID</p>
                     * @return AppId <p>APPID</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>APPID</p>
                     * @param _appId <p>APPID</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>告警ID</p>
                     * @return AlertId <p>告警ID</p>
                     * 
                     */
                    std::string GetAlertId() const;

                    /**
                     * 设置<p>告警ID</p>
                     * @param _alertId <p>告警ID</p>
                     * 
                     */
                    void SetAlertId(const std::string& _alertId);

                    /**
                     * 判断参数 AlertId 是否已赋值
                     * @return AlertId 是否已赋值
                     * 
                     */
                    bool AlertIdHasBeenSet() const;

                    /**
                     * 获取<p>攻击阶段列表</p>
                     * @return AttackStages <p>攻击阶段列表</p>
                     * 
                     */
                    std::vector<std::string> GetAttackStages() const;

                    /**
                     * 设置<p>攻击阶段列表</p>
                     * @param _attackStages <p>攻击阶段列表</p>
                     * 
                     */
                    void SetAttackStages(const std::vector<std::string>& _attackStages);

                    /**
                     * 判断参数 AttackStages 是否已赋值
                     * @return AttackStages 是否已赋值
                     * 
                     */
                    bool AttackStagesHasBeenSet() const;

                private:

                    /**
                     * <p>表id</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>APPID</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>告警ID</p>
                     */
                    std::string m_alertId;
                    bool m_alertIdHasBeenSet;

                    /**
                     * <p>攻击阶段列表</p>
                     */
                    std::vector<std::string> m_attackStages;
                    bool m_attackStagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MULTIATTACKSTAGEITEM_H_
