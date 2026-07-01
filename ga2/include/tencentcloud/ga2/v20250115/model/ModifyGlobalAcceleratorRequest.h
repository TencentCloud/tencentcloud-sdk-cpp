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
                     * 获取<p>全球加速实例ID。</p>
                     * @return GlobalAcceleratorId <p>全球加速实例ID。</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置<p>全球加速实例ID。</p>
                     * @param _globalAcceleratorId <p>全球加速实例ID。</p>
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
                     * 获取<p>名称，最大长度不能超过60个字节。</p>
                     * @return Name <p>名称，最大长度不能超过60个字节。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称，最大长度不能超过60个字节。</p>
                     * @param _name <p>名称，最大长度不能超过60个字节。</p>
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
                     * 获取<p>描述信息，最大长度不能超过100个字节。</p>
                     * @return Description <p>描述信息，最大长度不能超过100个字节。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述信息，最大长度不能超过100个字节。</p>
                     * @param _description <p>描述信息，最大长度不能超过100个字节。</p>
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
                     * 获取<p>跨境类型。</p><p>枚举值：</p><ul><li>HighQuality： 精品跨境。</li><li>Unicom： 联通跨境。</li></ul>
                     * @return CrossBorderType <p>跨境类型。</p><p>枚举值：</p><ul><li>HighQuality： 精品跨境。</li><li>Unicom： 联通跨境。</li></ul>
                     * 
                     */
                    std::string GetCrossBorderType() const;

                    /**
                     * 设置<p>跨境类型。</p><p>枚举值：</p><ul><li>HighQuality： 精品跨境。</li><li>Unicom： 联通跨境。</li></ul>
                     * @param _crossBorderType <p>跨境类型。</p><p>枚举值：</p><ul><li>HighQuality： 精品跨境。</li><li>Unicom： 联通跨境。</li></ul>
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
                     * 获取<p>代表是否填写跨境服务承诺书。</p><p>当CrossBorderType传入时，此字段必须填ture，代表填写跨境承诺书。</p>
                     * @return CrossBorderPromiseFlag <p>代表是否填写跨境服务承诺书。</p><p>当CrossBorderType传入时，此字段必须填ture，代表填写跨境承诺书。</p>
                     * 
                     */
                    bool GetCrossBorderPromiseFlag() const;

                    /**
                     * 设置<p>代表是否填写跨境服务承诺书。</p><p>当CrossBorderType传入时，此字段必须填ture，代表填写跨境承诺书。</p>
                     * @param _crossBorderPromiseFlag <p>代表是否填写跨境服务承诺书。</p><p>当CrossBorderType传入时，此字段必须填ture，代表填写跨境承诺书。</p>
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
                     * <p>全球加速实例ID。</p>
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * <p>名称，最大长度不能超过60个字节。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>描述信息，最大长度不能超过100个字节。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>跨境类型。</p><p>枚举值：</p><ul><li>HighQuality： 精品跨境。</li><li>Unicom： 联通跨境。</li></ul>
                     */
                    std::string m_crossBorderType;
                    bool m_crossBorderTypeHasBeenSet;

                    /**
                     * <p>代表是否填写跨境服务承诺书。</p><p>当CrossBorderType传入时，此字段必须填ture，代表填写跨境承诺书。</p>
                     */
                    bool m_crossBorderPromiseFlag;
                    bool m_crossBorderPromiseFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYGLOBALACCELERATORREQUEST_H_
