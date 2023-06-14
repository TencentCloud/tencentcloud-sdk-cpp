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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_USERDEFINECONFIGUREINFOFORUPDATE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_USERDEFINECONFIGUREINFOFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/UserDefineFaceReviewTemplateInfoForUpdate.h>
#include <tencentcloud/mps/v20190612/model/UserDefineAsrTextReviewTemplateInfoForUpdate.h>
#include <tencentcloud/mps/v20190612/model/UserDefineOcrTextReviewTemplateInfoForUpdate.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 用户自定义审核任务控制参数。
                */
                class UserDefineConfigureInfoForUpdate : public AbstractModel
                {
                public:
                    UserDefineConfigureInfoForUpdate();
                    ~UserDefineConfigureInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户自定义人物审核控制参数。
                     * @return FaceReviewInfo 用户自定义人物审核控制参数。
                     * 
                     */
                    UserDefineFaceReviewTemplateInfoForUpdate GetFaceReviewInfo() const;

                    /**
                     * 设置用户自定义人物审核控制参数。
                     * @param _faceReviewInfo 用户自定义人物审核控制参数。
                     * 
                     */
                    void SetFaceReviewInfo(const UserDefineFaceReviewTemplateInfoForUpdate& _faceReviewInfo);

                    /**
                     * 判断参数 FaceReviewInfo 是否已赋值
                     * @return FaceReviewInfo 是否已赋值
                     * 
                     */
                    bool FaceReviewInfoHasBeenSet() const;

                    /**
                     * 获取用户自定义语音审核控制参数。
                     * @return AsrReviewInfo 用户自定义语音审核控制参数。
                     * 
                     */
                    UserDefineAsrTextReviewTemplateInfoForUpdate GetAsrReviewInfo() const;

                    /**
                     * 设置用户自定义语音审核控制参数。
                     * @param _asrReviewInfo 用户自定义语音审核控制参数。
                     * 
                     */
                    void SetAsrReviewInfo(const UserDefineAsrTextReviewTemplateInfoForUpdate& _asrReviewInfo);

                    /**
                     * 判断参数 AsrReviewInfo 是否已赋值
                     * @return AsrReviewInfo 是否已赋值
                     * 
                     */
                    bool AsrReviewInfoHasBeenSet() const;

                    /**
                     * 获取用户自定义文本审核控制参数。
                     * @return OcrReviewInfo 用户自定义文本审核控制参数。
                     * 
                     */
                    UserDefineOcrTextReviewTemplateInfoForUpdate GetOcrReviewInfo() const;

                    /**
                     * 设置用户自定义文本审核控制参数。
                     * @param _ocrReviewInfo 用户自定义文本审核控制参数。
                     * 
                     */
                    void SetOcrReviewInfo(const UserDefineOcrTextReviewTemplateInfoForUpdate& _ocrReviewInfo);

                    /**
                     * 判断参数 OcrReviewInfo 是否已赋值
                     * @return OcrReviewInfo 是否已赋值
                     * 
                     */
                    bool OcrReviewInfoHasBeenSet() const;

                private:

                    /**
                     * 用户自定义人物审核控制参数。
                     */
                    UserDefineFaceReviewTemplateInfoForUpdate m_faceReviewInfo;
                    bool m_faceReviewInfoHasBeenSet;

                    /**
                     * 用户自定义语音审核控制参数。
                     */
                    UserDefineAsrTextReviewTemplateInfoForUpdate m_asrReviewInfo;
                    bool m_asrReviewInfoHasBeenSet;

                    /**
                     * 用户自定义文本审核控制参数。
                     */
                    UserDefineOcrTextReviewTemplateInfoForUpdate m_ocrReviewInfo;
                    bool m_ocrReviewInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_USERDEFINECONFIGUREINFOFORUPDATE_H_
