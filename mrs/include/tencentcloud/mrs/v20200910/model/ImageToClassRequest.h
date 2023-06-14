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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_IMAGETOCLASSREQUEST_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_IMAGETOCLASSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/ImageInfo.h>
#include <tencentcloud/mrs/v20200910/model/HandleParam.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * ImageToClass请求参数结构体
                */
                class ImageToClassRequest : public AbstractModel
                {
                public:
                    ImageToClassRequest();
                    ~ImageToClassRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图片列表，允许传入多张图片，支持传入图片的base64编码，暂不支持图片url
                     * @return ImageInfoList 图片列表，允许传入多张图片，支持传入图片的base64编码，暂不支持图片url
                     * 
                     */
                    std::vector<ImageInfo> GetImageInfoList() const;

                    /**
                     * 设置图片列表，允许传入多张图片，支持传入图片的base64编码，暂不支持图片url
                     * @param _imageInfoList 图片列表，允许传入多张图片，支持传入图片的base64编码，暂不支持图片url
                     * 
                     */
                    void SetImageInfoList(const std::vector<ImageInfo>& _imageInfoList);

                    /**
                     * 判断参数 ImageInfoList 是否已赋值
                     * @return ImageInfoList 是否已赋值
                     * 
                     */
                    bool ImageInfoListHasBeenSet() const;

                    /**
                     * 获取图片处理参数
                     * @return HandleParam 图片处理参数
                     * 
                     */
                    HandleParam GetHandleParam() const;

                    /**
                     * 设置图片处理参数
                     * @param _handleParam 图片处理参数
                     * 
                     */
                    void SetHandleParam(const HandleParam& _handleParam);

                    /**
                     * 判断参数 HandleParam 是否已赋值
                     * @return HandleParam 是否已赋值
                     * 
                     */
                    bool HandleParamHasBeenSet() const;

                    /**
                     * 获取不填，默认为0
                     * @return Type 不填，默认为0
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置不填，默认为0
                     * @param _type 不填，默认为0
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取后付费的用户类型，新客户传1，老客户可不传或传 0。2022 年 12 月 15 新增了计费项，在此时间之前已经通过商务指定优惠价格的大客户，请不传这个字段或传 0，如果传 1 会导致以前获得的折扣价格失效。在 2022 年 12 月 15 日之后，通过商务指定优惠价格的大客户请传 1。
                     * @return UserType 后付费的用户类型，新客户传1，老客户可不传或传 0。2022 年 12 月 15 新增了计费项，在此时间之前已经通过商务指定优惠价格的大客户，请不传这个字段或传 0，如果传 1 会导致以前获得的折扣价格失效。在 2022 年 12 月 15 日之后，通过商务指定优惠价格的大客户请传 1。
                     * 
                     */
                    uint64_t GetUserType() const;

                    /**
                     * 设置后付费的用户类型，新客户传1，老客户可不传或传 0。2022 年 12 月 15 新增了计费项，在此时间之前已经通过商务指定优惠价格的大客户，请不传这个字段或传 0，如果传 1 会导致以前获得的折扣价格失效。在 2022 年 12 月 15 日之后，通过商务指定优惠价格的大客户请传 1。
                     * @param _userType 后付费的用户类型，新客户传1，老客户可不传或传 0。2022 年 12 月 15 新增了计费项，在此时间之前已经通过商务指定优惠价格的大客户，请不传这个字段或传 0，如果传 1 会导致以前获得的折扣价格失效。在 2022 年 12 月 15 日之后，通过商务指定优惠价格的大客户请传 1。
                     * 
                     */
                    void SetUserType(const uint64_t& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                private:

                    /**
                     * 图片列表，允许传入多张图片，支持传入图片的base64编码，暂不支持图片url
                     */
                    std::vector<ImageInfo> m_imageInfoList;
                    bool m_imageInfoListHasBeenSet;

                    /**
                     * 图片处理参数
                     */
                    HandleParam m_handleParam;
                    bool m_handleParamHasBeenSet;

                    /**
                     * 不填，默认为0
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 后付费的用户类型，新客户传1，老客户可不传或传 0。2022 年 12 月 15 新增了计费项，在此时间之前已经通过商务指定优惠价格的大客户，请不传这个字段或传 0，如果传 1 会导致以前获得的折扣价格失效。在 2022 年 12 月 15 日之后，通过商务指定优惠价格的大客户请传 1。
                     */
                    uint64_t m_userType;
                    bool m_userTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_IMAGETOCLASSREQUEST_H_
