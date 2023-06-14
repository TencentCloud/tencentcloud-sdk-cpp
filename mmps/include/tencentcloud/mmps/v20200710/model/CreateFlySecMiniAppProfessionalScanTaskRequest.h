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

#ifndef TENCENTCLOUD_MMPS_V20200710_MODEL_CREATEFLYSECMINIAPPPROFESSIONALSCANTASKREQUEST_H_
#define TENCENTCLOUD_MMPS_V20200710_MODEL_CREATEFLYSECMINIAPPPROFESSIONALSCANTASKREQUEST_H_

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
                * CreateFlySecMiniAppProfessionalScanTask请求参数结构体
                */
                class CreateFlySecMiniAppProfessionalScanTaskRequest : public AbstractModel
                {
                public:
                    CreateFlySecMiniAppProfessionalScanTaskRequest();
                    ~CreateFlySecMiniAppProfessionalScanTaskRequest() = default;
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
                     * 获取小程序名称
                     * @return MiniAppName 小程序名称
                     * 
                     */
                    std::string GetMiniAppName() const;

                    /**
                     * 设置小程序名称
                     * @param _miniAppName 小程序名称
                     * 
                     */
                    void SetMiniAppName(const std::string& _miniAppName);

                    /**
                     * 判断参数 MiniAppName 是否已赋值
                     * @return MiniAppName 是否已赋值
                     * 
                     */
                    bool MiniAppNameHasBeenSet() const;

                    /**
                     * 获取诊断模式 2:深度诊断
                     * @return Mode 诊断模式 2:深度诊断
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置诊断模式 2:深度诊断
                     * @param _mode 诊断模式 2:深度诊断
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
                     * 获取公司名称
                     * @return CorpName 公司名称
                     * 
                     */
                    std::string GetCorpName() const;

                    /**
                     * 设置公司名称
                     * @param _corpName 公司名称
                     * 
                     */
                    void SetCorpName(const std::string& _corpName);

                    /**
                     * 判断参数 CorpName 是否已赋值
                     * @return CorpName 是否已赋值
                     * 
                     */
                    bool CorpNameHasBeenSet() const;

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
                     * 获取电子邮箱
                     * @return Email 电子邮箱
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置电子邮箱
                     * @param _email 电子邮箱
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
                     * 获取备注信息
                     * @return Remark 备注信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息
                     * @param _remark 备注信息
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 小程序AppID
                     */
                    std::string m_miniAppID;
                    bool m_miniAppIDHasBeenSet;

                    /**
                     * 小程序名称
                     */
                    std::string m_miniAppName;
                    bool m_miniAppNameHasBeenSet;

                    /**
                     * 诊断模式 2:深度诊断
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 公司名称
                     */
                    std::string m_corpName;
                    bool m_corpNameHasBeenSet;

                    /**
                     * 手机号码
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 电子邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MMPS_V20200710_MODEL_CREATEFLYSECMINIAPPPROFESSIONALSCANTASKREQUEST_H_
