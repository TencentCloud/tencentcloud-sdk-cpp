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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYPROMPTTEMPLATEREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYPROMPTTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/FieldMask.h>
#include <tencentcloud/adp/v20260520/model/PromptTemplateSpec.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ModifyPromptTemplate请求参数结构体
                */
                class ModifyPromptTemplateRequest : public AbstractModel
                {
                public:
                    ModifyPromptTemplateRequest();
                    ~ModifyPromptTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>空间ID</p>
                     * @return SpaceId <p>空间ID</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>空间ID</p>
                     * @param _spaceId <p>空间ID</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>提示词模板ID</p>
                     * @return PromptTemplateId <p>提示词模板ID</p>
                     * 
                     */
                    std::string GetPromptTemplateId() const;

                    /**
                     * 设置<p>提示词模板ID</p>
                     * @param _promptTemplateId <p>提示词模板ID</p>
                     * 
                     */
                    void SetPromptTemplateId(const std::string& _promptTemplateId);

                    /**
                     * 判断参数 PromptTemplateId 是否已赋值
                     * @return PromptTemplateId 是否已赋值
                     * 
                     */
                    bool PromptTemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>要更新的字段掩码</p>
                     * @return UpdateMask <p>要更新的字段掩码</p>
                     * 
                     */
                    FieldMask GetUpdateMask() const;

                    /**
                     * 设置<p>要更新的字段掩码</p>
                     * @param _updateMask <p>要更新的字段掩码</p>
                     * 
                     */
                    void SetUpdateMask(const FieldMask& _updateMask);

                    /**
                     * 判断参数 UpdateMask 是否已赋值
                     * @return UpdateMask 是否已赋值
                     * 
                     */
                    bool UpdateMaskHasBeenSet() const;

                    /**
                     * 获取<p>提示词规格</p>
                     * @return Spec <p>提示词规格</p>
                     * 
                     */
                    PromptTemplateSpec GetSpec() const;

                    /**
                     * 设置<p>提示词规格</p>
                     * @param _spec <p>提示词规格</p>
                     * 
                     */
                    void SetSpec(const PromptTemplateSpec& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                private:

                    /**
                     * <p>空间ID</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>提示词模板ID</p>
                     */
                    std::string m_promptTemplateId;
                    bool m_promptTemplateIdHasBeenSet;

                    /**
                     * <p>要更新的字段掩码</p>
                     */
                    FieldMask m_updateMask;
                    bool m_updateMaskHasBeenSet;

                    /**
                     * <p>提示词规格</p>
                     */
                    PromptTemplateSpec m_spec;
                    bool m_specHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYPROMPTTEMPLATEREQUEST_H_
