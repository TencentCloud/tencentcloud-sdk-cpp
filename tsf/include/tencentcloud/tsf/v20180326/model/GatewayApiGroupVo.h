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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_GATEWAYAPIGROUPVO_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_GATEWAYAPIGROUPVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/GatewayGroupApiVo.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 网关分组简单信息
                */
                class GatewayApiGroupVo : public AbstractModel
                {
                public:
                    GatewayApiGroupVo();
                    ~GatewayApiGroupVo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分组ID
                     * @return GroupId 分组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置分组ID
                     * @param _groupId 分组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取分组名称
                     * @return GroupName 分组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置分组名称
                     * @param _groupName 分组名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取分组下API个数
                     * @return GroupApiCount 分组下API个数
                     * 
                     */
                    uint64_t GetGroupApiCount() const;

                    /**
                     * 设置分组下API个数
                     * @param _groupApiCount 分组下API个数
                     * 
                     */
                    void SetGroupApiCount(const uint64_t& _groupApiCount);

                    /**
                     * 判断参数 GroupApiCount 是否已赋值
                     * @return GroupApiCount 是否已赋值
                     * 
                     */
                    bool GroupApiCountHasBeenSet() const;

                    /**
                     * 获取分组API列表
                     * @return GroupApis 分组API列表
                     * 
                     */
                    std::vector<GatewayGroupApiVo> GetGroupApis() const;

                    /**
                     * 设置分组API列表
                     * @param _groupApis 分组API列表
                     * 
                     */
                    void SetGroupApis(const std::vector<GatewayGroupApiVo>& _groupApis);

                    /**
                     * 判断参数 GroupApis 是否已赋值
                     * @return GroupApis 是否已赋值
                     * 
                     */
                    bool GroupApisHasBeenSet() const;

                    /**
                     * 获取网关实例的类型
                     * @return GatewayInstanceType 网关实例的类型
                     * 
                     */
                    std::string GetGatewayInstanceType() const;

                    /**
                     * 设置网关实例的类型
                     * @param _gatewayInstanceType 网关实例的类型
                     * 
                     */
                    void SetGatewayInstanceType(const std::string& _gatewayInstanceType);

                    /**
                     * 判断参数 GatewayInstanceType 是否已赋值
                     * @return GatewayInstanceType 是否已赋值
                     * 
                     */
                    bool GatewayInstanceTypeHasBeenSet() const;

                    /**
                     * 获取网关实例ID
                     * @return GatewayInstanceId 网关实例ID
                     * 
                     */
                    std::string GetGatewayInstanceId() const;

                    /**
                     * 设置网关实例ID
                     * @param _gatewayInstanceId 网关实例ID
                     * 
                     */
                    void SetGatewayInstanceId(const std::string& _gatewayInstanceId);

                    /**
                     * 判断参数 GatewayInstanceId 是否已赋值
                     * @return GatewayInstanceId 是否已赋值
                     * 
                     */
                    bool GatewayInstanceIdHasBeenSet() const;

                private:

                    /**
                     * 分组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 分组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 分组下API个数
                     */
                    uint64_t m_groupApiCount;
                    bool m_groupApiCountHasBeenSet;

                    /**
                     * 分组API列表
                     */
                    std::vector<GatewayGroupApiVo> m_groupApis;
                    bool m_groupApisHasBeenSet;

                    /**
                     * 网关实例的类型
                     */
                    std::string m_gatewayInstanceType;
                    bool m_gatewayInstanceTypeHasBeenSet;

                    /**
                     * 网关实例ID
                     */
                    std::string m_gatewayInstanceId;
                    bool m_gatewayInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_GATEWAYAPIGROUPVO_H_
