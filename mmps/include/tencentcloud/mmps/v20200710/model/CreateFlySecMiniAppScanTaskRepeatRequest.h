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

#ifndef TENCENTCLOUD_MMPS_V20200710_MODEL_CREATEFLYSECMINIAPPSCANTASKREPEATREQUEST_H_
#define TENCENTCLOUD_MMPS_V20200710_MODEL_CREATEFLYSECMINIAPPSCANTASKREPEATREQUEST_H_

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
                * CreateFlySecMiniAppScanTaskRepeat请求参数结构体
                */
                class CreateFlySecMiniAppScanTaskRepeatRequest : public AbstractModel
                {
                public:
                    CreateFlySecMiniAppScanTaskRepeatRequest();
                    ~CreateFlySecMiniAppScanTaskRepeatRequest() = default;
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
                     * 获取原任务id
                     * @return OrgTaskID 原任务id
                     * 
                     */
                    std::string GetOrgTaskID() const;

                    /**
                     * 设置原任务id
                     * @param _orgTaskID 原任务id
                     * 
                     */
                    void SetOrgTaskID(const std::string& _orgTaskID);

                    /**
                     * 判断参数 OrgTaskID 是否已赋值
                     * @return OrgTaskID 是否已赋值
                     * 
                     */
                    bool OrgTaskIDHasBeenSet() const;

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
                     * 原任务id
                     */
                    std::string m_orgTaskID;
                    bool m_orgTaskIDHasBeenSet;

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
                     * 诊断扫描版本 0:正式版 1:体验版
                     */
                    int64_t m_scanVersion;
                    bool m_scanVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MMPS_V20200710_MODEL_CREATEFLYSECMINIAPPSCANTASKREPEATREQUEST_H_
