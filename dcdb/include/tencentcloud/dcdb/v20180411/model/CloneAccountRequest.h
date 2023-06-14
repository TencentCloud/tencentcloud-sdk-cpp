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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_CLONEACCOUNTREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_CLONEACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * CloneAccount请求参数结构体
                */
                class CloneAccountRequest : public AbstractModel
                {
                public:
                    CloneAccountRequest();
                    ~CloneAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取源用户账户名
                     * @return SrcUser 源用户账户名
                     * 
                     */
                    std::string GetSrcUser() const;

                    /**
                     * 设置源用户账户名
                     * @param _srcUser 源用户账户名
                     * 
                     */
                    void SetSrcUser(const std::string& _srcUser);

                    /**
                     * 判断参数 SrcUser 是否已赋值
                     * @return SrcUser 是否已赋值
                     * 
                     */
                    bool SrcUserHasBeenSet() const;

                    /**
                     * 获取源用户HOST
                     * @return SrcHost 源用户HOST
                     * 
                     */
                    std::string GetSrcHost() const;

                    /**
                     * 设置源用户HOST
                     * @param _srcHost 源用户HOST
                     * 
                     */
                    void SetSrcHost(const std::string& _srcHost);

                    /**
                     * 判断参数 SrcHost 是否已赋值
                     * @return SrcHost 是否已赋值
                     * 
                     */
                    bool SrcHostHasBeenSet() const;

                    /**
                     * 获取目的用户账户名
                     * @return DstUser 目的用户账户名
                     * 
                     */
                    std::string GetDstUser() const;

                    /**
                     * 设置目的用户账户名
                     * @param _dstUser 目的用户账户名
                     * 
                     */
                    void SetDstUser(const std::string& _dstUser);

                    /**
                     * 判断参数 DstUser 是否已赋值
                     * @return DstUser 是否已赋值
                     * 
                     */
                    bool DstUserHasBeenSet() const;

                    /**
                     * 获取目的用户HOST
                     * @return DstHost 目的用户HOST
                     * 
                     */
                    std::string GetDstHost() const;

                    /**
                     * 设置目的用户HOST
                     * @param _dstHost 目的用户HOST
                     * 
                     */
                    void SetDstHost(const std::string& _dstHost);

                    /**
                     * 判断参数 DstHost 是否已赋值
                     * @return DstHost 是否已赋值
                     * 
                     */
                    bool DstHostHasBeenSet() const;

                    /**
                     * 获取目的用户账户描述
                     * @return DstDesc 目的用户账户描述
                     * 
                     */
                    std::string GetDstDesc() const;

                    /**
                     * 设置目的用户账户描述
                     * @param _dstDesc 目的用户账户描述
                     * 
                     */
                    void SetDstDesc(const std::string& _dstDesc);

                    /**
                     * 判断参数 DstDesc 是否已赋值
                     * @return DstDesc 是否已赋值
                     * 
                     */
                    bool DstDescHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 源用户账户名
                     */
                    std::string m_srcUser;
                    bool m_srcUserHasBeenSet;

                    /**
                     * 源用户HOST
                     */
                    std::string m_srcHost;
                    bool m_srcHostHasBeenSet;

                    /**
                     * 目的用户账户名
                     */
                    std::string m_dstUser;
                    bool m_dstUserHasBeenSet;

                    /**
                     * 目的用户HOST
                     */
                    std::string m_dstHost;
                    bool m_dstHostHasBeenSet;

                    /**
                     * 目的用户账户描述
                     */
                    std::string m_dstDesc;
                    bool m_dstDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_CLONEACCOUNTREQUEST_H_
