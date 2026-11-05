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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_CREATEPERSONREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_CREATEPERSONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/PersonExDescriptionInfo.h>
#include <tencentcloud/iai/v20200303/model/Encryption.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
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
                     * 获取<p>待加入的人员库ID，取值为创建人员库接口中的GroupId。</p>
                     * @return GroupId <p>待加入的人员库ID，取值为创建人员库接口中的GroupId。</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>待加入的人员库ID，取值为创建人员库接口中的GroupId。</p>
                     * @param _groupId <p>待加入的人员库ID，取值为创建人员库接口中的GroupId。</p>
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>人员名称。[1，60]个字符，可修改，可重复。</p>
                     * @return PersonName <p>人员名称。[1，60]个字符，可修改，可重复。</p>
                     * 
                     */
                    std::string GetPersonName() const;

                    /**
                     * 设置<p>人员名称。[1，60]个字符，可修改，可重复。</p>
                     * @param _personName <p>人员名称。[1，60]个字符，可修改，可重复。</p>
                     * 
                     */
                    void SetPersonName(const std::string& _personName);

                    /**
                     * 判断参数 PersonName 是否已赋值
                     * @return PersonName 是否已赋值
                     * 
                     */
                    bool PersonNameHasBeenSet() const;

                    /**
                     * 获取<p>人员ID。</p><ul><li>单个腾讯云账号下不可修改，不可重复。</li><li>支持英文、数字、-%@#&amp;_，长度限制64B。</li></ul>
                     * @return PersonId <p>人员ID。</p><ul><li>单个腾讯云账号下不可修改，不可重复。</li><li>支持英文、数字、-%@#&amp;_，长度限制64B。</li></ul>
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置<p>人员ID。</p><ul><li>单个腾讯云账号下不可修改，不可重复。</li><li>支持英文、数字、-%@#&amp;_，长度限制64B。</li></ul>
                     * @param _personId <p>人员ID。</p><ul><li>单个腾讯云账号下不可修改，不可重复。</li><li>支持英文、数字、-%@#&amp;_，长度限制64B。</li></ul>
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取<p>性别。</p><ul><li>取值范围：0代表未填写，1代表男性，2代表女性。</li></ul>
                     * @return Gender <p>性别。</p><ul><li>取值范围：0代表未填写，1代表男性，2代表女性。</li></ul>
                     * 
                     */
                    int64_t GetGender() const;

                    /**
                     * 设置<p>性别。</p><ul><li>取值范围：0代表未填写，1代表男性，2代表女性。</li></ul>
                     * @param _gender <p>性别。</p><ul><li>取值范围：0代表未填写，1代表男性，2代表女性。</li></ul>
                     * 
                     */
                    void SetGender(const int64_t& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取<p>人员描述字段内容，key-value。[0，60]个字符，可修改，可重复。</p>
                     * @return PersonExDescriptionInfos <p>人员描述字段内容，key-value。[0，60]个字符，可修改，可重复。</p>
                     * 
                     */
                    std::vector<PersonExDescriptionInfo> GetPersonExDescriptionInfos() const;

                    /**
                     * 设置<p>人员描述字段内容，key-value。[0，60]个字符，可修改，可重复。</p>
                     * @param _personExDescriptionInfos <p>人员描述字段内容，key-value。[0，60]个字符，可修改，可重复。</p>
                     * 
                     */
                    void SetPersonExDescriptionInfos(const std::vector<PersonExDescriptionInfo>& _personExDescriptionInfos);

                    /**
                     * 判断参数 PersonExDescriptionInfos 是否已赋值
                     * @return PersonExDescriptionInfos 是否已赋值
                     * 
                     */
                    bool PersonExDescriptionInfosHasBeenSet() const;

                    /**
                     * 获取<p>图片 base64 数据。</p><ul><li>base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。</li><li>支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
                     * @return Image <p>图片 base64 数据。</p><ul><li>base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。</li><li>支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置<p>图片 base64 数据。</p><ul><li>base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。</li><li>支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
                     * @param _image <p>图片 base64 数据。</p><ul><li>base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。</li><li>支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取<p>图片的 Url 。</p><ul><li>对应图片 base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。</li><li>Url、Image必须提供一个，如果都提供，只使用 Url。  </li><li>图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 </li><li>非腾讯云存储的Url速度和稳定性可能受一定影响。</li><li>支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
                     * @return Url <p>图片的 Url 。</p><ul><li>对应图片 base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。</li><li>Url、Image必须提供一个，如果都提供，只使用 Url。  </li><li>图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 </li><li>非腾讯云存储的Url速度和稳定性可能受一定影响。</li><li>支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>图片的 Url 。</p><ul><li>对应图片 base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。</li><li>Url、Image必须提供一个，如果都提供，只使用 Url。  </li><li>图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 </li><li>非腾讯云存储的Url速度和稳定性可能受一定影响。</li><li>支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
                     * @param _url <p>图片的 Url 。</p><ul><li>对应图片 base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。</li><li>Url、Image必须提供一个，如果都提供，只使用 Url。  </li><li>图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 </li><li>非腾讯云存储的Url速度和稳定性可能受一定影响。</li><li>支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>此参数用于控制判断 Image 或 Url 中图片包含的人脸，是否在人员库中已有疑似的同一人。 </p><ul><li>如果判断为已有相同人在人员库中，则不会创建新的人员，返回疑似同一人的人员信息。 </li><li>如果判断没有，则完成创建人员。 </li><li>取值范围：<br>0: 不进行判断，无论是否有疑似同一人在库中均完成入库；<br>1:较低的同一人判断要求（百一误识别率）；<br>2: 一般的同一人判断要求（千一误识别率）；<br>3: 较高的同一人判断要求（万一误识别率）；<br>4: 很高的同一人判断要求（十万一误识别率）。 </li><li>默认 0。  </li><li>注： 要求越高，则疑似同一人的概率越小。不同要求对应的误识别率仅为参考值，您可以根据实际情况调整。</li></ul>
                     * @return UniquePersonControl <p>此参数用于控制判断 Image 或 Url 中图片包含的人脸，是否在人员库中已有疑似的同一人。 </p><ul><li>如果判断为已有相同人在人员库中，则不会创建新的人员，返回疑似同一人的人员信息。 </li><li>如果判断没有，则完成创建人员。 </li><li>取值范围：<br>0: 不进行判断，无论是否有疑似同一人在库中均完成入库；<br>1:较低的同一人判断要求（百一误识别率）；<br>2: 一般的同一人判断要求（千一误识别率）；<br>3: 较高的同一人判断要求（万一误识别率）；<br>4: 很高的同一人判断要求（十万一误识别率）。 </li><li>默认 0。  </li><li>注： 要求越高，则疑似同一人的概率越小。不同要求对应的误识别率仅为参考值，您可以根据实际情况调整。</li></ul>
                     * 
                     */
                    uint64_t GetUniquePersonControl() const;

                    /**
                     * 设置<p>此参数用于控制判断 Image 或 Url 中图片包含的人脸，是否在人员库中已有疑似的同一人。 </p><ul><li>如果判断为已有相同人在人员库中，则不会创建新的人员，返回疑似同一人的人员信息。 </li><li>如果判断没有，则完成创建人员。 </li><li>取值范围：<br>0: 不进行判断，无论是否有疑似同一人在库中均完成入库；<br>1:较低的同一人判断要求（百一误识别率）；<br>2: 一般的同一人判断要求（千一误识别率）；<br>3: 较高的同一人判断要求（万一误识别率）；<br>4: 很高的同一人判断要求（十万一误识别率）。 </li><li>默认 0。  </li><li>注： 要求越高，则疑似同一人的概率越小。不同要求对应的误识别率仅为参考值，您可以根据实际情况调整。</li></ul>
                     * @param _uniquePersonControl <p>此参数用于控制判断 Image 或 Url 中图片包含的人脸，是否在人员库中已有疑似的同一人。 </p><ul><li>如果判断为已有相同人在人员库中，则不会创建新的人员，返回疑似同一人的人员信息。 </li><li>如果判断没有，则完成创建人员。 </li><li>取值范围：<br>0: 不进行判断，无论是否有疑似同一人在库中均完成入库；<br>1:较低的同一人判断要求（百一误识别率）；<br>2: 一般的同一人判断要求（千一误识别率）；<br>3: 较高的同一人判断要求（万一误识别率）；<br>4: 很高的同一人判断要求（十万一误识别率）。 </li><li>默认 0。  </li><li>注： 要求越高，则疑似同一人的概率越小。不同要求对应的误识别率仅为参考值，您可以根据实际情况调整。</li></ul>
                     * 
                     */
                    void SetUniquePersonControl(const uint64_t& _uniquePersonControl);

                    /**
                     * 判断参数 UniquePersonControl 是否已赋值
                     * @return UniquePersonControl 是否已赋值
                     * 
                     */
                    bool UniquePersonControlHasBeenSet() const;

                    /**
                     * 获取<p>图片质量控制。 </p><ul><li>取值范围：<br>0: 不进行控制；<br>1:较低的质量要求，图像存在非常模糊，眼睛鼻子嘴巴遮挡至少其中一种或多种的情况；<br>2: 一般的质量要求，图像存在偏亮，偏暗，模糊或一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，至少其中三种的情况；<br>3: 较高的质量要求，图像存在偏亮，偏暗，一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，其中一到两种的情况；<br>4: 很高的质量要求，各个维度均为最好或最多在某一维度上存在轻微问题； </li><li>默认 0。 </li><li>若图片质量不满足要求，则返回结果中会提示图片质量检测不符要求。</li></ul>
                     * @return QualityControl <p>图片质量控制。 </p><ul><li>取值范围：<br>0: 不进行控制；<br>1:较低的质量要求，图像存在非常模糊，眼睛鼻子嘴巴遮挡至少其中一种或多种的情况；<br>2: 一般的质量要求，图像存在偏亮，偏暗，模糊或一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，至少其中三种的情况；<br>3: 较高的质量要求，图像存在偏亮，偏暗，一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，其中一到两种的情况；<br>4: 很高的质量要求，各个维度均为最好或最多在某一维度上存在轻微问题； </li><li>默认 0。 </li><li>若图片质量不满足要求，则返回结果中会提示图片质量检测不符要求。</li></ul>
                     * 
                     */
                    uint64_t GetQualityControl() const;

                    /**
                     * 设置<p>图片质量控制。 </p><ul><li>取值范围：<br>0: 不进行控制；<br>1:较低的质量要求，图像存在非常模糊，眼睛鼻子嘴巴遮挡至少其中一种或多种的情况；<br>2: 一般的质量要求，图像存在偏亮，偏暗，模糊或一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，至少其中三种的情况；<br>3: 较高的质量要求，图像存在偏亮，偏暗，一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，其中一到两种的情况；<br>4: 很高的质量要求，各个维度均为最好或最多在某一维度上存在轻微问题； </li><li>默认 0。 </li><li>若图片质量不满足要求，则返回结果中会提示图片质量检测不符要求。</li></ul>
                     * @param _qualityControl <p>图片质量控制。 </p><ul><li>取值范围：<br>0: 不进行控制；<br>1:较低的质量要求，图像存在非常模糊，眼睛鼻子嘴巴遮挡至少其中一种或多种的情况；<br>2: 一般的质量要求，图像存在偏亮，偏暗，模糊或一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，至少其中三种的情况；<br>3: 较高的质量要求，图像存在偏亮，偏暗，一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，其中一到两种的情况；<br>4: 很高的质量要求，各个维度均为最好或最多在某一维度上存在轻微问题； </li><li>默认 0。 </li><li>若图片质量不满足要求，则返回结果中会提示图片质量检测不符要求。</li></ul>
                     * 
                     */
                    void SetQualityControl(const uint64_t& _qualityControl);

                    /**
                     * 判断参数 QualityControl 是否已赋值
                     * @return QualityControl 是否已赋值
                     * 
                     */
                    bool QualityControlHasBeenSet() const;

                    /**
                     * 获取<p>是否开启图片旋转识别支持。</p><ul><li>取值范围：0为不开启，1为开启。</li><li>默认为0。</li><li>本参数的作用为，当图片中的人脸被旋转且图片没有exif信息时，如果不开启图片旋转识别支持则无法正确检测、识别图片中的人脸。</li><li>若您确认图片包含exif信息或者您确认输入图中人脸不会出现被旋转情况，请不要开启本参数。开启后，整体耗时将可能增加数百毫秒。</li></ul>
                     * @return NeedRotateDetection <p>是否开启图片旋转识别支持。</p><ul><li>取值范围：0为不开启，1为开启。</li><li>默认为0。</li><li>本参数的作用为，当图片中的人脸被旋转且图片没有exif信息时，如果不开启图片旋转识别支持则无法正确检测、识别图片中的人脸。</li><li>若您确认图片包含exif信息或者您确认输入图中人脸不会出现被旋转情况，请不要开启本参数。开启后，整体耗时将可能增加数百毫秒。</li></ul>
                     * 
                     */
                    uint64_t GetNeedRotateDetection() const;

                    /**
                     * 设置<p>是否开启图片旋转识别支持。</p><ul><li>取值范围：0为不开启，1为开启。</li><li>默认为0。</li><li>本参数的作用为，当图片中的人脸被旋转且图片没有exif信息时，如果不开启图片旋转识别支持则无法正确检测、识别图片中的人脸。</li><li>若您确认图片包含exif信息或者您确认输入图中人脸不会出现被旋转情况，请不要开启本参数。开启后，整体耗时将可能增加数百毫秒。</li></ul>
                     * @param _needRotateDetection <p>是否开启图片旋转识别支持。</p><ul><li>取值范围：0为不开启，1为开启。</li><li>默认为0。</li><li>本参数的作用为，当图片中的人脸被旋转且图片没有exif信息时，如果不开启图片旋转识别支持则无法正确检测、识别图片中的人脸。</li><li>若您确认图片包含exif信息或者您确认输入图中人脸不会出现被旋转情况，请不要开启本参数。开启后，整体耗时将可能增加数百毫秒。</li></ul>
                     * 
                     */
                    void SetNeedRotateDetection(const uint64_t& _needRotateDetection);

                    /**
                     * 判断参数 NeedRotateDetection 是否已赋值
                     * @return NeedRotateDetection 是否已赋值
                     * 
                     */
                    bool NeedRotateDetectionHasBeenSet() const;

                    /**
                     * 获取<p>是否需要对请求信息进行全包体加密。支持的加密算法:AES-256-CBC。有加密需求的用户可使用此参数。</p>
                     * @return Encryption <p>是否需要对请求信息进行全包体加密。支持的加密算法:AES-256-CBC。有加密需求的用户可使用此参数。</p>
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置<p>是否需要对请求信息进行全包体加密。支持的加密算法:AES-256-CBC。有加密需求的用户可使用此参数。</p>
                     * @param _encryption <p>是否需要对请求信息进行全包体加密。支持的加密算法:AES-256-CBC。有加密需求的用户可使用此参数。</p>
                     * 
                     */
                    void SetEncryption(const Encryption& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                    /**
                     * 获取<p>加密后的密文。加密前的数据格式如下:{&quot;Url&quot;:&quot;<strong>&quot;,&quot;Image&quot;:&quot;</strong>&quot;}。</p>
                     * @return EncryptedBody <p>加密后的密文。加密前的数据格式如下:{&quot;Url&quot;:&quot;<strong>&quot;,&quot;Image&quot;:&quot;</strong>&quot;}。</p>
                     * 
                     */
                    std::string GetEncryptedBody() const;

                    /**
                     * 设置<p>加密后的密文。加密前的数据格式如下:{&quot;Url&quot;:&quot;<strong>&quot;,&quot;Image&quot;:&quot;</strong>&quot;}。</p>
                     * @param _encryptedBody <p>加密后的密文。加密前的数据格式如下:{&quot;Url&quot;:&quot;<strong>&quot;,&quot;Image&quot;:&quot;</strong>&quot;}。</p>
                     * 
                     */
                    void SetEncryptedBody(const std::string& _encryptedBody);

                    /**
                     * 判断参数 EncryptedBody 是否已赋值
                     * @return EncryptedBody 是否已赋值
                     * 
                     */
                    bool EncryptedBodyHasBeenSet() const;

                private:

                    /**
                     * <p>待加入的人员库ID，取值为创建人员库接口中的GroupId。</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>人员名称。[1，60]个字符，可修改，可重复。</p>
                     */
                    std::string m_personName;
                    bool m_personNameHasBeenSet;

                    /**
                     * <p>人员ID。</p><ul><li>单个腾讯云账号下不可修改，不可重复。</li><li>支持英文、数字、-%@#&amp;_，长度限制64B。</li></ul>
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * <p>性别。</p><ul><li>取值范围：0代表未填写，1代表男性，2代表女性。</li></ul>
                     */
                    int64_t m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * <p>人员描述字段内容，key-value。[0，60]个字符，可修改，可重复。</p>
                     */
                    std::vector<PersonExDescriptionInfo> m_personExDescriptionInfos;
                    bool m_personExDescriptionInfosHasBeenSet;

                    /**
                     * <p>图片 base64 数据。</p><ul><li>base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。</li><li>支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>图片的 Url 。</p><ul><li>对应图片 base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。所有格式的图片短边像素不小于64。</li><li>Url、Image必须提供一个，如果都提供，只使用 Url。  </li><li>图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 </li><li>非腾讯云存储的Url速度和稳定性可能受一定影响。</li><li>支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>此参数用于控制判断 Image 或 Url 中图片包含的人脸，是否在人员库中已有疑似的同一人。 </p><ul><li>如果判断为已有相同人在人员库中，则不会创建新的人员，返回疑似同一人的人员信息。 </li><li>如果判断没有，则完成创建人员。 </li><li>取值范围：<br>0: 不进行判断，无论是否有疑似同一人在库中均完成入库；<br>1:较低的同一人判断要求（百一误识别率）；<br>2: 一般的同一人判断要求（千一误识别率）；<br>3: 较高的同一人判断要求（万一误识别率）；<br>4: 很高的同一人判断要求（十万一误识别率）。 </li><li>默认 0。  </li><li>注： 要求越高，则疑似同一人的概率越小。不同要求对应的误识别率仅为参考值，您可以根据实际情况调整。</li></ul>
                     */
                    uint64_t m_uniquePersonControl;
                    bool m_uniquePersonControlHasBeenSet;

                    /**
                     * <p>图片质量控制。 </p><ul><li>取值范围：<br>0: 不进行控制；<br>1:较低的质量要求，图像存在非常模糊，眼睛鼻子嘴巴遮挡至少其中一种或多种的情况；<br>2: 一般的质量要求，图像存在偏亮，偏暗，模糊或一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，至少其中三种的情况；<br>3: 较高的质量要求，图像存在偏亮，偏暗，一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，其中一到两种的情况；<br>4: 很高的质量要求，各个维度均为最好或最多在某一维度上存在轻微问题； </li><li>默认 0。 </li><li>若图片质量不满足要求，则返回结果中会提示图片质量检测不符要求。</li></ul>
                     */
                    uint64_t m_qualityControl;
                    bool m_qualityControlHasBeenSet;

                    /**
                     * <p>是否开启图片旋转识别支持。</p><ul><li>取值范围：0为不开启，1为开启。</li><li>默认为0。</li><li>本参数的作用为，当图片中的人脸被旋转且图片没有exif信息时，如果不开启图片旋转识别支持则无法正确检测、识别图片中的人脸。</li><li>若您确认图片包含exif信息或者您确认输入图中人脸不会出现被旋转情况，请不要开启本参数。开启后，整体耗时将可能增加数百毫秒。</li></ul>
                     */
                    uint64_t m_needRotateDetection;
                    bool m_needRotateDetectionHasBeenSet;

                    /**
                     * <p>是否需要对请求信息进行全包体加密。支持的加密算法:AES-256-CBC。有加密需求的用户可使用此参数。</p>
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * <p>加密后的密文。加密前的数据格式如下:{&quot;Url&quot;:&quot;<strong>&quot;,&quot;Image&quot;:&quot;</strong>&quot;}。</p>
                     */
                    std::string m_encryptedBody;
                    bool m_encryptedBodyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_CREATEPERSONREQUEST_H_
