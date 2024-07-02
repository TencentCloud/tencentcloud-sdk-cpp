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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEDOMAINANDIPREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEDOMAINANDIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/PublicIpDomainListKey.h>
#include <tencentcloud/csip/v20221121/model/AssetTag.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DeleteDomainAndIp请求参数结构体
                */
                class DeleteDomainAndIpRequest : public AbstractModel
                {
                public:
                    DeleteDomainAndIpRequest();
                    ~DeleteDomainAndIpRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集团账号的成员id
                     * @return MemberId 集团账号的成员id
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置集团账号的成员id
                     * @param _memberId 集团账号的成员id
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取资产
                     * @return Content 资产
                     * 
                     */
                    std::vector<PublicIpDomainListKey> GetContent() const;

                    /**
                     * 设置资产
                     * @param _content 资产
                     * 
                     */
                    void SetContent(const std::vector<PublicIpDomainListKey>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取是否保留路径配置，1：保留，其他：不保留，默认不传为不保留
                     * @return RetainPath 是否保留路径配置，1：保留，其他：不保留，默认不传为不保留
                     * 
                     */
                    int64_t GetRetainPath() const;

                    /**
                     * 设置是否保留路径配置，1：保留，其他：不保留，默认不传为不保留
                     * @param _retainPath 是否保留路径配置，1：保留，其他：不保留，默认不传为不保留
                     * 
                     */
                    void SetRetainPath(const int64_t& _retainPath);

                    /**
                     * 判断参数 RetainPath 是否已赋值
                     * @return RetainPath 是否已赋值
                     * 
                     */
                    bool RetainPathHasBeenSet() const;

                    /**
                     * 获取以后是否忽略该资产，，1：忽略，其他：不忽略，默认不传为忽略
                     * @return IgnoreAsset 以后是否忽略该资产，，1：忽略，其他：不忽略，默认不传为忽略
                     * 
                     */
                    int64_t GetIgnoreAsset() const;

                    /**
                     * 设置以后是否忽略该资产，，1：忽略，其他：不忽略，默认不传为忽略
                     * @param _ignoreAsset 以后是否忽略该资产，，1：忽略，其他：不忽略，默认不传为忽略
                     * 
                     */
                    void SetIgnoreAsset(const int64_t& _ignoreAsset);

                    /**
                     * 判断参数 IgnoreAsset 是否已赋值
                     * @return IgnoreAsset 是否已赋值
                     * 
                     */
                    bool IgnoreAssetHasBeenSet() const;

                    /**
                     * 获取资产标签
                     * @return Tags 资产标签
                     * 
                     */
                    std::vector<AssetTag> GetTags() const;

                    /**
                     * 设置资产标签
                     * @param _tags 资产标签
                     * 
                     */
                    void SetTags(const std::vector<AssetTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取删除类型，取值： ALL， 删除全部，将直接忽略Content的内容；                                           其他值 ,非全部，则Centent必填，  默认为其他值。
                     * @return Type 删除类型，取值： ALL， 删除全部，将直接忽略Content的内容；                                           其他值 ,非全部，则Centent必填，  默认为其他值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置删除类型，取值： ALL， 删除全部，将直接忽略Content的内容；                                           其他值 ,非全部，则Centent必填，  默认为其他值。
                     * @param _type 删除类型，取值： ALL， 删除全部，将直接忽略Content的内容；                                           其他值 ,非全部，则Centent必填，  默认为其他值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 集团账号的成员id
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 资产
                     */
                    std::vector<PublicIpDomainListKey> m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 是否保留路径配置，1：保留，其他：不保留，默认不传为不保留
                     */
                    int64_t m_retainPath;
                    bool m_retainPathHasBeenSet;

                    /**
                     * 以后是否忽略该资产，，1：忽略，其他：不忽略，默认不传为忽略
                     */
                    int64_t m_ignoreAsset;
                    bool m_ignoreAssetHasBeenSet;

                    /**
                     * 资产标签
                     */
                    std::vector<AssetTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 删除类型，取值： ALL， 删除全部，将直接忽略Content的内容；                                           其他值 ,非全部，则Centent必填，  默认为其他值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEDOMAINANDIPREQUEST_H_
