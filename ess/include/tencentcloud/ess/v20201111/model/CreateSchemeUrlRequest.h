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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATESCHEMEURLREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATESCHEMEURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>
#include <tencentcloud/ess/v20201111/model/FlowGroupUrlInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateSchemeUrl请求参数结构体
                */
                class CreateSchemeUrlRequest : public AbstractModel
                {
                public:
                    CreateSchemeUrlRequest();
                    ~CreateSchemeUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行本接口操作的员工信息, userId 必填。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @return Operator 执行本接口操作的员工信息, userId 必填。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行本接口操作的员工信息, userId 必填。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @param _operator 执行本接口操作的员工信息, userId 必填。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取合同流程签署方的组织机构名称。如果名称中包含英文括号()，请使用中文括号（）代替。注: `获取B端动态签署人领取链接时,可指定此字段来预先设定签署人的企业,预设后只能以该企业身份去领取合同并完成签署`
                     * @return OrganizationName 合同流程签署方的组织机构名称。如果名称中包含英文括号()，请使用中文括号（）代替。注: `获取B端动态签署人领取链接时,可指定此字段来预先设定签署人的企业,预设后只能以该企业身份去领取合同并完成签署`
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置合同流程签署方的组织机构名称。如果名称中包含英文括号()，请使用中文括号（）代替。注: `获取B端动态签署人领取链接时,可指定此字段来预先设定签署人的企业,预设后只能以该企业身份去领取合同并完成签署`
                     * @param _organizationName 合同流程签署方的组织机构名称。如果名称中包含英文括号()，请使用中文括号（）代替。注: `获取B端动态签署人领取链接时,可指定此字段来预先设定签署人的企业,预设后只能以该企业身份去领取合同并完成签署`
                     * 
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     * 
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取合同流程里边签署方经办人的姓名。

`注：在动态签署人补充链接场景中，可以通过传入这个值，对补充的个人参与方信息进行限制。仅匹配传入姓名的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`

                     * @return Name 合同流程里边签署方经办人的姓名。

`注：在动态签署人补充链接场景中，可以通过传入这个值，对补充的个人参与方信息进行限制。仅匹配传入姓名的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`

                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置合同流程里边签署方经办人的姓名。

`注：在动态签署人补充链接场景中，可以通过传入这个值，对补充的个人参与方信息进行限制。仅匹配传入姓名的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`

                     * @param _name 合同流程里边签署方经办人的姓名。

`注：在动态签署人补充链接场景中，可以通过传入这个值，对补充的个人参与方信息进行限制。仅匹配传入姓名的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`

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
                     * 获取合同流程里边签署方经办人手机号码， 支持国内手机号11位数字(无需加+86前缀或其他字符)。

`注：在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入手机号的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`
                     * @return Mobile 合同流程里边签署方经办人手机号码， 支持国内手机号11位数字(无需加+86前缀或其他字符)。

`注：在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入手机号的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置合同流程里边签署方经办人手机号码， 支持国内手机号11位数字(无需加+86前缀或其他字符)。

`注：在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入手机号的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`
                     * @param _mobile 合同流程里边签署方经办人手机号码， 支持国内手机号11位数字(无需加+86前缀或其他字符)。

`注：在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入手机号的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取证件类型，支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证</li>
<li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>

`注：在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入证件类型的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方，且需要和证件号参数一同传递，不能单独进行限制。`
                     * @return IdCardType 证件类型，支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证</li>
<li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>

`注：在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入证件类型的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方，且需要和证件号参数一同传递，不能单独进行限制。`
                     * 
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置证件类型，支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证</li>
<li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>

`注：在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入证件类型的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方，且需要和证件号参数一同传递，不能单独进行限制。`
                     * @param _idCardType 证件类型，支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证</li>
<li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>

`注：在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入证件类型的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方，且需要和证件号参数一同传递，不能单独进行限制。`
                     * 
                     */
                    void SetIdCardType(const std::string& _idCardType);

                    /**
                     * 判断参数 IdCardType 是否已赋值
                     * @return IdCardType 是否已赋值
                     * 
                     */
                    bool IdCardTypeHasBeenSet() const;

                    /**
                     * 获取证件号码，应符合以下规则
<ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成(如存在X，请大写)。</li>
<li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li>
<li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>

`注：在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入证件号的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`
                     * @return IdCardNumber 证件号码，应符合以下规则
<ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成(如存在X，请大写)。</li>
<li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li>
<li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>

`注：在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入证件号的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`
                     * 
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置证件号码，应符合以下规则
<ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成(如存在X，请大写)。</li>
<li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li>
<li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>

`注：在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入证件号的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`
                     * @param _idCardNumber 证件号码，应符合以下规则
<ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成(如存在X，请大写)。</li>
<li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li>
<li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>

`注：在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入证件号的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`
                     * 
                     */
                    void SetIdCardNumber(const std::string& _idCardNumber);

                    /**
                     * 判断参数 IdCardNumber 是否已赋值
                     * @return IdCardNumber 是否已赋值
                     * 
                     */
                    bool IdCardNumberHasBeenSet() const;

                    /**
                     * 获取要跳转的链接类型

<ul><li> **HTTP**：跳转电子签小程序的http_url, 短信通知或者H5跳转适合此类型  ，此时返回长链 (默认类型)</li>
<li>**HTTP_SHORT_URL**：跳转电子签小程序的http_url, 短信通知或者H5跳转适合此类型，此时返回短链</li>
<li>**APP**： 第三方APP或小程序跳转电子签小程序的path,  APP或者小程序跳转适合此类型</li></ul>
                     * @return EndPoint 要跳转的链接类型

<ul><li> **HTTP**：跳转电子签小程序的http_url, 短信通知或者H5跳转适合此类型  ，此时返回长链 (默认类型)</li>
<li>**HTTP_SHORT_URL**：跳转电子签小程序的http_url, 短信通知或者H5跳转适合此类型，此时返回短链</li>
<li>**APP**： 第三方APP或小程序跳转电子签小程序的path,  APP或者小程序跳转适合此类型</li></ul>
                     * 
                     */
                    std::string GetEndPoint() const;

                    /**
                     * 设置要跳转的链接类型

<ul><li> **HTTP**：跳转电子签小程序的http_url, 短信通知或者H5跳转适合此类型  ，此时返回长链 (默认类型)</li>
<li>**HTTP_SHORT_URL**：跳转电子签小程序的http_url, 短信通知或者H5跳转适合此类型，此时返回短链</li>
<li>**APP**： 第三方APP或小程序跳转电子签小程序的path,  APP或者小程序跳转适合此类型</li></ul>
                     * @param _endPoint 要跳转的链接类型

<ul><li> **HTTP**：跳转电子签小程序的http_url, 短信通知或者H5跳转适合此类型  ，此时返回长链 (默认类型)</li>
<li>**HTTP_SHORT_URL**：跳转电子签小程序的http_url, 短信通知或者H5跳转适合此类型，此时返回短链</li>
<li>**APP**： 第三方APP或小程序跳转电子签小程序的path,  APP或者小程序跳转适合此类型</li></ul>
                     * 
                     */
                    void SetEndPoint(const std::string& _endPoint);

                    /**
                     * 判断参数 EndPoint 是否已赋值
                     * @return EndPoint 是否已赋值
                     * 
                     */
                    bool EndPointHasBeenSet() const;

                    /**
                     * 获取合同流程ID 
注: `如果准备跳转到合同流程签署的详情页面(即PathType=1时)必传,   跳转其他页面可不传`
                     * @return FlowId 合同流程ID 
注: `如果准备跳转到合同流程签署的详情页面(即PathType=1时)必传,   跳转其他页面可不传`
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置合同流程ID 
注: `如果准备跳转到合同流程签署的详情页面(即PathType=1时)必传,   跳转其他页面可不传`
                     * @param _flowId 合同流程ID 
注: `如果准备跳转到合同流程签署的详情页面(即PathType=1时)必传,   跳转其他页面可不传`
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取合同流程组的组ID, 在合同流程组场景下，生成合同流程组的签署链接时需要赋值
                     * @return FlowGroupId 合同流程组的组ID, 在合同流程组场景下，生成合同流程组的签署链接时需要赋值
                     * 
                     */
                    std::string GetFlowGroupId() const;

                    /**
                     * 设置合同流程组的组ID, 在合同流程组场景下，生成合同流程组的签署链接时需要赋值
                     * @param _flowGroupId 合同流程组的组ID, 在合同流程组场景下，生成合同流程组的签署链接时需要赋值
                     * 
                     */
                    void SetFlowGroupId(const std::string& _flowGroupId);

                    /**
                     * 判断参数 FlowGroupId 是否已赋值
                     * @return FlowGroupId 是否已赋值
                     * 
                     */
                    bool FlowGroupIdHasBeenSet() const;

                    /**
                     * 获取要跳转到的页面类型 <ul><li> **0** : 腾讯电子签小程序个人首页 (默认) <a href="https://qcloudimg.tencent-cloud.cn/raw/a2667ea84ec993cc060321afe3191d65.jpg" target="_blank" >点击查看示例页面</a></li><li> **1** : 腾讯电子签小程序流程合同的详情页,即合同签署页面(注:`仅生成短链或者小程序Path时支持跳转合同详情页,即EndPoint传HTTP_SHORT_URL或者APP`)<a href="https://qcloudimg.tencent-cloud.cn/raw/446a679f09b1b7f40eb84e67face8acc.jpg" target="_blank" >点击查看示例页面</a></li><li> **2** : 腾讯电子签小程序合同列表页 <a href="https://qcloudimg.tencent-cloud.cn/raw/c7b80e44c1d68ae3270a6fc4939c7214.jpg" target="_blank" >点击查看示例页面</a> </li><li> **3** : 腾讯电子签小程序合同封面页  （注：`生成动态签署人补充链接时，必须指定为封面页`）<a href="https://qcloudimg.tencent-cloud.cn/raw/0d22cc587be4bf084877c151350c3bf7.jpg" target="_blank" >点击查看示例页面</a></li></ul>
                     * @return PathType 要跳转到的页面类型 <ul><li> **0** : 腾讯电子签小程序个人首页 (默认) <a href="https://qcloudimg.tencent-cloud.cn/raw/a2667ea84ec993cc060321afe3191d65.jpg" target="_blank" >点击查看示例页面</a></li><li> **1** : 腾讯电子签小程序流程合同的详情页,即合同签署页面(注:`仅生成短链或者小程序Path时支持跳转合同详情页,即EndPoint传HTTP_SHORT_URL或者APP`)<a href="https://qcloudimg.tencent-cloud.cn/raw/446a679f09b1b7f40eb84e67face8acc.jpg" target="_blank" >点击查看示例页面</a></li><li> **2** : 腾讯电子签小程序合同列表页 <a href="https://qcloudimg.tencent-cloud.cn/raw/c7b80e44c1d68ae3270a6fc4939c7214.jpg" target="_blank" >点击查看示例页面</a> </li><li> **3** : 腾讯电子签小程序合同封面页  （注：`生成动态签署人补充链接时，必须指定为封面页`）<a href="https://qcloudimg.tencent-cloud.cn/raw/0d22cc587be4bf084877c151350c3bf7.jpg" target="_blank" >点击查看示例页面</a></li></ul>
                     * 
                     */
                    uint64_t GetPathType() const;

                    /**
                     * 设置要跳转到的页面类型 <ul><li> **0** : 腾讯电子签小程序个人首页 (默认) <a href="https://qcloudimg.tencent-cloud.cn/raw/a2667ea84ec993cc060321afe3191d65.jpg" target="_blank" >点击查看示例页面</a></li><li> **1** : 腾讯电子签小程序流程合同的详情页,即合同签署页面(注:`仅生成短链或者小程序Path时支持跳转合同详情页,即EndPoint传HTTP_SHORT_URL或者APP`)<a href="https://qcloudimg.tencent-cloud.cn/raw/446a679f09b1b7f40eb84e67face8acc.jpg" target="_blank" >点击查看示例页面</a></li><li> **2** : 腾讯电子签小程序合同列表页 <a href="https://qcloudimg.tencent-cloud.cn/raw/c7b80e44c1d68ae3270a6fc4939c7214.jpg" target="_blank" >点击查看示例页面</a> </li><li> **3** : 腾讯电子签小程序合同封面页  （注：`生成动态签署人补充链接时，必须指定为封面页`）<a href="https://qcloudimg.tencent-cloud.cn/raw/0d22cc587be4bf084877c151350c3bf7.jpg" target="_blank" >点击查看示例页面</a></li></ul>
                     * @param _pathType 要跳转到的页面类型 <ul><li> **0** : 腾讯电子签小程序个人首页 (默认) <a href="https://qcloudimg.tencent-cloud.cn/raw/a2667ea84ec993cc060321afe3191d65.jpg" target="_blank" >点击查看示例页面</a></li><li> **1** : 腾讯电子签小程序流程合同的详情页,即合同签署页面(注:`仅生成短链或者小程序Path时支持跳转合同详情页,即EndPoint传HTTP_SHORT_URL或者APP`)<a href="https://qcloudimg.tencent-cloud.cn/raw/446a679f09b1b7f40eb84e67face8acc.jpg" target="_blank" >点击查看示例页面</a></li><li> **2** : 腾讯电子签小程序合同列表页 <a href="https://qcloudimg.tencent-cloud.cn/raw/c7b80e44c1d68ae3270a6fc4939c7214.jpg" target="_blank" >点击查看示例页面</a> </li><li> **3** : 腾讯电子签小程序合同封面页  （注：`生成动态签署人补充链接时，必须指定为封面页`）<a href="https://qcloudimg.tencent-cloud.cn/raw/0d22cc587be4bf084877c151350c3bf7.jpg" target="_blank" >点击查看示例页面</a></li></ul>
                     * 
                     */
                    void SetPathType(const uint64_t& _pathType);

                    /**
                     * 判断参数 PathType 是否已赋值
                     * @return PathType 是否已赋值
                     * 
                     */
                    bool PathTypeHasBeenSet() const;

                    /**
                     * 获取签署完成后是否自动回跳
<ul><li>**false**：否, 签署完成不会自动跳转回来(默认)</li><li>**true**：是, 签署完成会自动跳转回来</li></ul>

注: 
1. 该参数<font color="red">只针对APP类型（电子签小程序跳转贵方小程序）场景</font> 的签署链接有效
2. <font color="red">手机应用APP 或 微信小程序需要监控界面的返回走后序逻辑</font>, 微信小程序的文档可以参考[这个](https://developers.weixin.qq.com/miniprogram/dev/reference/api/App.html#onShow-Object-object)
3. <font color="red">电子签小程序跳转贵方APP，不支持自动跳转，必需用户手动点击完成按钮（微信的限制）</font> 
                     * @return AutoJumpBack 签署完成后是否自动回跳
<ul><li>**false**：否, 签署完成不会自动跳转回来(默认)</li><li>**true**：是, 签署完成会自动跳转回来</li></ul>

注: 
1. 该参数<font color="red">只针对APP类型（电子签小程序跳转贵方小程序）场景</font> 的签署链接有效
2. <font color="red">手机应用APP 或 微信小程序需要监控界面的返回走后序逻辑</font>, 微信小程序的文档可以参考[这个](https://developers.weixin.qq.com/miniprogram/dev/reference/api/App.html#onShow-Object-object)
3. <font color="red">电子签小程序跳转贵方APP，不支持自动跳转，必需用户手动点击完成按钮（微信的限制）</font> 
                     * 
                     */
                    bool GetAutoJumpBack() const;

                    /**
                     * 设置签署完成后是否自动回跳
<ul><li>**false**：否, 签署完成不会自动跳转回来(默认)</li><li>**true**：是, 签署完成会自动跳转回来</li></ul>

注: 
1. 该参数<font color="red">只针对APP类型（电子签小程序跳转贵方小程序）场景</font> 的签署链接有效
2. <font color="red">手机应用APP 或 微信小程序需要监控界面的返回走后序逻辑</font>, 微信小程序的文档可以参考[这个](https://developers.weixin.qq.com/miniprogram/dev/reference/api/App.html#onShow-Object-object)
3. <font color="red">电子签小程序跳转贵方APP，不支持自动跳转，必需用户手动点击完成按钮（微信的限制）</font> 
                     * @param _autoJumpBack 签署完成后是否自动回跳
<ul><li>**false**：否, 签署完成不会自动跳转回来(默认)</li><li>**true**：是, 签署完成会自动跳转回来</li></ul>

注: 
1. 该参数<font color="red">只针对APP类型（电子签小程序跳转贵方小程序）场景</font> 的签署链接有效
2. <font color="red">手机应用APP 或 微信小程序需要监控界面的返回走后序逻辑</font>, 微信小程序的文档可以参考[这个](https://developers.weixin.qq.com/miniprogram/dev/reference/api/App.html#onShow-Object-object)
3. <font color="red">电子签小程序跳转贵方APP，不支持自动跳转，必需用户手动点击完成按钮（微信的限制）</font> 
                     * 
                     */
                    void SetAutoJumpBack(const bool& _autoJumpBack);

                    /**
                     * 判断参数 AutoJumpBack 是否已赋值
                     * @return AutoJumpBack 是否已赋值
                     * 
                     */
                    bool AutoJumpBackHasBeenSet() const;

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
                     * 获取生成的签署链接在签署页面隐藏的按钮列表，可设置如下：

<ul><li> **0** :合同签署页面更多操作按钮</li>
<li> **1** :合同签署页面更多操作的拒绝签署按钮</li>
<li> **2** :合同签署页面更多操作的转他人处理按钮</li>
<li> **3** :签署成功页的查看详情按钮</li></ul>

注:  `字段为数组, 可以传值隐藏多个按钮`
                     * @return Hides 生成的签署链接在签署页面隐藏的按钮列表，可设置如下：

<ul><li> **0** :合同签署页面更多操作按钮</li>
<li> **1** :合同签署页面更多操作的拒绝签署按钮</li>
<li> **2** :合同签署页面更多操作的转他人处理按钮</li>
<li> **3** :签署成功页的查看详情按钮</li></ul>

注:  `字段为数组, 可以传值隐藏多个按钮`
                     * 
                     */
                    std::vector<int64_t> GetHides() const;

                    /**
                     * 设置生成的签署链接在签署页面隐藏的按钮列表，可设置如下：

<ul><li> **0** :合同签署页面更多操作按钮</li>
<li> **1** :合同签署页面更多操作的拒绝签署按钮</li>
<li> **2** :合同签署页面更多操作的转他人处理按钮</li>
<li> **3** :签署成功页的查看详情按钮</li></ul>

注:  `字段为数组, 可以传值隐藏多个按钮`
                     * @param _hides 生成的签署链接在签署页面隐藏的按钮列表，可设置如下：

<ul><li> **0** :合同签署页面更多操作按钮</li>
<li> **1** :合同签署页面更多操作的拒绝签署按钮</li>
<li> **2** :合同签署页面更多操作的转他人处理按钮</li>
<li> **3** :签署成功页的查看详情按钮</li></ul>

注:  `字段为数组, 可以传值隐藏多个按钮`
                     * 
                     */
                    void SetHides(const std::vector<int64_t>& _hides);

                    /**
                     * 判断参数 Hides 是否已赋值
                     * @return Hides 是否已赋值
                     * 
                     */
                    bool HidesHasBeenSet() const;

                    /**
                     * 获取签署节点ID，用于生成动态签署人链接完成领取。

注：`生成动态签署人补充链接时必传。`
                     * @return RecipientId 签署节点ID，用于生成动态签署人链接完成领取。

注：`生成动态签署人补充链接时必传。`
                     * 
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置签署节点ID，用于生成动态签署人链接完成领取。

注：`生成动态签署人补充链接时必传。`
                     * @param _recipientId 签署节点ID，用于生成动态签署人链接完成领取。

注：`生成动态签署人补充链接时必传。`
                     * 
                     */
                    void SetRecipientId(const std::string& _recipientId);

                    /**
                     * 判断参数 RecipientId 是否已赋值
                     * @return RecipientId 是否已赋值
                     * 
                     */
                    bool RecipientIdHasBeenSet() const;

                    /**
                     * 获取合同组相关信息，指定合同组子合同和签署方的信息，用于补充动态签署人。
                     * @return FlowGroupUrlInfo 合同组相关信息，指定合同组子合同和签署方的信息，用于补充动态签署人。
                     * 
                     */
                    FlowGroupUrlInfo GetFlowGroupUrlInfo() const;

                    /**
                     * 设置合同组相关信息，指定合同组子合同和签署方的信息，用于补充动态签署人。
                     * @param _flowGroupUrlInfo 合同组相关信息，指定合同组子合同和签署方的信息，用于补充动态签署人。
                     * 
                     */
                    void SetFlowGroupUrlInfo(const FlowGroupUrlInfo& _flowGroupUrlInfo);

                    /**
                     * 判断参数 FlowGroupUrlInfo 是否已赋值
                     * @return FlowGroupUrlInfo 是否已赋值
                     * 
                     */
                    bool FlowGroupUrlInfoHasBeenSet() const;

                    /**
                     * 获取<font color="red">仅公众号 H5 跳转电子签小程序时</font>，如需签署完成的“返回应用”功能，在获取签署链接接口的 UrlUseEnv 参数需设置为 **WeChatOfficialAccounts**，小程序签署成功的结果页面中才会出现“返回应用”按钮。在用户点击“返回应用”按钮之后，会返回到公众号 H5。 

参考 [公众号 H5 跳转电子签小程序](https://qian.tencent.com/developers/company/openwxminiprogram/#23-%E5%85%AC%E4%BC%97%E5%8F%B7-h5-%E4%B8%AD%E8%B7%B3%E8%BD%AC)。
                     * @return UrlUseEnv <font color="red">仅公众号 H5 跳转电子签小程序时</font>，如需签署完成的“返回应用”功能，在获取签署链接接口的 UrlUseEnv 参数需设置为 **WeChatOfficialAccounts**，小程序签署成功的结果页面中才会出现“返回应用”按钮。在用户点击“返回应用”按钮之后，会返回到公众号 H5。 

参考 [公众号 H5 跳转电子签小程序](https://qian.tencent.com/developers/company/openwxminiprogram/#23-%E5%85%AC%E4%BC%97%E5%8F%B7-h5-%E4%B8%AD%E8%B7%B3%E8%BD%AC)。
                     * 
                     */
                    std::string GetUrlUseEnv() const;

                    /**
                     * 设置<font color="red">仅公众号 H5 跳转电子签小程序时</font>，如需签署完成的“返回应用”功能，在获取签署链接接口的 UrlUseEnv 参数需设置为 **WeChatOfficialAccounts**，小程序签署成功的结果页面中才会出现“返回应用”按钮。在用户点击“返回应用”按钮之后，会返回到公众号 H5。 

参考 [公众号 H5 跳转电子签小程序](https://qian.tencent.com/developers/company/openwxminiprogram/#23-%E5%85%AC%E4%BC%97%E5%8F%B7-h5-%E4%B8%AD%E8%B7%B3%E8%BD%AC)。
                     * @param _urlUseEnv <font color="red">仅公众号 H5 跳转电子签小程序时</font>，如需签署完成的“返回应用”功能，在获取签署链接接口的 UrlUseEnv 参数需设置为 **WeChatOfficialAccounts**，小程序签署成功的结果页面中才会出现“返回应用”按钮。在用户点击“返回应用”按钮之后，会返回到公众号 H5。 

参考 [公众号 H5 跳转电子签小程序](https://qian.tencent.com/developers/company/openwxminiprogram/#23-%E5%85%AC%E4%BC%97%E5%8F%B7-h5-%E4%B8%AD%E8%B7%B3%E8%BD%AC)。
                     * 
                     */
                    void SetUrlUseEnv(const std::string& _urlUseEnv);

                    /**
                     * 判断参数 UrlUseEnv 是否已赋值
                     * @return UrlUseEnv 是否已赋值
                     * 
                     */
                    bool UrlUseEnvHasBeenSet() const;

                    /**
                     * 获取在动态签署人场景预设了“企业名称”时，可通过该参数控制“已认证身份才可领取”，即在加入了预设的企业后才可领取。默认值：false，无须先加入企业。
                     * @return PickUpAfterJoined 在动态签署人场景预设了“企业名称”时，可通过该参数控制“已认证身份才可领取”，即在加入了预设的企业后才可领取。默认值：false，无须先加入企业。
                     * 
                     */
                    bool GetPickUpAfterJoined() const;

                    /**
                     * 设置在动态签署人场景预设了“企业名称”时，可通过该参数控制“已认证身份才可领取”，即在加入了预设的企业后才可领取。默认值：false，无须先加入企业。
                     * @param _pickUpAfterJoined 在动态签署人场景预设了“企业名称”时，可通过该参数控制“已认证身份才可领取”，即在加入了预设的企业后才可领取。默认值：false，无须先加入企业。
                     * 
                     */
                    void SetPickUpAfterJoined(const bool& _pickUpAfterJoined);

                    /**
                     * 判断参数 PickUpAfterJoined 是否已赋值
                     * @return PickUpAfterJoined 是否已赋值
                     * 
                     */
                    bool PickUpAfterJoinedHasBeenSet() const;

                private:

                    /**
                     * 执行本接口操作的员工信息, userId 必填。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 合同流程签署方的组织机构名称。如果名称中包含英文括号()，请使用中文括号（）代替。注: `获取B端动态签署人领取链接时,可指定此字段来预先设定签署人的企业,预设后只能以该企业身份去领取合同并完成签署`
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 合同流程里边签署方经办人的姓名。

`注：在动态签署人补充链接场景中，可以通过传入这个值，对补充的个人参与方信息进行限制。仅匹配传入姓名的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`

                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 合同流程里边签署方经办人手机号码， 支持国内手机号11位数字(无需加+86前缀或其他字符)。

`注：在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入手机号的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 证件类型，支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证</li>
<li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>

`注：在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入证件类型的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方，且需要和证件号参数一同传递，不能单独进行限制。`
                     */
                    std::string m_idCardType;
                    bool m_idCardTypeHasBeenSet;

                    /**
                     * 证件号码，应符合以下规则
<ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成(如存在X，请大写)。</li>
<li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li>
<li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>

`注：在动态签署人补充链接场景中，可以通过传入此值，对补充的个人参与方信息进行限制。仅匹配传入证件号的参与方才能补充合同。此参数预设信息功能暂时仅支持个人动态参与方。`
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * 要跳转的链接类型

<ul><li> **HTTP**：跳转电子签小程序的http_url, 短信通知或者H5跳转适合此类型  ，此时返回长链 (默认类型)</li>
<li>**HTTP_SHORT_URL**：跳转电子签小程序的http_url, 短信通知或者H5跳转适合此类型，此时返回短链</li>
<li>**APP**： 第三方APP或小程序跳转电子签小程序的path,  APP或者小程序跳转适合此类型</li></ul>
                     */
                    std::string m_endPoint;
                    bool m_endPointHasBeenSet;

                    /**
                     * 合同流程ID 
注: `如果准备跳转到合同流程签署的详情页面(即PathType=1时)必传,   跳转其他页面可不传`
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 合同流程组的组ID, 在合同流程组场景下，生成合同流程组的签署链接时需要赋值
                     */
                    std::string m_flowGroupId;
                    bool m_flowGroupIdHasBeenSet;

                    /**
                     * 要跳转到的页面类型 <ul><li> **0** : 腾讯电子签小程序个人首页 (默认) <a href="https://qcloudimg.tencent-cloud.cn/raw/a2667ea84ec993cc060321afe3191d65.jpg" target="_blank" >点击查看示例页面</a></li><li> **1** : 腾讯电子签小程序流程合同的详情页,即合同签署页面(注:`仅生成短链或者小程序Path时支持跳转合同详情页,即EndPoint传HTTP_SHORT_URL或者APP`)<a href="https://qcloudimg.tencent-cloud.cn/raw/446a679f09b1b7f40eb84e67face8acc.jpg" target="_blank" >点击查看示例页面</a></li><li> **2** : 腾讯电子签小程序合同列表页 <a href="https://qcloudimg.tencent-cloud.cn/raw/c7b80e44c1d68ae3270a6fc4939c7214.jpg" target="_blank" >点击查看示例页面</a> </li><li> **3** : 腾讯电子签小程序合同封面页  （注：`生成动态签署人补充链接时，必须指定为封面页`）<a href="https://qcloudimg.tencent-cloud.cn/raw/0d22cc587be4bf084877c151350c3bf7.jpg" target="_blank" >点击查看示例页面</a></li></ul>
                     */
                    uint64_t m_pathType;
                    bool m_pathTypeHasBeenSet;

                    /**
                     * 签署完成后是否自动回跳
<ul><li>**false**：否, 签署完成不会自动跳转回来(默认)</li><li>**true**：是, 签署完成会自动跳转回来</li></ul>

注: 
1. 该参数<font color="red">只针对APP类型（电子签小程序跳转贵方小程序）场景</font> 的签署链接有效
2. <font color="red">手机应用APP 或 微信小程序需要监控界面的返回走后序逻辑</font>, 微信小程序的文档可以参考[这个](https://developers.weixin.qq.com/miniprogram/dev/reference/api/App.html#onShow-Object-object)
3. <font color="red">电子签小程序跳转贵方APP，不支持自动跳转，必需用户手动点击完成按钮（微信的限制）</font> 
                     */
                    bool m_autoJumpBack;
                    bool m_autoJumpBackHasBeenSet;

                    /**
                     * 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 生成的签署链接在签署页面隐藏的按钮列表，可设置如下：

<ul><li> **0** :合同签署页面更多操作按钮</li>
<li> **1** :合同签署页面更多操作的拒绝签署按钮</li>
<li> **2** :合同签署页面更多操作的转他人处理按钮</li>
<li> **3** :签署成功页的查看详情按钮</li></ul>

注:  `字段为数组, 可以传值隐藏多个按钮`
                     */
                    std::vector<int64_t> m_hides;
                    bool m_hidesHasBeenSet;

                    /**
                     * 签署节点ID，用于生成动态签署人链接完成领取。

注：`生成动态签署人补充链接时必传。`
                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                    /**
                     * 合同组相关信息，指定合同组子合同和签署方的信息，用于补充动态签署人。
                     */
                    FlowGroupUrlInfo m_flowGroupUrlInfo;
                    bool m_flowGroupUrlInfoHasBeenSet;

                    /**
                     * <font color="red">仅公众号 H5 跳转电子签小程序时</font>，如需签署完成的“返回应用”功能，在获取签署链接接口的 UrlUseEnv 参数需设置为 **WeChatOfficialAccounts**，小程序签署成功的结果页面中才会出现“返回应用”按钮。在用户点击“返回应用”按钮之后，会返回到公众号 H5。 

参考 [公众号 H5 跳转电子签小程序](https://qian.tencent.com/developers/company/openwxminiprogram/#23-%E5%85%AC%E4%BC%97%E5%8F%B7-h5-%E4%B8%AD%E8%B7%B3%E8%BD%AC)。
                     */
                    std::string m_urlUseEnv;
                    bool m_urlUseEnvHasBeenSet;

                    /**
                     * 在动态签署人场景预设了“企业名称”时，可通过该参数控制“已认证身份才可领取”，即在加入了预设的企业后才可领取。默认值：false，无须先加入企业。
                     */
                    bool m_pickUpAfterJoined;
                    bool m_pickUpAfterJoinedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATESCHEMEURLREQUEST_H_
