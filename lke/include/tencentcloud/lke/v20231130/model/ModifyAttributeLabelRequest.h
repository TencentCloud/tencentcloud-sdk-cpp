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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYATTRIBUTELABELREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYATTRIBUTELABELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AttributeLabel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ModifyAttributeLabel请求参数结构体
                */
                class ModifyAttributeLabelRequest : public AbstractModel
                {
                public:
                    ModifyAttributeLabelRequest();
                    ~ModifyAttributeLabelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return BotBizId 应用ID
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置应用ID
                     * @param _botBizId 应用ID
                     * 
                     */
                    void SetBotBizId(const std::string& _botBizId);

                    /**
                     * 判断参数 BotBizId 是否已赋值
                     * @return BotBizId 是否已赋值
                     * 
                     */
                    bool BotBizIdHasBeenSet() const;

                    /**
                     * 获取标签ID
                     * @return AttributeBizId 标签ID
                     * 
                     */
                    std::string GetAttributeBizId() const;

                    /**
                     * 设置标签ID
                     * @param _attributeBizId 标签ID
                     * 
                     */
                    void SetAttributeBizId(const std::string& _attributeBizId);

                    /**
                     * 判断参数 AttributeBizId 是否已赋值
                     * @return AttributeBizId 是否已赋值
                     * 
                     */
                    bool AttributeBizIdHasBeenSet() const;

                    /**
                     * 获取标签名称
                     * @return AttrName 标签名称
                     * 
                     */
                    std::string GetAttrName() const;

                    /**
                     * 设置标签名称
                     * @param _attrName 标签名称
                     * 
                     */
                    void SetAttrName(const std::string& _attrName);

                    /**
                     * 判断参数 AttrName 是否已赋值
                     * @return AttrName 是否已赋值
                     * 
                     */
                    bool AttrNameHasBeenSet() const;

                    /**
                     * 获取标签标识 （已作废）
                     * @return AttrKey 标签标识 （已作废）
                     * 
                     */
                    std::string GetAttrKey() const;

                    /**
                     * 设置标签标识 （已作废）
                     * @param _attrKey 标签标识 （已作废）
                     * 
                     */
                    void SetAttrKey(const std::string& _attrKey);

                    /**
                     * 判断参数 AttrKey 是否已赋值
                     * @return AttrKey 是否已赋值
                     * 
                     */
                    bool AttrKeyHasBeenSet() const;

                    /**
                     * 获取登录用户主账号(集成商模式必填)
                     * @return LoginUin 登录用户主账号(集成商模式必填)
                     * 
                     */
                    std::string GetLoginUin() const;

                    /**
                     * 设置登录用户主账号(集成商模式必填)
                     * @param _loginUin 登录用户主账号(集成商模式必填)
                     * 
                     */
                    void SetLoginUin(const std::string& _loginUin);

                    /**
                     * 判断参数 LoginUin 是否已赋值
                     * @return LoginUin 是否已赋值
                     * 
                     */
                    bool LoginUinHasBeenSet() const;

                    /**
                     * 获取登录用户子账号(集成商模式必填)
                     * @return LoginSubAccountUin 登录用户子账号(集成商模式必填)
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置登录用户子账号(集成商模式必填)
                     * @param _loginSubAccountUin 登录用户子账号(集成商模式必填)
                     * 
                     */
                    void SetLoginSubAccountUin(const std::string& _loginSubAccountUin);

                    /**
                     * 判断参数 LoginSubAccountUin 是否已赋值
                     * @return LoginSubAccountUin 是否已赋值
                     * 
                     */
                    bool LoginSubAccountUinHasBeenSet() const;

                    /**
                     * 获取删除的标签值
                     * @return DeleteLabelBizIds 删除的标签值
                     * 
                     */
                    std::vector<std::string> GetDeleteLabelBizIds() const;

                    /**
                     * 设置删除的标签值
                     * @param _deleteLabelBizIds 删除的标签值
                     * 
                     */
                    void SetDeleteLabelBizIds(const std::vector<std::string>& _deleteLabelBizIds);

                    /**
                     * 判断参数 DeleteLabelBizIds 是否已赋值
                     * @return DeleteLabelBizIds 是否已赋值
                     * 
                     */
                    bool DeleteLabelBizIdsHasBeenSet() const;

                    /**
                     * 获取新增或编辑的标签
                     * @return Labels 新增或编辑的标签
                     * 
                     */
                    std::vector<AttributeLabel> GetLabels() const;

                    /**
                     * 设置新增或编辑的标签
                     * @param _labels 新增或编辑的标签
                     * 
                     */
                    void SetLabels(const std::vector<AttributeLabel>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * 标签ID
                     */
                    std::string m_attributeBizId;
                    bool m_attributeBizIdHasBeenSet;

                    /**
                     * 标签名称
                     */
                    std::string m_attrName;
                    bool m_attrNameHasBeenSet;

                    /**
                     * 标签标识 （已作废）
                     */
                    std::string m_attrKey;
                    bool m_attrKeyHasBeenSet;

                    /**
                     * 登录用户主账号(集成商模式必填)
                     */
                    std::string m_loginUin;
                    bool m_loginUinHasBeenSet;

                    /**
                     * 登录用户子账号(集成商模式必填)
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                    /**
                     * 删除的标签值
                     */
                    std::vector<std::string> m_deleteLabelBizIds;
                    bool m_deleteLabelBizIdsHasBeenSet;

                    /**
                     * 新增或编辑的标签
                     */
                    std::vector<AttributeLabel> m_labels;
                    bool m_labelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYATTRIBUTELABELREQUEST_H_
