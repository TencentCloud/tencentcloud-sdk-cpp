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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_COMMONAPPROVEROPTION_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_COMMONAPPROVEROPTION_H_

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
                * 签署人配置信息。
此参数对子客和自动签无效，不允许进行修改。
                */
                class CommonApproverOption : public AbstractModel
                {
                public:
                    CommonApproverOption();
                    ~CommonApproverOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否允许修改签署人信息</p>
                     * @return CanEditApprover <p>是否允许修改签署人信息</p>
                     * 
                     */
                    bool GetCanEditApprover() const;

                    /**
                     * 设置<p>是否允许修改签署人信息</p>
                     * @param _canEditApprover <p>是否允许修改签署人信息</p>
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
                     * 获取<p>是否可以拒签 默认false-可以拒签 true-不可以拒签</p>
                     * @return NoRefuse <p>是否可以拒签 默认false-可以拒签 true-不可以拒签</p>
                     * 
                     */
                    bool GetNoRefuse() const;

                    /**
                     * 设置<p>是否可以拒签 默认false-可以拒签 true-不可以拒签</p>
                     * @param _noRefuse <p>是否可以拒签 默认false-可以拒签 true-不可以拒签</p>
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
                     * 获取<p>是否可以转发 默认false-可以转发 true-不可以转发</p>
                     * @return NoTransfer <p>是否可以转发 默认false-可以转发 true-不可以转发</p>
                     * 
                     */
                    bool GetNoTransfer() const;

                    /**
                     * 设置<p>是否可以转发 默认false-可以转发 true-不可以转发</p>
                     * @param _noTransfer <p>是否可以转发 默认false-可以转发 true-不可以转发</p>
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
                     * 获取<p>当签署方有多个签署区时候，是否隐藏一键所有的签署区</p><p>false：（默认）不隐藏<br>true：隐藏，每个签署区要单独选择印章或者签名</p>
                     * @return HideOneKeySign <p>当签署方有多个签署区时候，是否隐藏一键所有的签署区</p><p>false：（默认）不隐藏<br>true：隐藏，每个签署区要单独选择印章或者签名</p>
                     * 
                     */
                    bool GetHideOneKeySign() const;

                    /**
                     * 设置<p>当签署方有多个签署区时候，是否隐藏一键所有的签署区</p><p>false：（默认）不隐藏<br>true：隐藏，每个签署区要单独选择印章或者签名</p>
                     * @param _hideOneKeySign <p>当签署方有多个签署区时候，是否隐藏一键所有的签署区</p><p>false：（默认）不隐藏<br>true：隐藏，每个签署区要单独选择印章或者签名</p>
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
                     * 获取<p>在嵌入式文件发起下,若合同是通过文件,当签署人控件指定了印章类型（或印章Id）,在嵌入页面上是否能修改</p>
                     * @return ForbidModifySealInfos <p>在嵌入式文件发起下,若合同是通过文件,当签署人控件指定了印章类型（或印章Id）,在嵌入页面上是否能修改</p>
                     * 
                     */
                    bool GetForbidModifySealInfos() const;

                    /**
                     * 设置<p>在嵌入式文件发起下,若合同是通过文件,当签署人控件指定了印章类型（或印章Id）,在嵌入页面上是否能修改</p>
                     * @param _forbidModifySealInfos <p>在嵌入式文件发起下,若合同是通过文件,当签署人控件指定了印章类型（或印章Id）,在嵌入页面上是否能修改</p>
                     * 
                     */
                    void SetForbidModifySealInfos(const bool& _forbidModifySealInfos);

                    /**
                     * 判断参数 ForbidModifySealInfos 是否已赋值
                     * @return ForbidModifySealInfos 是否已赋值
                     * 
                     */
                    bool ForbidModifySealInfosHasBeenSet() const;

                private:

                    /**
                     * <p>是否允许修改签署人信息</p>
                     */
                    bool m_canEditApprover;
                    bool m_canEditApproverHasBeenSet;

                    /**
                     * <p>是否可以拒签 默认false-可以拒签 true-不可以拒签</p>
                     */
                    bool m_noRefuse;
                    bool m_noRefuseHasBeenSet;

                    /**
                     * <p>是否可以转发 默认false-可以转发 true-不可以转发</p>
                     */
                    bool m_noTransfer;
                    bool m_noTransferHasBeenSet;

                    /**
                     * <p>当签署方有多个签署区时候，是否隐藏一键所有的签署区</p><p>false：（默认）不隐藏<br>true：隐藏，每个签署区要单独选择印章或者签名</p>
                     */
                    bool m_hideOneKeySign;
                    bool m_hideOneKeySignHasBeenSet;

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
                     * <p>在嵌入式文件发起下,若合同是通过文件,当签署人控件指定了印章类型（或印章Id）,在嵌入页面上是否能修改</p>
                     */
                    bool m_forbidModifySealInfos;
                    bool m_forbidModifySealInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_COMMONAPPROVEROPTION_H_
