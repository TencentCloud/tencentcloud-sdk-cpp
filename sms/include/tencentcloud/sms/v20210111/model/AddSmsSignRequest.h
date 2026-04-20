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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_ADDSMSSIGNREQUEST_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_ADDSMSSIGNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * AddSmsSign请求参数结构体
                */
                class AddSmsSignRequest : public AbstractModel
                {
                public:
                    AddSmsSignRequest();
                    ~AddSmsSignRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>签名名称。<br>注：不能重复申请已通过或待审核的签名。</p>
                     * @return SignName <p>签名名称。<br>注：不能重复申请已通过或待审核的签名。</p>
                     * 
                     */
                    std::string GetSignName() const;

                    /**
                     * 设置<p>签名名称。<br>注：不能重复申请已通过或待审核的签名。</p>
                     * @param _signName <p>签名名称。<br>注：不能重复申请已通过或待审核的签名。</p>
                     * 
                     */
                    void SetSignName(const std::string& _signName);

                    /**
                     * 判断参数 SignName 是否已赋值
                     * @return SignName 是否已赋值
                     * 
                     */
                    bool SignNameHasBeenSet() const;

                    /**
                     * 获取<p>签名类型。其中每种类型后面标注了其可选的 DocumentType（证明类型）：<br>0：公司，可选 DocumentType 有（0，1）。<br>1：APP，可选 DocumentType 有（0，1，2，3，4） 。<br>4：商标，可选 DocumentType 有（7）。<br>5：政府/机关事业单位/其他机构，可选 DocumentType 有（2，3）。<br>注1：必须按照对应关系选择证明类型，否则会审核失败。<br>注2：签名类型2（网站）、3（公众号）、6（小程序）已不再支持，具体可参考 <a href="https://cloud.tencent.com/document/product/382/116397">关于腾讯云短信签名申请规则更新的公告</a>。<br>注3：申请国内短信签名已不再支持签名类型1（APP），具体可参考 <a href="https://cloud.tencent.com/announce/detail/2256">关于腾讯云短信签名申请规则更新的公告</a>。</p>
                     * @return SignType <p>签名类型。其中每种类型后面标注了其可选的 DocumentType（证明类型）：<br>0：公司，可选 DocumentType 有（0，1）。<br>1：APP，可选 DocumentType 有（0，1，2，3，4） 。<br>4：商标，可选 DocumentType 有（7）。<br>5：政府/机关事业单位/其他机构，可选 DocumentType 有（2，3）。<br>注1：必须按照对应关系选择证明类型，否则会审核失败。<br>注2：签名类型2（网站）、3（公众号）、6（小程序）已不再支持，具体可参考 <a href="https://cloud.tencent.com/document/product/382/116397">关于腾讯云短信签名申请规则更新的公告</a>。<br>注3：申请国内短信签名已不再支持签名类型1（APP），具体可参考 <a href="https://cloud.tencent.com/announce/detail/2256">关于腾讯云短信签名申请规则更新的公告</a>。</p>
                     * 
                     */
                    uint64_t GetSignType() const;

                    /**
                     * 设置<p>签名类型。其中每种类型后面标注了其可选的 DocumentType（证明类型）：<br>0：公司，可选 DocumentType 有（0，1）。<br>1：APP，可选 DocumentType 有（0，1，2，3，4） 。<br>4：商标，可选 DocumentType 有（7）。<br>5：政府/机关事业单位/其他机构，可选 DocumentType 有（2，3）。<br>注1：必须按照对应关系选择证明类型，否则会审核失败。<br>注2：签名类型2（网站）、3（公众号）、6（小程序）已不再支持，具体可参考 <a href="https://cloud.tencent.com/document/product/382/116397">关于腾讯云短信签名申请规则更新的公告</a>。<br>注3：申请国内短信签名已不再支持签名类型1（APP），具体可参考 <a href="https://cloud.tencent.com/announce/detail/2256">关于腾讯云短信签名申请规则更新的公告</a>。</p>
                     * @param _signType <p>签名类型。其中每种类型后面标注了其可选的 DocumentType（证明类型）：<br>0：公司，可选 DocumentType 有（0，1）。<br>1：APP，可选 DocumentType 有（0，1，2，3，4） 。<br>4：商标，可选 DocumentType 有（7）。<br>5：政府/机关事业单位/其他机构，可选 DocumentType 有（2，3）。<br>注1：必须按照对应关系选择证明类型，否则会审核失败。<br>注2：签名类型2（网站）、3（公众号）、6（小程序）已不再支持，具体可参考 <a href="https://cloud.tencent.com/document/product/382/116397">关于腾讯云短信签名申请规则更新的公告</a>。<br>注3：申请国内短信签名已不再支持签名类型1（APP），具体可参考 <a href="https://cloud.tencent.com/announce/detail/2256">关于腾讯云短信签名申请规则更新的公告</a>。</p>
                     * 
                     */
                    void SetSignType(const uint64_t& _signType);

                    /**
                     * 判断参数 SignType 是否已赋值
                     * @return SignType 是否已赋值
                     * 
                     */
                    bool SignTypeHasBeenSet() const;

                    /**
                     * 获取<p>证明类型：<br>0：三证合一。<br>1：企业营业执照。<br>2：组织机构代码证书。<br>3：社会信用代码证书。<br>4：应用后台管理截图（个人开发APP）。<br>7：商标注册书。<br>注1：证明类型5（网站备案后台截图）、6（小程序设置页面截图）、8（公众号设置页面截图）已不再支持，具体可参考 <a href="https://cloud.tencent.com/document/product/382/116397">关于腾讯云短信签名申请规则更新的公告</a>。<br>注2：申请国内短信签名已不再支持证明类型4（应用后台管理截图），具体可参考 <a href="https://cloud.tencent.com/announce/detail/2256">关于腾讯云短信签名申请规则更新的公告</a>。</p>
                     * @return DocumentType <p>证明类型：<br>0：三证合一。<br>1：企业营业执照。<br>2：组织机构代码证书。<br>3：社会信用代码证书。<br>4：应用后台管理截图（个人开发APP）。<br>7：商标注册书。<br>注1：证明类型5（网站备案后台截图）、6（小程序设置页面截图）、8（公众号设置页面截图）已不再支持，具体可参考 <a href="https://cloud.tencent.com/document/product/382/116397">关于腾讯云短信签名申请规则更新的公告</a>。<br>注2：申请国内短信签名已不再支持证明类型4（应用后台管理截图），具体可参考 <a href="https://cloud.tencent.com/announce/detail/2256">关于腾讯云短信签名申请规则更新的公告</a>。</p>
                     * 
                     */
                    uint64_t GetDocumentType() const;

                    /**
                     * 设置<p>证明类型：<br>0：三证合一。<br>1：企业营业执照。<br>2：组织机构代码证书。<br>3：社会信用代码证书。<br>4：应用后台管理截图（个人开发APP）。<br>7：商标注册书。<br>注1：证明类型5（网站备案后台截图）、6（小程序设置页面截图）、8（公众号设置页面截图）已不再支持，具体可参考 <a href="https://cloud.tencent.com/document/product/382/116397">关于腾讯云短信签名申请规则更新的公告</a>。<br>注2：申请国内短信签名已不再支持证明类型4（应用后台管理截图），具体可参考 <a href="https://cloud.tencent.com/announce/detail/2256">关于腾讯云短信签名申请规则更新的公告</a>。</p>
                     * @param _documentType <p>证明类型：<br>0：三证合一。<br>1：企业营业执照。<br>2：组织机构代码证书。<br>3：社会信用代码证书。<br>4：应用后台管理截图（个人开发APP）。<br>7：商标注册书。<br>注1：证明类型5（网站备案后台截图）、6（小程序设置页面截图）、8（公众号设置页面截图）已不再支持，具体可参考 <a href="https://cloud.tencent.com/document/product/382/116397">关于腾讯云短信签名申请规则更新的公告</a>。<br>注2：申请国内短信签名已不再支持证明类型4（应用后台管理截图），具体可参考 <a href="https://cloud.tencent.com/announce/detail/2256">关于腾讯云短信签名申请规则更新的公告</a>。</p>
                     * 
                     */
                    void SetDocumentType(const uint64_t& _documentType);

                    /**
                     * 判断参数 DocumentType 是否已赋值
                     * @return DocumentType 是否已赋值
                     * 
                     */
                    bool DocumentTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否国际/港澳台短信：<br>0：表示国内短信。<br>1：表示国际/港澳台短信。</p>
                     * @return International <p>是否国际/港澳台短信：<br>0：表示国内短信。<br>1：表示国际/港澳台短信。</p>
                     * 
                     */
                    uint64_t GetInternational() const;

                    /**
                     * 设置<p>是否国际/港澳台短信：<br>0：表示国内短信。<br>1：表示国际/港澳台短信。</p>
                     * @param _international <p>是否国际/港澳台短信：<br>0：表示国内短信。<br>1：表示国际/港澳台短信。</p>
                     * 
                     */
                    void SetInternational(const uint64_t& _international);

                    /**
                     * 判断参数 International 是否已赋值
                     * @return International 是否已赋值
                     * 
                     */
                    bool InternationalHasBeenSet() const;

                    /**
                     * 获取<p>签名用途：<br>0：自用。<br>1：他用。</p>
                     * @return SignPurpose <p>签名用途：<br>0：自用。<br>1：他用。</p>
                     * 
                     */
                    uint64_t GetSignPurpose() const;

                    /**
                     * 设置<p>签名用途：<br>0：自用。<br>1：他用。</p>
                     * @param _signPurpose <p>签名用途：<br>0：自用。<br>1：他用。</p>
                     * 
                     */
                    void SetSignPurpose(const uint64_t& _signPurpose);

                    /**
                     * 判断参数 SignPurpose 是否已赋值
                     * @return SignPurpose 是否已赋值
                     * 
                     */
                    bool SignPurposeHasBeenSet() const;

                    /**
                     * 获取<p>签名对应的资质证明图片需先进行 base64 编码格式转换，将转换后的字符串去掉前缀<code>data:image/jpeg;base64,</code>再赋值给该参数。</p>
                     * @return ProofImage <p>签名对应的资质证明图片需先进行 base64 编码格式转换，将转换后的字符串去掉前缀<code>data:image/jpeg;base64,</code>再赋值给该参数。</p>
                     * 
                     */
                    std::string GetProofImage() const;

                    /**
                     * 设置<p>签名对应的资质证明图片需先进行 base64 编码格式转换，将转换后的字符串去掉前缀<code>data:image/jpeg;base64,</code>再赋值给该参数。</p>
                     * @param _proofImage <p>签名对应的资质证明图片需先进行 base64 编码格式转换，将转换后的字符串去掉前缀<code>data:image/jpeg;base64,</code>再赋值给该参数。</p>
                     * 
                     */
                    void SetProofImage(const std::string& _proofImage);

                    /**
                     * 判断参数 ProofImage 是否已赋值
                     * @return ProofImage 是否已赋值
                     * 
                     */
                    bool ProofImageHasBeenSet() const;

                    /**
                     * 获取<p>委托授权证明。选择 SignPurpose 为他用之后需要提交委托的授权证明。<br>图片需先进行 base64 编码格式转换，将转换后的字符串去掉前缀<code>data:image/jpeg;base64,</code>再赋值给该参数。<br>注：只有 SignPurpose 在选择为 1（他用）时，这个字段才会生效。</p>
                     * @return CommissionImage <p>委托授权证明。选择 SignPurpose 为他用之后需要提交委托的授权证明。<br>图片需先进行 base64 编码格式转换，将转换后的字符串去掉前缀<code>data:image/jpeg;base64,</code>再赋值给该参数。<br>注：只有 SignPurpose 在选择为 1（他用）时，这个字段才会生效。</p>
                     * 
                     */
                    std::string GetCommissionImage() const;

                    /**
                     * 设置<p>委托授权证明。选择 SignPurpose 为他用之后需要提交委托的授权证明。<br>图片需先进行 base64 编码格式转换，将转换后的字符串去掉前缀<code>data:image/jpeg;base64,</code>再赋值给该参数。<br>注：只有 SignPurpose 在选择为 1（他用）时，这个字段才会生效。</p>
                     * @param _commissionImage <p>委托授权证明。选择 SignPurpose 为他用之后需要提交委托的授权证明。<br>图片需先进行 base64 编码格式转换，将转换后的字符串去掉前缀<code>data:image/jpeg;base64,</code>再赋值给该参数。<br>注：只有 SignPurpose 在选择为 1（他用）时，这个字段才会生效。</p>
                     * 
                     */
                    void SetCommissionImage(const std::string& _commissionImage);

                    /**
                     * 判断参数 CommissionImage 是否已赋值
                     * @return CommissionImage 是否已赋值
                     * 
                     */
                    bool CommissionImageHasBeenSet() const;

                    /**
                     * 获取<p>签名的申请备注。</p>
                     * @return Remark <p>签名的申请备注。</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>签名的申请备注。</p>
                     * @param _remark <p>签名的申请备注。</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>已审核通过的国内短信的资质 ID。资质 ID 信息可前往国内短信的 <a href="https://console.cloud.tencent.com/smsv2/enterprise">实名资质管理</a> 页查看。<blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">说明</div>        <div class="rno-document-tip-desc"><ul><li>国内短信需填写资质ID，国际短信无需填写。</li></ul></div>    </div></blockquote></p>
                     * @return QualificationId <p>已审核通过的国内短信的资质 ID。资质 ID 信息可前往国内短信的 <a href="https://console.cloud.tencent.com/smsv2/enterprise">实名资质管理</a> 页查看。<blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">说明</div>        <div class="rno-document-tip-desc"><ul><li>国内短信需填写资质ID，国际短信无需填写。</li></ul></div>    </div></blockquote></p>
                     * 
                     */
                    uint64_t GetQualificationId() const;

                    /**
                     * 设置<p>已审核通过的国内短信的资质 ID。资质 ID 信息可前往国内短信的 <a href="https://console.cloud.tencent.com/smsv2/enterprise">实名资质管理</a> 页查看。<blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">说明</div>        <div class="rno-document-tip-desc"><ul><li>国内短信需填写资质ID，国际短信无需填写。</li></ul></div>    </div></blockquote></p>
                     * @param _qualificationId <p>已审核通过的国内短信的资质 ID。资质 ID 信息可前往国内短信的 <a href="https://console.cloud.tencent.com/smsv2/enterprise">实名资质管理</a> 页查看。<blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">说明</div>        <div class="rno-document-tip-desc"><ul><li>国内短信需填写资质ID，国际短信无需填写。</li></ul></div>    </div></blockquote></p>
                     * 
                     */
                    void SetQualificationId(const uint64_t& _qualificationId);

                    /**
                     * 判断参数 QualificationId 是否已赋值
                     * @return QualificationId 是否已赋值
                     * 
                     */
                    bool QualificationIdHasBeenSet() const;

                private:

                    /**
                     * <p>签名名称。<br>注：不能重复申请已通过或待审核的签名。</p>
                     */
                    std::string m_signName;
                    bool m_signNameHasBeenSet;

                    /**
                     * <p>签名类型。其中每种类型后面标注了其可选的 DocumentType（证明类型）：<br>0：公司，可选 DocumentType 有（0，1）。<br>1：APP，可选 DocumentType 有（0，1，2，3，4） 。<br>4：商标，可选 DocumentType 有（7）。<br>5：政府/机关事业单位/其他机构，可选 DocumentType 有（2，3）。<br>注1：必须按照对应关系选择证明类型，否则会审核失败。<br>注2：签名类型2（网站）、3（公众号）、6（小程序）已不再支持，具体可参考 <a href="https://cloud.tencent.com/document/product/382/116397">关于腾讯云短信签名申请规则更新的公告</a>。<br>注3：申请国内短信签名已不再支持签名类型1（APP），具体可参考 <a href="https://cloud.tencent.com/announce/detail/2256">关于腾讯云短信签名申请规则更新的公告</a>。</p>
                     */
                    uint64_t m_signType;
                    bool m_signTypeHasBeenSet;

                    /**
                     * <p>证明类型：<br>0：三证合一。<br>1：企业营业执照。<br>2：组织机构代码证书。<br>3：社会信用代码证书。<br>4：应用后台管理截图（个人开发APP）。<br>7：商标注册书。<br>注1：证明类型5（网站备案后台截图）、6（小程序设置页面截图）、8（公众号设置页面截图）已不再支持，具体可参考 <a href="https://cloud.tencent.com/document/product/382/116397">关于腾讯云短信签名申请规则更新的公告</a>。<br>注2：申请国内短信签名已不再支持证明类型4（应用后台管理截图），具体可参考 <a href="https://cloud.tencent.com/announce/detail/2256">关于腾讯云短信签名申请规则更新的公告</a>。</p>
                     */
                    uint64_t m_documentType;
                    bool m_documentTypeHasBeenSet;

                    /**
                     * <p>是否国际/港澳台短信：<br>0：表示国内短信。<br>1：表示国际/港澳台短信。</p>
                     */
                    uint64_t m_international;
                    bool m_internationalHasBeenSet;

                    /**
                     * <p>签名用途：<br>0：自用。<br>1：他用。</p>
                     */
                    uint64_t m_signPurpose;
                    bool m_signPurposeHasBeenSet;

                    /**
                     * <p>签名对应的资质证明图片需先进行 base64 编码格式转换，将转换后的字符串去掉前缀<code>data:image/jpeg;base64,</code>再赋值给该参数。</p>
                     */
                    std::string m_proofImage;
                    bool m_proofImageHasBeenSet;

                    /**
                     * <p>委托授权证明。选择 SignPurpose 为他用之后需要提交委托的授权证明。<br>图片需先进行 base64 编码格式转换，将转换后的字符串去掉前缀<code>data:image/jpeg;base64,</code>再赋值给该参数。<br>注：只有 SignPurpose 在选择为 1（他用）时，这个字段才会生效。</p>
                     */
                    std::string m_commissionImage;
                    bool m_commissionImageHasBeenSet;

                    /**
                     * <p>签名的申请备注。</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>已审核通过的国内短信的资质 ID。资质 ID 信息可前往国内短信的 <a href="https://console.cloud.tencent.com/smsv2/enterprise">实名资质管理</a> 页查看。<blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">说明</div>        <div class="rno-document-tip-desc"><ul><li>国内短信需填写资质ID，国际短信无需填写。</li></ul></div>    </div></blockquote></p>
                     */
                    uint64_t m_qualificationId;
                    bool m_qualificationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_ADDSMSSIGNREQUEST_H_
