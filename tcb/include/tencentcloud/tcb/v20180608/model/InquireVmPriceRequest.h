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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_INQUIREVMPRICEREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_INQUIREVMPRICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * InquireVmPrice请求参数结构体
                */
                class InquireVmPriceRequest : public AbstractModel
                {
                public:
                    InquireVmPriceRequest();
                    ~InquireVmPriceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务器类型：
LightHouse = 轻量云服务器
CVM = 云服务器
                     * @return Type 服务器类型：
LightHouse = 轻量云服务器
CVM = 云服务器
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置服务器类型：
LightHouse = 轻量云服务器
CVM = 云服务器
                     * @param _type 服务器类型：
LightHouse = 轻量云服务器
CVM = 云服务器
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取轻量云服务器套餐ID。
当Type=LightHouse时必传
                     * @return LightHouseBundleId 轻量云服务器套餐ID。
当Type=LightHouse时必传
                     * 
                     */
                    std::string GetLightHouseBundleId() const;

                    /**
                     * 设置轻量云服务器套餐ID。
当Type=LightHouse时必传
                     * @param _lightHouseBundleId 轻量云服务器套餐ID。
当Type=LightHouse时必传
                     * 
                     */
                    void SetLightHouseBundleId(const std::string& _lightHouseBundleId);

                    /**
                     * 判断参数 LightHouseBundleId 是否已赋值
                     * @return LightHouseBundleId 是否已赋值
                     * 
                     */
                    bool LightHouseBundleIdHasBeenSet() const;

                    /**
                     * 获取轻量云服务器镜像ID。当Type=LightHouse时必传
                     * @return LightHouseBlueprintId 轻量云服务器镜像ID。当Type=LightHouse时必传
                     * 
                     */
                    std::string GetLightHouseBlueprintId() const;

                    /**
                     * 设置轻量云服务器镜像ID。当Type=LightHouse时必传
                     * @param _lightHouseBlueprintId 轻量云服务器镜像ID。当Type=LightHouse时必传
                     * 
                     */
                    void SetLightHouseBlueprintId(const std::string& _lightHouseBlueprintId);

                    /**
                     * 判断参数 LightHouseBlueprintId 是否已赋值
                     * @return LightHouseBlueprintId 是否已赋值
                     * 
                     */
                    bool LightHouseBlueprintIdHasBeenSet() const;

                private:

                    /**
                     * 服务器类型：
LightHouse = 轻量云服务器
CVM = 云服务器
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 轻量云服务器套餐ID。
当Type=LightHouse时必传
                     */
                    std::string m_lightHouseBundleId;
                    bool m_lightHouseBundleIdHasBeenSet;

                    /**
                     * 轻量云服务器镜像ID。当Type=LightHouse时必传
                     */
                    std::string m_lightHouseBlueprintId;
                    bool m_lightHouseBlueprintIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_INQUIREVMPRICEREQUEST_H_
