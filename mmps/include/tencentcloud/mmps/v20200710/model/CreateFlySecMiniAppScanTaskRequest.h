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

#ifndef TENCENTCLOUD_MMPS_V20200710_MODEL_CREATEFLYSECMINIAPPSCANTASKREQUEST_H_
#define TENCENTCLOUD_MMPS_V20200710_MODEL_CREATEFLYSECMINIAPPSCANTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mmps
    {
        namespace V20200710
        {
            namespace Model
            {
                /**
                * CreateFlySecMiniAppScanTask请求参数结构体
                */
                class CreateFlySecMiniAppScanTaskRequest : public AbstractModel
                {
                public:
                    CreateFlySecMiniAppScanTaskRequest();
                    ~CreateFlySecMiniAppScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取小程序AppID
                     * @return MiniAppID 小程序AppID
                     * 
                     */
                    std::string GetMiniAppID() const;

                    /**
                     * 设置小程序AppID
                     * @param _miniAppID 小程序AppID
                     * 
                     */
                    void SetMiniAppID(const std::string& _miniAppID);

                    /**
                     * 判断参数 MiniAppID 是否已赋值
                     * @return MiniAppID 是否已赋值
                     * 
                     */
                    bool MiniAppIDHasBeenSet() const;

                    /**
                     * 获取诊断模式 1:基础诊断
                     * @return Mode 诊断模式 1:基础诊断
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置诊断模式 1:基础诊断
                     * @param _mode 诊断模式 1:基础诊断
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取小程序测试账号(自有账号体系需提供,其他情况不需要)
                     * @return MiniAppTestAccount 小程序测试账号(自有账号体系需提供,其他情况不需要)
                     * 
                     */
                    std::string GetMiniAppTestAccount() const;

                    /**
                     * 设置小程序测试账号(自有账号体系需提供,其他情况不需要)
                     * @param _miniAppTestAccount 小程序测试账号(自有账号体系需提供,其他情况不需要)
                     * 
                     */
                    void SetMiniAppTestAccount(const std::string& _miniAppTestAccount);

                    /**
                     * 判断参数 MiniAppTestAccount 是否已赋值
                     * @return MiniAppTestAccount 是否已赋值
                     * 
                     */
                    bool MiniAppTestAccountHasBeenSet() const;

                    /**
                     * 获取小程序测试密码(自有账号体系需提供,其他情况不需要)
                     * @return MiniAppTestPwd 小程序测试密码(自有账号体系需提供,其他情况不需要)
                     * 
                     */
                    std::string GetMiniAppTestPwd() const;

                    /**
                     * 设置小程序测试密码(自有账号体系需提供,其他情况不需要)
                     * @param _miniAppTestPwd 小程序测试密码(自有账号体系需提供,其他情况不需要)
                     * 
                     */
                    void SetMiniAppTestPwd(const std::string& _miniAppTestPwd);

                    /**
                     * 判断参数 MiniAppTestPwd 是否已赋值
                     * @return MiniAppTestPwd 是否已赋值
                     * 
                     */
                    bool MiniAppTestPwdHasBeenSet() const;

                    /**
                     * 获取小程序所属行业
                     * @return Industry 小程序所属行业
                     * 
                     */
                    std::string GetIndustry() const;

                    /**
                     * 设置小程序所属行业
                     * @param _industry 小程序所属行业
                     * 
                     */
                    void SetIndustry(const std::string& _industry);

                    /**
                     * 判断参数 Industry 是否已赋值
                     * @return Industry 是否已赋值
                     * 
                     */
                    bool IndustryHasBeenSet() const;

                    /**
                     * 获取小程序调查问卷json字符串
                     * @return SurveyContent 小程序调查问卷json字符串
                     * 
                     */
                    std::string GetSurveyContent() const;

                    /**
                     * 设置小程序调查问卷json字符串
                     * @param _surveyContent 小程序调查问卷json字符串
                     * 
                     */
                    void SetSurveyContent(const std::string& _surveyContent);

                    /**
                     * 判断参数 SurveyContent 是否已赋值
                     * @return SurveyContent 是否已赋值
                     * 
                     */
                    bool SurveyContentHasBeenSet() const;

                    /**
                     * 获取手机号码
                     * @return Mobile 手机号码
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置手机号码
                     * @param _mobile 手机号码
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取邮箱地址
                     * @return Email 邮箱地址
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置邮箱地址
                     * @param _email 邮箱地址
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取商务合作接口人
                     * @return SalesPerson 商务合作接口人
                     * 
                     */
                    std::string GetSalesPerson() const;

                    /**
                     * 设置商务合作接口人
                     * @param _salesPerson 商务合作接口人
                     * 
                     */
                    void SetSalesPerson(const std::string& _salesPerson);

                    /**
                     * 判断参数 SalesPerson 是否已赋值
                     * @return SalesPerson 是否已赋值
                     * 
                     */
                    bool SalesPersonHasBeenSet() const;

                    /**
                     * 获取诊断扫描版本 0:正式版 1:体验版
                     * @return ScanVersion 诊断扫描版本 0:正式版 1:体验版
                     * 
                     */
                    int64_t GetScanVersion() const;

                    /**
                     * 设置诊断扫描版本 0:正式版 1:体验版
                     * @param _scanVersion 诊断扫描版本 0:正式版 1:体验版
                     * 
                     */
                    void SetScanVersion(const int64_t& _scanVersion);

                    /**
                     * 判断参数 ScanVersion 是否已赋值
                     * @return ScanVersion 是否已赋值
                     * 
                     */
                    bool ScanVersionHasBeenSet() const;

                private:

                    /**
                     * 小程序AppID
                     */
                    std::string m_miniAppID;
                    bool m_miniAppIDHasBeenSet;

                    /**
                     * 诊断模式 1:基础诊断
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 小程序测试账号(自有账号体系需提供,其他情况不需要)
                     */
                    std::string m_miniAppTestAccount;
                    bool m_miniAppTestAccountHasBeenSet;

                    /**
                     * 小程序测试密码(自有账号体系需提供,其他情况不需要)
                     */
                    std::string m_miniAppTestPwd;
                    bool m_miniAppTestPwdHasBeenSet;

                    /**
                     * 小程序所属行业
                     */
                    std::string m_industry;
                    bool m_industryHasBeenSet;

                    /**
                     * 小程序调查问卷json字符串
                     */
                    std::string m_surveyContent;
                    bool m_surveyContentHasBeenSet;

                    /**
                     * 手机号码
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 邮箱地址
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 商务合作接口人
                     */
                    std::string m_salesPerson;
                    bool m_salesPersonHasBeenSet;

                    /**
                     * 诊断扫描版本 0:正式版 1:体验版
                     */
                    int64_t m_scanVersion;
                    bool m_scanVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MMPS_V20200710_MODEL_CREATEFLYSECMINIAPPSCANTASKREQUEST_H_
