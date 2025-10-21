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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_CREATECORPTAGRESPONSE_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_CREATECORPTAGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wav/v20210129/model/TagGroup.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * CreateCorpTag返回参数结构体
                */
                class CreateCorpTagResponse : public AbstractModel
                {
                public:
                    CreateCorpTagResponse();
                    ~CreateCorpTagResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取标签组信息
                     * @return TagGroup 标签组信息
                     * 
                     */
                    TagGroup GetTagGroup() const;

                    /**
                     * 判断参数 TagGroup 是否已赋值
                     * @return TagGroup 是否已赋值
                     * 
                     */
                    bool TagGroupHasBeenSet() const;

                private:

                    /**
                     * 标签组信息
                     */
                    TagGroup m_tagGroup;
                    bool m_tagGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_CREATECORPTAGRESPONSE_H_
