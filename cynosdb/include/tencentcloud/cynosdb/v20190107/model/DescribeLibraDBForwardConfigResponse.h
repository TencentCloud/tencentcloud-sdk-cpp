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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBFORWARDCONFIGRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBFORWARDCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ForwardInstanceInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeLibraDBForwardConfig返回参数结构体
                */
                class DescribeLibraDBForwardConfigResponse : public AbstractModel
                {
                public:
                    DescribeLibraDBForwardConfigResponse();
                    ~DescribeLibraDBForwardConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否开启转发
                     * @return ForwardMode 是否开启转发
                     * 
                     */
                    std::string GetForwardMode() const;

                    /**
                     * 判断参数 ForwardMode 是否已赋值
                     * @return ForwardMode 是否已赋值
                     * 
                     */
                    bool ForwardModeHasBeenSet() const;

                    /**
                     * 获取转发列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ForwardList 转发列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ForwardInstanceInfo> GetForwardList() const;

                    /**
                     * 判断参数 ForwardList 是否已赋值
                     * @return ForwardList 是否已赋值
                     * 
                     */
                    bool ForwardListHasBeenSet() const;

                private:

                    /**
                     * 是否开启转发
                     */
                    std::string m_forwardMode;
                    bool m_forwardModeHasBeenSet;

                    /**
                     * 转发列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ForwardInstanceInfo> m_forwardList;
                    bool m_forwardListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBFORWARDCONFIGRESPONSE_H_
