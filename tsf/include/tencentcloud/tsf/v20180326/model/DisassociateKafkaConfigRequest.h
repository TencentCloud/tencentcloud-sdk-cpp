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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DISASSOCIATEKAFKACONFIGREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DISASSOCIATEKAFKACONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DisassociateKafkaConfig请求参数结构体
                */
                class DisassociateKafkaConfigRequest : public AbstractModel
                {
                public:
                    DisassociateKafkaConfigRequest();
                    ~DisassociateKafkaConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置项id
                     * @return ConfigId 配置项id
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置配置项id
                     * @param _configId 配置项id
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取部署组id
                     * @return GroupIds 部署组id
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置部署组id
                     * @param _groupIds 部署组id
                     * 
                     */
                    void SetGroupIds(const std::vector<std::string>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                private:

                    /**
                     * 配置项id
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 部署组id
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DISASSOCIATEKAFKACONFIGREQUEST_H_
