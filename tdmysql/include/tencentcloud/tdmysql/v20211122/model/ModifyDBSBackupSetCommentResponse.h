/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYDBSBACKUPSETCOMMENTRESPONSE_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYDBSBACKUPSETCOMMENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * ModifyDBSBackupSetComment返回参数结构体
                */
                class ModifyDBSBackupSetCommentResponse : public AbstractModel
                {
                public:
                    ModifyDBSBackupSetCommentResponse();
                    ~ModifyDBSBackupSetCommentResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>是否成功</p>
                     * @return IsSuccess <p>是否成功</p>
                     * 
                     */
                    bool GetIsSuccess() const;

                    /**
                     * 判断参数 IsSuccess 是否已赋值
                     * @return IsSuccess 是否已赋值
                     * 
                     */
                    bool IsSuccessHasBeenSet() const;

                    /**
                     * 获取<p>修改信息</p>
                     * @return Msg <p>修改信息</p>
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                private:

                    /**
                     * <p>是否成功</p>
                     */
                    bool m_isSuccess;
                    bool m_isSuccessHasBeenSet;

                    /**
                     * <p>修改信息</p>
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYDBSBACKUPSETCOMMENTRESPONSE_H_
