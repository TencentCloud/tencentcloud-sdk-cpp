/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMASSETIDENTIFYINFOEXPORTJOBREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMASSETIDENTIFYINFOEXPORTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateDspmAssetIdentifyInfoExportJob请求参数结构体
                */
                class CreateDspmAssetIdentifyInfoExportJobRequest : public AbstractModel
                {
                public:
                    CreateDspmAssetIdentifyInfoExportJobRequest();
                    ~CreateDspmAssetIdentifyInfoExportJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资产实例id</p>
                     * @return AssetId <p>资产实例id</p>
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置<p>资产实例id</p>
                     * @param _assetId <p>资产实例id</p>
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
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
                     * 获取<p>过滤器</p>
                     * @return Filter <p>过滤器</p>
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置<p>过滤器</p>
                     * @param _filter <p>过滤器</p>
                     * 
                     */
                    void SetFilter(const Filter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * <p>资产实例id</p>
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>过滤器</p>
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEDSPMASSETIDENTIFYINFOEXPORTJOBREQUEST_H_
