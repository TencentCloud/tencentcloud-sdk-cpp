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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CREATEGLOSSARYREQUEST_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CREATEGLOSSARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * CreateGlossary请求参数结构体
                */
                class CreateGlossaryRequest : public AbstractModel
                {
                public:
                    CreateGlossaryRequest();
                    ~CreateGlossaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取术语库名称，限制50个字符
                     * @return Name 术语库名称，限制50个字符
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置术语库名称，限制50个字符
                     * @param _name 术语库名称，限制50个字符
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取源语言代码，取值范围：zh(中文)、en(英语)、fr(法语)、pt(葡萄牙语)、es(西班牙语)、ja(日语)、tr(土耳其语)、ru(俄语)、ar(阿拉伯语)、ko(韩语)、th(泰语)、it(意大利语)、de(德语)、vi(越南语)、ms(马来语)、id(印尼语)、yue(粤语)、zh-TR(繁体中文)、hi(印地语)、fil(菲律宾语)、pl(波兰语)、cs(捷克语)、nl(荷兰语)、km(高棉语)、my(缅甸语)、fa(波斯语)、gu(古吉拉特语)、ur(乌尔都语)、te(泰卢固语)、mr(马拉地语)、he(希伯来语)、bn(孟加拉语)、ta(泰米尔语)、uk(乌克兰语)、bo(藏语)、kk(哈萨克语)、mn(蒙古语)、ug(维吾尔语)
                     * @return Source 源语言代码，取值范围：zh(中文)、en(英语)、fr(法语)、pt(葡萄牙语)、es(西班牙语)、ja(日语)、tr(土耳其语)、ru(俄语)、ar(阿拉伯语)、ko(韩语)、th(泰语)、it(意大利语)、de(德语)、vi(越南语)、ms(马来语)、id(印尼语)、yue(粤语)、zh-TR(繁体中文)、hi(印地语)、fil(菲律宾语)、pl(波兰语)、cs(捷克语)、nl(荷兰语)、km(高棉语)、my(缅甸语)、fa(波斯语)、gu(古吉拉特语)、ur(乌尔都语)、te(泰卢固语)、mr(马拉地语)、he(希伯来语)、bn(孟加拉语)、ta(泰米尔语)、uk(乌克兰语)、bo(藏语)、kk(哈萨克语)、mn(蒙古语)、ug(维吾尔语)
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置源语言代码，取值范围：zh(中文)、en(英语)、fr(法语)、pt(葡萄牙语)、es(西班牙语)、ja(日语)、tr(土耳其语)、ru(俄语)、ar(阿拉伯语)、ko(韩语)、th(泰语)、it(意大利语)、de(德语)、vi(越南语)、ms(马来语)、id(印尼语)、yue(粤语)、zh-TR(繁体中文)、hi(印地语)、fil(菲律宾语)、pl(波兰语)、cs(捷克语)、nl(荷兰语)、km(高棉语)、my(缅甸语)、fa(波斯语)、gu(古吉拉特语)、ur(乌尔都语)、te(泰卢固语)、mr(马拉地语)、he(希伯来语)、bn(孟加拉语)、ta(泰米尔语)、uk(乌克兰语)、bo(藏语)、kk(哈萨克语)、mn(蒙古语)、ug(维吾尔语)
                     * @param _source 源语言代码，取值范围：zh(中文)、en(英语)、fr(法语)、pt(葡萄牙语)、es(西班牙语)、ja(日语)、tr(土耳其语)、ru(俄语)、ar(阿拉伯语)、ko(韩语)、th(泰语)、it(意大利语)、de(德语)、vi(越南语)、ms(马来语)、id(印尼语)、yue(粤语)、zh-TR(繁体中文)、hi(印地语)、fil(菲律宾语)、pl(波兰语)、cs(捷克语)、nl(荷兰语)、km(高棉语)、my(缅甸语)、fa(波斯语)、gu(古吉拉特语)、ur(乌尔都语)、te(泰卢固语)、mr(马拉地语)、he(希伯来语)、bn(孟加拉语)、ta(泰米尔语)、uk(乌克兰语)、bo(藏语)、kk(哈萨克语)、mn(蒙古语)、ug(维吾尔语)
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取目标语言代码，取值范围：zh(中文)、en(英语)、fr(法语)、pt(葡萄牙语)、es(西班牙语)、ja(日语)、tr(土耳其语)、ru(俄语)、ar(阿拉伯语)、ko(韩语)、th(泰语)、it(意大利语)、de(德语)、vi(越南语)、ms(马来语)、id(印尼语)、yue(粤语)、zh-TR(繁体中文)、hi(印地语)、fil(菲律宾语)、pl(波兰语)、cs(捷克语)、nl(荷兰语)、km(高棉语)、my(缅甸语)、fa(波斯语)、gu(古吉拉特语)、ur(乌尔都语)、te(泰卢固语)、mr(马拉地语)、he(希伯来语)、bn(孟加拉语)、ta(泰米尔语)、uk(乌克兰语)、bo(藏语)、kk(哈萨克语)、mn(蒙古语)、ug(维吾尔语)
                     * @return Target 目标语言代码，取值范围：zh(中文)、en(英语)、fr(法语)、pt(葡萄牙语)、es(西班牙语)、ja(日语)、tr(土耳其语)、ru(俄语)、ar(阿拉伯语)、ko(韩语)、th(泰语)、it(意大利语)、de(德语)、vi(越南语)、ms(马来语)、id(印尼语)、yue(粤语)、zh-TR(繁体中文)、hi(印地语)、fil(菲律宾语)、pl(波兰语)、cs(捷克语)、nl(荷兰语)、km(高棉语)、my(缅甸语)、fa(波斯语)、gu(古吉拉特语)、ur(乌尔都语)、te(泰卢固语)、mr(马拉地语)、he(希伯来语)、bn(孟加拉语)、ta(泰米尔语)、uk(乌克兰语)、bo(藏语)、kk(哈萨克语)、mn(蒙古语)、ug(维吾尔语)
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置目标语言代码，取值范围：zh(中文)、en(英语)、fr(法语)、pt(葡萄牙语)、es(西班牙语)、ja(日语)、tr(土耳其语)、ru(俄语)、ar(阿拉伯语)、ko(韩语)、th(泰语)、it(意大利语)、de(德语)、vi(越南语)、ms(马来语)、id(印尼语)、yue(粤语)、zh-TR(繁体中文)、hi(印地语)、fil(菲律宾语)、pl(波兰语)、cs(捷克语)、nl(荷兰语)、km(高棉语)、my(缅甸语)、fa(波斯语)、gu(古吉拉特语)、ur(乌尔都语)、te(泰卢固语)、mr(马拉地语)、he(希伯来语)、bn(孟加拉语)、ta(泰米尔语)、uk(乌克兰语)、bo(藏语)、kk(哈萨克语)、mn(蒙古语)、ug(维吾尔语)
                     * @param _target 目标语言代码，取值范围：zh(中文)、en(英语)、fr(法语)、pt(葡萄牙语)、es(西班牙语)、ja(日语)、tr(土耳其语)、ru(俄语)、ar(阿拉伯语)、ko(韩语)、th(泰语)、it(意大利语)、de(德语)、vi(越南语)、ms(马来语)、id(印尼语)、yue(粤语)、zh-TR(繁体中文)、hi(印地语)、fil(菲律宾语)、pl(波兰语)、cs(捷克语)、nl(荷兰语)、km(高棉语)、my(缅甸语)、fa(波斯语)、gu(古吉拉特语)、ur(乌尔都语)、te(泰卢固语)、mr(马拉地语)、he(希伯来语)、bn(孟加拉语)、ta(泰米尔语)、uk(乌克兰语)、bo(藏语)、kk(哈萨克语)、mn(蒙古语)、ug(维吾尔语)
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取术语库描述，限制255个字符
                     * @return Description 术语库描述，限制255个字符
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置术语库描述，限制255个字符
                     * @param _description 术语库描述，限制255个字符
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 术语库名称，限制50个字符
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 源语言代码，取值范围：zh(中文)、en(英语)、fr(法语)、pt(葡萄牙语)、es(西班牙语)、ja(日语)、tr(土耳其语)、ru(俄语)、ar(阿拉伯语)、ko(韩语)、th(泰语)、it(意大利语)、de(德语)、vi(越南语)、ms(马来语)、id(印尼语)、yue(粤语)、zh-TR(繁体中文)、hi(印地语)、fil(菲律宾语)、pl(波兰语)、cs(捷克语)、nl(荷兰语)、km(高棉语)、my(缅甸语)、fa(波斯语)、gu(古吉拉特语)、ur(乌尔都语)、te(泰卢固语)、mr(马拉地语)、he(希伯来语)、bn(孟加拉语)、ta(泰米尔语)、uk(乌克兰语)、bo(藏语)、kk(哈萨克语)、mn(蒙古语)、ug(维吾尔语)
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 目标语言代码，取值范围：zh(中文)、en(英语)、fr(法语)、pt(葡萄牙语)、es(西班牙语)、ja(日语)、tr(土耳其语)、ru(俄语)、ar(阿拉伯语)、ko(韩语)、th(泰语)、it(意大利语)、de(德语)、vi(越南语)、ms(马来语)、id(印尼语)、yue(粤语)、zh-TR(繁体中文)、hi(印地语)、fil(菲律宾语)、pl(波兰语)、cs(捷克语)、nl(荷兰语)、km(高棉语)、my(缅甸语)、fa(波斯语)、gu(古吉拉特语)、ur(乌尔都语)、te(泰卢固语)、mr(马拉地语)、he(希伯来语)、bn(孟加拉语)、ta(泰米尔语)、uk(乌克兰语)、bo(藏语)、kk(哈萨克语)、mn(蒙古语)、ug(维吾尔语)
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 术语库描述，限制255个字符
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CREATEGLOSSARYREQUEST_H_
