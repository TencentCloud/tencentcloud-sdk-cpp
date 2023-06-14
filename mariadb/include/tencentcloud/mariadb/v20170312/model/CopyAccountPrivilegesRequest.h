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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_COPYACCOUNTPRIVILEGESREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_COPYACCOUNTPRIVILEGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CopyAccountPrivileges请求参数结构体
                */
                class CopyAccountPrivilegesRequest : public AbstractModel
                {
                public:
                    CopyAccountPrivilegesRequest();
                    ~CopyAccountPrivilegesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
                     * @return InstanceId 实例 ID，形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
                     * @param _instanceId 实例 ID，形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
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
                     * 获取源用户名
                     * @return SrcUserName 源用户名
                     * 
                     */
                    std::string GetSrcUserName() const;

                    /**
                     * 设置源用户名
                     * @param _srcUserName 源用户名
                     * 
                     */
                    void SetSrcUserName(const std::string& _srcUserName);

                    /**
                     * 判断参数 SrcUserName 是否已赋值
                     * @return SrcUserName 是否已赋值
                     * 
                     */
                    bool SrcUserNameHasBeenSet() const;

                    /**
                     * 获取源用户允许的访问 host
                     * @return SrcHost 源用户允许的访问 host
                     * 
                     */
                    std::string GetSrcHost() const;

                    /**
                     * 设置源用户允许的访问 host
                     * @param _srcHost 源用户允许的访问 host
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
                     * 获取目的用户名
                     * @return DstUserName 目的用户名
                     * 
                     */
                    std::string GetDstUserName() const;

                    /**
                     * 设置目的用户名
                     * @param _dstUserName 目的用户名
                     * 
                     */
                    void SetDstUserName(const std::string& _dstUserName);

                    /**
                     * 判断参数 DstUserName 是否已赋值
                     * @return DstUserName 是否已赋值
                     * 
                     */
                    bool DstUserNameHasBeenSet() const;

                    /**
                     * 获取目的用户允许的访问 host
                     * @return DstHost 目的用户允许的访问 host
                     * 
                     */
                    std::string GetDstHost() const;

                    /**
                     * 设置目的用户允许的访问 host
                     * @param _dstHost 目的用户允许的访问 host
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
                     * 获取源账号的 ReadOnly 属性
                     * @return SrcReadOnly 源账号的 ReadOnly 属性
                     * 
                     */
                    std::string GetSrcReadOnly() const;

                    /**
                     * 设置源账号的 ReadOnly 属性
                     * @param _srcReadOnly 源账号的 ReadOnly 属性
                     * 
                     */
                    void SetSrcReadOnly(const std::string& _srcReadOnly);

                    /**
                     * 判断参数 SrcReadOnly 是否已赋值
                     * @return SrcReadOnly 是否已赋值
                     * 
                     */
                    bool SrcReadOnlyHasBeenSet() const;

                    /**
                     * 获取目的账号的 ReadOnly 属性
                     * @return DstReadOnly 目的账号的 ReadOnly 属性
                     * 
                     */
                    std::string GetDstReadOnly() const;

                    /**
                     * 设置目的账号的 ReadOnly 属性
                     * @param _dstReadOnly 目的账号的 ReadOnly 属性
                     * 
                     */
                    void SetDstReadOnly(const std::string& _dstReadOnly);

                    /**
                     * 判断参数 DstReadOnly 是否已赋值
                     * @return DstReadOnly 是否已赋值
                     * 
                     */
                    bool DstReadOnlyHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 源用户名
                     */
                    std::string m_srcUserName;
                    bool m_srcUserNameHasBeenSet;

                    /**
                     * 源用户允许的访问 host
                     */
                    std::string m_srcHost;
                    bool m_srcHostHasBeenSet;

                    /**
                     * 目的用户名
                     */
                    std::string m_dstUserName;
                    bool m_dstUserNameHasBeenSet;

                    /**
                     * 目的用户允许的访问 host
                     */
                    std::string m_dstHost;
                    bool m_dstHostHasBeenSet;

                    /**
                     * 源账号的 ReadOnly 属性
                     */
                    std::string m_srcReadOnly;
                    bool m_srcReadOnlyHasBeenSet;

                    /**
                     * 目的账号的 ReadOnly 属性
                     */
                    std::string m_dstReadOnly;
                    bool m_dstReadOnlyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_COPYACCOUNTPRIVILEGESREQUEST_H_
