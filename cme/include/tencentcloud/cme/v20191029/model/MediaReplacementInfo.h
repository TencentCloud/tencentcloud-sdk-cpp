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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MEDIAREPLACEMENTINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MEDIAREPLACEMENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 媒体替换信息。
                */
                class MediaReplacementInfo : public AbstractModel
                {
                public:
                    MediaReplacementInfo();
                    ~MediaReplacementInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取素材 ID。
                     * @return MaterialId 素材 ID。
                     */
                    std::string GetMaterialId() const;

                    /**
                     * 设置素材 ID。
                     * @param MaterialId 素材 ID。
                     */
                    void SetMaterialId(const std::string& _materialId);

                    /**
                     * 判断参数 MaterialId 是否已赋值
                     * @return MaterialId 是否已赋值
                     */
                    bool MaterialIdHasBeenSet() const;

                    /**
                     * 获取替换媒体选取的开始时间，单位为秒，默认为 0。
                     * @return StartTimeOffset 替换媒体选取的开始时间，单位为秒，默认为 0。
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置替换媒体选取的开始时间，单位为秒，默认为 0。
                     * @param StartTimeOffset 替换媒体选取的开始时间，单位为秒，默认为 0。
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                private:

                    /**
                     * 素材 ID。
                     */
                    std::string m_materialId;
                    bool m_materialIdHasBeenSet;

                    /**
                     * 替换媒体选取的开始时间，单位为秒，默认为 0。
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MEDIAREPLACEMENTINFO_H_
