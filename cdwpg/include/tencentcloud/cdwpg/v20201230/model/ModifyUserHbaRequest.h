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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_MODIFYUSERHBAREQUEST_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_MODIFYUSERHBAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/HbaConfig.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * ModifyUserHba请求参数结构体
                */
                class ModifyUserHbaRequest : public AbstractModel
                {
                public:
                    ModifyUserHbaRequest();
                    ~ModifyUserHbaRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取hba数组
                     * @return HbaConfigs hba数组
                     * 
                     */
                    std::vector<HbaConfig> GetHbaConfigs() const;

                    /**
                     * 设置hba数组
                     * @param _hbaConfigs hba数组
                     * 
                     */
                    void SetHbaConfigs(const std::vector<HbaConfig>& _hbaConfigs);

                    /**
                     * 判断参数 HbaConfigs 是否已赋值
                     * @return HbaConfigs 是否已赋值
                     * 
                     */
                    bool HbaConfigsHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * hba数组
                     */
                    std::vector<HbaConfig> m_hbaConfigs;
                    bool m_hbaConfigsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_MODIFYUSERHBAREQUEST_H_
