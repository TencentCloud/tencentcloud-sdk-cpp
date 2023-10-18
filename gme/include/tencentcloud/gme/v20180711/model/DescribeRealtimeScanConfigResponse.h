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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEREALTIMESCANCONFIGRESPONSE_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEREALTIMESCANCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * DescribeRealtimeScanConfig返回参数结构体
                */
                class DescribeRealtimeScanConfigResponse : public AbstractModel
                {
                public:
                    DescribeRealtimeScanConfigResponse();
                    ~DescribeRealtimeScanConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回结果码，0正常，非0失败
                     * @return ErrorCode 返回结果码，0正常，非0失败
                     * 
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取应用ID
                     * @return BizId 应用ID
                     * 
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     * 
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取送检类型，0: 全量送审，1: 自定义送审
                     * @return AuditType 送检类型，0: 全量送审，1: 自定义送审
                     * 
                     */
                    int64_t GetAuditType() const;

                    /**
                     * 判断参数 AuditType 是否已赋值
                     * @return AuditType 是否已赋值
                     * 
                     */
                    bool AuditTypeHasBeenSet() const;

                    /**
                     * 获取用户号正则表达式。
符合此正则表达式规则的用户号将被送检。示例：^6.*（表示所有以6开头的用户号将被送检）
                     * @return UserIdRegex 用户号正则表达式。
符合此正则表达式规则的用户号将被送检。示例：^6.*（表示所有以6开头的用户号将被送检）
                     * 
                     */
                    std::vector<std::string> GetUserIdRegex() const;

                    /**
                     * 判断参数 UserIdRegex 是否已赋值
                     * @return UserIdRegex 是否已赋值
                     * 
                     */
                    bool UserIdRegexHasBeenSet() const;

                    /**
                     * 获取房间号正则表达式。
符合此正则表达式规则的房间号将被送检。示例：^6.*（表示所有以6开头的房间号将被送检）
                     * @return RoomIdRegex 房间号正则表达式。
符合此正则表达式规则的房间号将被送检。示例：^6.*（表示所有以6开头的房间号将被送检）
                     * 
                     */
                    std::vector<std::string> GetRoomIdRegex() const;

                    /**
                     * 判断参数 RoomIdRegex 是否已赋值
                     * @return RoomIdRegex 是否已赋值
                     * 
                     */
                    bool RoomIdRegexHasBeenSet() const;

                    /**
                     * 获取用户号字符串，逗号分隔，示例："0001,0002,0003"
                     * @return UserIdString 用户号字符串，逗号分隔，示例："0001,0002,0003"
                     * 
                     */
                    std::string GetUserIdString() const;

                    /**
                     * 判断参数 UserIdString 是否已赋值
                     * @return UserIdString 是否已赋值
                     * 
                     */
                    bool UserIdStringHasBeenSet() const;

                    /**
                     * 获取房间号字符串，逗号分隔，示例："0001,0002,0003"
                     * @return RoomIdString 房间号字符串，逗号分隔，示例："0001,0002,0003"
                     * 
                     */
                    std::string GetRoomIdString() const;

                    /**
                     * 判断参数 RoomIdString 是否已赋值
                     * @return RoomIdString 是否已赋值
                     * 
                     */
                    bool RoomIdStringHasBeenSet() const;

                private:

                    /**
                     * 返回结果码，0正常，非0失败
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 应用ID
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * 送检类型，0: 全量送审，1: 自定义送审
                     */
                    int64_t m_auditType;
                    bool m_auditTypeHasBeenSet;

                    /**
                     * 用户号正则表达式。
符合此正则表达式规则的用户号将被送检。示例：^6.*（表示所有以6开头的用户号将被送检）
                     */
                    std::vector<std::string> m_userIdRegex;
                    bool m_userIdRegexHasBeenSet;

                    /**
                     * 房间号正则表达式。
符合此正则表达式规则的房间号将被送检。示例：^6.*（表示所有以6开头的房间号将被送检）
                     */
                    std::vector<std::string> m_roomIdRegex;
                    bool m_roomIdRegexHasBeenSet;

                    /**
                     * 用户号字符串，逗号分隔，示例："0001,0002,0003"
                     */
                    std::string m_userIdString;
                    bool m_userIdStringHasBeenSet;

                    /**
                     * 房间号字符串，逗号分隔，示例："0001,0002,0003"
                     */
                    std::string m_roomIdString;
                    bool m_roomIdStringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEREALTIMESCANCONFIGRESPONSE_H_
