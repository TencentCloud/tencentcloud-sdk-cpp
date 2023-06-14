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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_WECHATMINIPROGRAMPUBLISHTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_WECHATMINIPROGRAMPUBLISHTASKINPUT_H_

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
                * 微信小程序发布任务类型
                */
                class WechatMiniProgramPublishTaskInput : public AbstractModel
                {
                public:
                    WechatMiniProgramPublishTaskInput();
                    ~WechatMiniProgramPublishTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发布视频所对应的转码模板 ID，为 0 代表原始视频。
                     * @return SourceDefinition 发布视频所对应的转码模板 ID，为 0 代表原始视频。
                     * 
                     */
                    uint64_t GetSourceDefinition() const;

                    /**
                     * 设置发布视频所对应的转码模板 ID，为 0 代表原始视频。
                     * @param _sourceDefinition 发布视频所对应的转码模板 ID，为 0 代表原始视频。
                     * 
                     */
                    void SetSourceDefinition(const uint64_t& _sourceDefinition);

                    /**
                     * 判断参数 SourceDefinition 是否已赋值
                     * @return SourceDefinition 是否已赋值
                     * 
                     */
                    bool SourceDefinitionHasBeenSet() const;

                private:

                    /**
                     * 发布视频所对应的转码模板 ID，为 0 代表原始视频。
                     */
                    uint64_t m_sourceDefinition;
                    bool m_sourceDefinitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_WECHATMINIPROGRAMPUBLISHTASKINPUT_H_
