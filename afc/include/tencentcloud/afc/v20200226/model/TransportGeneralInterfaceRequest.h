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

#ifndef TENCENTCLOUD_AFC_V20200226_MODEL_TRANSPORTGENERALINTERFACEREQUEST_H_
#define TENCENTCLOUD_AFC_V20200226_MODEL_TRANSPORTGENERALINTERFACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/afc/v20200226/model/TransportGeneralInterfaceInput.h>


namespace TencentCloud
{
    namespace Afc
    {
        namespace V20200226
        {
            namespace Model
            {
                /**
                * TransportGeneralInterface请求参数结构体
                */
                class TransportGeneralInterfaceRequest : public AbstractModel
                {
                public:
                    TransportGeneralInterfaceRequest();
                    ~TransportGeneralInterfaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务入参
                     * @return BusinessSecurityData 业务入参
                     * 
                     */
                    TransportGeneralInterfaceInput GetBusinessSecurityData() const;

                    /**
                     * 设置业务入参
                     * @param _businessSecurityData 业务入参
                     * 
                     */
                    void SetBusinessSecurityData(const TransportGeneralInterfaceInput& _businessSecurityData);

                    /**
                     * 判断参数 BusinessSecurityData 是否已赋值
                     * @return BusinessSecurityData 是否已赋值
                     * 
                     */
                    bool BusinessSecurityDataHasBeenSet() const;

                private:

                    /**
                     * 业务入参
                     */
                    TransportGeneralInterfaceInput m_businessSecurityData;
                    bool m_businessSecurityDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AFC_V20200226_MODEL_TRANSPORTGENERALINTERFACEREQUEST_H_
