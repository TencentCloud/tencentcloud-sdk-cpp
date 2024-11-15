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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_SEARCHFACESREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_SEARCHFACESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * SearchFaces请求参数结构体
                */
                class SearchFacesRequest : public AbstractModel
                {
                public:
                    SearchFacesRequest();
                    ~SearchFacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取希望搜索的人员库列表，上限100个。
- 数组元素取值为创建人员库接口中的GroupId。
- 不可同时搜索不同算法模型版本（FaceModelVersion）的人员库。
                     * @return GroupIds 希望搜索的人员库列表，上限100个。
- 数组元素取值为创建人员库接口中的GroupId。
- 不可同时搜索不同算法模型版本（FaceModelVersion）的人员库。
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置希望搜索的人员库列表，上限100个。
- 数组元素取值为创建人员库接口中的GroupId。
- 不可同时搜索不同算法模型版本（FaceModelVersion）的人员库。
                     * @param _groupIds 希望搜索的人员库列表，上限100个。
- 数组元素取值为创建人员库接口中的GroupId。
- 不可同时搜索不同算法模型版本（FaceModelVersion）的人员库。
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
                     * 获取图片 base64 数据。
- base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。
- 所有格式的图片短边像素不小于64。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @return Image 图片 base64 数据。
- base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。
- 所有格式的图片短边像素不小于64。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置图片 base64 数据。
- base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。
- 所有格式的图片短边像素不小于64。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @param _image 图片 base64 数据。
- base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。
- 所有格式的图片短边像素不小于64。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
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
                     * 获取图片的 Url 。
- 对应图片 base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。
- 所有格式的图片短边像素不小于64。
- Url、Image必须提供一个，如果都提供，只使用 Url。  
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
- 非腾讯云存储的Url速度和稳定性可能受一定影响。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @return Url 图片的 Url 。
- 对应图片 base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。
- 所有格式的图片短边像素不小于64。
- Url、Image必须提供一个，如果都提供，只使用 Url。  
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
- 非腾讯云存储的Url速度和稳定性可能受一定影响。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置图片的 Url 。
- 对应图片 base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。
- 所有格式的图片短边像素不小于64。
- Url、Image必须提供一个，如果都提供，只使用 Url。  
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
- 非腾讯云存储的Url速度和稳定性可能受一定影响。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     * @param _url 图片的 Url 。
- 对应图片 base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。
- 所有格式的图片短边像素不小于64。
- Url、Image必须提供一个，如果都提供，只使用 Url。  
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
- 非腾讯云存储的Url速度和稳定性可能受一定影响。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
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
                     * 获取最多识别的人脸数目。
- 默认值为1（仅检测图片中面积最大的那张人脸），最大值为10。 
- MaxFaceNum用于，当输入的待识别图片包含多张人脸时，设定要搜索的人脸的数量。 
- 例如：输入的Image或Url中的图片包含多张人脸，设MaxFaceNum=5，则会识别图片中面积最大的5张人脸。
                     * @return MaxFaceNum 最多识别的人脸数目。
- 默认值为1（仅检测图片中面积最大的那张人脸），最大值为10。 
- MaxFaceNum用于，当输入的待识别图片包含多张人脸时，设定要搜索的人脸的数量。 
- 例如：输入的Image或Url中的图片包含多张人脸，设MaxFaceNum=5，则会识别图片中面积最大的5张人脸。
                     * 
                     */
                    uint64_t GetMaxFaceNum() const;

                    /**
                     * 设置最多识别的人脸数目。
- 默认值为1（仅检测图片中面积最大的那张人脸），最大值为10。 
- MaxFaceNum用于，当输入的待识别图片包含多张人脸时，设定要搜索的人脸的数量。 
- 例如：输入的Image或Url中的图片包含多张人脸，设MaxFaceNum=5，则会识别图片中面积最大的5张人脸。
                     * @param _maxFaceNum 最多识别的人脸数目。
- 默认值为1（仅检测图片中面积最大的那张人脸），最大值为10。 
- MaxFaceNum用于，当输入的待识别图片包含多张人脸时，设定要搜索的人脸的数量。 
- 例如：输入的Image或Url中的图片包含多张人脸，设MaxFaceNum=5，则会识别图片中面积最大的5张人脸。
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
                     * 获取人脸长和宽的最小尺寸，单位为像素。
- 默认为34。
- 低于34的人脸图片无法被识别。
- 建议设置为80。
                     * @return MinFaceSize 人脸长和宽的最小尺寸，单位为像素。
- 默认为34。
- 低于34的人脸图片无法被识别。
- 建议设置为80。
                     * 
                     */
                    uint64_t GetMinFaceSize() const;

                    /**
                     * 设置人脸长和宽的最小尺寸，单位为像素。
- 默认为34。
- 低于34的人脸图片无法被识别。
- 建议设置为80。
                     * @param _minFaceSize 人脸长和宽的最小尺寸，单位为像素。
- 默认为34。
- 低于34的人脸图片无法被识别。
- 建议设置为80。
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
                     * 获取单张被识别的人脸返回的最相似人员数量。
- 默认值为5，最大值为100。 
- 例如，设MaxFaceNum为1，MaxPersonNum为8，则返回Top8相似的人员信息。
- 值越大，需要处理的时间越长。
- 建议不要超过10。
                     * @return MaxPersonNum 单张被识别的人脸返回的最相似人员数量。
- 默认值为5，最大值为100。 
- 例如，设MaxFaceNum为1，MaxPersonNum为8，则返回Top8相似的人员信息。
- 值越大，需要处理的时间越长。
- 建议不要超过10。
                     * 
                     */
                    uint64_t GetMaxPersonNum() const;

                    /**
                     * 设置单张被识别的人脸返回的最相似人员数量。
- 默认值为5，最大值为100。 
- 例如，设MaxFaceNum为1，MaxPersonNum为8，则返回Top8相似的人员信息。
- 值越大，需要处理的时间越长。
- 建议不要超过10。
                     * @param _maxPersonNum 单张被识别的人脸返回的最相似人员数量。
- 默认值为5，最大值为100。 
- 例如，设MaxFaceNum为1，MaxPersonNum为8，则返回Top8相似的人员信息。
- 值越大，需要处理的时间越长。
- 建议不要超过10。
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
                     * 获取是否返回人员具体信息。
- 取值范围：0 为关闭，1 为开启。
- 默认为 0。
- 其他非0非1值默认为0。
                     * @return NeedPersonInfo 是否返回人员具体信息。
- 取值范围：0 为关闭，1 为开启。
- 默认为 0。
- 其他非0非1值默认为0。
                     * 
                     */
                    int64_t GetNeedPersonInfo() const;

                    /**
                     * 设置是否返回人员具体信息。
- 取值范围：0 为关闭，1 为开启。
- 默认为 0。
- 其他非0非1值默认为0。
                     * @param _needPersonInfo 是否返回人员具体信息。
- 取值范围：0 为关闭，1 为开启。
- 默认为 0。
- 其他非0非1值默认为0。
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
                     * 获取图片质量控制。 
- 取值范围：
0: 不进行控制。
1:较低的质量要求，图像存在非常模糊，眼睛鼻子嘴巴遮挡至少其中一种或多种的情况。
2: 一般的质量要求，图像存在偏亮，偏暗，模糊或一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，至少其中三种的情况。
3: 较高的质量要求，图像存在偏亮，偏暗，一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，其中一到两种的情况。
4: 很高的质量要求，各个维度均为最好或最多在某一维度上存在轻微问题。
- 默认 0。 
- 若图片质量不满足要求，则返回结果中会提示图片质量检测不符要求。
                     * @return QualityControl 图片质量控制。 
- 取值范围：
0: 不进行控制。
1:较低的质量要求，图像存在非常模糊，眼睛鼻子嘴巴遮挡至少其中一种或多种的情况。
2: 一般的质量要求，图像存在偏亮，偏暗，模糊或一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，至少其中三种的情况。
3: 较高的质量要求，图像存在偏亮，偏暗，一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，其中一到两种的情况。
4: 很高的质量要求，各个维度均为最好或最多在某一维度上存在轻微问题。
- 默认 0。 
- 若图片质量不满足要求，则返回结果中会提示图片质量检测不符要求。
                     * 
                     */
                    uint64_t GetQualityControl() const;

                    /**
                     * 设置图片质量控制。 
- 取值范围：
0: 不进行控制。
1:较低的质量要求，图像存在非常模糊，眼睛鼻子嘴巴遮挡至少其中一种或多种的情况。
2: 一般的质量要求，图像存在偏亮，偏暗，模糊或一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，至少其中三种的情况。
3: 较高的质量要求，图像存在偏亮，偏暗，一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，其中一到两种的情况。
4: 很高的质量要求，各个维度均为最好或最多在某一维度上存在轻微问题。
- 默认 0。 
- 若图片质量不满足要求，则返回结果中会提示图片质量检测不符要求。
                     * @param _qualityControl 图片质量控制。 
- 取值范围：
0: 不进行控制。
1:较低的质量要求，图像存在非常模糊，眼睛鼻子嘴巴遮挡至少其中一种或多种的情况。
2: 一般的质量要求，图像存在偏亮，偏暗，模糊或一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，至少其中三种的情况。
3: 较高的质量要求，图像存在偏亮，偏暗，一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，其中一到两种的情况。
4: 很高的质量要求，各个维度均为最好或最多在某一维度上存在轻微问题。
- 默认 0。 
- 若图片质量不满足要求，则返回结果中会提示图片质量检测不符要求。
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
                     * 获取出参Score中，只有超过FaceMatchThreshold值的结果才会返回。默认为0。
                     * @return FaceMatchThreshold 出参Score中，只有超过FaceMatchThreshold值的结果才会返回。默认为0。
                     * 
                     */
                    double GetFaceMatchThreshold() const;

                    /**
                     * 设置出参Score中，只有超过FaceMatchThreshold值的结果才会返回。默认为0。
                     * @param _faceMatchThreshold 出参Score中，只有超过FaceMatchThreshold值的结果才会返回。默认为0。
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
                     * 获取是否开启图片旋转识别支持。
- 取值范围：0为不开启，1为开启。
- 默认为0。
- 本参数的作用为，当图片中的人脸被旋转且图片没有exif信息时，如果不开启图片旋转识别支持则无法正确检测、识别图片中的人脸。
- 若您确认图片包含exif信息或者您确认输入图中人脸不会出现被旋转情况，请不要开启本参数。开启后，整体耗时将可能增加数百毫秒。
                     * @return NeedRotateDetection 是否开启图片旋转识别支持。
- 取值范围：0为不开启，1为开启。
- 默认为0。
- 本参数的作用为，当图片中的人脸被旋转且图片没有exif信息时，如果不开启图片旋转识别支持则无法正确检测、识别图片中的人脸。
- 若您确认图片包含exif信息或者您确认输入图中人脸不会出现被旋转情况，请不要开启本参数。开启后，整体耗时将可能增加数百毫秒。
                     * 
                     */
                    uint64_t GetNeedRotateDetection() const;

                    /**
                     * 设置是否开启图片旋转识别支持。
- 取值范围：0为不开启，1为开启。
- 默认为0。
- 本参数的作用为，当图片中的人脸被旋转且图片没有exif信息时，如果不开启图片旋转识别支持则无法正确检测、识别图片中的人脸。
- 若您确认图片包含exif信息或者您确认输入图中人脸不会出现被旋转情况，请不要开启本参数。开启后，整体耗时将可能增加数百毫秒。
                     * @param _needRotateDetection 是否开启图片旋转识别支持。
- 取值范围：0为不开启，1为开启。
- 默认为0。
- 本参数的作用为，当图片中的人脸被旋转且图片没有exif信息时，如果不开启图片旋转识别支持则无法正确检测、识别图片中的人脸。
- 若您确认图片包含exif信息或者您确认输入图中人脸不会出现被旋转情况，请不要开启本参数。开启后，整体耗时将可能增加数百毫秒。
                     * 
                     */
                    void SetNeedRotateDetection(const uint64_t& _needRotateDetection);

                    /**
                     * 判断参数 NeedRotateDetection 是否已赋值
                     * @return NeedRotateDetection 是否已赋值
                     * 
                     */
                    bool NeedRotateDetectionHasBeenSet() const;

                private:

                    /**
                     * 希望搜索的人员库列表，上限100个。
- 数组元素取值为创建人员库接口中的GroupId。
- 不可同时搜索不同算法模型版本（FaceModelVersion）的人员库。
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * 图片 base64 数据。
- base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。
- 所有格式的图片短边像素不小于64。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 图片的 Url 。
- 对应图片 base64 编码后大小不可超过5M。
- jpg格式长边像素不可超过4000，其他格式图片长边像素不可超2000。
- 所有格式的图片短边像素不小于64。
- Url、Image必须提供一个，如果都提供，只使用 Url。  
- 图片存储于腾讯云的Url可保障更高下载速度和稳定性，建议图片存储于腾讯云。 
- 非腾讯云存储的Url速度和稳定性可能受一定影响。
- 支持PNG、JPG、JPEG、BMP，不支持 GIF 图片。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 最多识别的人脸数目。
- 默认值为1（仅检测图片中面积最大的那张人脸），最大值为10。 
- MaxFaceNum用于，当输入的待识别图片包含多张人脸时，设定要搜索的人脸的数量。 
- 例如：输入的Image或Url中的图片包含多张人脸，设MaxFaceNum=5，则会识别图片中面积最大的5张人脸。
                     */
                    uint64_t m_maxFaceNum;
                    bool m_maxFaceNumHasBeenSet;

                    /**
                     * 人脸长和宽的最小尺寸，单位为像素。
- 默认为34。
- 低于34的人脸图片无法被识别。
- 建议设置为80。
                     */
                    uint64_t m_minFaceSize;
                    bool m_minFaceSizeHasBeenSet;

                    /**
                     * 单张被识别的人脸返回的最相似人员数量。
- 默认值为5，最大值为100。 
- 例如，设MaxFaceNum为1，MaxPersonNum为8，则返回Top8相似的人员信息。
- 值越大，需要处理的时间越长。
- 建议不要超过10。
                     */
                    uint64_t m_maxPersonNum;
                    bool m_maxPersonNumHasBeenSet;

                    /**
                     * 是否返回人员具体信息。
- 取值范围：0 为关闭，1 为开启。
- 默认为 0。
- 其他非0非1值默认为0。
                     */
                    int64_t m_needPersonInfo;
                    bool m_needPersonInfoHasBeenSet;

                    /**
                     * 图片质量控制。 
- 取值范围：
0: 不进行控制。
1:较低的质量要求，图像存在非常模糊，眼睛鼻子嘴巴遮挡至少其中一种或多种的情况。
2: 一般的质量要求，图像存在偏亮，偏暗，模糊或一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，至少其中三种的情况。
3: 较高的质量要求，图像存在偏亮，偏暗，一般模糊，眉毛遮挡，脸颊遮挡，下巴遮挡，其中一到两种的情况。
4: 很高的质量要求，各个维度均为最好或最多在某一维度上存在轻微问题。
- 默认 0。 
- 若图片质量不满足要求，则返回结果中会提示图片质量检测不符要求。
                     */
                    uint64_t m_qualityControl;
                    bool m_qualityControlHasBeenSet;

                    /**
                     * 出参Score中，只有超过FaceMatchThreshold值的结果才会返回。默认为0。
                     */
                    double m_faceMatchThreshold;
                    bool m_faceMatchThresholdHasBeenSet;

                    /**
                     * 是否开启图片旋转识别支持。
- 取值范围：0为不开启，1为开启。
- 默认为0。
- 本参数的作用为，当图片中的人脸被旋转且图片没有exif信息时，如果不开启图片旋转识别支持则无法正确检测、识别图片中的人脸。
- 若您确认图片包含exif信息或者您确认输入图中人脸不会出现被旋转情况，请不要开启本参数。开启后，整体耗时将可能增加数百毫秒。
                     */
                    uint64_t m_needRotateDetection;
                    bool m_needRotateDetectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_SEARCHFACESREQUEST_H_
