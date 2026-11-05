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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_SEARCHPERSONSREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_SEARCHPERSONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * SearchPersons请求参数结构体
                */
                class SearchPersonsRequest : public AbstractModel
                {
                public:
                    SearchPersonsRequest();
                    ~SearchPersonsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>希望搜索的人员库列表，上限100个。数组元素取值为创建人员库接口中的GroupId。</p>
                     * @return GroupIds <p>希望搜索的人员库列表，上限100个。数组元素取值为创建人员库接口中的GroupId。</p>
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置<p>希望搜索的人员库列表，上限100个。数组元素取值为创建人员库接口中的GroupId。</p>
                     * @param _groupIds <p>希望搜索的人员库列表，上限100个。数组元素取值为创建人员库接口中的GroupId。</p>
                     * 
                     */
                    void SetGroupIds(const std::vector<std::string>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>图片 base64 数据。</p><ul><li>base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。</li><li>所有格式的图片短边像素不小于64。</li><li>若图片中包含多张人脸，只选取其中人脸面积最大的人脸。</li><li>支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
                     * @return Image <p>图片 base64 数据。</p><ul><li>base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。</li><li>所有格式的图片短边像素不小于64。</li><li>若图片中包含多张人脸，只选取其中人脸面积最大的人脸。</li><li>支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置<p>图片 base64 数据。</p><ul><li>base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。</li><li>所有格式的图片短边像素不小于64。</li><li>若图片中包含多张人脸，只选取其中人脸面积最大的人脸。</li><li>支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
                     * @param _image <p>图片 base64 数据。</p><ul><li>base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。</li><li>所有格式的图片短边像素不小于64。</li><li>若图片中包含多张人脸，只选取其中人脸面积最大的人脸。</li><li>支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
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
                     * 获取<p>图片的 Url 。</p><ul><li>对应图片 base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。</li><li>所有格式的图片短边像素不小于64。</li><li>Url、Image必须提供一个，如果都提供，只使用 Url。</li><li>图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。</li><li>非腾讯云存储的Url速度和稳定性可能受一定影响。</li><li>支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
                     * @return Url <p>图片的 Url 。</p><ul><li>对应图片 base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。</li><li>所有格式的图片短边像素不小于64。</li><li>Url、Image必须提供一个，如果都提供，只使用 Url。</li><li>图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。</li><li>非腾讯云存储的Url速度和稳定性可能受一定影响。</li><li>支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>图片的 Url 。</p><ul><li>对应图片 base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。</li><li>所有格式的图片短边像素不小于64。</li><li>Url、Image必须提供一个，如果都提供，只使用 Url。</li><li>图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。</li><li>非腾讯云存储的Url速度和稳定性可能受一定影响。</li><li>支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
                     * @param _url <p>图片的 Url 。</p><ul><li>对应图片 base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。</li><li>所有格式的图片短边像素不小于64。</li><li>Url、Image必须提供一个，如果都提供，只使用 Url。</li><li>图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。</li><li>非腾讯云存储的Url速度和稳定性可能受一定影响。</li><li>支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
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
                     * 获取<p>最多识别的人脸数目。</p><ul><li>默认值为1（仅检测图片中面积最大的那张人脸），最大值为10。</li><li>MaxFaceNum用于，当输入的待识别图片包含多张人脸时，设定要搜索的人脸的数量。</li><li>例：输入的Image或Url中的图片包含多张人脸，设MaxFaceNum=5，则会识别图片中面积最大的5张人脸。</li></ul>
                     * @return MaxFaceNum <p>最多识别的人脸数目。</p><ul><li>默认值为1（仅检测图片中面积最大的那张人脸），最大值为10。</li><li>MaxFaceNum用于，当输入的待识别图片包含多张人脸时，设定要搜索的人脸的数量。</li><li>例：输入的Image或Url中的图片包含多张人脸，设MaxFaceNum=5，则会识别图片中面积最大的5张人脸。</li></ul>
                     * 
                     */
                    uint64_t GetMaxFaceNum() const;

                    /**
                     * 设置<p>最多识别的人脸数目。</p><ul><li>默认值为1（仅检测图片中面积最大的那张人脸），最大值为10。</li><li>MaxFaceNum用于，当输入的待识别图片包含多张人脸时，设定要搜索的人脸的数量。</li><li>例：输入的Image或Url中的图片包含多张人脸，设MaxFaceNum=5，则会识别图片中面积最大的5张人脸。</li></ul>
                     * @param _maxFaceNum <p>最多识别的人脸数目。</p><ul><li>默认值为1（仅检测图片中面积最大的那张人脸），最大值为10。</li><li>MaxFaceNum用于，当输入的待识别图片包含多张人脸时，设定要搜索的人脸的数量。</li><li>例：输入的Image或Url中的图片包含多张人脸，设MaxFaceNum=5，则会识别图片中面积最大的5张人脸。</li></ul>
                     * 
                     */
                    void SetMaxFaceNum(const uint64_t& _maxFaceNum);

                    /**
                     * 判断参数 MaxFaceNum 是否已赋值
                     * @return MaxFaceNum 是否已赋值
                     * 
                     */
                    bool MaxFaceNumHasBeenSet() const;

                    /**
                     * 获取<p>人脸长和宽的最小尺寸，单位为像素。</p><ul><li>默认为34。</li><li>低于34将影响搜索精度。</li><li>建议设置为80。</li></ul>
                     * @return MinFaceSize <p>人脸长和宽的最小尺寸，单位为像素。</p><ul><li>默认为34。</li><li>低于34将影响搜索精度。</li><li>建议设置为80。</li></ul>
                     * 
                     */
                    uint64_t GetMinFaceSize() const;

                    /**
                     * 设置<p>人脸长和宽的最小尺寸，单位为像素。</p><ul><li>默认为34。</li><li>低于34将影响搜索精度。</li><li>建议设置为80。</li></ul>
                     * @param _minFaceSize <p>人脸长和宽的最小尺寸，单位为像素。</p><ul><li>默认为34。</li><li>低于34将影响搜索精度。</li><li>建议设置为80。</li></ul>
                     * 
                     */
                    void SetMinFaceSize(const uint64_t& _minFaceSize);

                    /**
                     * 判断参数 MinFaceSize 是否已赋值
                     * @return MinFaceSize 是否已赋值
                     * 
                     */
                    bool MinFaceSizeHasBeenSet() const;

                    /**
                     * 获取<p>单张被识别的人脸返回的最相似人员数量。</p><ul><li>默认值为5，最大值为100。</li><li>例，设MaxFaceNum为1，MaxPersonNum为8，则返回Top8相似的人员信息。</li><li>值越大，需要处理的时间越长。建议不要超过10。</li></ul>
                     * @return MaxPersonNum <p>单张被识别的人脸返回的最相似人员数量。</p><ul><li>默认值为5，最大值为100。</li><li>例，设MaxFaceNum为1，MaxPersonNum为8，则返回Top8相似的人员信息。</li><li>值越大，需要处理的时间越长。建议不要超过10。</li></ul>
                     * 
                     */
                    uint64_t GetMaxPersonNum() const;

                    /**
                     * 设置<p>单张被识别的人脸返回的最相似人员数量。</p><ul><li>默认值为5，最大值为100。</li><li>例，设MaxFaceNum为1，MaxPersonNum为8，则返回Top8相似的人员信息。</li><li>值越大，需要处理的时间越长。建议不要超过10。</li></ul>
                     * @param _maxPersonNum <p>单张被识别的人脸返回的最相似人员数量。</p><ul><li>默认值为5，最大值为100。</li><li>例，设MaxFaceNum为1，MaxPersonNum为8，则返回Top8相似的人员信息。</li><li>值越大，需要处理的时间越长。建议不要超过10。</li></ul>
                     * 
                     */
                    void SetMaxPersonNum(const uint64_t& _maxPersonNum);

                    /**
                     * 判断参数 MaxPersonNum 是否已赋值
                     * @return MaxPersonNum 是否已赋值
                     * 
                     */
                    bool MaxPersonNumHasBeenSet() const;

                    /**
                     * 获取<p>图片质量控制。 </p><ul><li>取值范围：<br>0: 不进行控制。<br>1:较低的质量要求，图像存在非常模糊，眼睛鼻子嘴巴遮挡至少其中一种或多种的情况。<br>2: 一般的质量要求，图像存在偏亮，偏暗，模糊或一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，至少其中三种的情况。<br>3: 较高的质量要求，图像存在偏亮，偏暗，一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，其中一到两种的情况。<br>4: 很高的质量要求，各个维度均为最好或最多在某一维度上存在轻微问题。</li><li>默认 0。 </li><li>若图片质量不满足要求，则返回结果中会提示图片质量检测不符要求。</li></ul>
                     * @return QualityControl <p>图片质量控制。 </p><ul><li>取值范围：<br>0: 不进行控制。<br>1:较低的质量要求，图像存在非常模糊，眼睛鼻子嘴巴遮挡至少其中一种或多种的情况。<br>2: 一般的质量要求，图像存在偏亮，偏暗，模糊或一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，至少其中三种的情况。<br>3: 较高的质量要求，图像存在偏亮，偏暗，一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，其中一到两种的情况。<br>4: 很高的质量要求，各个维度均为最好或最多在某一维度上存在轻微问题。</li><li>默认 0。 </li><li>若图片质量不满足要求，则返回结果中会提示图片质量检测不符要求。</li></ul>
                     * 
                     */
                    uint64_t GetQualityControl() const;

                    /**
                     * 设置<p>图片质量控制。 </p><ul><li>取值范围：<br>0: 不进行控制。<br>1:较低的质量要求，图像存在非常模糊，眼睛鼻子嘴巴遮挡至少其中一种或多种的情况。<br>2: 一般的质量要求，图像存在偏亮，偏暗，模糊或一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，至少其中三种的情况。<br>3: 较高的质量要求，图像存在偏亮，偏暗，一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，其中一到两种的情况。<br>4: 很高的质量要求，各个维度均为最好或最多在某一维度上存在轻微问题。</li><li>默认 0。 </li><li>若图片质量不满足要求，则返回结果中会提示图片质量检测不符要求。</li></ul>
                     * @param _qualityControl <p>图片质量控制。 </p><ul><li>取值范围：<br>0: 不进行控制。<br>1:较低的质量要求，图像存在非常模糊，眼睛鼻子嘴巴遮挡至少其中一种或多种的情况。<br>2: 一般的质量要求，图像存在偏亮，偏暗，模糊或一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，至少其中三种的情况。<br>3: 较高的质量要求，图像存在偏亮，偏暗，一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，其中一到两种的情况。<br>4: 很高的质量要求，各个维度均为最好或最多在某一维度上存在轻微问题。</li><li>默认 0。 </li><li>若图片质量不满足要求，则返回结果中会提示图片质量检测不符要求。</li></ul>
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
                     * 获取<p>出参Score中，只有大于等于FaceMatchThreshold值的结果才会返回。</p><ul><li>默认为0。</li><li>取值范围：[0.0,100.0) 。</li></ul>
                     * @return FaceMatchThreshold <p>出参Score中，只有大于等于FaceMatchThreshold值的结果才会返回。</p><ul><li>默认为0。</li><li>取值范围：[0.0,100.0) 。</li></ul>
                     * 
                     */
                    double GetFaceMatchThreshold() const;

                    /**
                     * 设置<p>出参Score中，只有大于等于FaceMatchThreshold值的结果才会返回。</p><ul><li>默认为0。</li><li>取值范围：[0.0,100.0) 。</li></ul>
                     * @param _faceMatchThreshold <p>出参Score中，只有大于等于FaceMatchThreshold值的结果才会返回。</p><ul><li>默认为0。</li><li>取值范围：[0.0,100.0) 。</li></ul>
                     * 
                     */
                    void SetFaceMatchThreshold(const double& _faceMatchThreshold);

                    /**
                     * 判断参数 FaceMatchThreshold 是否已赋值
                     * @return FaceMatchThreshold 是否已赋值
                     * 
                     */
                    bool FaceMatchThresholdHasBeenSet() const;

                    /**
                     * 获取<p>是否返回人员具体信息。</p><ul><li>取值范围：0 为关闭，1 为开启。</li><li>默认为 0。</li><li>其他非0非1值默认为0</li></ul>
                     * @return NeedPersonInfo <p>是否返回人员具体信息。</p><ul><li>取值范围：0 为关闭，1 为开启。</li><li>默认为 0。</li><li>其他非0非1值默认为0</li></ul>
                     * 
                     */
                    int64_t GetNeedPersonInfo() const;

                    /**
                     * 设置<p>是否返回人员具体信息。</p><ul><li>取值范围：0 为关闭，1 为开启。</li><li>默认为 0。</li><li>其他非0非1值默认为0</li></ul>
                     * @param _needPersonInfo <p>是否返回人员具体信息。</p><ul><li>取值范围：0 为关闭，1 为开启。</li><li>默认为 0。</li><li>其他非0非1值默认为0</li></ul>
                     * 
                     */
                    void SetNeedPersonInfo(const int64_t& _needPersonInfo);

                    /**
                     * 判断参数 NeedPersonInfo 是否已赋值
                     * @return NeedPersonInfo 是否已赋值
                     * 
                     */
                    bool NeedPersonInfoHasBeenSet() const;

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
                     * <p>希望搜索的人员库列表，上限100个。数组元素取值为创建人员库接口中的GroupId。</p>
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * <p>图片 base64 数据。</p><ul><li>base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。</li><li>所有格式的图片短边像素不小于64。</li><li>若图片中包含多张人脸，只选取其中人脸面积最大的人脸。</li><li>支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>图片的 Url 。</p><ul><li>对应图片 base64 编码后大小不可超过5M。</li><li>jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。</li><li>所有格式的图片短边像素不小于64。</li><li>Url、Image必须提供一个，如果都提供，只使用 Url。</li><li>图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。</li><li>非腾讯云存储的Url速度和稳定性可能受一定影响。</li><li>支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。</li></ul>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>最多识别的人脸数目。</p><ul><li>默认值为1（仅检测图片中面积最大的那张人脸），最大值为10。</li><li>MaxFaceNum用于，当输入的待识别图片包含多张人脸时，设定要搜索的人脸的数量。</li><li>例：输入的Image或Url中的图片包含多张人脸，设MaxFaceNum=5，则会识别图片中面积最大的5张人脸。</li></ul>
                     */
                    uint64_t m_maxFaceNum;
                    bool m_maxFaceNumHasBeenSet;

                    /**
                     * <p>人脸长和宽的最小尺寸，单位为像素。</p><ul><li>默认为34。</li><li>低于34将影响搜索精度。</li><li>建议设置为80。</li></ul>
                     */
                    uint64_t m_minFaceSize;
                    bool m_minFaceSizeHasBeenSet;

                    /**
                     * <p>单张被识别的人脸返回的最相似人员数量。</p><ul><li>默认值为5，最大值为100。</li><li>例，设MaxFaceNum为1，MaxPersonNum为8，则返回Top8相似的人员信息。</li><li>值越大，需要处理的时间越长。建议不要超过10。</li></ul>
                     */
                    uint64_t m_maxPersonNum;
                    bool m_maxPersonNumHasBeenSet;

                    /**
                     * <p>图片质量控制。 </p><ul><li>取值范围：<br>0: 不进行控制。<br>1:较低的质量要求，图像存在非常模糊，眼睛鼻子嘴巴遮挡至少其中一种或多种的情况。<br>2: 一般的质量要求，图像存在偏亮，偏暗，模糊或一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，至少其中三种的情况。<br>3: 较高的质量要求，图像存在偏亮，偏暗，一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，其中一到两种的情况。<br>4: 很高的质量要求，各个维度均为最好或最多在某一维度上存在轻微问题。</li><li>默认 0。 </li><li>若图片质量不满足要求，则返回结果中会提示图片质量检测不符要求。</li></ul>
                     */
                    uint64_t m_qualityControl;
                    bool m_qualityControlHasBeenSet;

                    /**
                     * <p>出参Score中，只有大于等于FaceMatchThreshold值的结果才会返回。</p><ul><li>默认为0。</li><li>取值范围：[0.0,100.0) 。</li></ul>
                     */
                    double m_faceMatchThreshold;
                    bool m_faceMatchThresholdHasBeenSet;

                    /**
                     * <p>是否返回人员具体信息。</p><ul><li>取值范围：0 为关闭，1 为开启。</li><li>默认为 0。</li><li>其他非0非1值默认为0</li></ul>
                     */
                    int64_t m_needPersonInfo;
                    bool m_needPersonInfoHasBeenSet;

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

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_SEARCHPERSONSREQUEST_H_
