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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_HANDLEMEDIACASTPROJECTRESPONSE_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_HANDLEMEDIACASTPROJECTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/MediaCastPlayInfo.h>
#include <tencentcloud/cme/v20191029/model/MediaCastSourceInfo.h>
#include <tencentcloud/cme/v20191029/model/MediaCastDestinationInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * HandleMediaCastProject返回参数结构体
                */
                class HandleMediaCastProjectResponse : public AbstractModel
                {
                public:
                    HandleMediaCastProjectResponse();
                    ~HandleMediaCastProjectResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取播放信息，Operation 为 DescribePlayInfo 时返回。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlayInfo 播放信息，Operation 为 DescribePlayInfo 时返回。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaCastPlayInfo GetPlayInfo() const;

                    /**
                     * 判断参数 PlayInfo 是否已赋值
                     * @return PlayInfo 是否已赋值
                     * 
                     */
                    bool PlayInfoHasBeenSet() const;

                    /**
                     * 获取输入源信息， Operation 为 AddSource 时返回添加成功的输入源信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceInfoSet 输入源信息， Operation 为 AddSource 时返回添加成功的输入源信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MediaCastSourceInfo> GetSourceInfoSet() const;

                    /**
                     * 判断参数 SourceInfoSet 是否已赋值
                     * @return SourceInfoSet 是否已赋值
                     * 
                     */
                    bool SourceInfoSetHasBeenSet() const;

                    /**
                     * 获取输出源信息， Operation 为 AddDestination 时返回添加成功的输出源信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DestinationInfoSet 输出源信息， Operation 为 AddDestination 时返回添加成功的输出源信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MediaCastDestinationInfo> GetDestinationInfoSet() const;

                    /**
                     * 判断参数 DestinationInfoSet 是否已赋值
                     * @return DestinationInfoSet 是否已赋值
                     * 
                     */
                    bool DestinationInfoSetHasBeenSet() const;

                private:

                    /**
                     * 播放信息，Operation 为 DescribePlayInfo 时返回。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaCastPlayInfo m_playInfo;
                    bool m_playInfoHasBeenSet;

                    /**
                     * 输入源信息， Operation 为 AddSource 时返回添加成功的输入源信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MediaCastSourceInfo> m_sourceInfoSet;
                    bool m_sourceInfoSetHasBeenSet;

                    /**
                     * 输出源信息， Operation 为 AddDestination 时返回添加成功的输出源信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MediaCastDestinationInfo> m_destinationInfoSet;
                    bool m_destinationInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_HANDLEMEDIACASTPROJECTRESPONSE_H_
