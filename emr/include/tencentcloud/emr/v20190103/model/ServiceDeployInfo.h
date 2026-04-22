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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SERVICEDEPLOYINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SERVICEDEPLOYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ComponentDeployInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 服务的部署信息
                */
                class ServiceDeployInfo : public AbstractModel
                {
                public:
                    ServiceDeployInfo();
                    ~ServiceDeployInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务名称
                     * @return ServiceName 服务名称
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务名称
                     * @param _serviceName 服务名称
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
                     * 获取角色的部署信息列表
                     * @return ComponentDeployInfoList 角色的部署信息列表
                     * 
                     */
                    std::vector<ComponentDeployInfo> GetComponentDeployInfoList() const;

                    /**
                     * 设置角色的部署信息列表
                     * @param _componentDeployInfoList 角色的部署信息列表
                     * 
                     */
                    void SetComponentDeployInfoList(const std::vector<ComponentDeployInfo>& _componentDeployInfoList);

                    /**
                     * 判断参数 ComponentDeployInfoList 是否已赋值
                     * @return ComponentDeployInfoList 是否已赋值
                     * 
                     */
                    bool ComponentDeployInfoListHasBeenSet() const;

                private:

                    /**
                     * 服务名称
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 角色的部署信息列表
                     */
                    std::vector<ComponentDeployInfo> m_componentDeployInfoList;
                    bool m_componentDeployInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SERVICEDEPLOYINFO_H_
