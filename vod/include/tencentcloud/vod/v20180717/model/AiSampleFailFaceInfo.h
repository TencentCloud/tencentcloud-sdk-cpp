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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AISAMPLEFAILFACEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AISAMPLEFAILFACEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * AI 样本管理，处理失败的人脸信息
                */
                class AiSampleFailFaceInfo : public AbstractModel
                {
                public:
                    AiSampleFailFaceInfo();
                    ~AiSampleFailFaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对应入参 FaceContents 中错误图片下标，从 0 开始。
                     * @return Index 对应入参 FaceContents 中错误图片下标，从 0 开始。
                     * 
                     */
                    uint64_t GetIndex() const;

                    /**
                     * 设置对应入参 FaceContents 中错误图片下标，从 0 开始。
                     * @param _index 对应入参 FaceContents 中错误图片下标，从 0 开始。
                     * 
                     */
                    void SetIndex(const uint64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取错误码，取值：
<li>0：成功；</li>
<li>其他：失败。</li>
                     * @return ErrCode 错误码，取值：
<li>0：成功；</li>
<li>其他：失败。</li>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置错误码，取值：
<li>0：成功；</li>
<li>其他：失败。</li>
                     * @param _errCode 错误码，取值：
<li>0：成功；</li>
<li>其他：失败。</li>
                     * 
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取错误描述。
                     * @return Message 错误描述。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置错误描述。
                     * @param _message 错误描述。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 对应入参 FaceContents 中错误图片下标，从 0 开始。
                     */
                    uint64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 错误码，取值：
<li>0：成功；</li>
<li>其他：失败。</li>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 错误描述。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AISAMPLEFAILFACEINFO_H_
