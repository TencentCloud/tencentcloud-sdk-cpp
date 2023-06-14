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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEOUTPUTRTSPPULLSETTINGS_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEOUTPUTRTSPPULLSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/DescribeOutputRTSPPullServerUrl.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 查询输出的RTSP拉流配置信息。
                */
                class DescribeOutputRTSPPullSettings : public AbstractModel
                {
                public:
                    DescribeOutputRTSPPullSettings();
                    ~DescribeOutputRTSPPullSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取RTSP拉流地址列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServerUrls RTSP拉流地址列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DescribeOutputRTSPPullServerUrl> GetServerUrls() const;

                    /**
                     * 设置RTSP拉流地址列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serverUrls RTSP拉流地址列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServerUrls(const std::vector<DescribeOutputRTSPPullServerUrl>& _serverUrls);

                    /**
                     * 判断参数 ServerUrls 是否已赋值
                     * @return ServerUrls 是否已赋值
                     * 
                     */
                    bool ServerUrlsHasBeenSet() const;

                private:

                    /**
                     * RTSP拉流地址列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribeOutputRTSPPullServerUrl> m_serverUrls;
                    bool m_serverUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEOUTPUTRTSPPULLSETTINGS_H_
