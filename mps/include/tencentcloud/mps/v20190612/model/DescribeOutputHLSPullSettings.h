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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEOUTPUTHLSPULLSETTINGS_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEOUTPUTHLSPULLSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/DescribeOutputHLSPullServerUrl.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 查询输出的HLS拉流配置信息。
                */
                class DescribeOutputHLSPullSettings : public AbstractModel
                {
                public:
                    DescribeOutputHLSPullSettings();
                    ~DescribeOutputHLSPullSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HLS拉流地址列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServerUrls HLS拉流地址列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DescribeOutputHLSPullServerUrl> GetServerUrls() const;

                    /**
                     * 设置HLS拉流地址列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serverUrls HLS拉流地址列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServerUrls(const std::vector<DescribeOutputHLSPullServerUrl>& _serverUrls);

                    /**
                     * 判断参数 ServerUrls 是否已赋值
                     * @return ServerUrls 是否已赋值
                     * 
                     */
                    bool ServerUrlsHasBeenSet() const;

                private:

                    /**
                     * HLS拉流地址列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DescribeOutputHLSPullServerUrl> m_serverUrls;
                    bool m_serverUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEOUTPUTHLSPULLSETTINGS_H_
