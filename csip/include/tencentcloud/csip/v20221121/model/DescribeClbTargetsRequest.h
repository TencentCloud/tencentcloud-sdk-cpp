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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLBTARGETSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLBTARGETSREQUEST_H_

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
                * DescribeClbTargets请求参数结构体
                */
                class DescribeClbTargetsRequest : public AbstractModel
                {
                public:
                    DescribeClbTargetsRequest();
                    ~DescribeClbTargetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资产ID</p>
                     * @return AssetID <p>资产ID</p>
                     * 
                     */
                    std::string GetAssetID() const;

                    /**
                     * 设置<p>资产ID</p>
                     * @param _assetID <p>资产ID</p>
                     * 
                     */
                    void SetAssetID(const std::string& _assetID);

                    /**
                     * 判断参数 AssetID 是否已赋值
                     * @return AssetID 是否已赋值
                     * 
                     */
                    bool AssetIDHasBeenSet() const;

                    /**
                     * 获取<p>目标类型</p><p>枚举值：</p><ul><li>listener： 监听器</li><li>rule： 七层规则</li></ul>
                     * @return TargetType <p>目标类型</p><p>枚举值：</p><ul><li>listener： 监听器</li><li>rule： 七层规则</li></ul>
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置<p>目标类型</p><p>枚举值：</p><ul><li>listener： 监听器</li><li>rule： 七层规则</li></ul>
                     * @param _targetType <p>目标类型</p><p>枚举值：</p><ul><li>listener： 监听器</li><li>rule： 七层规则</li></ul>
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

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

                private:

                    /**
                     * <p>资产ID</p>
                     */
                    std::string m_assetID;
                    bool m_assetIDHasBeenSet;

                    /**
                     * <p>目标类型</p><p>枚举值：</p><ul><li>listener： 监听器</li><li>rule： 七层规则</li></ul>
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLBTARGETSREQUEST_H_
