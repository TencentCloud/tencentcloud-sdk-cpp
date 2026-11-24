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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_MEMBERPERMISSIONOPTION_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_MEMBERPERMISSIONOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * 创建/邀请成员时可设置的财务权限
                */
                class MemberPermissionOption : public AbstractModel
                {
                public:
                    MemberPermissionOption();
                    ~MemberPermissionOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>权限 ID</p>
                     * @return Id <p>权限 ID</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>权限 ID</p>
                     * @param _id <p>权限 ID</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>权限名</p>
                     * @return Name <p>权限名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>权限名</p>
                     * @param _name <p>权限名</p>
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
                     * 获取<p>展示状态</p><p>枚举值：</p><ul><li>FIXED： 已勾选且置灰，不可修改</li><li>OPTIONAL： 正常可选</li><li>DISABLE： 置灰不可选，悬浮展示原因</li></ul><p>默认值：OPTIONAL</p>
                     * @return Status <p>展示状态</p><p>枚举值：</p><ul><li>FIXED： 已勾选且置灰，不可修改</li><li>OPTIONAL： 正常可选</li><li>DISABLE： 置灰不可选，悬浮展示原因</li></ul><p>默认值：OPTIONAL</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>展示状态</p><p>枚举值：</p><ul><li>FIXED： 已勾选且置灰，不可修改</li><li>OPTIONAL： 正常可选</li><li>DISABLE： 置灰不可选，悬浮展示原因</li></ul><p>默认值：OPTIONAL</p>
                     * @param _status <p>展示状态</p><p>枚举值：</p><ul><li>FIXED： 已勾选且置灰，不可修改</li><li>OPTIONAL： 正常可选</li><li>DISABLE： 置灰不可选，悬浮展示原因</li></ul><p>默认值：OPTIONAL</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>是否默认勾选</p>
                     * @return DefaultChecked <p>是否默认勾选</p>
                     * 
                     */
                    bool GetDefaultChecked() const;

                    /**
                     * 设置<p>是否默认勾选</p>
                     * @param _defaultChecked <p>是否默认勾选</p>
                     * 
                     */
                    void SetDefaultChecked(const bool& _defaultChecked);

                    /**
                     * 判断参数 DefaultChecked 是否已赋值
                     * @return DefaultChecked 是否已赋值
                     * 
                     */
                    bool DefaultCheckedHasBeenSet() const;

                    /**
                     * 获取<p>置灰原因码</p><p>枚举值：</p><ul><li>TransferNotAllowAdd： 资金划拨权限未命中白名单</li><li>CreditAmountsNotAllowAdd： 信用额度设置权限未命中白名单</li><li>AddDiscountInheritNotAllow： 校验不通过或异常</li></ul>
                     * @return DisabledCode <p>置灰原因码</p><p>枚举值：</p><ul><li>TransferNotAllowAdd： 资金划拨权限未命中白名单</li><li>CreditAmountsNotAllowAdd： 信用额度设置权限未命中白名单</li><li>AddDiscountInheritNotAllow： 校验不通过或异常</li></ul>
                     * 
                     */
                    std::string GetDisabledCode() const;

                    /**
                     * 设置<p>置灰原因码</p><p>枚举值：</p><ul><li>TransferNotAllowAdd： 资金划拨权限未命中白名单</li><li>CreditAmountsNotAllowAdd： 信用额度设置权限未命中白名单</li><li>AddDiscountInheritNotAllow： 校验不通过或异常</li></ul>
                     * @param _disabledCode <p>置灰原因码</p><p>枚举值：</p><ul><li>TransferNotAllowAdd： 资金划拨权限未命中白名单</li><li>CreditAmountsNotAllowAdd： 信用额度设置权限未命中白名单</li><li>AddDiscountInheritNotAllow： 校验不通过或异常</li></ul>
                     * 
                     */
                    void SetDisabledCode(const std::string& _disabledCode);

                    /**
                     * 判断参数 DisabledCode 是否已赋值
                     * @return DisabledCode 是否已赋值
                     * 
                     */
                    bool DisabledCodeHasBeenSet() const;

                private:

                    /**
                     * <p>权限 ID</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>权限名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>展示状态</p><p>枚举值：</p><ul><li>FIXED： 已勾选且置灰，不可修改</li><li>OPTIONAL： 正常可选</li><li>DISABLE： 置灰不可选，悬浮展示原因</li></ul><p>默认值：OPTIONAL</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>是否默认勾选</p>
                     */
                    bool m_defaultChecked;
                    bool m_defaultCheckedHasBeenSet;

                    /**
                     * <p>置灰原因码</p><p>枚举值：</p><ul><li>TransferNotAllowAdd： 资金划拨权限未命中白名单</li><li>CreditAmountsNotAllowAdd： 信用额度设置权限未命中白名单</li><li>AddDiscountInheritNotAllow： 校验不通过或异常</li></ul>
                     */
                    std::string m_disabledCode;
                    bool m_disabledCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_MEMBERPERMISSIONOPTION_H_
