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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_VERIFICATIONCONFIG_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_VERIFICATIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 登录短信验证码发送配置。用于管理登录时使用的短信验证码发送的通道相关设置，目前提供云开发默认短信包和客户自定义短信包，推荐使用云开发默认短信包。
如果使用自定义APIs发送短信，方法命名规则
方法名称：发送验证码
方法标识：SendVerificationCode
入参
Mobile：字符串（手机号，如：“+86 + 手机号”）
VerificationCode：字符串（验证码，如：“123456”）
返回值
ErrorCode：int（0 表示成功，非 0 表示失败）
ErrorMessage：字符串（ErrorCode 非 0 时，返回错误信息）
                */
                class VerificationConfig : public AbstractModel
                {
                public:
                    VerificationConfig();
                    ~VerificationConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取短信验证码发送通道类型。取值范围：
default：使用默认云开发短信包发送短信。
apis：使用云开发自定义 APIs 作为短信发送通道，需配合 Name 和 Method 参数使用。
不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 短信验证码发送通道类型。取值范围：
default：使用默认云开发短信包发送短信。
apis：使用云开发自定义 APIs 作为短信发送通道，需配合 Name 和 Method 参数使用。
不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置短信验证码发送通道类型。取值范围：
default：使用默认云开发短信包发送短信。
apis：使用云开发自定义 APIs 作为短信发送通道，需配合 Name 和 Method 参数使用。
不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 短信验证码发送通道类型。取值范围：
default：使用默认云开发短信包发送短信。
apis：使用云开发自定义 APIs 作为短信发送通道，需配合 Name 和 Method 参数使用。
不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取自定义 APIs 数据源唯一标识，当 Type 为 apis 时必填。用于定位微搭 APIs 中对应的数据源。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 自定义 APIs 数据源唯一标识，当 Type 为 apis 时必填。用于定位微搭 APIs 中对应的数据源。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置自定义 APIs 数据源唯一标识，当 Type 为 apis 时必填。用于定位微搭 APIs 中对应的数据源。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 自定义 APIs 数据源唯一标识，当 Type 为 apis 时必填。用于定位微搭 APIs 中对应的数据源。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取自定义 APIs 方法名，当 Type 为 apis 时必填。指定微搭 APIs 中用于发送验证码的方法。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Method 自定义 APIs 方法名，当 Type 为 apis 时必填。指定微搭 APIs 中用于发送验证码的方法。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置自定义 APIs 方法名，当 Type 为 apis 时必填。指定微搭 APIs 中用于发送验证码的方法。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _method 自定义 APIs 方法名，当 Type 为 apis 时必填。指定微搭 APIs 中用于发送验证码的方法。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取单个手机号每日短信发送上限。默认值为 30，传 -1 表示不限制，如果设置为不限制，需要注意恶意攻击，导致短信套餐用量计费问题。仅支持正整数或 -1。不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SmsDayLimit 单个手机号每日短信发送上限。默认值为 30，传 -1 表示不限制，如果设置为不限制，需要注意恶意攻击，导致短信套餐用量计费问题。仅支持正整数或 -1。不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSmsDayLimit() const;

                    /**
                     * 设置单个手机号每日短信发送上限。默认值为 30，传 -1 表示不限制，如果设置为不限制，需要注意恶意攻击，导致短信套餐用量计费问题。仅支持正整数或 -1。不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _smsDayLimit 单个手机号每日短信发送上限。默认值为 30，传 -1 表示不限制，如果设置为不限制，需要注意恶意攻击，导致短信套餐用量计费问题。仅支持正整数或 -1。不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSmsDayLimit(const int64_t& _smsDayLimit);

                    /**
                     * 判断参数 SmsDayLimit 是否已赋值
                     * @return SmsDayLimit 是否已赋值
                     * 
                     */
                    bool SmsDayLimitHasBeenSet() const;

                private:

                    /**
                     * 短信验证码发送通道类型。取值范围：
default：使用默认云开发短信包发送短信。
apis：使用云开发自定义 APIs 作为短信发送通道，需配合 Name 和 Method 参数使用。
不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 自定义 APIs 数据源唯一标识，当 Type 为 apis 时必填。用于定位微搭 APIs 中对应的数据源。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 自定义 APIs 方法名，当 Type 为 apis 时必填。指定微搭 APIs 中用于发送验证码的方法。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 单个手机号每日短信发送上限。默认值为 30，传 -1 表示不限制，如果设置为不限制，需要注意恶意攻击，导致短信套餐用量计费问题。仅支持正整数或 -1。不传则不修改当前配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_smsDayLimit;
                    bool m_smsDayLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_VERIFICATIONCONFIG_H_
