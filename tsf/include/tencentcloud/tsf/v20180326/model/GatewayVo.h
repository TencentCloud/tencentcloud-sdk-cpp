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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_GATEWAYVO_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_GATEWAYVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/GatewayApiGroupVo.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 网关部署组、分组、API列表数据
                */
                class GatewayVo : public AbstractModel
                {
                public:
                    GatewayVo();
                    ~GatewayVo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网关部署组ID
                     * @return GatewayDeployGroupId 网关部署组ID
                     * 
                     */
                    std::string GetGatewayDeployGroupId() const;

                    /**
                     * 设置网关部署组ID
                     * @param _gatewayDeployGroupId 网关部署组ID
                     * 
                     */
                    void SetGatewayDeployGroupId(const std::string& _gatewayDeployGroupId);

                    /**
                     * 判断参数 GatewayDeployGroupId 是否已赋值
                     * @return GatewayDeployGroupId 是否已赋值
                     * 
                     */
                    bool GatewayDeployGroupIdHasBeenSet() const;

                    /**
                     * 获取网关部署组名称
                     * @return GatewayDeployGroupName 网关部署组名称
                     * 
                     */
                    std::string GetGatewayDeployGroupName() const;

                    /**
                     * 设置网关部署组名称
                     * @param _gatewayDeployGroupName 网关部署组名称
                     * 
                     */
                    void SetGatewayDeployGroupName(const std::string& _gatewayDeployGroupName);

                    /**
                     * 判断参数 GatewayDeployGroupName 是否已赋值
                     * @return GatewayDeployGroupName 是否已赋值
                     * 
                     */
                    bool GatewayDeployGroupNameHasBeenSet() const;

                    /**
                     * 获取API 分组个数
                     * @return GroupNum API 分组个数
                     * 
                     */
                    uint64_t GetGroupNum() const;

                    /**
                     * 设置API 分组个数
                     * @param _groupNum API 分组个数
                     * 
                     */
                    void SetGroupNum(const uint64_t& _groupNum);

                    /**
                     * 判断参数 GroupNum 是否已赋值
                     * @return GroupNum 是否已赋值
                     * 
                     */
                    bool GroupNumHasBeenSet() const;

                    /**
                     * 获取API 分组列表
                     * @return Groups API 分组列表
                     * 
                     */
                    std::vector<GatewayApiGroupVo> GetGroups() const;

                    /**
                     * 设置API 分组列表
                     * @param _groups API 分组列表
                     * 
                     */
                    void SetGroups(const std::vector<GatewayApiGroupVo>& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                private:

                    /**
                     * 网关部署组ID
                     */
                    std::string m_gatewayDeployGroupId;
                    bool m_gatewayDeployGroupIdHasBeenSet;

                    /**
                     * 网关部署组名称
                     */
                    std::string m_gatewayDeployGroupName;
                    bool m_gatewayDeployGroupNameHasBeenSet;

                    /**
                     * API 分组个数
                     */
                    uint64_t m_groupNum;
                    bool m_groupNumHasBeenSet;

                    /**
                     * API 分组列表
                     */
                    std::vector<GatewayApiGroupVo> m_groups;
                    bool m_groupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_GATEWAYVO_H_
