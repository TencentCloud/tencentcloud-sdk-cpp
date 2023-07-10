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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATEDOMAINREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATEDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/TagItem.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * CreateDomain请求参数结构体
                */
                class CreateDomainRequest : public AbstractModel
                {
                public:
                    CreateDomainRequest();
                    ~CreateDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取域名分组ID。可以通过接口DescribeDomainGroupList查看当前域名分组信息
                     * @return GroupId 域名分组ID。可以通过接口DescribeDomainGroupList查看当前域名分组信息
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置域名分组ID。可以通过接口DescribeDomainGroupList查看当前域名分组信息
                     * @param _groupId 域名分组ID。可以通过接口DescribeDomainGroupList查看当前域名分组信息
                     * 
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取是否星标域名，”yes”、”no” 分别代表是和否。
                     * @return IsMark 是否星标域名，”yes”、”no” 分别代表是和否。
                     * 
                     */
                    std::string GetIsMark() const;

                    /**
                     * 设置是否星标域名，”yes”、”no” 分别代表是和否。
                     * @param _isMark 是否星标域名，”yes”、”no” 分别代表是和否。
                     * 
                     */
                    void SetIsMark(const std::string& _isMark);

                    /**
                     * 判断参数 IsMark 是否已赋值
                     * @return IsMark 是否已赋值
                     * 
                     */
                    bool IsMarkHasBeenSet() const;

                    /**
                     * 获取添加子域名时，是否迁移相关父域名的解析记录。不传默认为 true
                     * @return TransferSubDomain 添加子域名时，是否迁移相关父域名的解析记录。不传默认为 true
                     * 
                     */
                    bool GetTransferSubDomain() const;

                    /**
                     * 设置添加子域名时，是否迁移相关父域名的解析记录。不传默认为 true
                     * @param _transferSubDomain 添加子域名时，是否迁移相关父域名的解析记录。不传默认为 true
                     * 
                     */
                    void SetTransferSubDomain(const bool& _transferSubDomain);

                    /**
                     * 判断参数 TransferSubDomain 是否已赋值
                     * @return TransferSubDomain 是否已赋值
                     * 
                     */
                    bool TransferSubDomainHasBeenSet() const;

                    /**
                     * 获取域名绑定的标签
                     * @return Tags 域名绑定的标签
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置域名绑定的标签
                     * @param _tags 域名绑定的标签
                     * 
                     */
                    void SetTags(const std::vector<TagItem>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 域名分组ID。可以通过接口DescribeDomainGroupList查看当前域名分组信息
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 是否星标域名，”yes”、”no” 分别代表是和否。
                     */
                    std::string m_isMark;
                    bool m_isMarkHasBeenSet;

                    /**
                     * 添加子域名时，是否迁移相关父域名的解析记录。不传默认为 true
                     */
                    bool m_transferSubDomain;
                    bool m_transferSubDomainHasBeenSet;

                    /**
                     * 域名绑定的标签
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATEDOMAINREQUEST_H_
