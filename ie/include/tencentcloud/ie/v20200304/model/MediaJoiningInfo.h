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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_MEDIAJOININGINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_MEDIAJOININGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/MediaTargetInfo.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 编辑处理/拼接任务信息
                */
                class MediaJoiningInfo : public AbstractModel
                {
                public:
                    MediaJoiningInfo();
                    ~MediaJoiningInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输出目标信息，拼接只采用FileName和Format，用于指定目标文件名和格式。
其中Format只支持mp4.
                     * @return TargetInfo 输出目标信息，拼接只采用FileName和Format，用于指定目标文件名和格式。
其中Format只支持mp4.
                     * 
                     */
                    MediaTargetInfo GetTargetInfo() const;

                    /**
                     * 设置输出目标信息，拼接只采用FileName和Format，用于指定目标文件名和格式。
其中Format只支持mp4.
                     * @param _targetInfo 输出目标信息，拼接只采用FileName和Format，用于指定目标文件名和格式。
其中Format只支持mp4.
                     * 
                     */
                    void SetTargetInfo(const MediaTargetInfo& _targetInfo);

                    /**
                     * 判断参数 TargetInfo 是否已赋值
                     * @return TargetInfo 是否已赋值
                     * 
                     */
                    bool TargetInfoHasBeenSet() const;

                    /**
                     * 获取拼接模式：
Fast：快速；
Normal：正常；
                     * @return Mode 拼接模式：
Fast：快速；
Normal：正常；
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置拼接模式：
Fast：快速；
Normal：正常；
                     * @param _mode 拼接模式：
Fast：快速；
Normal：正常；
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * 输出目标信息，拼接只采用FileName和Format，用于指定目标文件名和格式。
其中Format只支持mp4.
                     */
                    MediaTargetInfo m_targetInfo;
                    bool m_targetInfoHasBeenSet;

                    /**
                     * 拼接模式：
Fast：快速；
Normal：正常；
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_MEDIAJOININGINFO_H_
