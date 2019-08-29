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

#ifndef TENCENTCLOUD_IAI_V20180301_MODEL_CREATEPERSONREQUEST_H_
#define TENCENTCLOUD_IAI_V20180301_MODEL_CREATEPERSONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20180301/model/PersonExDescriptionInfo.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * CreatePerson请求参数结构体
                */
                class CreatePersonRequest : public AbstractModel
                {
                public:
                    CreatePersonRequest();
                    ~CreatePersonRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待加入的人员库ID。
                     * @return GroupId 待加入的人员库ID。
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置待加入的人员库ID。
                     * @param GroupId 待加入的人员库ID。
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取人员名称。[1，60]个字符，可修改，可重复。
                     * @return PersonName 人员名称。[1，60]个字符，可修改，可重复。
                     */
                    std::string GetPersonName() const;

                    /**
                     * 设置人员名称。[1，60]个字符，可修改，可重复。
                     * @param PersonName 人员名称。[1，60]个字符，可修改，可重复。
                     */
                    void SetPersonName(const std::string& _personName);

                    /**
                     * 判断参数 PersonName 是否已赋值
                     * @return PersonName 是否已赋值
                     */
                    bool PersonNameHasBeenSet() const;

                    /**
                     * 获取人员ID，单个腾讯云账号下不可修改，不可重复。支持英文、数字、-%@#&_，长度限制64B。
                     * @return PersonId 人员ID，单个腾讯云账号下不可修改，不可重复。支持英文、数字、-%@#&_，长度限制64B。
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置人员ID，单个腾讯云账号下不可修改，不可重复。支持英文、数字、-%@#&_，长度限制64B。
                     * @param PersonId 人员ID，单个腾讯云账号下不可修改，不可重复。支持英文、数字、-%@#&_，长度限制64B。
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取0代表未填写，1代表男性，2代表女性。
                     * @return Gender 0代表未填写，1代表男性，2代表女性。
                     */
                    int64_t GetGender() const;

                    /**
                     * 设置0代表未填写，1代表男性，2代表女性。
                     * @param Gender 0代表未填写，1代表男性，2代表女性。
                     */
                    void SetGender(const int64_t& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取人员描述字段内容，key-value。[0，60]个字符，可修改，可重复。
                     * @return PersonExDescriptionInfos 人员描述字段内容，key-value。[0，60]个字符，可修改，可重复。
                     */
                    std::vector<PersonExDescriptionInfo> GetPersonExDescriptionInfos() const;

                    /**
                     * 设置人员描述字段内容，key-value。[0，60]个字符，可修改，可重复。
                     * @param PersonExDescriptionInfos 人员描述字段内容，key-value。[0，60]个字符，可修改，可重复。
                     */
                    void SetPersonExDescriptionInfos(const std::vector<PersonExDescriptionInfo>& _personExDescriptionInfos);

                    /**
                     * 判断参数 PersonExDescriptionInfos 是否已赋值
                     * @return PersonExDescriptionInfos 是否已赋值
                     */
                    bool PersonExDescriptionInfosHasBeenSet() const;

                    /**
                     * 获取图片 base64 数据，base64 编码后大小不可超过5M。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @return Image 图片 base64 数据，base64 编码后大小不可超过5M。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string GetImage() const;

                    /**
                     * 设置图片 base64 数据，base64 编码后大小不可超过5M。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @param Image 图片 base64 数据，base64 编码后大小不可超过5M。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取图片的 Url 。对应图片 base64 编码后大小不可超过5M。
Url、Image必须提供一个，如果都提供，只使用 Url。  
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @return Url 图片的 Url 。对应图片 base64 编码后大小不可超过5M。
Url、Image必须提供一个，如果都提供，只使用 Url。  
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置图片的 Url 。对应图片 base64 编码后大小不可超过5M。
Url、Image必须提供一个，如果都提供，只使用 Url。  
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @param Url 图片的 Url 。对应图片 base64 编码后大小不可超过5M。
Url、Image必须提供一个，如果都提供，只使用 Url。  
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 待加入的人员库ID。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 人员名称。[1，60]个字符，可修改，可重复。
                     */
                    std::string m_personName;
                    bool m_personNameHasBeenSet;

                    /**
                     * 人员ID，单个腾讯云账号下不可修改，不可重复。支持英文、数字、-%@#&_，长度限制64B。
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 0代表未填写，1代表男性，2代表女性。
                     */
                    int64_t m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * 人员描述字段内容，key-value。[0，60]个字符，可修改，可重复。
                     */
                    std::vector<PersonExDescriptionInfo> m_personExDescriptionInfos;
                    bool m_personExDescriptionInfosHasBeenSet;

                    /**
                     * 图片 base64 数据，base64 编码后大小不可超过5M。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 图片的 Url 。对应图片 base64 编码后大小不可超过5M。
Url、Image必须提供一个，如果都提供，只使用 Url。  
图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
非腾讯云存储的Url速度和稳定性可能受一定影响。
支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_CREATEPERSONREQUEST_H_
