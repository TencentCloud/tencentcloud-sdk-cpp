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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBEMEDIARESPONSE_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBEMEDIARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/MediaInfo.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * DescribeMedia返回参数结构体
                */
                class DescribeMediaResponse : public AbstractModel
                {
                public:
                    DescribeMediaResponse();
                    ~DescribeMediaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取媒资信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MediaInfo 媒资信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaInfo GetMediaInfo() const;

                    /**
                     * 判断参数 MediaInfo 是否已赋值
                     * @return MediaInfo 是否已赋值
                     * 
                     */
                    bool MediaInfoHasBeenSet() const;

                private:

                    /**
                     * 媒资信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaInfo m_mediaInfo;
                    bool m_mediaInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBEMEDIARESPONSE_H_
