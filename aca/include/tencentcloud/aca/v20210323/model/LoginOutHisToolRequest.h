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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_LOGINOUTHISTOOLREQUEST_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_LOGINOUTHISTOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aca/v20210323/model/LoginOutHeader.h>
#include <tencentcloud/aca/v20210323/model/LoginOutData.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * LoginOutHisTool请求参数结构体
                */
                class LoginOutHisToolRequest : public AbstractModel
                {
                public:
                    LoginOutHisToolRequest();
                    ~LoginOutHisToolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取登出请求header
                     * @return Header 登出请求header
                     * 
                     */
                    LoginOutHeader GetHeader() const;

                    /**
                     * 设置登出请求header
                     * @param _header 登出请求header
                     * 
                     */
                    void SetHeader(const LoginOutHeader& _header);

                    /**
                     * 判断参数 Header 是否已赋值
                     * @return Header 是否已赋值
                     * 
                     */
                    bool HeaderHasBeenSet() const;

                    /**
                     * 获取登出请求数据
                     * @return Data 登出请求数据
                     * 
                     */
                    LoginOutData GetData() const;

                    /**
                     * 设置登出请求数据
                     * @param _data 登出请求数据
                     * 
                     */
                    void SetData(const LoginOutData& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 登出请求header
                     */
                    LoginOutHeader m_header;
                    bool m_headerHasBeenSet;

                    /**
                     * 登出请求数据
                     */
                    LoginOutData m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_LOGINOUTHISTOOLREQUEST_H_
