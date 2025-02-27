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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETEIDRESULTREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETEIDRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetEidResult请求参数结构体
                */
                class GetEidResultRequest : public AbstractModel
                {
                public:
                    GetEidResultRequest();
                    ~GetEidResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取E证通流程的唯一标识，调用[GetEidToken](https://cloud.tencent.com/document/product/1007/54089)接口时生成。
                     * @return EidToken E证通流程的唯一标识，调用[GetEidToken](https://cloud.tencent.com/document/product/1007/54089)接口时生成。
                     * 
                     */
                    std::string GetEidToken() const;

                    /**
                     * 设置E证通流程的唯一标识，调用[GetEidToken](https://cloud.tencent.com/document/product/1007/54089)接口时生成。
                     * @param _eidToken E证通流程的唯一标识，调用[GetEidToken](https://cloud.tencent.com/document/product/1007/54089)接口时生成。
                     * 
                     */
                    void SetEidToken(const std::string& _eidToken);

                    /**
                     * 判断参数 EidToken 是否已赋值
                     * @return EidToken 是否已赋值
                     * 
                     */
                    bool EidTokenHasBeenSet() const;

                    /**
                     * 获取指定需要拉取的结果信息。
- 取值范围：
     0：全部。
    1：文本类。
    2：身份证信息。
    3：最佳截图信息。
    5：意愿核身朗读模式相关结果。
    6：意愿核身问答/点头模式相关结果。
- 例如 13表示拉取文本类、最佳截图信息。
- 默认值：0
                     * @return InfoType 指定需要拉取的结果信息。
- 取值范围：
     0：全部。
    1：文本类。
    2：身份证信息。
    3：最佳截图信息。
    5：意愿核身朗读模式相关结果。
    6：意愿核身问答/点头模式相关结果。
- 例如 13表示拉取文本类、最佳截图信息。
- 默认值：0
                     * 
                     */
                    std::string GetInfoType() const;

                    /**
                     * 设置指定需要拉取的结果信息。
- 取值范围：
     0：全部。
    1：文本类。
    2：身份证信息。
    3：最佳截图信息。
    5：意愿核身朗读模式相关结果。
    6：意愿核身问答/点头模式相关结果。
- 例如 13表示拉取文本类、最佳截图信息。
- 默认值：0
                     * @param _infoType 指定需要拉取的结果信息。
- 取值范围：
     0：全部。
    1：文本类。
    2：身份证信息。
    3：最佳截图信息。
    5：意愿核身朗读模式相关结果。
    6：意愿核身问答/点头模式相关结果。
- 例如 13表示拉取文本类、最佳截图信息。
- 默认值：0
                     * 
                     */
                    void SetInfoType(const std::string& _infoType);

                    /**
                     * 判断参数 InfoType 是否已赋值
                     * @return InfoType 是否已赋值
                     * 
                     */
                    bool InfoTypeHasBeenSet() const;

                    /**
                     * 获取从活体视频中截取一定张数的最佳帧。
- 默认为0，最大为3，超出3的最多只给3张。
- InfoType需要包含3。
                     * @return BestFramesCount 从活体视频中截取一定张数的最佳帧。
- 默认为0，最大为3，超出3的最多只给3张。
- InfoType需要包含3。
                     * 
                     */
                    uint64_t GetBestFramesCount() const;

                    /**
                     * 设置从活体视频中截取一定张数的最佳帧。
- 默认为0，最大为3，超出3的最多只给3张。
- InfoType需要包含3。
                     * @param _bestFramesCount 从活体视频中截取一定张数的最佳帧。
- 默认为0，最大为3，超出3的最多只给3张。
- InfoType需要包含3。
                     * 
                     */
                    void SetBestFramesCount(const uint64_t& _bestFramesCount);

                    /**
                     * 判断参数 BestFramesCount 是否已赋值
                     * @return BestFramesCount 是否已赋值
                     * 
                     */
                    bool BestFramesCountHasBeenSet() const;

                    /**
                     * 获取是否对身份证照片进行裁边。
- 默认为false。
- InfoType需要包含2。
                     * @return IsCutIdCardImage 是否对身份证照片进行裁边。
- 默认为false。
- InfoType需要包含2。
                     * 
                     */
                    bool GetIsCutIdCardImage() const;

                    /**
                     * 设置是否对身份证照片进行裁边。
- 默认为false。
- InfoType需要包含2。
                     * @param _isCutIdCardImage 是否对身份证照片进行裁边。
- 默认为false。
- InfoType需要包含2。
                     * 
                     */
                    void SetIsCutIdCardImage(const bool& _isCutIdCardImage);

                    /**
                     * 判断参数 IsCutIdCardImage 是否已赋值
                     * @return IsCutIdCardImage 是否已赋值
                     * 
                     */
                    bool IsCutIdCardImageHasBeenSet() const;

                    /**
                     * 获取是否需要从身份证中抠出头像。
- 默认为false。
- InfoType需要包含2。
                     * @return IsNeedIdCardAvatar 是否需要从身份证中抠出头像。
- 默认为false。
- InfoType需要包含2。
                     * 
                     */
                    bool GetIsNeedIdCardAvatar() const;

                    /**
                     * 设置是否需要从身份证中抠出头像。
- 默认为false。
- InfoType需要包含2。
                     * @param _isNeedIdCardAvatar 是否需要从身份证中抠出头像。
- 默认为false。
- InfoType需要包含2。
                     * 
                     */
                    void SetIsNeedIdCardAvatar(const bool& _isNeedIdCardAvatar);

                    /**
                     * 判断参数 IsNeedIdCardAvatar 是否已赋值
                     * @return IsNeedIdCardAvatar 是否已赋值
                     * 
                     */
                    bool IsNeedIdCardAvatarHasBeenSet() const;

                private:

                    /**
                     * E证通流程的唯一标识，调用[GetEidToken](https://cloud.tencent.com/document/product/1007/54089)接口时生成。
                     */
                    std::string m_eidToken;
                    bool m_eidTokenHasBeenSet;

                    /**
                     * 指定需要拉取的结果信息。
- 取值范围：
     0：全部。
    1：文本类。
    2：身份证信息。
    3：最佳截图信息。
    5：意愿核身朗读模式相关结果。
    6：意愿核身问答/点头模式相关结果。
- 例如 13表示拉取文本类、最佳截图信息。
- 默认值：0
                     */
                    std::string m_infoType;
                    bool m_infoTypeHasBeenSet;

                    /**
                     * 从活体视频中截取一定张数的最佳帧。
- 默认为0，最大为3，超出3的最多只给3张。
- InfoType需要包含3。
                     */
                    uint64_t m_bestFramesCount;
                    bool m_bestFramesCountHasBeenSet;

                    /**
                     * 是否对身份证照片进行裁边。
- 默认为false。
- InfoType需要包含2。
                     */
                    bool m_isCutIdCardImage;
                    bool m_isCutIdCardImageHasBeenSet;

                    /**
                     * 是否需要从身份证中抠出头像。
- 默认为false。
- InfoType需要包含2。
                     */
                    bool m_isNeedIdCardAvatar;
                    bool m_isNeedIdCardAvatarHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETEIDRESULTREQUEST_H_
