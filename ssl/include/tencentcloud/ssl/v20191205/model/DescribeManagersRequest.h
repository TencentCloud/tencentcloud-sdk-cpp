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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEMANAGERSREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEMANAGERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeManagers请求参数结构体
                */
                class DescribeManagersRequest : public AbstractModel
                {
                public:
                    DescribeManagersRequest();
                    ~DescribeManagersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取公司ID,可以从DescribeCompanies接口获取
                     * @return CompanyId 公司ID,可以从DescribeCompanies接口获取
                     * 
                     */
                    int64_t GetCompanyId() const;

                    /**
                     * 设置公司ID,可以从DescribeCompanies接口获取
                     * @param _companyId 公司ID,可以从DescribeCompanies接口获取
                     * 
                     */
                    void SetCompanyId(const int64_t& _companyId);

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取分页偏移量，如果不传默认值为0
                     * @return Offset 分页偏移量，如果不传默认值为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，如果不传默认值为0
                     * @param _offset 分页偏移量，如果不传默认值为0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页每页数量，如果不传默认值为10，最大值为1000
                     * @return Limit 分页每页数量，如果不传默认值为10，最大值为1000
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页每页数量，如果不传默认值为10，最大值为1000
                     * @param _limit 分页每页数量，如果不传默认值为10，最大值为1000
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取管理人姓名（将废弃），请使用SearchKey
                     * @return ManagerName 管理人姓名（将废弃），请使用SearchKey
                     * 
                     */
                    std::string GetManagerName() const;

                    /**
                     * 设置管理人姓名（将废弃），请使用SearchKey
                     * @param _managerName 管理人姓名（将废弃），请使用SearchKey
                     * 
                     */
                    void SetManagerName(const std::string& _managerName);

                    /**
                     * 判断参数 ManagerName 是否已赋值
                     * @return ManagerName 是否已赋值
                     * 
                     */
                    bool ManagerNameHasBeenSet() const;

                    /**
                     * 获取模糊查询管理人邮箱（将废弃），请使用SearchKey
                     * @return ManagerMail 模糊查询管理人邮箱（将废弃），请使用SearchKey
                     * 
                     */
                    std::string GetManagerMail() const;

                    /**
                     * 设置模糊查询管理人邮箱（将废弃），请使用SearchKey
                     * @param _managerMail 模糊查询管理人邮箱（将废弃），请使用SearchKey
                     * 
                     */
                    void SetManagerMail(const std::string& _managerMail);

                    /**
                     * 判断参数 ManagerMail 是否已赋值
                     * @return ManagerMail 是否已赋值
                     * 
                     */
                    bool ManagerMailHasBeenSet() const;

                    /**
                     * 获取根据管理人状态进行筛选，取值有
'none' 未提交审核
'audit', 亚信审核中
'CAaudit' CA审核中
'ok' 已审核
'invalid'  审核失败
'expiring'  即将过期
'expired' 已过期
                     * @return Status 根据管理人状态进行筛选，取值有
'none' 未提交审核
'audit', 亚信审核中
'CAaudit' CA审核中
'ok' 已审核
'invalid'  审核失败
'expiring'  即将过期
'expired' 已过期
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置根据管理人状态进行筛选，取值有
'none' 未提交审核
'audit', 亚信审核中
'CAaudit' CA审核中
'ok' 已审核
'invalid'  审核失败
'expiring'  即将过期
'expired' 已过期
                     * @param _status 根据管理人状态进行筛选，取值有
'none' 未提交审核
'audit', 亚信审核中
'CAaudit' CA审核中
'ok' 已审核
'invalid'  审核失败
'expiring'  即将过期
'expired' 已过期
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取根据这样的格式:管理人姓|管理人名|邮箱|部门 ,进行精准匹配
                     * @return SearchKey 根据这样的格式:管理人姓|管理人名|邮箱|部门 ,进行精准匹配
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置根据这样的格式:管理人姓|管理人名|邮箱|部门 ,进行精准匹配
                     * @param _searchKey 根据这样的格式:管理人姓|管理人名|邮箱|部门 ,进行精准匹配
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                private:

                    /**
                     * 公司ID,可以从DescribeCompanies接口获取
                     */
                    int64_t m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 分页偏移量，如果不传默认值为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页每页数量，如果不传默认值为10，最大值为1000
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 管理人姓名（将废弃），请使用SearchKey
                     */
                    std::string m_managerName;
                    bool m_managerNameHasBeenSet;

                    /**
                     * 模糊查询管理人邮箱（将废弃），请使用SearchKey
                     */
                    std::string m_managerMail;
                    bool m_managerMailHasBeenSet;

                    /**
                     * 根据管理人状态进行筛选，取值有
'none' 未提交审核
'audit', 亚信审核中
'CAaudit' CA审核中
'ok' 已审核
'invalid'  审核失败
'expiring'  即将过期
'expired' 已过期
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 根据这样的格式:管理人姓|管理人名|邮箱|部门 ,进行精准匹配
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEMANAGERSREQUEST_H_
