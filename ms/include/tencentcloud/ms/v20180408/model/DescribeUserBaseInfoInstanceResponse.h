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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBEUSERBASEINFOINSTANCERESPONSE_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBEUSERBASEINFOINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * DescribeUserBaseInfoInstance返回参数结构体
                */
                class DescribeUserBaseInfoInstanceResponse : public AbstractModel
                {
                public:
                    DescribeUserBaseInfoInstanceResponse();
                    ~DescribeUserBaseInfoInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户uin信息
                     * @return UserUin 用户uin信息
                     * 
                     */
                    uint64_t GetUserUin() const;

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     * 
                     */
                    bool UserUinHasBeenSet() const;

                    /**
                     * 获取用户APPID信息
                     * @return UserAppid 用户APPID信息
                     * 
                     */
                    uint64_t GetUserAppid() const;

                    /**
                     * 判断参数 UserAppid 是否已赋值
                     * @return UserAppid 是否已赋值
                     * 
                     */
                    bool UserAppidHasBeenSet() const;

                    /**
                     * 获取系统时间戳
                     * @return TimeStamp 系统时间戳
                     * 
                     */
                    uint64_t GetTimeStamp() const;

                    /**
                     * 判断参数 TimeStamp 是否已赋值
                     * @return TimeStamp 是否已赋值
                     * 
                     */
                    bool TimeStampHasBeenSet() const;

                private:

                    /**
                     * 用户uin信息
                     */
                    uint64_t m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * 用户APPID信息
                     */
                    uint64_t m_userAppid;
                    bool m_userAppidHasBeenSet;

                    /**
                     * 系统时间戳
                     */
                    uint64_t m_timeStamp;
                    bool m_timeStampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBEUSERBASEINFOINSTANCERESPONSE_H_
