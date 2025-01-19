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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKEIDTOKENSTATUSREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKEIDTOKENSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * CheckEidTokenStatus请求参数结构体
                */
                class CheckEidTokenStatusRequest : public AbstractModel
                {
                public:
                    CheckEidTokenStatusRequest();
                    ~CheckEidTokenStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取E证通流程的唯一标识，调用[GetEidToken](https://cloud.tencent.com/document/product/1007/54089)接口时生成。
                     * @return EidToken E证通流程的唯一标识，调用[GetEidToken](https://cloud.tencent.com/document/product/1007/54089)接口时生成。
                     * 
                     */
                    std::string GetEidToken() const;

                    /**
                     * 设置E证通流程的唯一标识，调用[GetEidToken](https://cloud.tencent.com/document/product/1007/54089)接口时生成。
                     * @param _eidToken E证通流程的唯一标识，调用[GetEidToken](https://cloud.tencent.com/document/product/1007/54089)接口时生成。
                     * 
                     */
                    void SetEidToken(const std::string& _eidToken);

                    /**
                     * 判断参数 EidToken 是否已赋值
                     * @return EidToken 是否已赋值
                     * 
                     */
                    bool EidTokenHasBeenSet() const;

                private:

                    /**
                     * E证通流程的唯一标识，调用[GetEidToken](https://cloud.tencent.com/document/product/1007/54089)接口时生成。
                     */
                    std::string m_eidToken;
                    bool m_eidTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKEIDTOKENSTATUSREQUEST_H_
