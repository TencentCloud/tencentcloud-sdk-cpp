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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_USERDEFINECONFIGUREINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_USERDEFINECONFIGUREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/UserDefineFaceReviewTemplateInfo.h>
#include <tencentcloud/vod/v20180717/model/UserDefineAsrTextReviewTemplateInfo.h>
#include <tencentcloud/vod/v20180717/model/UserDefineOcrTextReviewTemplateInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 用户自定义音视频审核任务控制参数
                */
                class UserDefineConfigureInfo : public AbstractModel
                {
                public:
                    UserDefineConfigureInfo();
                    ~UserDefineConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户自定义人物音视频审核控制参数。
                     * @return FaceReviewInfo 用户自定义人物音视频审核控制参数。
                     * 
                     */
                    UserDefineFaceReviewTemplateInfo GetFaceReviewInfo() const;

                    /**
                     * 设置用户自定义人物音视频审核控制参数。
                     * @param _faceReviewInfo 用户自定义人物音视频审核控制参数。
                     * 
                     */
                    void SetFaceReviewInfo(const UserDefineFaceReviewTemplateInfo& _faceReviewInfo);

                    /**
                     * 判断参数 FaceReviewInfo 是否已赋值
                     * @return FaceReviewInfo 是否已赋值
                     * 
                     */
                    bool FaceReviewInfoHasBeenSet() const;

                    /**
                     * 获取用户自定义语音音视频审核控制参数。
                     * @return AsrReviewInfo 用户自定义语音音视频审核控制参数。
                     * 
                     */
                    UserDefineAsrTextReviewTemplateInfo GetAsrReviewInfo() const;

                    /**
                     * 设置用户自定义语音音视频审核控制参数。
                     * @param _asrReviewInfo 用户自定义语音音视频审核控制参数。
                     * 
                     */
                    void SetAsrReviewInfo(const UserDefineAsrTextReviewTemplateInfo& _asrReviewInfo);

                    /**
                     * 判断参数 AsrReviewInfo 是否已赋值
                     * @return AsrReviewInfo 是否已赋值
                     * 
                     */
                    bool AsrReviewInfoHasBeenSet() const;

                    /**
                     * 获取用户自定义文本音视频审核控制参数。
                     * @return OcrReviewInfo 用户自定义文本音视频审核控制参数。
                     * 
                     */
                    UserDefineOcrTextReviewTemplateInfo GetOcrReviewInfo() const;

                    /**
                     * 设置用户自定义文本音视频审核控制参数。
                     * @param _ocrReviewInfo 用户自定义文本音视频审核控制参数。
                     * 
                     */
                    void SetOcrReviewInfo(const UserDefineOcrTextReviewTemplateInfo& _ocrReviewInfo);

                    /**
                     * 判断参数 OcrReviewInfo 是否已赋值
                     * @return OcrReviewInfo 是否已赋值
                     * 
                     */
                    bool OcrReviewInfoHasBeenSet() const;

                private:

                    /**
                     * 用户自定义人物音视频审核控制参数。
                     */
                    UserDefineFaceReviewTemplateInfo m_faceReviewInfo;
                    bool m_faceReviewInfoHasBeenSet;

                    /**
                     * 用户自定义语音音视频审核控制参数。
                     */
                    UserDefineAsrTextReviewTemplateInfo m_asrReviewInfo;
                    bool m_asrReviewInfoHasBeenSet;

                    /**
                     * 用户自定义文本音视频审核控制参数。
                     */
                    UserDefineOcrTextReviewTemplateInfo m_ocrReviewInfo;
                    bool m_ocrReviewInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_USERDEFINECONFIGUREINFO_H_
