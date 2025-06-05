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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTTRACEWATERMARKTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTTRACEWATERMARKTASKOUTPUT_H_

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
                * 提取溯源水印输出信息
                */
                class ExtractTraceWatermarkTaskOutput : public AbstractModel
                {
                public:
                    ExtractTraceWatermarkTaskOutput();
                    ~ExtractTraceWatermarkTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取播放者的 ID，以十六进制表示，共6位。
                     * @return Uv 播放者的 ID，以十六进制表示，共6位。
                     * 
                     */
                    std::string GetUv() const;

                    /**
                     * 设置播放者的 ID，以十六进制表示，共6位。
                     * @param _uv 播放者的 ID，以十六进制表示，共6位。
                     * 
                     */
                    void SetUv(const std::string& _uv);

                    /**
                     * 判断参数 Uv 是否已赋值
                     * @return Uv 是否已赋值
                     * 
                     */
                    bool UvHasBeenSet() const;

                    /**
                     * 获取该字段已废弃。
                     * @return Uid 该字段已废弃。
                     * @deprecated
                     */
                    std::string GetUid() const;

                    /**
                     * 设置该字段已废弃。
                     * @param _uid 该字段已废弃。
                     * @deprecated
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * @deprecated
                     */
                    bool UidHasBeenSet() const;

                private:

                    /**
                     * 播放者的 ID，以十六进制表示，共6位。
                     */
                    std::string m_uv;
                    bool m_uvHasBeenSet;

                    /**
                     * 该字段已废弃。
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTTRACEWATERMARKTASKOUTPUT_H_
