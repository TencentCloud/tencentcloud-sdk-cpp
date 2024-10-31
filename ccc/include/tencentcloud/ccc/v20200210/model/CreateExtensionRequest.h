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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATEEXTENSIONREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATEEXTENSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * CreateExtension请求参数结构体
                */
                class CreateExtensionRequest : public AbstractModel
                {
                public:
                    CreateExtensionRequest();
                    ~CreateExtensionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @return SdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @param _sdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取分机号
                     * @return ExtensionId 分机号
                     * 
                     */
                    std::string GetExtensionId() const;

                    /**
                     * 设置分机号
                     * @param _extensionId 分机号
                     * 
                     */
                    void SetExtensionId(const std::string& _extensionId);

                    /**
                     * 判断参数 ExtensionId 是否已赋值
                     * @return ExtensionId 是否已赋值
                     * 
                     */
                    bool ExtensionIdHasBeenSet() const;

                    /**
                     * 获取分机名称
                     * @return ExtensionName 分机名称
                     * 
                     */
                    std::string GetExtensionName() const;

                    /**
                     * 设置分机名称
                     * @param _extensionName 分机名称
                     * 
                     */
                    void SetExtensionName(const std::string& _extensionName);

                    /**
                     * 判断参数 ExtensionName 是否已赋值
                     * @return ExtensionName 是否已赋值
                     * 
                     */
                    bool ExtensionNameHasBeenSet() const;

                    /**
                     * 获取绑定的技能组列表
                     * @return SkillGroupIds 绑定的技能组列表
                     * 
                     */
                    std::vector<uint64_t> GetSkillGroupIds() const;

                    /**
                     * 设置绑定的技能组列表
                     * @param _skillGroupIds 绑定的技能组列表
                     * 
                     */
                    void SetSkillGroupIds(const std::vector<uint64_t>& _skillGroupIds);

                    /**
                     * 判断参数 SkillGroupIds 是否已赋值
                     * @return SkillGroupIds 是否已赋值
                     * 
                     */
                    bool SkillGroupIdsHasBeenSet() const;

                    /**
                     * 获取绑定的坐席邮箱
                     * @return Relation 绑定的坐席邮箱
                     * 
                     */
                    std::string GetRelation() const;

                    /**
                     * 设置绑定的坐席邮箱
                     * @param _relation 绑定的坐席邮箱
                     * 
                     */
                    void SetRelation(const std::string& _relation);

                    /**
                     * 判断参数 Relation 是否已赋值
                     * @return Relation 是否已赋值
                     * 
                     */
                    bool RelationHasBeenSet() const;

                private:

                    /**
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 分机号
                     */
                    std::string m_extensionId;
                    bool m_extensionIdHasBeenSet;

                    /**
                     * 分机名称
                     */
                    std::string m_extensionName;
                    bool m_extensionNameHasBeenSet;

                    /**
                     * 绑定的技能组列表
                     */
                    std::vector<uint64_t> m_skillGroupIds;
                    bool m_skillGroupIdsHasBeenSet;

                    /**
                     * 绑定的坐席邮箱
                     */
                    std::string m_relation;
                    bool m_relationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATEEXTENSIONREQUEST_H_
