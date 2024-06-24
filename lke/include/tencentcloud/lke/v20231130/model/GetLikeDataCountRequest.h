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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_GETLIKEDATACOUNTREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_GETLIKEDATACOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * GetLikeDataCount请求参数结构体
                */
                class GetLikeDataCountRequest : public AbstractModel
                {
                public:
                    GetLikeDataCountRequest();
                    ~GetLikeDataCountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始日期
                     * @return StartTime 开始日期
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置开始日期
                     * @param _startTime 开始日期
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束日期
                     * @return EndTime 结束日期
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置结束日期
                     * @param _endTime 结束日期
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取应用id
                     * @return AppBizId 应用id
                     * 
                     */
                    std::vector<std::string> GetAppBizId() const;

                    /**
                     * 设置应用id
                     * @param _appBizId 应用id
                     * 
                     */
                    void SetAppBizId(const std::vector<std::string>& _appBizId);

                    /**
                     * 判断参数 AppBizId 是否已赋值
                     * @return AppBizId 是否已赋值
                     * 
                     */
                    bool AppBizIdHasBeenSet() const;

                    /**
                     * 获取消息来源(1、分享用户端  2、对话API)
                     * @return Type 消息来源(1、分享用户端  2、对话API)
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置消息来源(1、分享用户端  2、对话API)
                     * @param _type 消息来源(1、分享用户端  2、对话API)
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取登录用户主账号(集成商模式必填)
                     * @return LoginUin 登录用户主账号(集成商模式必填)
                     * 
                     */
                    std::string GetLoginUin() const;

                    /**
                     * 设置登录用户主账号(集成商模式必填)
                     * @param _loginUin 登录用户主账号(集成商模式必填)
                     * 
                     */
                    void SetLoginUin(const std::string& _loginUin);

                    /**
                     * 判断参数 LoginUin 是否已赋值
                     * @return LoginUin 是否已赋值
                     * 
                     */
                    bool LoginUinHasBeenSet() const;

                    /**
                     * 获取登录用户子账号(集成商模式必填)	
                     * @return LoginSubAccountUin 登录用户子账号(集成商模式必填)	
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置登录用户子账号(集成商模式必填)	
                     * @param _loginSubAccountUin 登录用户子账号(集成商模式必填)	
                     * 
                     */
                    void SetLoginSubAccountUin(const std::string& _loginSubAccountUin);

                    /**
                     * 判断参数 LoginSubAccountUin 是否已赋值
                     * @return LoginSubAccountUin 是否已赋值
                     * 
                     */
                    bool LoginSubAccountUinHasBeenSet() const;

                private:

                    /**
                     * 开始日期
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束日期
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 应用id
                     */
                    std::vector<std::string> m_appBizId;
                    bool m_appBizIdHasBeenSet;

                    /**
                     * 消息来源(1、分享用户端  2、对话API)
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 登录用户主账号(集成商模式必填)
                     */
                    std::string m_loginUin;
                    bool m_loginUinHasBeenSet;

                    /**
                     * 登录用户子账号(集成商模式必填)	
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_GETLIKEDATACOUNTREQUEST_H_
