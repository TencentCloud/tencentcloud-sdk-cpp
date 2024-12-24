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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_LOGINHISTOOLREQUEST_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_LOGINHISTOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aca/v20210323/model/LoginHeader.h>
#include <tencentcloud/aca/v20210323/model/LoginData.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * LoginHisTool请求参数结构体
                */
                class LoginHisToolRequest : public AbstractModel
                {
                public:
                    LoginHisToolRequest();
                    ~LoginHisToolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取请求头
                     * @return Header 请求头
                     * 
                     */
                    LoginHeader GetHeader() const;

                    /**
                     * 设置请求头
                     * @param _header 请求头
                     * 
                     */
                    void SetHeader(const LoginHeader& _header);

                    /**
                     * 判断参数 Header 是否已赋值
                     * @return Header 是否已赋值
                     * 
                     */
                    bool HeaderHasBeenSet() const;

                    /**
                     * 获取请求体
                     * @return Data 请求体
                     * 
                     */
                    LoginData GetData() const;

                    /**
                     * 设置请求体
                     * @param _data 请求体
                     * 
                     */
                    void SetData(const LoginData& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 请求头
                     */
                    LoginHeader m_header;
                    bool m_headerHasBeenSet;

                    /**
                     * 请求体
                     */
                    LoginData m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_LOGINHISTOOLREQUEST_H_
