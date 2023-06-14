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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_MODIFYUSERDEFAULTSEALREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_MODIFYUSERDEFAULTSEALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/Caller.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * ModifyUserDefaultSeal请求参数结构体
                */
                class ModifyUserDefaultSealRequest : public AbstractModel
                {
                public:
                    ModifyUserDefaultSealRequest();
                    ~ModifyUserDefaultSealRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方信息
                     * @return Caller 调用方信息
                     * 
                     */
                    Caller GetCaller() const;

                    /**
                     * 设置调用方信息
                     * @param _caller 调用方信息
                     * 
                     */
                    void SetCaller(const Caller& _caller);

                    /**
                     * 判断参数 Caller 是否已赋值
                     * @return Caller 是否已赋值
                     * 
                     */
                    bool CallerHasBeenSet() const;

                    /**
                     * 获取用户唯一标识，需要重新指定默认印章的用户ID
                     * @return UserId 用户唯一标识，需要重新指定默认印章的用户ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户唯一标识，需要重新指定默认印章的用户ID
                     * @param _userId 用户唯一标识，需要重新指定默认印章的用户ID
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
                     * 获取重新指定的默认印章ID
                     * @return SealId 重新指定的默认印章ID
                     * 
                     */
                    std::string GetSealId() const;

                    /**
                     * 设置重新指定的默认印章ID
                     * @param _sealId 重新指定的默认印章ID
                     * 
                     */
                    void SetSealId(const std::string& _sealId);

                    /**
                     * 判断参数 SealId 是否已赋值
                     * @return SealId 是否已赋值
                     * 
                     */
                    bool SealIdHasBeenSet() const;

                    /**
                     * 获取请求重新指定个人默认印章的客户端IP
                     * @return SourceIp 请求重新指定个人默认印章的客户端IP
                     * 
                     */
                    std::string GetSourceIp() const;

                    /**
                     * 设置请求重新指定个人默认印章的客户端IP
                     * @param _sourceIp 请求重新指定个人默认印章的客户端IP
                     * 
                     */
                    void SetSourceIp(const std::string& _sourceIp);

                    /**
                     * 判断参数 SourceIp 是否已赋值
                     * @return SourceIp 是否已赋值
                     * 
                     */
                    bool SourceIpHasBeenSet() const;

                private:

                    /**
                     * 调用方信息
                     */
                    Caller m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 用户唯一标识，需要重新指定默认印章的用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 重新指定的默认印章ID
                     */
                    std::string m_sealId;
                    bool m_sealIdHasBeenSet;

                    /**
                     * 请求重新指定个人默认印章的客户端IP
                     */
                    std::string m_sourceIp;
                    bool m_sourceIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_MODIFYUSERDEFAULTSEALREQUEST_H_
