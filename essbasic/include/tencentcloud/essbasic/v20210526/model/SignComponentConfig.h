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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SIGNCOMPONENTCONFIG_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SIGNCOMPONENTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 签署控件的配置信息，用在嵌入式发起的页面配置，包括 

- 签署控件 是否默认展示日期.
                */
                class SignComponentConfig : public AbstractModel
                {
                public:
                    SignComponentConfig();
                    ~SignComponentConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>签署控件默认属性配置，是否默认展示签署日期， 在页面中可以进行修改。</p><ul><li>false 展示签署日期（默认）</li><li>true 不展示签署日期<br><img src="https://qcloudimg.tencent-cloud.cn/raw/448514412e2f69f6129425beda4ff568.png" alt="image">。</li></ul>
                     * @return HideDate <p>签署控件默认属性配置，是否默认展示签署日期， 在页面中可以进行修改。</p><ul><li>false 展示签署日期（默认）</li><li>true 不展示签署日期<br><img src="https://qcloudimg.tencent-cloud.cn/raw/448514412e2f69f6129425beda4ff568.png" alt="image">。</li></ul>
                     * 
                     */
                    bool GetHideDate() const;

                    /**
                     * 设置<p>签署控件默认属性配置，是否默认展示签署日期， 在页面中可以进行修改。</p><ul><li>false 展示签署日期（默认）</li><li>true 不展示签署日期<br><img src="https://qcloudimg.tencent-cloud.cn/raw/448514412e2f69f6129425beda4ff568.png" alt="image">。</li></ul>
                     * @param _hideDate <p>签署控件默认属性配置，是否默认展示签署日期， 在页面中可以进行修改。</p><ul><li>false 展示签署日期（默认）</li><li>true 不展示签署日期<br><img src="https://qcloudimg.tencent-cloud.cn/raw/448514412e2f69f6129425beda4ff568.png" alt="image">。</li></ul>
                     * 
                     */
                    void SetHideDate(const bool& _hideDate);

                    /**
                     * 判断参数 HideDate 是否已赋值
                     * @return HideDate 是否已赋值
                     * 
                     */
                    bool HideDateHasBeenSet() const;

                    /**
                     * 获取<p>【仅 SignBeanTag=1 时有效】 签署方自行添加签署印章类控件（SIGN_SEAL、SIGN_PAGING_SEAL、SIGN_LEGAL_PERSON_SEAL）时，「盖章区适配签署方印章尺寸」开关的控制策略</p><p>枚举值：</p><ul><li>0： 默认关闭，可开启。与现网一致</li><li>1： 关闭且置灰——按控件默认的4.2cm尺寸盖章，签署方无法开启开关</li><li>2： 默认开启且可修改——默认按印章实际尺寸盖章，签署方可手动关闭</li><li>3： 开启且置灰——强制按印章实际尺寸盖章，签署方不可修改</li></ul><p>默认值：0</p>
                     * @return AddSignComponentUseSealSize <p>【仅 SignBeanTag=1 时有效】 签署方自行添加签署印章类控件（SIGN_SEAL、SIGN_PAGING_SEAL、SIGN_LEGAL_PERSON_SEAL）时，「盖章区适配签署方印章尺寸」开关的控制策略</p><p>枚举值：</p><ul><li>0： 默认关闭，可开启。与现网一致</li><li>1： 关闭且置灰——按控件默认的4.2cm尺寸盖章，签署方无法开启开关</li><li>2： 默认开启且可修改——默认按印章实际尺寸盖章，签署方可手动关闭</li><li>3： 开启且置灰——强制按印章实际尺寸盖章，签署方不可修改</li></ul><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetAddSignComponentUseSealSize() const;

                    /**
                     * 设置<p>【仅 SignBeanTag=1 时有效】 签署方自行添加签署印章类控件（SIGN_SEAL、SIGN_PAGING_SEAL、SIGN_LEGAL_PERSON_SEAL）时，「盖章区适配签署方印章尺寸」开关的控制策略</p><p>枚举值：</p><ul><li>0： 默认关闭，可开启。与现网一致</li><li>1： 关闭且置灰——按控件默认的4.2cm尺寸盖章，签署方无法开启开关</li><li>2： 默认开启且可修改——默认按印章实际尺寸盖章，签署方可手动关闭</li><li>3： 开启且置灰——强制按印章实际尺寸盖章，签署方不可修改</li></ul><p>默认值：0</p>
                     * @param _addSignComponentUseSealSize <p>【仅 SignBeanTag=1 时有效】 签署方自行添加签署印章类控件（SIGN_SEAL、SIGN_PAGING_SEAL、SIGN_LEGAL_PERSON_SEAL）时，「盖章区适配签署方印章尺寸」开关的控制策略</p><p>枚举值：</p><ul><li>0： 默认关闭，可开启。与现网一致</li><li>1： 关闭且置灰——按控件默认的4.2cm尺寸盖章，签署方无法开启开关</li><li>2： 默认开启且可修改——默认按印章实际尺寸盖章，签署方可手动关闭</li><li>3： 开启且置灰——强制按印章实际尺寸盖章，签署方不可修改</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetAddSignComponentUseSealSize(const uint64_t& _addSignComponentUseSealSize);

                    /**
                     * 判断参数 AddSignComponentUseSealSize 是否已赋值
                     * @return AddSignComponentUseSealSize 是否已赋值
                     * 
                     */
                    bool AddSignComponentUseSealSizeHasBeenSet() const;

                private:

                    /**
                     * <p>签署控件默认属性配置，是否默认展示签署日期， 在页面中可以进行修改。</p><ul><li>false 展示签署日期（默认）</li><li>true 不展示签署日期<br><img src="https://qcloudimg.tencent-cloud.cn/raw/448514412e2f69f6129425beda4ff568.png" alt="image">。</li></ul>
                     */
                    bool m_hideDate;
                    bool m_hideDateHasBeenSet;

                    /**
                     * <p>【仅 SignBeanTag=1 时有效】 签署方自行添加签署印章类控件（SIGN_SEAL、SIGN_PAGING_SEAL、SIGN_LEGAL_PERSON_SEAL）时，「盖章区适配签署方印章尺寸」开关的控制策略</p><p>枚举值：</p><ul><li>0： 默认关闭，可开启。与现网一致</li><li>1： 关闭且置灰——按控件默认的4.2cm尺寸盖章，签署方无法开启开关</li><li>2： 默认开启且可修改——默认按印章实际尺寸盖章，签署方可手动关闭</li><li>3： 开启且置灰——强制按印章实际尺寸盖章，签署方不可修改</li></ul><p>默认值：0</p>
                     */
                    uint64_t m_addSignComponentUseSealSize;
                    bool m_addSignComponentUseSealSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SIGNCOMPONENTCONFIG_H_
