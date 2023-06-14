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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_REPORTBATCHCALLBACKSTATUSREQUEST_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_REPORTBATCHCALLBACKSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/InputEncryptData.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * ReportBatchCallbackStatus请求参数结构体
                */
                class ReportBatchCallbackStatusRequest : public AbstractModel
                {
                public:
                    ReportBatchCallbackStatusRequest();
                    ~ReportBatchCallbackStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务加密入参。
                     * @return BusinessSecurityData 业务加密入参。
                     * 
                     */
                    InputEncryptData GetBusinessSecurityData() const;

                    /**
                     * 设置业务加密入参。
                     * @param _businessSecurityData 业务加密入参。
                     * 
                     */
                    void SetBusinessSecurityData(const InputEncryptData& _businessSecurityData);

                    /**
                     * 判断参数 BusinessSecurityData 是否已赋值
                     * @return BusinessSecurityData 是否已赋值
                     * 
                     */
                    bool BusinessSecurityDataHasBeenSet() const;

                private:

                    /**
                     * 业务加密入参。
                     */
                    InputEncryptData m_businessSecurityData;
                    bool m_businessSecurityDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_REPORTBATCHCALLBACKSTATUSREQUEST_H_
