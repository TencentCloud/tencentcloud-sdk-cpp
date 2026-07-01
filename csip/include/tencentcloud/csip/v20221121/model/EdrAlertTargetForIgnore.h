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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTTARGETFORIGNORE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTTARGETFORIGNORE_H_

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
                * EDR告警定位信息，用于永久忽略
                */
                class EdrAlertTargetForIgnore : public AbstractModel
                {
                public:
                    EdrAlertTargetForIgnore();
                    ~EdrAlertTargetForIgnore() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>告警主键ID</p>
                     * @return Id <p>告警主键ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>告警主键ID</p>
                     * @param _id <p>告警主键ID</p>
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
                     * 获取<p>告警所属账号ID（跨账号，前端必传）</p>
                     * @return AppId <p>告警所属账号ID（跨账号，前端必传）</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>告警所属账号ID（跨账号，前端必传）</p>
                     * @param _appId <p>告警所属账号ID（跨账号，前端必传）</p>
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
                     * 获取<p>告警唯一标识</p>
                     * @return AlertId <p>告警唯一标识</p>
                     * 
                     */
                    std::string GetAlertId() const;

                    /**
                     * 设置<p>告警唯一标识</p>
                     * @param _alertId <p>告警唯一标识</p>
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
                     * 获取<p>主机UUID（可选）</p>
                     * @return Quuid <p>主机UUID（可选）</p>
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置<p>主机UUID（可选）</p>
                     * @param _quuid <p>主机UUID（可选）</p>
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取<p>实例ID（可选，用于白名单写入）</p>
                     * @return InstanceId <p>实例ID（可选，用于白名单写入）</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID（可选，用于白名单写入）</p>
                     * @param _instanceId <p>实例ID（可选，用于白名单写入）</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * <p>告警主键ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>告警所属账号ID（跨账号，前端必传）</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>告警唯一标识</p>
                     */
                    std::string m_alertId;
                    bool m_alertIdHasBeenSet;

                    /**
                     * <p>主机UUID（可选）</p>
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * <p>实例ID（可选，用于白名单写入）</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTTARGETFORIGNORE_H_
