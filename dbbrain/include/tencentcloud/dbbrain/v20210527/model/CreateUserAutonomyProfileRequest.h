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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEUSERAUTONOMYPROFILEREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEUSERAUTONOMYPROFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * CreateUserAutonomyProfile请求参数结构体
                */
                class CreateUserAutonomyProfileRequest : public AbstractModel
                {
                public:
                    CreateUserAutonomyProfileRequest();
                    ~CreateUserAutonomyProfileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置类型，为需要配置的功能枚举值，目前包含一下枚举值：AutonomyGlobal（自治功能全局配置）、RedisAutoScaleUp（Redis自治扩容配置）
                     * @return ProfileType 配置类型，为需要配置的功能枚举值，目前包含一下枚举值：AutonomyGlobal（自治功能全局配置）、RedisAutoScaleUp（Redis自治扩容配置）
                     * 
                     */
                    std::string GetProfileType() const;

                    /**
                     * 设置配置类型，为需要配置的功能枚举值，目前包含一下枚举值：AutonomyGlobal（自治功能全局配置）、RedisAutoScaleUp（Redis自治扩容配置）
                     * @param _profileType 配置类型，为需要配置的功能枚举值，目前包含一下枚举值：AutonomyGlobal（自治功能全局配置）、RedisAutoScaleUp（Redis自治扩容配置）
                     * 
                     */
                    void SetProfileType(const std::string& _profileType);

                    /**
                     * 判断参数 ProfileType 是否已赋值
                     * @return ProfileType 是否已赋值
                     * 
                     */
                    bool ProfileTypeHasBeenSet() const;

                    /**
                     * 获取实列ID。
                     * @return InstanceId 实列ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实列ID。
                     * @param _instanceId 实列ID。
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
                     * 获取服务产品类型，支持值包括： "redis" - 云数据库 Redis。
                     * @return Product 服务产品类型，支持值包括： "redis" - 云数据库 Redis。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值包括： "redis" - 云数据库 Redis。
                     * @param _product 服务产品类型，支持值包括： "redis" - 云数据库 Redis。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取自治功能相关配置，标准JSON字符串格式。
                     * @return ProfileInfo 自治功能相关配置，标准JSON字符串格式。
                     * 
                     */
                    std::string GetProfileInfo() const;

                    /**
                     * 设置自治功能相关配置，标准JSON字符串格式。
                     * @param _profileInfo 自治功能相关配置，标准JSON字符串格式。
                     * 
                     */
                    void SetProfileInfo(const std::string& _profileInfo);

                    /**
                     * 判断参数 ProfileInfo 是否已赋值
                     * @return ProfileInfo 是否已赋值
                     * 
                     */
                    bool ProfileInfoHasBeenSet() const;

                private:

                    /**
                     * 配置类型，为需要配置的功能枚举值，目前包含一下枚举值：AutonomyGlobal（自治功能全局配置）、RedisAutoScaleUp（Redis自治扩容配置）
                     */
                    std::string m_profileType;
                    bool m_profileTypeHasBeenSet;

                    /**
                     * 实列ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 服务产品类型，支持值包括： "redis" - 云数据库 Redis。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 自治功能相关配置，标准JSON字符串格式。
                     */
                    std::string m_profileInfo;
                    bool m_profileInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEUSERAUTONOMYPROFILEREQUEST_H_
