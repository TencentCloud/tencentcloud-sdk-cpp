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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEUSERSFORUSERMANAGERREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEUSERSFORUSERMANAGERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/UserManagerFilter.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeUsersForUserManager请求参数结构体
                */
                class DescribeUsersForUserManagerRequest : public AbstractModel
                {
                public:
                    DescribeUsersForUserManagerRequest();
                    ~DescribeUsersForUserManagerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群实例ID
                     * @return InstanceId 集群实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群实例ID
                     * @param _instanceId 集群实例ID
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
                     * 获取页码
                     * @return PageNo 页码
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置页码
                     * @param _pageNo 页码
                     * 
                     */
                    void SetPageNo(const int64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取分页的大小。
默认查询全部；PageNo和PageSize不合理的设置，都是查询全部
                     * @return PageSize 分页的大小。
默认查询全部；PageNo和PageSize不合理的设置，都是查询全部
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页的大小。
默认查询全部；PageNo和PageSize不合理的设置，都是查询全部
                     * @param _pageSize 分页的大小。
默认查询全部；PageNo和PageSize不合理的设置，都是查询全部
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取查询用户列表过滤器
                     * @return UserManagerFilter 查询用户列表过滤器
                     * 
                     */
                    UserManagerFilter GetUserManagerFilter() const;

                    /**
                     * 设置查询用户列表过滤器
                     * @param _userManagerFilter 查询用户列表过滤器
                     * 
                     */
                    void SetUserManagerFilter(const UserManagerFilter& _userManagerFilter);

                    /**
                     * 判断参数 UserManagerFilter 是否已赋值
                     * @return UserManagerFilter 是否已赋值
                     * 
                     */
                    bool UserManagerFilterHasBeenSet() const;

                    /**
                     * 获取是否需要keytab文件的信息，仅对开启kerberos的集群有效，默认为false
                     * @return NeedKeytabInfo 是否需要keytab文件的信息，仅对开启kerberos的集群有效，默认为false
                     * 
                     */
                    bool GetNeedKeytabInfo() const;

                    /**
                     * 设置是否需要keytab文件的信息，仅对开启kerberos的集群有效，默认为false
                     * @param _needKeytabInfo 是否需要keytab文件的信息，仅对开启kerberos的集群有效，默认为false
                     * 
                     */
                    void SetNeedKeytabInfo(const bool& _needKeytabInfo);

                    /**
                     * 判断参数 NeedKeytabInfo 是否已赋值
                     * @return NeedKeytabInfo 是否已赋值
                     * 
                     */
                    bool NeedKeytabInfoHasBeenSet() const;

                private:

                    /**
                     * 集群实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 页码
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * 分页的大小。
默认查询全部；PageNo和PageSize不合理的设置，都是查询全部
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 查询用户列表过滤器
                     */
                    UserManagerFilter m_userManagerFilter;
                    bool m_userManagerFilterHasBeenSet;

                    /**
                     * 是否需要keytab文件的信息，仅对开启kerberos的集群有效，默认为false
                     */
                    bool m_needKeytabInfo;
                    bool m_needKeytabInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEUSERSFORUSERMANAGERREQUEST_H_
