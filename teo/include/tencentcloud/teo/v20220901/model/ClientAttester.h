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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTATTESTER_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTATTESTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/TCRCEOption.h>
#include <tencentcloud/teo/v20220901/model/TCCaptchaOption.h>
#include <tencentcloud/teo/v20220901/model/TCEOCaptchaOption.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 认证选项配置。
                */
                class ClientAttester : public AbstractModel
                {
                public:
                    ClientAttester();
                    ~ClientAttester() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>认证选项 ID。</p>
                     * @return Id <p>认证选项 ID。</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>认证选项 ID。</p>
                     * @param _id <p>认证选项 ID。</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>认证选项名称。</p>
                     * @return Name <p>认证选项名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>认证选项名称。</p>
                     * @param _name <p>认证选项名称。</p>
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
                     * 获取<p>认证规则类型。仅出参返回，取值有：</p><li>PRESET: 系统预置规则，仅允许修改 AttesterDuration；</li><li>CUSTOM: 用户自定义规则。</li>
                     * @return Type <p>认证规则类型。仅出参返回，取值有：</p><li>PRESET: 系统预置规则，仅允许修改 AttesterDuration；</li><li>CUSTOM: 用户自定义规则。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>认证规则类型。仅出参返回，取值有：</p><li>PRESET: 系统预置规则，仅允许修改 AttesterDuration；</li><li>CUSTOM: 用户自定义规则。</li>
                     * @param _type <p>认证规则类型。仅出参返回，取值有：</p><li>PRESET: 系统预置规则，仅允许修改 AttesterDuration；</li><li>CUSTOM: 用户自定义规则。</li>
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
                     * 获取<p>认证方法。取值有：</p><li>TC-RCE: 使用风险识别 RCE 进行认证；</li><li>TC-CAPTCHA: 使用天御验证码进行认证；</li><li>TC-EO-CAPTCHA: 使用 EdgeOne 人机校验进行认证。</li>
                     * @return AttesterSource <p>认证方法。取值有：</p><li>TC-RCE: 使用风险识别 RCE 进行认证；</li><li>TC-CAPTCHA: 使用天御验证码进行认证；</li><li>TC-EO-CAPTCHA: 使用 EdgeOne 人机校验进行认证。</li>
                     * 
                     */
                    std::string GetAttesterSource() const;

                    /**
                     * 设置<p>认证方法。取值有：</p><li>TC-RCE: 使用风险识别 RCE 进行认证；</li><li>TC-CAPTCHA: 使用天御验证码进行认证；</li><li>TC-EO-CAPTCHA: 使用 EdgeOne 人机校验进行认证。</li>
                     * @param _attesterSource <p>认证方法。取值有：</p><li>TC-RCE: 使用风险识别 RCE 进行认证；</li><li>TC-CAPTCHA: 使用天御验证码进行认证；</li><li>TC-EO-CAPTCHA: 使用 EdgeOne 人机校验进行认证。</li>
                     * 
                     */
                    void SetAttesterSource(const std::string& _attesterSource);

                    /**
                     * 判断参数 AttesterSource 是否已赋值
                     * @return AttesterSource 是否已赋值
                     * 
                     */
                    bool AttesterSourceHasBeenSet() const;

                    /**
                     * 获取<p>认证有效时间。默认为 60s，支持的单位有：</p><li>s：秒，取值范围 60～43200；</li><li>m：分，取值范围 1～720；</li><li>h：小时，取值范围 1～12。</li>
                     * @return AttesterDuration <p>认证有效时间。默认为 60s，支持的单位有：</p><li>s：秒，取值范围 60～43200；</li><li>m：分，取值范围 1～720；</li><li>h：小时，取值范围 1～12。</li>
                     * 
                     */
                    std::string GetAttesterDuration() const;

                    /**
                     * 设置<p>认证有效时间。默认为 60s，支持的单位有：</p><li>s：秒，取值范围 60～43200；</li><li>m：分，取值范围 1～720；</li><li>h：小时，取值范围 1～12。</li>
                     * @param _attesterDuration <p>认证有效时间。默认为 60s，支持的单位有：</p><li>s：秒，取值范围 60～43200；</li><li>m：分，取值范围 1～720；</li><li>h：小时，取值范围 1～12。</li>
                     * 
                     */
                    void SetAttesterDuration(const std::string& _attesterDuration);

                    /**
                     * 判断参数 AttesterDuration 是否已赋值
                     * @return AttesterDuration 是否已赋值
                     * 
                     */
                    bool AttesterDurationHasBeenSet() const;

                    /**
                     * 获取<p>是否开启认证结果使用限制。 </p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul><p>默认值：off</p>
                     * @return UsageLimit <p>是否开启认证结果使用限制。 </p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul><p>默认值：off</p>
                     * 
                     */
                    std::string GetUsageLimit() const;

                    /**
                     * 设置<p>是否开启认证结果使用限制。 </p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul><p>默认值：off</p>
                     * @param _usageLimit <p>是否开启认证结果使用限制。 </p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul><p>默认值：off</p>
                     * 
                     */
                    void SetUsageLimit(const std::string& _usageLimit);

                    /**
                     * 判断参数 UsageLimit 是否已赋值
                     * @return UsageLimit 是否已赋值
                     * 
                     */
                    bool UsageLimitHasBeenSet() const;

                    /**
                     * 获取<p>认证结果最大使用次数。当 UsageLimit 为 on 时，此字段必填。</p><p>取值范围：[1, 100000]</p>
                     * @return MaxUsageCount <p>认证结果最大使用次数。当 UsageLimit 为 on 时，此字段必填。</p><p>取值范围：[1, 100000]</p>
                     * 
                     */
                    int64_t GetMaxUsageCount() const;

                    /**
                     * 设置<p>认证结果最大使用次数。当 UsageLimit 为 on 时，此字段必填。</p><p>取值范围：[1, 100000]</p>
                     * @param _maxUsageCount <p>认证结果最大使用次数。当 UsageLimit 为 on 时，此字段必填。</p><p>取值范围：[1, 100000]</p>
                     * 
                     */
                    void SetMaxUsageCount(const int64_t& _maxUsageCount);

                    /**
                     * 判断参数 MaxUsageCount 是否已赋值
                     * @return MaxUsageCount 是否已赋值
                     * 
                     */
                    bool MaxUsageCountHasBeenSet() const;

                    /**
                     * 获取<p>TC-RCE 认证的配置信息。</p><li>当 AttesterSource 参数值为 TC-RCE 时，此字段必填。</li>
                     * @return TCRCEOption <p>TC-RCE 认证的配置信息。</p><li>当 AttesterSource 参数值为 TC-RCE 时，此字段必填。</li>
                     * 
                     */
                    TCRCEOption GetTCRCEOption() const;

                    /**
                     * 设置<p>TC-RCE 认证的配置信息。</p><li>当 AttesterSource 参数值为 TC-RCE 时，此字段必填。</li>
                     * @param _tCRCEOption <p>TC-RCE 认证的配置信息。</p><li>当 AttesterSource 参数值为 TC-RCE 时，此字段必填。</li>
                     * 
                     */
                    void SetTCRCEOption(const TCRCEOption& _tCRCEOption);

                    /**
                     * 判断参数 TCRCEOption 是否已赋值
                     * @return TCRCEOption 是否已赋值
                     * 
                     */
                    bool TCRCEOptionHasBeenSet() const;

                    /**
                     * 获取<p>TC-CAPTCHA 认证的配置信息。</p><li>当 AttesterSource 参数值为 TC-CAPTCHA 时，此字段必填。</li>
                     * @return TCCaptchaOption <p>TC-CAPTCHA 认证的配置信息。</p><li>当 AttesterSource 参数值为 TC-CAPTCHA 时，此字段必填。</li>
                     * 
                     */
                    TCCaptchaOption GetTCCaptchaOption() const;

                    /**
                     * 设置<p>TC-CAPTCHA 认证的配置信息。</p><li>当 AttesterSource 参数值为 TC-CAPTCHA 时，此字段必填。</li>
                     * @param _tCCaptchaOption <p>TC-CAPTCHA 认证的配置信息。</p><li>当 AttesterSource 参数值为 TC-CAPTCHA 时，此字段必填。</li>
                     * 
                     */
                    void SetTCCaptchaOption(const TCCaptchaOption& _tCCaptchaOption);

                    /**
                     * 判断参数 TCCaptchaOption 是否已赋值
                     * @return TCCaptchaOption 是否已赋值
                     * 
                     */
                    bool TCCaptchaOptionHasBeenSet() const;

                    /**
                     * 获取<p>TC-EO-CAPTCHA 认证的配置信息。</p><li>当 AttesterSource 参数值为 TC-EO-CAPTCHA 时，此字段必填。</li>
                     * @return TCEOCaptchaOption <p>TC-EO-CAPTCHA 认证的配置信息。</p><li>当 AttesterSource 参数值为 TC-EO-CAPTCHA 时，此字段必填。</li>
                     * 
                     */
                    TCEOCaptchaOption GetTCEOCaptchaOption() const;

                    /**
                     * 设置<p>TC-EO-CAPTCHA 认证的配置信息。</p><li>当 AttesterSource 参数值为 TC-EO-CAPTCHA 时，此字段必填。</li>
                     * @param _tCEOCaptchaOption <p>TC-EO-CAPTCHA 认证的配置信息。</p><li>当 AttesterSource 参数值为 TC-EO-CAPTCHA 时，此字段必填。</li>
                     * 
                     */
                    void SetTCEOCaptchaOption(const TCEOCaptchaOption& _tCEOCaptchaOption);

                    /**
                     * 判断参数 TCEOCaptchaOption 是否已赋值
                     * @return TCEOCaptchaOption 是否已赋值
                     * 
                     */
                    bool TCEOCaptchaOptionHasBeenSet() const;

                private:

                    /**
                     * <p>认证选项 ID。</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>认证选项名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>认证规则类型。仅出参返回，取值有：</p><li>PRESET: 系统预置规则，仅允许修改 AttesterDuration；</li><li>CUSTOM: 用户自定义规则。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>认证方法。取值有：</p><li>TC-RCE: 使用风险识别 RCE 进行认证；</li><li>TC-CAPTCHA: 使用天御验证码进行认证；</li><li>TC-EO-CAPTCHA: 使用 EdgeOne 人机校验进行认证。</li>
                     */
                    std::string m_attesterSource;
                    bool m_attesterSourceHasBeenSet;

                    /**
                     * <p>认证有效时间。默认为 60s，支持的单位有：</p><li>s：秒，取值范围 60～43200；</li><li>m：分，取值范围 1～720；</li><li>h：小时，取值范围 1～12。</li>
                     */
                    std::string m_attesterDuration;
                    bool m_attesterDurationHasBeenSet;

                    /**
                     * <p>是否开启认证结果使用限制。 </p><p>枚举值：</p><ul><li>on： 开启</li><li>off： 关闭</li></ul><p>默认值：off</p>
                     */
                    std::string m_usageLimit;
                    bool m_usageLimitHasBeenSet;

                    /**
                     * <p>认证结果最大使用次数。当 UsageLimit 为 on 时，此字段必填。</p><p>取值范围：[1, 100000]</p>
                     */
                    int64_t m_maxUsageCount;
                    bool m_maxUsageCountHasBeenSet;

                    /**
                     * <p>TC-RCE 认证的配置信息。</p><li>当 AttesterSource 参数值为 TC-RCE 时，此字段必填。</li>
                     */
                    TCRCEOption m_tCRCEOption;
                    bool m_tCRCEOptionHasBeenSet;

                    /**
                     * <p>TC-CAPTCHA 认证的配置信息。</p><li>当 AttesterSource 参数值为 TC-CAPTCHA 时，此字段必填。</li>
                     */
                    TCCaptchaOption m_tCCaptchaOption;
                    bool m_tCCaptchaOptionHasBeenSet;

                    /**
                     * <p>TC-EO-CAPTCHA 认证的配置信息。</p><li>当 AttesterSource 参数值为 TC-EO-CAPTCHA 时，此字段必填。</li>
                     */
                    TCEOCaptchaOption m_tCEOCaptchaOption;
                    bool m_tCEOCaptchaOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTATTESTER_H_
