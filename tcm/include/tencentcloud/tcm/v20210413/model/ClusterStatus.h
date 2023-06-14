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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_CLUSTERSTATUS_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_CLUSTERSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * 集群状态
                */
                class ClusterStatus : public AbstractModel
                {
                public:
                    ClusterStatus();
                    ~ClusterStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关联状态，取值范围：
- LINKING: 关联中
- LINKED: 已关联
- UNLINKING: 解关联中
- LINK_FAILED: 关联失败
- UNLINK_FAILED: 解关联失败
                     * @return LinkState 关联状态，取值范围：
- LINKING: 关联中
- LINKED: 已关联
- UNLINKING: 解关联中
- LINK_FAILED: 关联失败
- UNLINK_FAILED: 解关联失败
                     * 
                     */
                    std::string GetLinkState() const;

                    /**
                     * 设置关联状态，取值范围：
- LINKING: 关联中
- LINKED: 已关联
- UNLINKING: 解关联中
- LINK_FAILED: 关联失败
- UNLINK_FAILED: 解关联失败
                     * @param _linkState 关联状态，取值范围：
- LINKING: 关联中
- LINKED: 已关联
- UNLINKING: 解关联中
- LINK_FAILED: 关联失败
- UNLINK_FAILED: 解关联失败
                     * 
                     */
                    void SetLinkState(const std::string& _linkState);

                    /**
                     * 判断参数 LinkState 是否已赋值
                     * @return LinkState 是否已赋值
                     * 
                     */
                    bool LinkStateHasBeenSet() const;

                    /**
                     * 获取关联错误详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LinkErrorDetail 关联错误详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLinkErrorDetail() const;

                    /**
                     * 设置关联错误详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _linkErrorDetail 关联错误详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLinkErrorDetail(const std::string& _linkErrorDetail);

                    /**
                     * 判断参数 LinkErrorDetail 是否已赋值
                     * @return LinkErrorDetail 是否已赋值
                     * 
                     */
                    bool LinkErrorDetailHasBeenSet() const;

                private:

                    /**
                     * 关联状态，取值范围：
- LINKING: 关联中
- LINKED: 已关联
- UNLINKING: 解关联中
- LINK_FAILED: 关联失败
- UNLINK_FAILED: 解关联失败
                     */
                    std::string m_linkState;
                    bool m_linkStateHasBeenSet;

                    /**
                     * 关联错误详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_linkErrorDetail;
                    bool m_linkErrorDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_CLUSTERSTATUS_H_
