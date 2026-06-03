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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_ARCHIVEFLOWAPPROVERINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_ARCHIVEFLOWAPPROVERINFO_H_

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
                * 归档合同的参与人信息
                */
                class ArchiveFlowApproverInfo : public AbstractModel
                {
                public:
                    ArchiveFlowApproverInfo();
                    ~ArchiveFlowApproverInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>个人签署人姓名，如果传入，必须是证件上的真实中文名；中文名最长 25 个字符；</p>
                     * @return ApproverName <p>个人签署人姓名，如果传入，必须是证件上的真实中文名；中文名最长 25 个字符；</p>
                     * 
                     */
                    std::string GetApproverName() const;

                    /**
                     * 设置<p>个人签署人姓名，如果传入，必须是证件上的真实中文名；中文名最长 25 个字符；</p>
                     * @param _approverName <p>个人签署人姓名，如果传入，必须是证件上的真实中文名；中文名最长 25 个字符；</p>
                     * 
                     */
                    void SetApproverName(const std::string& _approverName);

                    /**
                     * 判断参数 ApproverName 是否已赋值
                     * @return ApproverName 是否已赋值
                     * 
                     */
                    bool ApproverNameHasBeenSet() const;

                    /**
                     * 获取<p>参与者类型，用于区分个人或企业，可选类型如下:<br><strong>0</strong>：企业<br><strong>1</strong>：个人</p>
                     * @return ApproverType <p>参与者类型，用于区分个人或企业，可选类型如下:<br><strong>0</strong>：企业<br><strong>1</strong>：个人</p>
                     * 
                     */
                    int64_t GetApproverType() const;

                    /**
                     * 设置<p>参与者类型，用于区分个人或企业，可选类型如下:<br><strong>0</strong>：企业<br><strong>1</strong>：个人</p>
                     * @param _approverType <p>参与者类型，用于区分个人或企业，可选类型如下:<br><strong>0</strong>：企业<br><strong>1</strong>：个人</p>
                     * 
                     */
                    void SetApproverType(const int64_t& _approverType);

                    /**
                     * 判断参数 ApproverType 是否已赋值
                     * @return ApproverType 是否已赋值
                     * 
                     */
                    bool ApproverTypeHasBeenSet() const;

                    /**
                     * 获取<p>企业签署方名称。长度不超过 200 个字符。<br>如果名称中包含英文括号()，请使用中文括号（）代替。<br>如果签署方是企业签署方(approverType = 0 )， 则企业名称必填。</p>
                     * @return OrganizationName <p>企业签署方名称。长度不超过 200 个字符。<br>如果名称中包含英文括号()，请使用中文括号（）代替。<br>如果签署方是企业签署方(approverType = 0 )， 则企业名称必填。</p>
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置<p>企业签署方名称。长度不超过 200 个字符。<br>如果名称中包含英文括号()，请使用中文括号（）代替。<br>如果签署方是企业签署方(approverType = 0 )， 则企业名称必填。</p>
                     * @param _organizationName <p>企业签署方名称。长度不超过 200 个字符。<br>如果名称中包含英文括号()，请使用中文括号（）代替。<br>如果签署方是企业签署方(approverType = 0 )， 则企业名称必填。</p>
                     * 
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     * 
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取<p>签署人手机号，必须是合法手机号。</p>
                     * @return ApproverMobile <p>签署人手机号，必须是合法手机号。</p>
                     * 
                     */
                    std::string GetApproverMobile() const;

                    /**
                     * 设置<p>签署人手机号，必须是合法手机号。</p>
                     * @param _approverMobile <p>签署人手机号，必须是合法手机号。</p>
                     * 
                     */
                    void SetApproverMobile(const std::string& _approverMobile);

                    /**
                     * 判断参数 ApproverMobile 是否已赋值
                     * @return ApproverMobile 是否已赋值
                     * 
                     */
                    bool ApproverMobileHasBeenSet() const;

                    /**
                     * 获取<p>签署人邮箱， 必须是合法邮箱格式。</p>
                     * @return ApproverEmail <p>签署人邮箱， 必须是合法邮箱格式。</p>
                     * 
                     */
                    std::string GetApproverEmail() const;

                    /**
                     * 设置<p>签署人邮箱， 必须是合法邮箱格式。</p>
                     * @param _approverEmail <p>签署人邮箱， 必须是合法邮箱格式。</p>
                     * 
                     */
                    void SetApproverEmail(const std::string& _approverEmail);

                    /**
                     * 判断参数 ApproverEmail 是否已赋值
                     * @return ApproverEmail 是否已赋值
                     * 
                     */
                    bool ApproverEmailHasBeenSet() const;

                    /**
                     * 获取<p>签署方经办人的证件类型，支持以下类型，样式可以参考<a href="https://qian.tencent.com/developers/partner/id_card_support/" target="_blank">常见个人证件类型介绍</a></p><ul><li>ID_CARD 中国大陆居民身份证  (默认值)</li><li>HONGKONG_AND_MACAO 港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)</li><li>OTHER_CARD_TYPE 其他证件</li></ul>
                     * @return ApproverIdCardType <p>签署方经办人的证件类型，支持以下类型，样式可以参考<a href="https://qian.tencent.com/developers/partner/id_card_support/" target="_blank">常见个人证件类型介绍</a></p><ul><li>ID_CARD 中国大陆居民身份证  (默认值)</li><li>HONGKONG_AND_MACAO 港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)</li><li>OTHER_CARD_TYPE 其他证件</li></ul>
                     * 
                     */
                    std::string GetApproverIdCardType() const;

                    /**
                     * 设置<p>签署方经办人的证件类型，支持以下类型，样式可以参考<a href="https://qian.tencent.com/developers/partner/id_card_support/" target="_blank">常见个人证件类型介绍</a></p><ul><li>ID_CARD 中国大陆居民身份证  (默认值)</li><li>HONGKONG_AND_MACAO 港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)</li><li>OTHER_CARD_TYPE 其他证件</li></ul>
                     * @param _approverIdCardType <p>签署方经办人的证件类型，支持以下类型，样式可以参考<a href="https://qian.tencent.com/developers/partner/id_card_support/" target="_blank">常见个人证件类型介绍</a></p><ul><li>ID_CARD 中国大陆居民身份证  (默认值)</li><li>HONGKONG_AND_MACAO 港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)</li><li>OTHER_CARD_TYPE 其他证件</li></ul>
                     * 
                     */
                    void SetApproverIdCardType(const std::string& _approverIdCardType);

                    /**
                     * 判断参数 ApproverIdCardType 是否已赋值
                     * @return ApproverIdCardType 是否已赋值
                     * 
                     */
                    bool ApproverIdCardTypeHasBeenSet() const;

                    /**
                     * 获取<p>签署方经办人的证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * @return ApproverIdCardNumber <p>签署方经办人的证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * 
                     */
                    std::string GetApproverIdCardNumber() const;

                    /**
                     * 设置<p>签署方经办人的证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * @param _approverIdCardNumber <p>签署方经办人的证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * 
                     */
                    void SetApproverIdCardNumber(const std::string& _approverIdCardNumber);

                    /**
                     * 判断参数 ApproverIdCardNumber 是否已赋值
                     * @return ApproverIdCardNumber 是否已赋值
                     * 
                     */
                    bool ApproverIdCardNumberHasBeenSet() const;

                    /**
                     * 获取<p>当前参与者的签署时间，Unix 秒级时间戳。</p>
                     * @return ApproveTime <p>当前参与者的签署时间，Unix 秒级时间戳。</p>
                     * 
                     */
                    int64_t GetApproveTime() const;

                    /**
                     * 设置<p>当前参与者的签署时间，Unix 秒级时间戳。</p>
                     * @param _approveTime <p>当前参与者的签署时间，Unix 秒级时间戳。</p>
                     * 
                     */
                    void SetApproveTime(const int64_t& _approveTime);

                    /**
                     * 判断参数 ApproveTime 是否已赋值
                     * @return ApproveTime 是否已赋值
                     * 
                     */
                    bool ApproveTimeHasBeenSet() const;

                private:

                    /**
                     * <p>个人签署人姓名，如果传入，必须是证件上的真实中文名；中文名最长 25 个字符；</p>
                     */
                    std::string m_approverName;
                    bool m_approverNameHasBeenSet;

                    /**
                     * <p>参与者类型，用于区分个人或企业，可选类型如下:<br><strong>0</strong>：企业<br><strong>1</strong>：个人</p>
                     */
                    int64_t m_approverType;
                    bool m_approverTypeHasBeenSet;

                    /**
                     * <p>企业签署方名称。长度不超过 200 个字符。<br>如果名称中包含英文括号()，请使用中文括号（）代替。<br>如果签署方是企业签署方(approverType = 0 )， 则企业名称必填。</p>
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * <p>签署人手机号，必须是合法手机号。</p>
                     */
                    std::string m_approverMobile;
                    bool m_approverMobileHasBeenSet;

                    /**
                     * <p>签署人邮箱， 必须是合法邮箱格式。</p>
                     */
                    std::string m_approverEmail;
                    bool m_approverEmailHasBeenSet;

                    /**
                     * <p>签署方经办人的证件类型，支持以下类型，样式可以参考<a href="https://qian.tencent.com/developers/partner/id_card_support/" target="_blank">常见个人证件类型介绍</a></p><ul><li>ID_CARD 中国大陆居民身份证  (默认值)</li><li>HONGKONG_AND_MACAO 港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)</li><li>OTHER_CARD_TYPE 其他证件</li></ul>
                     */
                    std::string m_approverIdCardType;
                    bool m_approverIdCardTypeHasBeenSet;

                    /**
                     * <p>签署方经办人的证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     */
                    std::string m_approverIdCardNumber;
                    bool m_approverIdCardNumberHasBeenSet;

                    /**
                     * <p>当前参与者的签署时间，Unix 秒级时间戳。</p>
                     */
                    int64_t m_approveTime;
                    bool m_approveTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_ARCHIVEFLOWAPPROVERINFO_H_
