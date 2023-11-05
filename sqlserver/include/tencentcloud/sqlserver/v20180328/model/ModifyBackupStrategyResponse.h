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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYBACKUPSTRATEGYRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYBACKUPSTRATEGYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyBackupStrategy返回参数结构体
                */
                class ModifyBackupStrategyResponse : public AbstractModel
                {
                public:
                    ModifyBackupStrategyResponse();
                    ~ModifyBackupStrategyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回错误码
                     * @return Errno 返回错误码
                     * @deprecated
                     */
                    int64_t GetErrno() const;

                    /**
                     * 判断参数 Errno 是否已赋值
                     * @return Errno 是否已赋值
                     * @deprecated
                     */
                    bool ErrnoHasBeenSet() const;

                    /**
                     * 获取返回错误信息
                     * @return Msg 返回错误信息
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取返回错误码
                     * @return Code 返回错误码
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                private:

                    /**
                     * 返回错误码
                     */
                    int64_t m_errno;
                    bool m_errnoHasBeenSet;

                    /**
                     * 返回错误信息
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * 返回错误码
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYBACKUPSTRATEGYRESPONSE_H_
