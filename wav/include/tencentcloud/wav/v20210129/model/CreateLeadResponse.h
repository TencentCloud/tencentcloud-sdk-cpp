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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_CREATELEADRESPONSE_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_CREATELEADRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * CreateLead返回参数结构体
                */
                class CreateLeadResponse : public AbstractModel
                {
                public:
                    CreateLeadResponse();
                    ~CreateLeadResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取线索处理状态码： 0-表示创建成功， 1-表示线索合并，2-表示线索重复
                     * @return BusinessCode 线索处理状态码： 0-表示创建成功， 1-表示线索合并，2-表示线索重复
                     * 
                     */
                    int64_t GetBusinessCode() const;

                    /**
                     * 判断参数 BusinessCode 是否已赋值
                     * @return BusinessCode 是否已赋值
                     * 
                     */
                    bool BusinessCodeHasBeenSet() const;

                    /**
                     * 获取线索处理结果描述
                     * @return BusinessMsg 线索处理结果描述
                     * 
                     */
                    std::string GetBusinessMsg() const;

                    /**
                     * 判断参数 BusinessMsg 是否已赋值
                     * @return BusinessMsg 是否已赋值
                     * 
                     */
                    bool BusinessMsgHasBeenSet() const;

                private:

                    /**
                     * 线索处理状态码： 0-表示创建成功， 1-表示线索合并，2-表示线索重复
                     */
                    int64_t m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * 线索处理结果描述
                     */
                    std::string m_businessMsg;
                    bool m_businessMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_CREATELEADRESPONSE_H_
