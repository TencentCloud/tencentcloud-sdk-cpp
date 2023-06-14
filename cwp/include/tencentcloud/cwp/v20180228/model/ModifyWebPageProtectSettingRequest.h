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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBPAGEPROTECTSETTINGREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBPAGEPROTECTSETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyWebPageProtectSetting请求参数结构体
                */
                class ModifyWebPageProtectSettingRequest : public AbstractModel
                {
                public:
                    ModifyWebPageProtectSettingRequest();
                    ~ModifyWebPageProtectSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要操作的类型1 目录名称 2 防护文件类型
                     * @return ModifyType 需要操作的类型1 目录名称 2 防护文件类型
                     * 
                     */
                    uint64_t GetModifyType() const;

                    /**
                     * 设置需要操作的类型1 目录名称 2 防护文件类型
                     * @param _modifyType 需要操作的类型1 目录名称 2 防护文件类型
                     * 
                     */
                    void SetModifyType(const uint64_t& _modifyType);

                    /**
                     * 判断参数 ModifyType 是否已赋值
                     * @return ModifyType 是否已赋值
                     * 
                     */
                    bool ModifyTypeHasBeenSet() const;

                    /**
                     * 获取提交值
                     * @return Value 提交值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置提交值
                     * @param _value 提交值
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取配置对应的protect_path
                     * @return Id 配置对应的protect_path
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置配置对应的protect_path
                     * @param _id 配置对应的protect_path
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 需要操作的类型1 目录名称 2 防护文件类型
                     */
                    uint64_t m_modifyType;
                    bool m_modifyTypeHasBeenSet;

                    /**
                     * 提交值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 配置对应的protect_path
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBPAGEPROTECTSETTINGREQUEST_H_
