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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYGLOBALACCELERATORREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYGLOBALACCELERATORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * ModifyGlobalAccelerator请求参数结构体
                */
                class ModifyGlobalAcceleratorRequest : public AbstractModel
                {
                public:
                    ModifyGlobalAcceleratorRequest();
                    ~ModifyGlobalAcceleratorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取全球加速实例ID。
                     * @return GlobalAcceleratorId 全球加速实例ID。
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置全球加速实例ID。
                     * @param _globalAcceleratorId 全球加速实例ID。
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取名称，最大长度不能超过60个字节。
                     * @return Name 名称，最大长度不能超过60个字节。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称，最大长度不能超过60个字节。
                     * @param _name 名称，最大长度不能超过60个字节。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取描述信息，最大长度不能超过100个字节。
                     * @return Description 描述信息，最大长度不能超过100个字节。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息，最大长度不能超过100个字节。
                     * @param _description 描述信息，最大长度不能超过100个字节。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取跨境类型。
                     * @return CrossBorderType 跨境类型。
                     * 
                     */
                    std::string GetCrossBorderType() const;

                    /**
                     * 设置跨境类型。
                     * @param _crossBorderType 跨境类型。
                     * 
                     */
                    void SetCrossBorderType(const std::string& _crossBorderType);

                    /**
                     * 判断参数 CrossBorderType 是否已赋值
                     * @return CrossBorderType 是否已赋值
                     * 
                     */
                    bool CrossBorderTypeHasBeenSet() const;

                    /**
                     * 获取代表是否跨境服务承诺。
                     * @return CrossBorderPromiseFlag 代表是否跨境服务承诺。
                     * 
                     */
                    bool GetCrossBorderPromiseFlag() const;

                    /**
                     * 设置代表是否跨境服务承诺。
                     * @param _crossBorderPromiseFlag 代表是否跨境服务承诺。
                     * 
                     */
                    void SetCrossBorderPromiseFlag(const bool& _crossBorderPromiseFlag);

                    /**
                     * 判断参数 CrossBorderPromiseFlag 是否已赋值
                     * @return CrossBorderPromiseFlag 是否已赋值
                     * 
                     */
                    bool CrossBorderPromiseFlagHasBeenSet() const;

                private:

                    /**
                     * 全球加速实例ID。
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * 名称，最大长度不能超过60个字节。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述信息，最大长度不能超过100个字节。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 跨境类型。
                     */
                    std::string m_crossBorderType;
                    bool m_crossBorderTypeHasBeenSet;

                    /**
                     * 代表是否跨境服务承诺。
                     */
                    bool m_crossBorderPromiseFlag;
                    bool m_crossBorderPromiseFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYGLOBALACCELERATORREQUEST_H_
