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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_COMMONSERVICEAPIRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_COMMONSERVICEAPIRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * CommonServiceAPI返回参数结构体
                */
                class CommonServiceAPIResponse : public AbstractModel
                {
                public:
                    CommonServiceAPIResponse();
                    ~CommonServiceAPIResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取json格式response
                     * @return JSONResp json格式response
                     * 
                     */
                    std::string GetJSONResp() const;

                    /**
                     * 判断参数 JSONResp 是否已赋值
                     * @return JSONResp 是否已赋值
                     * 
                     */
                    bool JSONRespHasBeenSet() const;

                private:

                    /**
                     * json格式response
                     */
                    std::string m_jSONResp;
                    bool m_jSONRespHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_COMMONSERVICEAPIRESPONSE_H_
