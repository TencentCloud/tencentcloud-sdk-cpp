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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_APPLYCHAINMAKERBATCHUSERCERTRESPONSE_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_APPLYCHAINMAKERBATCHUSERCERTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ApplyChainMakerBatchUserCert返回参数结构体
                */
                class ApplyChainMakerBatchUserCertResponse : public AbstractModel
                {
                public:
                    ApplyChainMakerBatchUserCertResponse();
                    ~ApplyChainMakerBatchUserCertResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取成功生成的用户证书的base64编码字符串列表，与SignUserCsrList一一对应
                     * @return SignUserCrtList 成功生成的用户证书的base64编码字符串列表，与SignUserCsrList一一对应
                     * 
                     */
                    std::vector<std::string> GetSignUserCrtList() const;

                    /**
                     * 判断参数 SignUserCrtList 是否已赋值
                     * @return SignUserCrtList 是否已赋值
                     * 
                     */
                    bool SignUserCrtListHasBeenSet() const;

                private:

                    /**
                     * 成功生成的用户证书的base64编码字符串列表，与SignUserCsrList一一对应
                     */
                    std::vector<std::string> m_signUserCrtList;
                    bool m_signUserCrtListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_APPLYCHAINMAKERBATCHUSERCERTRESPONSE_H_
