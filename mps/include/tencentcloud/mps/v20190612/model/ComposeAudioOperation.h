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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEAUDIOOPERATION_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEAUDIOOPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 视频编辑/合成任务 音频操作。
                */
                class ComposeAudioOperation : public AbstractModel
                {
                public:
                    ComposeAudioOperation();
                    ~ComposeAudioOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音频操作类型，取值有：
<li>Volume：音量调节。</li>
                     * @return Type 音频操作类型，取值有：
<li>Volume：音量调节。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置音频操作类型，取值有：
<li>Volume：音量调节。</li>
                     * @param _type 音频操作类型，取值有：
<li>Volume：音量调节。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取 当 Type = Volume 时有效。音量调节参数，取值范围: 0~5。 
<li>0 表示静音。</li>
<li>小于1 表示降低音量。</li>
<li>1 表示不变。</li>
<li>大于1表示升高音量。</li>
                     * @return Volume  当 Type = Volume 时有效。音量调节参数，取值范围: 0~5。 
<li>0 表示静音。</li>
<li>小于1 表示降低音量。</li>
<li>1 表示不变。</li>
<li>大于1表示升高音量。</li>
                     * 
                     */
                    double GetVolume() const;

                    /**
                     * 设置 当 Type = Volume 时有效。音量调节参数，取值范围: 0~5。 
<li>0 表示静音。</li>
<li>小于1 表示降低音量。</li>
<li>1 表示不变。</li>
<li>大于1表示升高音量。</li>
                     * @param _volume  当 Type = Volume 时有效。音量调节参数，取值范围: 0~5。 
<li>0 表示静音。</li>
<li>小于1 表示降低音量。</li>
<li>1 表示不变。</li>
<li>大于1表示升高音量。</li>
                     * 
                     */
                    void SetVolume(const double& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                private:

                    /**
                     * 音频操作类型，取值有：
<li>Volume：音量调节。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     *  当 Type = Volume 时有效。音量调节参数，取值范围: 0~5。 
<li>0 表示静音。</li>
<li>小于1 表示降低音量。</li>
<li>1 表示不变。</li>
<li>大于1表示升高音量。</li>
                     */
                    double m_volume;
                    bool m_volumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEAUDIOOPERATION_H_
