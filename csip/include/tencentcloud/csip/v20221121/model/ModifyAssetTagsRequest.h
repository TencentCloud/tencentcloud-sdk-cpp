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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYASSETTAGSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYASSETTAGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyAssetTags请求参数结构体
                */
                class ModifyAssetTagsRequest : public AbstractModel
                {
                public:
                    ModifyAssetTagsRequest();
                    ~ModifyAssetTagsRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取资产RID列表
                     * @return AssetRIDs 资产RID列表
                     * 
                     */
                    std::vector<std::string> GetAssetRIDs() const;

                    /**
                     * 设置资产RID列表
                     * @param _assetRIDs 资产RID列表
                     * 
                     */
                    void SetAssetRIDs(const std::vector<std::string>& _assetRIDs);

                    /**
                     * 判断参数 AssetRIDs 是否已赋值
                     * @return AssetRIDs 是否已赋值
                     * 
                     */
                    bool AssetRIDsHasBeenSet() const;

                    /**
                     * 获取标签ID列表
                     * @return TagIDs 标签ID列表
                     * 
                     */
                    std::vector<std::string> GetTagIDs() const;

                    /**
                     * 设置标签ID列表
                     * @param _tagIDs 标签ID列表
                     * 
                     */
                    void SetTagIDs(const std::vector<std::string>& _tagIDs);

                    /**
                     * 判断参数 TagIDs 是否已赋值
                     * @return TagIDs 是否已赋值
                     * 
                     */
                    bool TagIDsHasBeenSet() const;

                    /**
                     * 获取操作类型
                     * @return OperationType 操作类型
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置操作类型
                     * @param _operationType 操作类型
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                private:

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 资产RID列表
                     */
                    std::vector<std::string> m_assetRIDs;
                    bool m_assetRIDsHasBeenSet;

                    /**
                     * 标签ID列表
                     */
                    std::vector<std::string> m_tagIDs;
                    bool m_tagIDsHasBeenSet;

                    /**
                     * 操作类型
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYASSETTAGSREQUEST_H_
