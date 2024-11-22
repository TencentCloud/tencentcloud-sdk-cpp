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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECONFIGFILERELEASESREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECONFIGFILERELEASESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeConfigFileReleases请求参数结构体
                */
                class DescribeConfigFileReleasesRequest : public AbstractModel
                {
                public:
                    DescribeConfigFileReleasesRequest();
                    ~DescribeConfigFileReleasesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
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
                     * 获取条数
                     * @return Limit 条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置条数
                     * @param _limit 条数
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
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取命名空间
                     * @return Namespace 命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
                     * @param _namespace 命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取配置分组
                     * @return Group 配置分组
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置配置分组
                     * @param _group 配置分组
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取文件名称
                     * @return FileName 文件名称
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名称
                     * @param _fileName 文件名称
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取只保护处于使用状态
                     * @return OnlyUse 只保护处于使用状态
                     * 
                     */
                    bool GetOnlyUse() const;

                    /**
                     * 设置只保护处于使用状态
                     * @param _onlyUse 只保护处于使用状态
                     * 
                     */
                    void SetOnlyUse(const bool& _onlyUse);

                    /**
                     * 判断参数 OnlyUse 是否已赋值
                     * @return OnlyUse 是否已赋值
                     * 
                     */
                    bool OnlyUseHasBeenSet() const;

                    /**
                     * 获取发布名称
                     * @return ReleaseName 发布名称
                     * 
                     */
                    std::string GetReleaseName() const;

                    /**
                     * 设置发布名称
                     * @param _releaseName 发布名称
                     * 
                     */
                    void SetReleaseName(const std::string& _releaseName);

                    /**
                     * 判断参数 ReleaseName 是否已赋值
                     * @return ReleaseName 是否已赋值
                     * 
                     */
                    bool ReleaseNameHasBeenSet() const;

                    /**
                     * 获取排序字段，mtime/version/name
，默认version
                     * @return OrderField 排序字段，mtime/version/name
，默认version
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段，mtime/version/name
，默认version
                     * @param _orderField 排序字段，mtime/version/name
，默认version
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取排序，asc/desc，默认 desc
                     * @return OrderDesc 排序，asc/desc，默认 desc
                     * 
                     */
                    std::string GetOrderDesc() const;

                    /**
                     * 设置排序，asc/desc，默认 desc
                     * @param _orderDesc 排序，asc/desc，默认 desc
                     * 
                     */
                    void SetOrderDesc(const std::string& _orderDesc);

                    /**
                     * 判断参数 OrderDesc 是否已赋值
                     * @return OrderDesc 是否已赋值
                     * 
                     */
                    bool OrderDescHasBeenSet() const;

                    /**
                     * 获取配置发布ID
                     * @return Id 配置发布ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置配置发布ID
                     * @param _id 配置发布ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 配置分组
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * 文件名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 只保护处于使用状态
                     */
                    bool m_onlyUse;
                    bool m_onlyUseHasBeenSet;

                    /**
                     * 发布名称
                     */
                    std::string m_releaseName;
                    bool m_releaseNameHasBeenSet;

                    /**
                     * 排序字段，mtime/version/name
，默认version
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 排序，asc/desc，默认 desc
                     */
                    std::string m_orderDesc;
                    bool m_orderDescHasBeenSet;

                    /**
                     * 配置发布ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECONFIGFILERELEASESREQUEST_H_
