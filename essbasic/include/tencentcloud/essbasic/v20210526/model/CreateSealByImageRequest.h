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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATESEALBYIMAGEREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATESEALBYIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/UserInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * CreateSealByImage请求参数结构体
                */
                class CreateSealByImageRequest : public AbstractModel
                {
                public:
                    CreateSealByImageRequest();
                    ~CreateSealByImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @return Agent 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @param _agent 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取印章名称，最大长度不超过50字符
                     * @return SealName 印章名称，最大长度不超过50字符
                     * 
                     */
                    std::string GetSealName() const;

                    /**
                     * 设置印章名称，最大长度不超过50字符
                     * @param _sealName 印章名称，最大长度不超过50字符
                     * 
                     */
                    void SetSealName(const std::string& _sealName);

                    /**
                     * 判断参数 SealName 是否已赋值
                     * @return SealName 是否已赋值
                     * 
                     */
                    bool SealNameHasBeenSet() const;

                    /**
                     * 获取印章图片base64，大小不超过10M（原始图片不超过7.6M）
                     * @return SealImage 印章图片base64，大小不超过10M（原始图片不超过7.6M）
                     * 
                     */
                    std::string GetSealImage() const;

                    /**
                     * 设置印章图片base64，大小不超过10M（原始图片不超过7.6M）
                     * @param _sealImage 印章图片base64，大小不超过10M（原始图片不超过7.6M）
                     * 
                     */
                    void SetSealImage(const std::string& _sealImage);

                    /**
                     * 判断参数 SealImage 是否已赋值
                     * @return SealImage 是否已赋值
                     * 
                     */
                    bool SealImageHasBeenSet() const;

                    /**
                     * 获取操作者的信息
                     * @return Operator 操作者的信息
                     * @deprecated
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作者的信息
                     * @param _operator 操作者的信息
                     * @deprecated
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * @deprecated
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取本接口支持上传图片印章及系统直接生成印章； 如果要使用系统生成印章，此值传：SealGenerateSourceSystem； 如果要使用图片上传，此字段置空并且传字段 SealImage
                     * @return GenerateSource 本接口支持上传图片印章及系统直接生成印章； 如果要使用系统生成印章，此值传：SealGenerateSourceSystem； 如果要使用图片上传，此字段置空并且传字段 SealImage
                     * 
                     */
                    std::string GetGenerateSource() const;

                    /**
                     * 设置本接口支持上传图片印章及系统直接生成印章； 如果要使用系统生成印章，此值传：SealGenerateSourceSystem； 如果要使用图片上传，此字段置空并且传字段 SealImage
                     * @param _generateSource 本接口支持上传图片印章及系统直接生成印章； 如果要使用系统生成印章，此值传：SealGenerateSourceSystem； 如果要使用图片上传，此字段置空并且传字段 SealImage
                     * 
                     */
                    void SetGenerateSource(const std::string& _generateSource);

                    /**
                     * 判断参数 GenerateSource 是否已赋值
                     * @return GenerateSource 是否已赋值
                     * 
                     */
                    bool GenerateSourceHasBeenSet() const;

                    /**
                     * 获取电子印章类型：
<ul><li>OFFICIAL-公章</li>
<li>CONTRACT-合同专用章;</li>
<li>FINANCE-合财务专用章;</li>
<li>PERSONNEL-人事专用章
</li>
<li>默认：OFFICIAL</li>
</ul>
                     * @return SealType 电子印章类型：
<ul><li>OFFICIAL-公章</li>
<li>CONTRACT-合同专用章;</li>
<li>FINANCE-合财务专用章;</li>
<li>PERSONNEL-人事专用章
</li>
<li>默认：OFFICIAL</li>
</ul>
                     * 
                     */
                    std::string GetSealType() const;

                    /**
                     * 设置电子印章类型：
<ul><li>OFFICIAL-公章</li>
<li>CONTRACT-合同专用章;</li>
<li>FINANCE-合财务专用章;</li>
<li>PERSONNEL-人事专用章
</li>
<li>默认：OFFICIAL</li>
</ul>
                     * @param _sealType 电子印章类型：
<ul><li>OFFICIAL-公章</li>
<li>CONTRACT-合同专用章;</li>
<li>FINANCE-合财务专用章;</li>
<li>PERSONNEL-人事专用章
</li>
<li>默认：OFFICIAL</li>
</ul>
                     * 
                     */
                    void SetSealType(const std::string& _sealType);

                    /**
                     * 判断参数 SealType 是否已赋值
                     * @return SealType 是否已赋值
                     * 
                     */
                    bool SealTypeHasBeenSet() const;

                    /**
                     * 获取企业印章横向文字，最多可填15个汉字（若超过印章最大宽度，优先压缩字间距，其次缩小字号
                     * @return SealHorizontalText 企业印章横向文字，最多可填15个汉字（若超过印章最大宽度，优先压缩字间距，其次缩小字号
                     * 
                     */
                    std::string GetSealHorizontalText() const;

                    /**
                     * 设置企业印章横向文字，最多可填15个汉字（若超过印章最大宽度，优先压缩字间距，其次缩小字号
                     * @param _sealHorizontalText 企业印章横向文字，最多可填15个汉字（若超过印章最大宽度，优先压缩字间距，其次缩小字号
                     * 
                     */
                    void SetSealHorizontalText(const std::string& _sealHorizontalText);

                    /**
                     * 判断参数 SealHorizontalText 是否已赋值
                     * @return SealHorizontalText 是否已赋值
                     * 
                     */
                    bool SealHorizontalTextHasBeenSet() const;

                    /**
                     * 获取印章样式:

<ul><li>cycle:圆形印章</li>
<li>ellipse:椭圆印章</li>
<li> 注：默认圆形印章</li></ul>
                     * @return SealStyle 印章样式:

<ul><li>cycle:圆形印章</li>
<li>ellipse:椭圆印章</li>
<li> 注：默认圆形印章</li></ul>
                     * 
                     */
                    std::string GetSealStyle() const;

                    /**
                     * 设置印章样式:

<ul><li>cycle:圆形印章</li>
<li>ellipse:椭圆印章</li>
<li> 注：默认圆形印章</li></ul>
                     * @param _sealStyle 印章样式:

<ul><li>cycle:圆形印章</li>
<li>ellipse:椭圆印章</li>
<li> 注：默认圆形印章</li></ul>
                     * 
                     */
                    void SetSealStyle(const std::string& _sealStyle);

                    /**
                     * 判断参数 SealStyle 是否已赋值
                     * @return SealStyle 是否已赋值
                     * 
                     */
                    bool SealStyleHasBeenSet() const;

                    /**
                     * 获取印章尺寸取值描述：<ul><li> 42_42 圆形企业公章直径42mm</li>
<li> 40_40 圆形企业印章直径40mm</li>
<li> 45_30 椭圆形印章45mm x 30mm</li>
</ul>
                     * @return SealSize 印章尺寸取值描述：<ul><li> 42_42 圆形企业公章直径42mm</li>
<li> 40_40 圆形企业印章直径40mm</li>
<li> 45_30 椭圆形印章45mm x 30mm</li>
</ul>
                     * 
                     */
                    std::string GetSealSize() const;

                    /**
                     * 设置印章尺寸取值描述：<ul><li> 42_42 圆形企业公章直径42mm</li>
<li> 40_40 圆形企业印章直径40mm</li>
<li> 45_30 椭圆形印章45mm x 30mm</li>
</ul>
                     * @param _sealSize 印章尺寸取值描述：<ul><li> 42_42 圆形企业公章直径42mm</li>
<li> 40_40 圆形企业印章直径40mm</li>
<li> 45_30 椭圆形印章45mm x 30mm</li>
</ul>
                     * 
                     */
                    void SetSealSize(const std::string& _sealSize);

                    /**
                     * 判断参数 SealSize 是否已赋值
                     * @return SealSize 是否已赋值
                     * 
                     */
                    bool SealSizeHasBeenSet() const;

                private:

                    /**
                     * 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 印章名称，最大长度不超过50字符
                     */
                    std::string m_sealName;
                    bool m_sealNameHasBeenSet;

                    /**
                     * 印章图片base64，大小不超过10M（原始图片不超过7.6M）
                     */
                    std::string m_sealImage;
                    bool m_sealImageHasBeenSet;

                    /**
                     * 操作者的信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 本接口支持上传图片印章及系统直接生成印章； 如果要使用系统生成印章，此值传：SealGenerateSourceSystem； 如果要使用图片上传，此字段置空并且传字段 SealImage
                     */
                    std::string m_generateSource;
                    bool m_generateSourceHasBeenSet;

                    /**
                     * 电子印章类型：
<ul><li>OFFICIAL-公章</li>
<li>CONTRACT-合同专用章;</li>
<li>FINANCE-合财务专用章;</li>
<li>PERSONNEL-人事专用章
</li>
<li>默认：OFFICIAL</li>
</ul>
                     */
                    std::string m_sealType;
                    bool m_sealTypeHasBeenSet;

                    /**
                     * 企业印章横向文字，最多可填15个汉字（若超过印章最大宽度，优先压缩字间距，其次缩小字号
                     */
                    std::string m_sealHorizontalText;
                    bool m_sealHorizontalTextHasBeenSet;

                    /**
                     * 印章样式:

<ul><li>cycle:圆形印章</li>
<li>ellipse:椭圆印章</li>
<li> 注：默认圆形印章</li></ul>
                     */
                    std::string m_sealStyle;
                    bool m_sealStyleHasBeenSet;

                    /**
                     * 印章尺寸取值描述：<ul><li> 42_42 圆形企业公章直径42mm</li>
<li> 40_40 圆形企业印章直径40mm</li>
<li> 45_30 椭圆形印章45mm x 30mm</li>
</ul>
                     */
                    std::string m_sealSize;
                    bool m_sealSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATESEALBYIMAGEREQUEST_H_
