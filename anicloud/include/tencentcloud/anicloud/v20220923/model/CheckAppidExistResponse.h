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

#ifndef TENCENTCLOUD_ANICLOUD_V20220923_MODEL_CHECKAPPIDEXISTRESPONSE_H_
#define TENCENTCLOUD_ANICLOUD_V20220923_MODEL_CHECKAPPIDEXISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Anicloud
    {
        namespace V20220923
        {
            namespace Model
            {
                /**
                * CheckAppidExist返回参数结构体
                */
                class CheckAppidExistResponse : public AbstractModel
                {
                public:
                    CheckAppidExistResponse();
                    ~CheckAppidExistResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取appid是否存在
                     * @return Exist appid是否存在
                     * 
                     */
                    bool GetExist() const;

                    /**
                     * 判断参数 Exist 是否已赋值
                     * @return Exist 是否已赋值
                     * 
                     */
                    bool ExistHasBeenSet() const;

                    /**
                     * 获取请求是否成功
                     * @return HasError 请求是否成功
                     * 
                     */
                    bool GetHasError() const;

                    /**
                     * 判断参数 HasError 是否已赋值
                     * @return HasError 是否已赋值
                     * 
                     */
                    bool HasErrorHasBeenSet() const;

                    /**
                     * 获取出错消息
                     * @return Msg 出错消息
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
                     * appid是否存在
                     */
                    bool m_exist;
                    bool m_existHasBeenSet;

                    /**
                     * 请求是否成功
                     */
                    bool m_hasError;
                    bool m_hasErrorHasBeenSet;

                    /**
                     * 出错消息
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANICLOUD_V20220923_MODEL_CHECKAPPIDEXISTRESPONSE_H_
