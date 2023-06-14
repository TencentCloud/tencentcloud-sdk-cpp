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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_MODIFYCLIENTREMARKREQUEST_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_MODIFYCLIENTREMARKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * ModifyClientRemark请求参数结构体
                */
                class ModifyClientRemarkRequest : public AbstractModel
                {
                public:
                    ModifyClientRemarkRequest();
                    ~ModifyClientRemarkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户备注名称
                     * @return ClientRemark 客户备注名称
                     * 
                     */
                    std::string GetClientRemark() const;

                    /**
                     * 设置客户备注名称
                     * @param _clientRemark 客户备注名称
                     * 
                     */
                    void SetClientRemark(const std::string& _clientRemark);

                    /**
                     * 判断参数 ClientRemark 是否已赋值
                     * @return ClientRemark 是否已赋值
                     * 
                     */
                    bool ClientRemarkHasBeenSet() const;

                    /**
                     * 获取客户账号ID
                     * @return ClientUin 客户账号ID
                     * 
                     */
                    std::string GetClientUin() const;

                    /**
                     * 设置客户账号ID
                     * @param _clientUin 客户账号ID
                     * 
                     */
                    void SetClientUin(const std::string& _clientUin);

                    /**
                     * 判断参数 ClientUin 是否已赋值
                     * @return ClientUin 是否已赋值
                     * 
                     */
                    bool ClientUinHasBeenSet() const;

                private:

                    /**
                     * 客户备注名称
                     */
                    std::string m_clientRemark;
                    bool m_clientRemarkHasBeenSet;

                    /**
                     * 客户账号ID
                     */
                    std::string m_clientUin;
                    bool m_clientUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_MODIFYCLIENTREMARKREQUEST_H_
