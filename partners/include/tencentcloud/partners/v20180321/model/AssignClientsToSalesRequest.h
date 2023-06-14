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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_ASSIGNCLIENTSTOSALESREQUEST_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_ASSIGNCLIENTSTOSALESREQUEST_H_

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
                * AssignClientsToSales请求参数结构体
                */
                class AssignClientsToSalesRequest : public AbstractModel
                {
                public:
                    AssignClientsToSalesRequest();
                    ~AssignClientsToSalesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取代客/申请中代客uin列表，最大50条
                     * @return ClientUins 代客/申请中代客uin列表，最大50条
                     * 
                     */
                    std::vector<std::string> GetClientUins() const;

                    /**
                     * 设置代客/申请中代客uin列表，最大50条
                     * @param _clientUins 代客/申请中代客uin列表，最大50条
                     * 
                     */
                    void SetClientUins(const std::vector<std::string>& _clientUins);

                    /**
                     * 判断参数 ClientUins 是否已赋值
                     * @return ClientUins 是否已赋值
                     * 
                     */
                    bool ClientUinsHasBeenSet() const;

                    /**
                     * 获取业务员uin
                     * @return SalesUin 业务员uin
                     * 
                     */
                    std::string GetSalesUin() const;

                    /**
                     * 设置业务员uin
                     * @param _salesUin 业务员uin
                     * 
                     */
                    void SetSalesUin(const std::string& _salesUin);

                    /**
                     * 判断参数 SalesUin 是否已赋值
                     * @return SalesUin 是否已赋值
                     * 
                     */
                    bool SalesUinHasBeenSet() const;

                    /**
                     * 获取代客类型:normal-代客 apply-申请中代客
                     * @return AssignClientStatus 代客类型:normal-代客 apply-申请中代客
                     * 
                     */
                    std::string GetAssignClientStatus() const;

                    /**
                     * 设置代客类型:normal-代客 apply-申请中代客
                     * @param _assignClientStatus 代客类型:normal-代客 apply-申请中代客
                     * 
                     */
                    void SetAssignClientStatus(const std::string& _assignClientStatus);

                    /**
                     * 判断参数 AssignClientStatus 是否已赋值
                     * @return AssignClientStatus 是否已赋值
                     * 
                     */
                    bool AssignClientStatusHasBeenSet() const;

                    /**
                     * 获取操作类型:assign-执行分派 cancel-取消分派
                     * @return AssignActionType 操作类型:assign-执行分派 cancel-取消分派
                     * 
                     */
                    std::string GetAssignActionType() const;

                    /**
                     * 设置操作类型:assign-执行分派 cancel-取消分派
                     * @param _assignActionType 操作类型:assign-执行分派 cancel-取消分派
                     * 
                     */
                    void SetAssignActionType(const std::string& _assignActionType);

                    /**
                     * 判断参数 AssignActionType 是否已赋值
                     * @return AssignActionType 是否已赋值
                     * 
                     */
                    bool AssignActionTypeHasBeenSet() const;

                private:

                    /**
                     * 代客/申请中代客uin列表，最大50条
                     */
                    std::vector<std::string> m_clientUins;
                    bool m_clientUinsHasBeenSet;

                    /**
                     * 业务员uin
                     */
                    std::string m_salesUin;
                    bool m_salesUinHasBeenSet;

                    /**
                     * 代客类型:normal-代客 apply-申请中代客
                     */
                    std::string m_assignClientStatus;
                    bool m_assignClientStatusHasBeenSet;

                    /**
                     * 操作类型:assign-执行分派 cancel-取消分派
                     */
                    std::string m_assignActionType;
                    bool m_assignActionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_ASSIGNCLIENTSTOSALESREQUEST_H_
