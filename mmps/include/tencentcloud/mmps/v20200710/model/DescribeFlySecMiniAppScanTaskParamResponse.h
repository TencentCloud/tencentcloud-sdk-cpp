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

#ifndef TENCENTCLOUD_MMPS_V20200710_MODEL_DESCRIBEFLYSECMINIAPPSCANTASKPARAMRESPONSE_H_
#define TENCENTCLOUD_MMPS_V20200710_MODEL_DESCRIBEFLYSECMINIAPPSCANTASKPARAMRESPONSE_H_

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
                * DescribeFlySecMiniAppScanTaskParam返回参数结构体
                */
                class DescribeFlySecMiniAppScanTaskParamResponse : public AbstractModel
                {
                public:
                    DescribeFlySecMiniAppScanTaskParamResponse();
                    ~DescribeFlySecMiniAppScanTaskParamResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回值, 0:成功, 其他值请查看“返回值”定义
                     * @return Ret 返回值, 0:成功, 其他值请查看“返回值”定义
                     * 
                     */
                    int64_t GetRet() const;

                    /**
                     * 判断参数 Ret 是否已赋值
                     * @return Ret 是否已赋值
                     * 
                     */
                    bool RetHasBeenSet() const;

                    /**
                     * 获取小程序AppID
                     * @return MiniAppID 小程序AppID
                     * 
                     */
                    std::string GetMiniAppID() const;

                    /**
                     * 判断参数 MiniAppID 是否已赋值
                     * @return MiniAppID 是否已赋值
                     * 
                     */
                    bool MiniAppIDHasBeenSet() const;

                    /**
                     * 获取诊断模式 1:基础诊断，2:深度诊断
                     * @return Mode 诊断模式 1:基础诊断，2:深度诊断
                     * 
                     */
                    int64_t GetMode() const;

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
                     * 判断参数 ScanVersion 是否已赋值
                     * @return ScanVersion 是否已赋值
                     * 
                     */
                    bool ScanVersionHasBeenSet() const;

                private:

                    /**
                     * 返回值, 0:成功, 其他值请查看“返回值”定义
                     */
                    int64_t m_ret;
                    bool m_retHasBeenSet;

                    /**
                     * 小程序AppID
                     */
                    std::string m_miniAppID;
                    bool m_miniAppIDHasBeenSet;

                    /**
                     * 诊断模式 1:基础诊断，2:深度诊断
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
                     * 诊断扫描版本 0:正式版 1:体验版
                     */
                    int64_t m_scanVersion;
                    bool m_scanVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MMPS_V20200710_MODEL_DESCRIBEFLYSECMINIAPPSCANTASKPARAMRESPONSE_H_
