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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_APPROVEROPTION_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_APPROVEROPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 签署人个性化能力信息
                */
                class ApproverOption : public AbstractModel
                {
                public:
                    ApproverOption();
                    ~ApproverOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>签署方是否可以拒签</p><ul><li> **false** : ( 默认)可以拒签</li><li> **true** :不可以拒签</li></ul>
                     * @return NoRefuse <p>签署方是否可以拒签</p><ul><li> **false** : ( 默认)可以拒签</li><li> **true** :不可以拒签</li></ul>
                     * 
                     */
                    bool GetNoRefuse() const;

                    /**
                     * 设置<p>签署方是否可以拒签</p><ul><li> **false** : ( 默认)可以拒签</li><li> **true** :不可以拒签</li></ul>
                     * @param _noRefuse <p>签署方是否可以拒签</p><ul><li> **false** : ( 默认)可以拒签</li><li> **true** :不可以拒签</li></ul>
                     * 
                     */
                    void SetNoRefuse(const bool& _noRefuse);

                    /**
                     * 判断参数 NoRefuse 是否已赋值
                     * @return NoRefuse 是否已赋值
                     * 
                     */
                    bool NoRefuseHasBeenSet() const;

                    /**
                     * 获取<p>签署方是否可以转他人处理</p><ul><li> **false** : ( 默认)可以转他人处理</li><li> **true** :不可以转他人处理</li></ul>
                     * @return NoTransfer <p>签署方是否可以转他人处理</p><ul><li> **false** : ( 默认)可以转他人处理</li><li> **true** :不可以转他人处理</li></ul>
                     * 
                     */
                    bool GetNoTransfer() const;

                    /**
                     * 设置<p>签署方是否可以转他人处理</p><ul><li> **false** : ( 默认)可以转他人处理</li><li> **true** :不可以转他人处理</li></ul>
                     * @param _noTransfer <p>签署方是否可以转他人处理</p><ul><li> **false** : ( 默认)可以转他人处理</li><li> **true** :不可以转他人处理</li></ul>
                     * 
                     */
                    void SetNoTransfer(const bool& _noTransfer);

                    /**
                     * 判断参数 NoTransfer 是否已赋值
                     * @return NoTransfer 是否已赋值
                     * 
                     */
                    bool NoTransferHasBeenSet() const;

                    /**
                     * 获取<p>允许编辑签署人信息（嵌入式使用） 默认true-可以编辑 false-不可以编辑</p>
                     * @return CanEditApprover <p>允许编辑签署人信息（嵌入式使用） 默认true-可以编辑 false-不可以编辑</p>
                     * 
                     */
                    bool GetCanEditApprover() const;

                    /**
                     * 设置<p>允许编辑签署人信息（嵌入式使用） 默认true-可以编辑 false-不可以编辑</p>
                     * @param _canEditApprover <p>允许编辑签署人信息（嵌入式使用） 默认true-可以编辑 false-不可以编辑</p>
                     * 
                     */
                    void SetCanEditApprover(const bool& _canEditApprover);

                    /**
                     * 判断参数 CanEditApprover 是否已赋值
                     * @return CanEditApprover 是否已赋值
                     * 
                     */
                    bool CanEditApproverHasBeenSet() const;

                    /**
                     * 获取<p>签署人信息补充类型，默认无需补充。</p><ul><li> **1** :  动态签署人（可发起合同后再补充签署人信息）注：<code>企业自动签不支持动态补充</code></li></ul><p>注：</p><ol><li><code>使用动态签署人能力前，需登录腾讯电子签控制台打开服务开关</code></li><li>此参数在嵌入式场景下无效。</li></ol>
                     * @return FillType <p>签署人信息补充类型，默认无需补充。</p><ul><li> **1** :  动态签署人（可发起合同后再补充签署人信息）注：<code>企业自动签不支持动态补充</code></li></ul><p>注：</p><ol><li><code>使用动态签署人能力前，需登录腾讯电子签控制台打开服务开关</code></li><li>此参数在嵌入式场景下无效。</li></ol>
                     * 
                     */
                    int64_t GetFillType() const;

                    /**
                     * 设置<p>签署人信息补充类型，默认无需补充。</p><ul><li> **1** :  动态签署人（可发起合同后再补充签署人信息）注：<code>企业自动签不支持动态补充</code></li></ul><p>注：</p><ol><li><code>使用动态签署人能力前，需登录腾讯电子签控制台打开服务开关</code></li><li>此参数在嵌入式场景下无效。</li></ol>
                     * @param _fillType <p>签署人信息补充类型，默认无需补充。</p><ul><li> **1** :  动态签署人（可发起合同后再补充签署人信息）注：<code>企业自动签不支持动态补充</code></li></ul><p>注：</p><ol><li><code>使用动态签署人能力前，需登录腾讯电子签控制台打开服务开关</code></li><li>此参数在嵌入式场景下无效。</li></ol>
                     * 
                     */
                    void SetFillType(const int64_t& _fillType);

                    /**
                     * 判断参数 FillType 是否已赋值
                     * @return FillType 是否已赋值
                     * 
                     */
                    bool FillTypeHasBeenSet() const;

                    /**
                     * 获取<p>签署人阅读合同限制参数<br> <br>取值：</p><ul><li> LimitReadTimeAndBottom，阅读合同必须限制阅读时长并且必须阅读到底</li><li> LimitReadTime，阅读合同仅限制阅读时长</li><li> LimitBottom，阅读合同仅限制必须阅读到底</li><li> NoReadTimeAndBottom，阅读合同不限制阅读时长且不限制阅读到底（白名单功能，请联系客户经理开白使用）</li></ul>
                     * @return FlowReadLimit <p>签署人阅读合同限制参数<br> <br>取值：</p><ul><li> LimitReadTimeAndBottom，阅读合同必须限制阅读时长并且必须阅读到底</li><li> LimitReadTime，阅读合同仅限制阅读时长</li><li> LimitBottom，阅读合同仅限制必须阅读到底</li><li> NoReadTimeAndBottom，阅读合同不限制阅读时长且不限制阅读到底（白名单功能，请联系客户经理开白使用）</li></ul>
                     * 
                     */
                    std::string GetFlowReadLimit() const;

                    /**
                     * 设置<p>签署人阅读合同限制参数<br> <br>取值：</p><ul><li> LimitReadTimeAndBottom，阅读合同必须限制阅读时长并且必须阅读到底</li><li> LimitReadTime，阅读合同仅限制阅读时长</li><li> LimitBottom，阅读合同仅限制必须阅读到底</li><li> NoReadTimeAndBottom，阅读合同不限制阅读时长且不限制阅读到底（白名单功能，请联系客户经理开白使用）</li></ul>
                     * @param _flowReadLimit <p>签署人阅读合同限制参数<br> <br>取值：</p><ul><li> LimitReadTimeAndBottom，阅读合同必须限制阅读时长并且必须阅读到底</li><li> LimitReadTime，阅读合同仅限制阅读时长</li><li> LimitBottom，阅读合同仅限制必须阅读到底</li><li> NoReadTimeAndBottom，阅读合同不限制阅读时长且不限制阅读到底（白名单功能，请联系客户经理开白使用）</li></ul>
                     * 
                     */
                    void SetFlowReadLimit(const std::string& _flowReadLimit);

                    /**
                     * 判断参数 FlowReadLimit 是否已赋值
                     * @return FlowReadLimit 是否已赋值
                     * 
                     */
                    bool FlowReadLimitHasBeenSet() const;

                    /**
                     * 获取<p>禁止在签署过程中添加签署日期控件<br> <br>前置条件：文件发起合同时，指定SignBeanTag=1（可以在签署过程中添加签署控件）：</p><ul><li> 默认值：false，在开启：签署过程中添加签署控件时，添加签署控件会默认自带签署日期控件</li><li> 可选值：true，在开启：签署过程中添加签署控件时，添加签署控件不会自带签署日期控件</li></ul>
                     * @return ForbidAddSignDate <p>禁止在签署过程中添加签署日期控件<br> <br>前置条件：文件发起合同时，指定SignBeanTag=1（可以在签署过程中添加签署控件）：</p><ul><li> 默认值：false，在开启：签署过程中添加签署控件时，添加签署控件会默认自带签署日期控件</li><li> 可选值：true，在开启：签署过程中添加签署控件时，添加签署控件不会自带签署日期控件</li></ul>
                     * 
                     */
                    bool GetForbidAddSignDate() const;

                    /**
                     * 设置<p>禁止在签署过程中添加签署日期控件<br> <br>前置条件：文件发起合同时，指定SignBeanTag=1（可以在签署过程中添加签署控件）：</p><ul><li> 默认值：false，在开启：签署过程中添加签署控件时，添加签署控件会默认自带签署日期控件</li><li> 可选值：true，在开启：签署过程中添加签署控件时，添加签署控件不会自带签署日期控件</li></ul>
                     * @param _forbidAddSignDate <p>禁止在签署过程中添加签署日期控件<br> <br>前置条件：文件发起合同时，指定SignBeanTag=1（可以在签署过程中添加签署控件）：</p><ul><li> 默认值：false，在开启：签署过程中添加签署控件时，添加签署控件会默认自带签署日期控件</li><li> 可选值：true，在开启：签署过程中添加签署控件时，添加签署控件不会自带签署日期控件</li></ul>
                     * 
                     */
                    void SetForbidAddSignDate(const bool& _forbidAddSignDate);

                    /**
                     * 判断参数 ForbidAddSignDate 是否已赋值
                     * @return ForbidAddSignDate 是否已赋值
                     * 
                     */
                    bool ForbidAddSignDateHasBeenSet() const;

                    /**
                     * 获取<p>签署人手机号传参模式</p><p>枚举值：</p><ul><li>REPLACE： 接受已有认证手机号并替换</li><li>GIVEN： 以客户入参输入手机号为主</li><li>VALIDATE： 若与认证手机号不一致则报错</li><li>&quot;&quot;： 不走手机号传参模式</li></ul><p>默认值：&quot;&quot;</p><p>会触发手机号传参模式的前提是：签署人是指定了具体身份信息的</p><ul><li>在指定签署人姓名，证件号的情况下会触发</li></ul>
                     * @return ApproverMobileMode <p>签署人手机号传参模式</p><p>枚举值：</p><ul><li>REPLACE： 接受已有认证手机号并替换</li><li>GIVEN： 以客户入参输入手机号为主</li><li>VALIDATE： 若与认证手机号不一致则报错</li><li>&quot;&quot;： 不走手机号传参模式</li></ul><p>默认值：&quot;&quot;</p><p>会触发手机号传参模式的前提是：签署人是指定了具体身份信息的</p><ul><li>在指定签署人姓名，证件号的情况下会触发</li></ul>
                     * 
                     */
                    std::string GetApproverMobileMode() const;

                    /**
                     * 设置<p>签署人手机号传参模式</p><p>枚举值：</p><ul><li>REPLACE： 接受已有认证手机号并替换</li><li>GIVEN： 以客户入参输入手机号为主</li><li>VALIDATE： 若与认证手机号不一致则报错</li><li>&quot;&quot;： 不走手机号传参模式</li></ul><p>默认值：&quot;&quot;</p><p>会触发手机号传参模式的前提是：签署人是指定了具体身份信息的</p><ul><li>在指定签署人姓名，证件号的情况下会触发</li></ul>
                     * @param _approverMobileMode <p>签署人手机号传参模式</p><p>枚举值：</p><ul><li>REPLACE： 接受已有认证手机号并替换</li><li>GIVEN： 以客户入参输入手机号为主</li><li>VALIDATE： 若与认证手机号不一致则报错</li><li>&quot;&quot;： 不走手机号传参模式</li></ul><p>默认值：&quot;&quot;</p><p>会触发手机号传参模式的前提是：签署人是指定了具体身份信息的</p><ul><li>在指定签署人姓名，证件号的情况下会触发</li></ul>
                     * 
                     */
                    void SetApproverMobileMode(const std::string& _approverMobileMode);

                    /**
                     * 判断参数 ApproverMobileMode 是否已赋值
                     * @return ApproverMobileMode 是否已赋值
                     * 
                     */
                    bool ApproverMobileModeHasBeenSet() const;

                private:

                    /**
                     * <p>签署方是否可以拒签</p><ul><li> **false** : ( 默认)可以拒签</li><li> **true** :不可以拒签</li></ul>
                     */
                    bool m_noRefuse;
                    bool m_noRefuseHasBeenSet;

                    /**
                     * <p>签署方是否可以转他人处理</p><ul><li> **false** : ( 默认)可以转他人处理</li><li> **true** :不可以转他人处理</li></ul>
                     */
                    bool m_noTransfer;
                    bool m_noTransferHasBeenSet;

                    /**
                     * <p>允许编辑签署人信息（嵌入式使用） 默认true-可以编辑 false-不可以编辑</p>
                     */
                    bool m_canEditApprover;
                    bool m_canEditApproverHasBeenSet;

                    /**
                     * <p>签署人信息补充类型，默认无需补充。</p><ul><li> **1** :  动态签署人（可发起合同后再补充签署人信息）注：<code>企业自动签不支持动态补充</code></li></ul><p>注：</p><ol><li><code>使用动态签署人能力前，需登录腾讯电子签控制台打开服务开关</code></li><li>此参数在嵌入式场景下无效。</li></ol>
                     */
                    int64_t m_fillType;
                    bool m_fillTypeHasBeenSet;

                    /**
                     * <p>签署人阅读合同限制参数<br> <br>取值：</p><ul><li> LimitReadTimeAndBottom，阅读合同必须限制阅读时长并且必须阅读到底</li><li> LimitReadTime，阅读合同仅限制阅读时长</li><li> LimitBottom，阅读合同仅限制必须阅读到底</li><li> NoReadTimeAndBottom，阅读合同不限制阅读时长且不限制阅读到底（白名单功能，请联系客户经理开白使用）</li></ul>
                     */
                    std::string m_flowReadLimit;
                    bool m_flowReadLimitHasBeenSet;

                    /**
                     * <p>禁止在签署过程中添加签署日期控件<br> <br>前置条件：文件发起合同时，指定SignBeanTag=1（可以在签署过程中添加签署控件）：</p><ul><li> 默认值：false，在开启：签署过程中添加签署控件时，添加签署控件会默认自带签署日期控件</li><li> 可选值：true，在开启：签署过程中添加签署控件时，添加签署控件不会自带签署日期控件</li></ul>
                     */
                    bool m_forbidAddSignDate;
                    bool m_forbidAddSignDateHasBeenSet;

                    /**
                     * <p>签署人手机号传参模式</p><p>枚举值：</p><ul><li>REPLACE： 接受已有认证手机号并替换</li><li>GIVEN： 以客户入参输入手机号为主</li><li>VALIDATE： 若与认证手机号不一致则报错</li><li>&quot;&quot;： 不走手机号传参模式</li></ul><p>默认值：&quot;&quot;</p><p>会触发手机号传参模式的前提是：签署人是指定了具体身份信息的</p><ul><li>在指定签署人姓名，证件号的情况下会触发</li></ul>
                     */
                    std::string m_approverMobileMode;
                    bool m_approverMobileModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_APPROVEROPTION_H_
