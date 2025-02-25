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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATECALLOUTSESSIONREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATECALLOUTSESSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * CreateCallOutSession请求参数结构体
                */
                class CreateCallOutSessionRequest : public AbstractModel
                {
                public:
                    CreateCallOutSessionRequest();
                    ~CreateCallOutSessionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID
                     * @return SdkAppId 应用 ID
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置应用 ID
                     * @param _sdkAppId 应用 ID
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取客服用户 ID，一般为客服邮箱，确保已经绑定了手机号 https://cloud.tencent.com/document/product/679/76067#.E6.AD.A5.E9.AA.A42.EF.BC.9A.E5.AE.8C.E5.96.84.E8.B4.A6.E5.8F.B7.E4.BF.A1.E6.81.AF
                     * @return UserId 客服用户 ID，一般为客服邮箱，确保已经绑定了手机号 https://cloud.tencent.com/document/product/679/76067#.E6.AD.A5.E9.AA.A42.EF.BC.9A.E5.AE.8C.E5.96.84.E8.B4.A6.E5.8F.B7.E4.BF.A1.E6.81.AF
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置客服用户 ID，一般为客服邮箱，确保已经绑定了手机号 https://cloud.tencent.com/document/product/679/76067#.E6.AD.A5.E9.AA.A42.EF.BC.9A.E5.AE.8C.E5.96.84.E8.B4.A6.E5.8F.B7.E4.BF.A1.E6.81.AF
                     * @param _userId 客服用户 ID，一般为客服邮箱，确保已经绑定了手机号 https://cloud.tencent.com/document/product/679/76067#.E6.AD.A5.E9.AA.A42.EF.BC.9A.E5.AE.8C.E5.96.84.E8.B4.A6.E5.8F.B7.E4.BF.A1.E6.81.AF
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取被叫号码，须带 0086 前缀
                     * @return Callee 被叫号码，须带 0086 前缀
                     * 
                     */
                    std::string GetCallee() const;

                    /**
                     * 设置被叫号码，须带 0086 前缀
                     * @param _callee 被叫号码，须带 0086 前缀
                     * 
                     */
                    void SetCallee(const std::string& _callee);

                    /**
                     * 判断参数 Callee 是否已赋值
                     * @return Callee 是否已赋值
                     * 
                     */
                    bool CalleeHasBeenSet() const;

                    /**
                     * 获取主叫号码（废弃，使用Callers），须带 0086 前缀
                     * @return Caller 主叫号码（废弃，使用Callers），须带 0086 前缀
                     * 
                     */
                    std::string GetCaller() const;

                    /**
                     * 设置主叫号码（废弃，使用Callers），须带 0086 前缀
                     * @param _caller 主叫号码（废弃，使用Callers），须带 0086 前缀
                     * 
                     */
                    void SetCaller(const std::string& _caller);

                    /**
                     * 判断参数 Caller 是否已赋值
                     * @return Caller 是否已赋值
                     * 
                     */
                    bool CallerHasBeenSet() const;

                    /**
                     * 获取指定主叫号码列表，如果前面的号码失败了会自动换成下一个号码，须带 0086 前缀
                     * @return Callers 指定主叫号码列表，如果前面的号码失败了会自动换成下一个号码，须带 0086 前缀
                     * 
                     */
                    std::vector<std::string> GetCallers() const;

                    /**
                     * 设置指定主叫号码列表，如果前面的号码失败了会自动换成下一个号码，须带 0086 前缀
                     * @param _callers 指定主叫号码列表，如果前面的号码失败了会自动换成下一个号码，须带 0086 前缀
                     * 
                     */
                    void SetCallers(const std::vector<std::string>& _callers);

                    /**
                     * 判断参数 Callers 是否已赋值
                     * @return Callers 是否已赋值
                     * 
                     */
                    bool CallersHasBeenSet() const;

                    /**
                     * 获取是否强制使用手机外呼，当前只支持 true，若为 true 请确保已配置白名单 https://cloud.tencent.com/document/product/679/76744#.E6.93.8D.E4.BD.9C.E6.AD.A5.E9.AA.A4
                     * @return IsForceUseMobile 是否强制使用手机外呼，当前只支持 true，若为 true 请确保已配置白名单 https://cloud.tencent.com/document/product/679/76744#.E6.93.8D.E4.BD.9C.E6.AD.A5.E9.AA.A4
                     * 
                     */
                    bool GetIsForceUseMobile() const;

                    /**
                     * 设置是否强制使用手机外呼，当前只支持 true，若为 true 请确保已配置白名单 https://cloud.tencent.com/document/product/679/76744#.E6.93.8D.E4.BD.9C.E6.AD.A5.E9.AA.A4
                     * @param _isForceUseMobile 是否强制使用手机外呼，当前只支持 true，若为 true 请确保已配置白名单 https://cloud.tencent.com/document/product/679/76744#.E6.93.8D.E4.BD.9C.E6.AD.A5.E9.AA.A4
                     * 
                     */
                    void SetIsForceUseMobile(const bool& _isForceUseMobile);

                    /**
                     * 判断参数 IsForceUseMobile 是否已赋值
                     * @return IsForceUseMobile 是否已赋值
                     * 
                     */
                    bool IsForceUseMobileHasBeenSet() const;

                    /**
                     * 获取自定义数据，长度限制 1024 字节
                     * @return Uui 自定义数据，长度限制 1024 字节
                     * @deprecated
                     */
                    std::string GetUui() const;

                    /**
                     * 设置自定义数据，长度限制 1024 字节
                     * @param _uui 自定义数据，长度限制 1024 字节
                     * @deprecated
                     */
                    void SetUui(const std::string& _uui);

                    /**
                     * 判断参数 Uui 是否已赋值
                     * @return Uui 是否已赋值
                     * @deprecated
                     */
                    bool UuiHasBeenSet() const;

                    /**
                     * 获取自定义数据，长度限制 1024 字节
                     * @return UUI 自定义数据，长度限制 1024 字节
                     * 
                     */
                    std::string GetUUI() const;

                    /**
                     * 设置自定义数据，长度限制 1024 字节
                     * @param _uUI 自定义数据，长度限制 1024 字节
                     * 
                     */
                    void SetUUI(const std::string& _uUI);

                    /**
                     * 判断参数 UUI 是否已赋值
                     * @return UUI 是否已赋值
                     * 
                     */
                    bool UUIHasBeenSet() const;

                private:

                    /**
                     * 应用 ID
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 客服用户 ID，一般为客服邮箱，确保已经绑定了手机号 https://cloud.tencent.com/document/product/679/76067#.E6.AD.A5.E9.AA.A42.EF.BC.9A.E5.AE.8C.E5.96.84.E8.B4.A6.E5.8F.B7.E4.BF.A1.E6.81.AF
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 被叫号码，须带 0086 前缀
                     */
                    std::string m_callee;
                    bool m_calleeHasBeenSet;

                    /**
                     * 主叫号码（废弃，使用Callers），须带 0086 前缀
                     */
                    std::string m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 指定主叫号码列表，如果前面的号码失败了会自动换成下一个号码，须带 0086 前缀
                     */
                    std::vector<std::string> m_callers;
                    bool m_callersHasBeenSet;

                    /**
                     * 是否强制使用手机外呼，当前只支持 true，若为 true 请确保已配置白名单 https://cloud.tencent.com/document/product/679/76744#.E6.93.8D.E4.BD.9C.E6.AD.A5.E9.AA.A4
                     */
                    bool m_isForceUseMobile;
                    bool m_isForceUseMobileHasBeenSet;

                    /**
                     * 自定义数据，长度限制 1024 字节
                     */
                    std::string m_uui;
                    bool m_uuiHasBeenSet;

                    /**
                     * 自定义数据，长度限制 1024 字节
                     */
                    std::string m_uUI;
                    bool m_uUIHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATECALLOUTSESSIONREQUEST_H_
