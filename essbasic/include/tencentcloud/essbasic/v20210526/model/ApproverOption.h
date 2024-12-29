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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_APPROVEROPTION_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_APPROVEROPTION_H_

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
                     * 获取是否可以拒签 默认false-可以拒签 true-不可以拒签
                     * @return NoRefuse 是否可以拒签 默认false-可以拒签 true-不可以拒签
                     * 
                     */
                    bool GetNoRefuse() const;

                    /**
                     * 设置是否可以拒签 默认false-可以拒签 true-不可以拒签
                     * @param _noRefuse 是否可以拒签 默认false-可以拒签 true-不可以拒签
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
                     * 获取是否可以转发 默认false-可以转发 true-不可以转发
                     * @return NoTransfer 是否可以转发 默认false-可以转发 true-不可以转发
                     * 
                     */
                    bool GetNoTransfer() const;

                    /**
                     * 设置是否可以转发 默认false-可以转发 true-不可以转发
                     * @param _noTransfer 是否可以转发 默认false-可以转发 true-不可以转发
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
                     * 获取当签署方有多个签署区时候，是否隐藏一键所有的签署区

false：（默认）不隐藏
true：隐藏，每个签署区要单独选择印章或者签名
                     * @return HideOneKeySign 当签署方有多个签署区时候，是否隐藏一键所有的签署区

false：（默认）不隐藏
true：隐藏，每个签署区要单独选择印章或者签名
                     * 
                     */
                    bool GetHideOneKeySign() const;

                    /**
                     * 设置当签署方有多个签署区时候，是否隐藏一键所有的签署区

false：（默认）不隐藏
true：隐藏，每个签署区要单独选择印章或者签名
                     * @param _hideOneKeySign 当签署方有多个签署区时候，是否隐藏一键所有的签署区

false：（默认）不隐藏
true：隐藏，每个签署区要单独选择印章或者签名
                     * 
                     */
                    void SetHideOneKeySign(const bool& _hideOneKeySign);

                    /**
                     * 判断参数 HideOneKeySign 是否已赋值
                     * @return HideOneKeySign 是否已赋值
                     * 
                     */
                    bool HideOneKeySignHasBeenSet() const;

                    /**
                     * 获取签署人信息补充类型，默认无需补充。

<ul><li> **1** :  动态签署人（可发起合同后再补充签署人信息）注：`企业自动签不支持动态补充`</li></ul>

注：
`使用动态签署人能力前，需登陆腾讯电子签控制台打开服务开关`
                     * @return FillType 签署人信息补充类型，默认无需补充。

<ul><li> **1** :  动态签署人（可发起合同后再补充签署人信息）注：`企业自动签不支持动态补充`</li></ul>

注：
`使用动态签署人能力前，需登陆腾讯电子签控制台打开服务开关`
                     * 
                     */
                    int64_t GetFillType() const;

                    /**
                     * 设置签署人信息补充类型，默认无需补充。

<ul><li> **1** :  动态签署人（可发起合同后再补充签署人信息）注：`企业自动签不支持动态补充`</li></ul>

注：
`使用动态签署人能力前，需登陆腾讯电子签控制台打开服务开关`
                     * @param _fillType 签署人信息补充类型，默认无需补充。

<ul><li> **1** :  动态签署人（可发起合同后再补充签署人信息）注：`企业自动签不支持动态补充`</li></ul>

注：
`使用动态签署人能力前，需登陆腾讯电子签控制台打开服务开关`
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
                     * 获取签署人阅读合同限制参数
 <br/>取值：
<ul>
<li> LimitReadTimeAndBottom，阅读合同必须限制阅读时长并且必须阅读到底</li>
<li> LimitReadTime，阅读合同仅限制阅读时长</li>
<li> LimitBottom，阅读合同仅限制必须阅读到底</li>
<li> NoReadTimeAndBottom，阅读合同不限制阅读时长且不限制阅读到底（白名单功能，请联系客户经理开白使用）</li>
</ul>
                     * @return FlowReadLimit 签署人阅读合同限制参数
 <br/>取值：
<ul>
<li> LimitReadTimeAndBottom，阅读合同必须限制阅读时长并且必须阅读到底</li>
<li> LimitReadTime，阅读合同仅限制阅读时长</li>
<li> LimitBottom，阅读合同仅限制必须阅读到底</li>
<li> NoReadTimeAndBottom，阅读合同不限制阅读时长且不限制阅读到底（白名单功能，请联系客户经理开白使用）</li>
</ul>
                     * 
                     */
                    std::string GetFlowReadLimit() const;

                    /**
                     * 设置签署人阅读合同限制参数
 <br/>取值：
<ul>
<li> LimitReadTimeAndBottom，阅读合同必须限制阅读时长并且必须阅读到底</li>
<li> LimitReadTime，阅读合同仅限制阅读时长</li>
<li> LimitBottom，阅读合同仅限制必须阅读到底</li>
<li> NoReadTimeAndBottom，阅读合同不限制阅读时长且不限制阅读到底（白名单功能，请联系客户经理开白使用）</li>
</ul>
                     * @param _flowReadLimit 签署人阅读合同限制参数
 <br/>取值：
<ul>
<li> LimitReadTimeAndBottom，阅读合同必须限制阅读时长并且必须阅读到底</li>
<li> LimitReadTime，阅读合同仅限制阅读时长</li>
<li> LimitBottom，阅读合同仅限制必须阅读到底</li>
<li> NoReadTimeAndBottom，阅读合同不限制阅读时长且不限制阅读到底（白名单功能，请联系客户经理开白使用）</li>
</ul>
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
                     * 获取禁止在签署过程中添加签署日期控件
 <br/>前置条件：文件发起合同时，指定SignBeanTag=1（可以在签署过程中添加签署控件）：
<ul>
<li> 默认值：false，在开启：签署过程中添加签署控件时，添加签署控件会默认自带签署日期控件</li>
<li> 可选值：true，在开启：签署过程中添加签署控件时，添加签署控件不会自带签署日期控件</li>
</ul>
                     * @return ForbidAddSignDate 禁止在签署过程中添加签署日期控件
 <br/>前置条件：文件发起合同时，指定SignBeanTag=1（可以在签署过程中添加签署控件）：
<ul>
<li> 默认值：false，在开启：签署过程中添加签署控件时，添加签署控件会默认自带签署日期控件</li>
<li> 可选值：true，在开启：签署过程中添加签署控件时，添加签署控件不会自带签署日期控件</li>
</ul>
                     * 
                     */
                    bool GetForbidAddSignDate() const;

                    /**
                     * 设置禁止在签署过程中添加签署日期控件
 <br/>前置条件：文件发起合同时，指定SignBeanTag=1（可以在签署过程中添加签署控件）：
<ul>
<li> 默认值：false，在开启：签署过程中添加签署控件时，添加签署控件会默认自带签署日期控件</li>
<li> 可选值：true，在开启：签署过程中添加签署控件时，添加签署控件不会自带签署日期控件</li>
</ul>
                     * @param _forbidAddSignDate 禁止在签署过程中添加签署日期控件
 <br/>前置条件：文件发起合同时，指定SignBeanTag=1（可以在签署过程中添加签署控件）：
<ul>
<li> 默认值：false，在开启：签署过程中添加签署控件时，添加签署控件会默认自带签署日期控件</li>
<li> 可选值：true，在开启：签署过程中添加签署控件时，添加签署控件不会自带签署日期控件</li>
</ul>
                     * 
                     */
                    void SetForbidAddSignDate(const bool& _forbidAddSignDate);

                    /**
                     * 判断参数 ForbidAddSignDate 是否已赋值
                     * @return ForbidAddSignDate 是否已赋值
                     * 
                     */
                    bool ForbidAddSignDateHasBeenSet() const;

                private:

                    /**
                     * 是否可以拒签 默认false-可以拒签 true-不可以拒签
                     */
                    bool m_noRefuse;
                    bool m_noRefuseHasBeenSet;

                    /**
                     * 是否可以转发 默认false-可以转发 true-不可以转发
                     */
                    bool m_noTransfer;
                    bool m_noTransferHasBeenSet;

                    /**
                     * 当签署方有多个签署区时候，是否隐藏一键所有的签署区

false：（默认）不隐藏
true：隐藏，每个签署区要单独选择印章或者签名
                     */
                    bool m_hideOneKeySign;
                    bool m_hideOneKeySignHasBeenSet;

                    /**
                     * 签署人信息补充类型，默认无需补充。

<ul><li> **1** :  动态签署人（可发起合同后再补充签署人信息）注：`企业自动签不支持动态补充`</li></ul>

注：
`使用动态签署人能力前，需登陆腾讯电子签控制台打开服务开关`
                     */
                    int64_t m_fillType;
                    bool m_fillTypeHasBeenSet;

                    /**
                     * 签署人阅读合同限制参数
 <br/>取值：
<ul>
<li> LimitReadTimeAndBottom，阅读合同必须限制阅读时长并且必须阅读到底</li>
<li> LimitReadTime，阅读合同仅限制阅读时长</li>
<li> LimitBottom，阅读合同仅限制必须阅读到底</li>
<li> NoReadTimeAndBottom，阅读合同不限制阅读时长且不限制阅读到底（白名单功能，请联系客户经理开白使用）</li>
</ul>
                     */
                    std::string m_flowReadLimit;
                    bool m_flowReadLimitHasBeenSet;

                    /**
                     * 禁止在签署过程中添加签署日期控件
 <br/>前置条件：文件发起合同时，指定SignBeanTag=1（可以在签署过程中添加签署控件）：
<ul>
<li> 默认值：false，在开启：签署过程中添加签署控件时，添加签署控件会默认自带签署日期控件</li>
<li> 可选值：true，在开启：签署过程中添加签署控件时，添加签署控件不会自带签署日期控件</li>
</ul>
                     */
                    bool m_forbidAddSignDate;
                    bool m_forbidAddSignDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_APPROVEROPTION_H_
