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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_UPLOADEXTERNALANCHORINFOREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_UPLOADEXTERNALANCHORINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * UploadExternalAnchorInfo请求参数结构体
                */
                class UploadExternalAnchorInfoRequest : public AbstractModel
                {
                public:
                    UploadExternalAnchorInfoRequest();
                    ~UploadExternalAnchorInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主播Id
                     * @return AnchorId 主播Id
                     * 
                     */
                    std::string GetAnchorId() const;

                    /**
                     * 设置主播Id
                     * @param _anchorId 主播Id
                     * 
                     */
                    void SetAnchorId(const std::string& _anchorId);

                    /**
                     * 判断参数 AnchorId 是否已赋值
                     * @return AnchorId 是否已赋值
                     * 
                     */
                    bool AnchorIdHasBeenSet() const;

                    /**
                     * 获取身份证正面图片下载链接
                     * @return IdCardFront 身份证正面图片下载链接
                     * 
                     */
                    std::string GetIdCardFront() const;

                    /**
                     * 设置身份证正面图片下载链接
                     * @param _idCardFront 身份证正面图片下载链接
                     * 
                     */
                    void SetIdCardFront(const std::string& _idCardFront);

                    /**
                     * 判断参数 IdCardFront 是否已赋值
                     * @return IdCardFront 是否已赋值
                     * 
                     */
                    bool IdCardFrontHasBeenSet() const;

                    /**
                     * 获取身份证反面图片下载链接
                     * @return IdCardReverse 身份证反面图片下载链接
                     * 
                     */
                    std::string GetIdCardReverse() const;

                    /**
                     * 设置身份证反面图片下载链接
                     * @param _idCardReverse 身份证反面图片下载链接
                     * 
                     */
                    void SetIdCardReverse(const std::string& _idCardReverse);

                    /**
                     * 判断参数 IdCardReverse 是否已赋值
                     * @return IdCardReverse 是否已赋值
                     * 
                     */
                    bool IdCardReverseHasBeenSet() const;

                private:

                    /**
                     * 主播Id
                     */
                    std::string m_anchorId;
                    bool m_anchorIdHasBeenSet;

                    /**
                     * 身份证正面图片下载链接
                     */
                    std::string m_idCardFront;
                    bool m_idCardFrontHasBeenSet;

                    /**
                     * 身份证反面图片下载链接
                     */
                    std::string m_idCardReverse;
                    bool m_idCardReverseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_UPLOADEXTERNALANCHORINFOREQUEST_H_
