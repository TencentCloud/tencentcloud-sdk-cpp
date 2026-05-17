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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATESEALBYIMAGEREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATESEALBYIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/UserInfo.h>
#include <tencentcloud/essbasic/v20210526/model/Option.h>


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
                     * 获取<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     * @return Agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     * @param _agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
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
                     * 获取<p>电子印章名字，1-50个中文字符<br>注:<code>同一企业下电子印章名字不能相同</code></p>
                     * @return SealName <p>电子印章名字，1-50个中文字符<br>注:<code>同一企业下电子印章名字不能相同</code></p>
                     * 
                     */
                    std::string GetSealName() const;

                    /**
                     * 设置<p>电子印章名字，1-50个中文字符<br>注:<code>同一企业下电子印章名字不能相同</code></p>
                     * @param _sealName <p>电子印章名字，1-50个中文字符<br>注:<code>同一企业下电子印章名字不能相同</code></p>
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
                     * 获取<p>电子印章图片base64编码，大小不超过10M（原始图片不超过5M），只支持PNG或JPG图片格式</p><p>注: <code>通过图片创建的电子印章，需电子签平台人工审核</code></p>
                     * @return SealImage <p>电子印章图片base64编码，大小不超过10M（原始图片不超过5M），只支持PNG或JPG图片格式</p><p>注: <code>通过图片创建的电子印章，需电子签平台人工审核</code></p>
                     * 
                     */
                    std::string GetSealImage() const;

                    /**
                     * 设置<p>电子印章图片base64编码，大小不超过10M（原始图片不超过5M），只支持PNG或JPG图片格式</p><p>注: <code>通过图片创建的电子印章，需电子签平台人工审核</code></p>
                     * @param _sealImage <p>电子印章图片base64编码，大小不超过10M（原始图片不超过5M），只支持PNG或JPG图片格式</p><p>注: <code>通过图片创建的电子印章，需电子签平台人工审核</code></p>
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
                     * 获取<p>操作者的信息</p>
                     * @return Operator <p>操作者的信息</p>
                     * @deprecated
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>操作者的信息</p>
                     * @param _operator <p>操作者的信息</p>
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
                     * 获取<p>电子印章生成方式</p><ul><li><strong>空值</strong>:(默认)使用上传的图片生成印章, 此时需要上传SealImage图片</li><li><strong>SealGenerateSourceSystem</strong>: 系统生成印章, 无需上传SealImage图片</li></ul>
                     * @return GenerateSource <p>电子印章生成方式</p><ul><li><strong>空值</strong>:(默认)使用上传的图片生成印章, 此时需要上传SealImage图片</li><li><strong>SealGenerateSourceSystem</strong>: 系统生成印章, 无需上传SealImage图片</li></ul>
                     * 
                     */
                    std::string GetGenerateSource() const;

                    /**
                     * 设置<p>电子印章生成方式</p><ul><li><strong>空值</strong>:(默认)使用上传的图片生成印章, 此时需要上传SealImage图片</li><li><strong>SealGenerateSourceSystem</strong>: 系统生成印章, 无需上传SealImage图片</li></ul>
                     * @param _generateSource <p>电子印章生成方式</p><ul><li><strong>空值</strong>:(默认)使用上传的图片生成印章, 此时需要上传SealImage图片</li><li><strong>SealGenerateSourceSystem</strong>: 系统生成印章, 无需上传SealImage图片</li></ul>
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
                     * 获取<p>电子印章类型 , 可选类型如下: <ul><li><strong>OFFICIAL</strong>: (默认)公章</li><li><strong>CONTRACT</strong>: 合同专用章;</li><li><strong>FINANCE</strong>: 财务专用章;</li><li><strong>PERSONNEL</strong>: 人事专用章</li><li><strong>INVOICE</strong>: 发票专用章</li><li><strong>OTHER</strong>: 其他</li></ul>注: 同企业下只能有<font color="red">一个</font>公章, 重复创建会报错</p>
                     * @return SealType <p>电子印章类型 , 可选类型如下: <ul><li><strong>OFFICIAL</strong>: (默认)公章</li><li><strong>CONTRACT</strong>: 合同专用章;</li><li><strong>FINANCE</strong>: 财务专用章;</li><li><strong>PERSONNEL</strong>: 人事专用章</li><li><strong>INVOICE</strong>: 发票专用章</li><li><strong>OTHER</strong>: 其他</li></ul>注: 同企业下只能有<font color="red">一个</font>公章, 重复创建会报错</p>
                     * 
                     */
                    std::string GetSealType() const;

                    /**
                     * 设置<p>电子印章类型 , 可选类型如下: <ul><li><strong>OFFICIAL</strong>: (默认)公章</li><li><strong>CONTRACT</strong>: 合同专用章;</li><li><strong>FINANCE</strong>: 财务专用章;</li><li><strong>PERSONNEL</strong>: 人事专用章</li><li><strong>INVOICE</strong>: 发票专用章</li><li><strong>OTHER</strong>: 其他</li></ul>注: 同企业下只能有<font color="red">一个</font>公章, 重复创建会报错</p>
                     * @param _sealType <p>电子印章类型 , 可选类型如下: <ul><li><strong>OFFICIAL</strong>: (默认)公章</li><li><strong>CONTRACT</strong>: 合同专用章;</li><li><strong>FINANCE</strong>: 财务专用章;</li><li><strong>PERSONNEL</strong>: 人事专用章</li><li><strong>INVOICE</strong>: 发票专用章</li><li><strong>OTHER</strong>: 其他</li></ul>注: 同企业下只能有<font color="red">一个</font>公章, 重复创建会报错</p>
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
                     * 获取<p>企业印章横向文字，最多可填15个汉字  (若超过印章最大宽度，优先压缩字间距，其次缩小字号)<br>横向文字的位置如下图中的&quot;印章横向文字在这里&quot;</p><p><img src="https://dyn.ess.tencent.cn/guide/capi/CreateSealByImage2.png" alt="image"></p>
                     * @return SealHorizontalText <p>企业印章横向文字，最多可填15个汉字  (若超过印章最大宽度，优先压缩字间距，其次缩小字号)<br>横向文字的位置如下图中的&quot;印章横向文字在这里&quot;</p><p><img src="https://dyn.ess.tencent.cn/guide/capi/CreateSealByImage2.png" alt="image"></p>
                     * 
                     */
                    std::string GetSealHorizontalText() const;

                    /**
                     * 设置<p>企业印章横向文字，最多可填15个汉字  (若超过印章最大宽度，优先压缩字间距，其次缩小字号)<br>横向文字的位置如下图中的&quot;印章横向文字在这里&quot;</p><p><img src="https://dyn.ess.tencent.cn/guide/capi/CreateSealByImage2.png" alt="image"></p>
                     * @param _sealHorizontalText <p>企业印章横向文字，最多可填15个汉字  (若超过印章最大宽度，优先压缩字间距，其次缩小字号)<br>横向文字的位置如下图中的&quot;印章横向文字在这里&quot;</p><p><img src="https://dyn.ess.tencent.cn/guide/capi/CreateSealByImage2.png" alt="image"></p>
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
                     * 获取<p>印章样式, 可以选择的样式如下: </p><ul><li>**circle**:(默认)圆形印章</li><li>**ellipse**:椭圆印章</li></ul>
                     * @return SealStyle <p>印章样式, 可以选择的样式如下: </p><ul><li>**circle**:(默认)圆形印章</li><li>**ellipse**:椭圆印章</li></ul>
                     * 
                     */
                    std::string GetSealStyle() const;

                    /**
                     * 设置<p>印章样式, 可以选择的样式如下: </p><ul><li>**circle**:(默认)圆形印章</li><li>**ellipse**:椭圆印章</li></ul>
                     * @param _sealStyle <p>印章样式, 可以选择的样式如下: </p><ul><li>**circle**:(默认)圆形印章</li><li>**ellipse**:椭圆印章</li></ul>
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
                     * 获取<p>印章尺寸取值描述, 可以选择的尺寸如下: <ul><li> <strong>38_38</strong>: 圆形企业公章直径38mm, 当SealStyle是圆形的时候才有效</li> <li> <strong>40_40</strong>: 圆形企业公章直径40mm, 当SealStyle是圆形的时候才有效</li> <li> <strong>42_42</strong>（默认）: 圆形企业公章直径42mm, 当SealStyle是圆形的时候才有效</li> <li> <strong>45_45</strong>: 圆形企业印章直径45mm, 当SealStyle是圆形的时候才有效</li> <li> <strong>50_50</strong>: 圆形企业印章直径50mm, 当SealStyle是圆形的时候才有效</li> <li> <strong>58_58</strong>: 圆形企业印章直径58mm, 当SealStyle是圆形的时候才有效</li>  <li> <strong>40_30</strong>: 椭圆形印章40mm x 30mm, 当SealStyle是椭圆的时候才有效</li> <li> <strong>45_30</strong>: 椭圆形印章45mm x 30mm, 当SealStyle是椭圆的时候才有效</li> </ul></p>
                     * @return SealSize <p>印章尺寸取值描述, 可以选择的尺寸如下: <ul><li> <strong>38_38</strong>: 圆形企业公章直径38mm, 当SealStyle是圆形的时候才有效</li> <li> <strong>40_40</strong>: 圆形企业公章直径40mm, 当SealStyle是圆形的时候才有效</li> <li> <strong>42_42</strong>（默认）: 圆形企业公章直径42mm, 当SealStyle是圆形的时候才有效</li> <li> <strong>45_45</strong>: 圆形企业印章直径45mm, 当SealStyle是圆形的时候才有效</li> <li> <strong>50_50</strong>: 圆形企业印章直径50mm, 当SealStyle是圆形的时候才有效</li> <li> <strong>58_58</strong>: 圆形企业印章直径58mm, 当SealStyle是圆形的时候才有效</li>  <li> <strong>40_30</strong>: 椭圆形印章40mm x 30mm, 当SealStyle是椭圆的时候才有效</li> <li> <strong>45_30</strong>: 椭圆形印章45mm x 30mm, 当SealStyle是椭圆的时候才有效</li> </ul></p>
                     * 
                     */
                    std::string GetSealSize() const;

                    /**
                     * 设置<p>印章尺寸取值描述, 可以选择的尺寸如下: <ul><li> <strong>38_38</strong>: 圆形企业公章直径38mm, 当SealStyle是圆形的时候才有效</li> <li> <strong>40_40</strong>: 圆形企业公章直径40mm, 当SealStyle是圆形的时候才有效</li> <li> <strong>42_42</strong>（默认）: 圆形企业公章直径42mm, 当SealStyle是圆形的时候才有效</li> <li> <strong>45_45</strong>: 圆形企业印章直径45mm, 当SealStyle是圆形的时候才有效</li> <li> <strong>50_50</strong>: 圆形企业印章直径50mm, 当SealStyle是圆形的时候才有效</li> <li> <strong>58_58</strong>: 圆形企业印章直径58mm, 当SealStyle是圆形的时候才有效</li>  <li> <strong>40_30</strong>: 椭圆形印章40mm x 30mm, 当SealStyle是椭圆的时候才有效</li> <li> <strong>45_30</strong>: 椭圆形印章45mm x 30mm, 当SealStyle是椭圆的时候才有效</li> </ul></p>
                     * @param _sealSize <p>印章尺寸取值描述, 可以选择的尺寸如下: <ul><li> <strong>38_38</strong>: 圆形企业公章直径38mm, 当SealStyle是圆形的时候才有效</li> <li> <strong>40_40</strong>: 圆形企业公章直径40mm, 当SealStyle是圆形的时候才有效</li> <li> <strong>42_42</strong>（默认）: 圆形企业公章直径42mm, 当SealStyle是圆形的时候才有效</li> <li> <strong>45_45</strong>: 圆形企业印章直径45mm, 当SealStyle是圆形的时候才有效</li> <li> <strong>50_50</strong>: 圆形企业印章直径50mm, 当SealStyle是圆形的时候才有效</li> <li> <strong>58_58</strong>: 圆形企业印章直径58mm, 当SealStyle是圆形的时候才有效</li>  <li> <strong>40_30</strong>: 椭圆形印章40mm x 30mm, 当SealStyle是椭圆的时候才有效</li> <li> <strong>45_30</strong>: 椭圆形印章45mm x 30mm, 当SealStyle是椭圆的时候才有效</li> </ul></p>
                     * 
                     */
                    void SetSealSize(const std::string& _sealSize);

                    /**
                     * 判断参数 SealSize 是否已赋值
                     * @return SealSize 是否已赋值
                     * 
                     */
                    bool SealSizeHasBeenSet() const;

                    /**
                     * 获取<p>企业税号</p><p>注:</p><ul><li>1.印章类型SealType是INVOICE类型时，此参数才会生效</li><li>2.印章类型SealType是INVOICE类型，且该字段没有传入值或传入空时，会取该企业对应的统一社会信用代码作为默认的企业税号（<font color="red">如果是通过授权书授权方式认证的企业，此参数必传不能为空</font>）</li></ul>
                     * @return TaxIdentifyCode <p>企业税号</p><p>注:</p><ul><li>1.印章类型SealType是INVOICE类型时，此参数才会生效</li><li>2.印章类型SealType是INVOICE类型，且该字段没有传入值或传入空时，会取该企业对应的统一社会信用代码作为默认的企业税号（<font color="red">如果是通过授权书授权方式认证的企业，此参数必传不能为空</font>）</li></ul>
                     * 
                     */
                    std::string GetTaxIdentifyCode() const;

                    /**
                     * 设置<p>企业税号</p><p>注:</p><ul><li>1.印章类型SealType是INVOICE类型时，此参数才会生效</li><li>2.印章类型SealType是INVOICE类型，且该字段没有传入值或传入空时，会取该企业对应的统一社会信用代码作为默认的企业税号（<font color="red">如果是通过授权书授权方式认证的企业，此参数必传不能为空</font>）</li></ul>
                     * @param _taxIdentifyCode <p>企业税号</p><p>注:</p><ul><li>1.印章类型SealType是INVOICE类型时，此参数才会生效</li><li>2.印章类型SealType是INVOICE类型，且该字段没有传入值或传入空时，会取该企业对应的统一社会信用代码作为默认的企业税号（<font color="red">如果是通过授权书授权方式认证的企业，此参数必传不能为空</font>）</li></ul>
                     * 
                     */
                    void SetTaxIdentifyCode(const std::string& _taxIdentifyCode);

                    /**
                     * 判断参数 TaxIdentifyCode 是否已赋值
                     * @return TaxIdentifyCode 是否已赋值
                     * 
                     */
                    bool TaxIdentifyCodeHasBeenSet() const;

                    /**
                     * 获取<p>印章描述内容</p>
                     * @return SealDescription <p>印章描述内容</p>
                     * 
                     */
                    std::string GetSealDescription() const;

                    /**
                     * 设置<p>印章描述内容</p>
                     * @param _sealDescription <p>印章描述内容</p>
                     * 
                     */
                    void SetSealDescription(const std::string& _sealDescription);

                    /**
                     * 判断参数 SealDescription 是否已赋值
                     * @return SealDescription 是否已赋值
                     * 
                     */
                    bool SealDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>个性化配置字段，默认不传。</p>
                     * @return Options <p>个性化配置字段，默认不传。</p>
                     * 
                     */
                    std::vector<Option> GetOptions() const;

                    /**
                     * 设置<p>个性化配置字段，默认不传。</p>
                     * @param _options <p>个性化配置字段，默认不传。</p>
                     * 
                     */
                    void SetOptions(const std::vector<Option>& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     * 
                     */
                    bool OptionsHasBeenSet() const;

                private:

                    /**
                     * <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>电子印章名字，1-50个中文字符<br>注:<code>同一企业下电子印章名字不能相同</code></p>
                     */
                    std::string m_sealName;
                    bool m_sealNameHasBeenSet;

                    /**
                     * <p>电子印章图片base64编码，大小不超过10M（原始图片不超过5M），只支持PNG或JPG图片格式</p><p>注: <code>通过图片创建的电子印章，需电子签平台人工审核</code></p>
                     */
                    std::string m_sealImage;
                    bool m_sealImageHasBeenSet;

                    /**
                     * <p>操作者的信息</p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>电子印章生成方式</p><ul><li><strong>空值</strong>:(默认)使用上传的图片生成印章, 此时需要上传SealImage图片</li><li><strong>SealGenerateSourceSystem</strong>: 系统生成印章, 无需上传SealImage图片</li></ul>
                     */
                    std::string m_generateSource;
                    bool m_generateSourceHasBeenSet;

                    /**
                     * <p>电子印章类型 , 可选类型如下: <ul><li><strong>OFFICIAL</strong>: (默认)公章</li><li><strong>CONTRACT</strong>: 合同专用章;</li><li><strong>FINANCE</strong>: 财务专用章;</li><li><strong>PERSONNEL</strong>: 人事专用章</li><li><strong>INVOICE</strong>: 发票专用章</li><li><strong>OTHER</strong>: 其他</li></ul>注: 同企业下只能有<font color="red">一个</font>公章, 重复创建会报错</p>
                     */
                    std::string m_sealType;
                    bool m_sealTypeHasBeenSet;

                    /**
                     * <p>企业印章横向文字，最多可填15个汉字  (若超过印章最大宽度，优先压缩字间距，其次缩小字号)<br>横向文字的位置如下图中的&quot;印章横向文字在这里&quot;</p><p><img src="https://dyn.ess.tencent.cn/guide/capi/CreateSealByImage2.png" alt="image"></p>
                     */
                    std::string m_sealHorizontalText;
                    bool m_sealHorizontalTextHasBeenSet;

                    /**
                     * <p>印章样式, 可以选择的样式如下: </p><ul><li>**circle**:(默认)圆形印章</li><li>**ellipse**:椭圆印章</li></ul>
                     */
                    std::string m_sealStyle;
                    bool m_sealStyleHasBeenSet;

                    /**
                     * <p>印章尺寸取值描述, 可以选择的尺寸如下: <ul><li> <strong>38_38</strong>: 圆形企业公章直径38mm, 当SealStyle是圆形的时候才有效</li> <li> <strong>40_40</strong>: 圆形企业公章直径40mm, 当SealStyle是圆形的时候才有效</li> <li> <strong>42_42</strong>（默认）: 圆形企业公章直径42mm, 当SealStyle是圆形的时候才有效</li> <li> <strong>45_45</strong>: 圆形企业印章直径45mm, 当SealStyle是圆形的时候才有效</li> <li> <strong>50_50</strong>: 圆形企业印章直径50mm, 当SealStyle是圆形的时候才有效</li> <li> <strong>58_58</strong>: 圆形企业印章直径58mm, 当SealStyle是圆形的时候才有效</li>  <li> <strong>40_30</strong>: 椭圆形印章40mm x 30mm, 当SealStyle是椭圆的时候才有效</li> <li> <strong>45_30</strong>: 椭圆形印章45mm x 30mm, 当SealStyle是椭圆的时候才有效</li> </ul></p>
                     */
                    std::string m_sealSize;
                    bool m_sealSizeHasBeenSet;

                    /**
                     * <p>企业税号</p><p>注:</p><ul><li>1.印章类型SealType是INVOICE类型时，此参数才会生效</li><li>2.印章类型SealType是INVOICE类型，且该字段没有传入值或传入空时，会取该企业对应的统一社会信用代码作为默认的企业税号（<font color="red">如果是通过授权书授权方式认证的企业，此参数必传不能为空</font>）</li></ul>
                     */
                    std::string m_taxIdentifyCode;
                    bool m_taxIdentifyCodeHasBeenSet;

                    /**
                     * <p>印章描述内容</p>
                     */
                    std::string m_sealDescription;
                    bool m_sealDescriptionHasBeenSet;

                    /**
                     * <p>个性化配置字段，默认不传。</p>
                     */
                    std::vector<Option> m_options;
                    bool m_optionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATESEALBYIMAGEREQUEST_H_
